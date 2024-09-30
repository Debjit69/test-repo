
const mohiniAudio = new Audio('./songs/mohini.mp3');
const mymusicAudio = new Audio('./songs/mymusic.mp3');

const prevBtn = document.querySelector('.previous');
const playBtn = document.querySelector('.play-pause');
const nextBtn = document.querySelector('.next');
const songName = document.querySelector('.song-name');
const playPauseIcon = document.querySelector('#play-pause-icon');

const songs=[
    {ele: mohiniAudio, audioName:'mohini'},
    {ele: mymusicAudio, audioName:'mymusic'},
];

for(const song of songs){
    song.ele.addEventListener('ended',()=>{
      updateSong('next');
      playPauseSong();  
    })
}

let current = 0;
let currentSong=songs[current].ele;
songName.textContent = songs[current].audioName;

playBtn.addEventListener('click',()=>{
   playPauseSong();
})

nextBtn.addEventListener('click',()=>{
  updateSong('next');
  playPauseSong();
});

prevBtn.addEventListener('click',()=>{
    updateSong('prev');
    playPauseSong();
  });

const updateSong = (action)=>{
    currentSong.pause();
    currentSong.currentTime=0;
    if(action === 'next'){
        current++;
        if(current > songs.length -1) current = 0;
      
    }
    if(action === 'prev'){
        current--;
        if(current < 0) current = songs.length -1;
        
    }
    currentSong = songs[current].ele;
    songName.textContent = songs[current].audioName;
}

const playPauseSong = ()=>{
    if(currentSong.paused){ 
        currentSong.play();
        playPauseIcon.className = 'ph ph-pause';
       }
       else{
        currentSong.pause();
        playPauseIcon.className='ph ph-play';
       }  
}
