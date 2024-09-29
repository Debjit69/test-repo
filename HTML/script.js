
const mohiniAudio = new Audio('./songs/mohini.mp3');
const mymusicAudio = new Audio('./songs/mymusic.mp3');

const prevBtn = document.querySelector('.previous');
const playBtn = documnet.querySelector('.play-pause');
const nextBtn = document.querySelector('.next');
const songName = document.querySelector('.song-name');
const playPauseIcon = document.querySelector('#play-pause-icon');
const songs=[
    {ele: mohiniAudio, audioName:'mohini'},
    {ele: mymusicAudio, audioName:'mymusic'},
];

let current = 0;
let currentSong=songs[current].ele;
songName.textContent = songs[current].audioName;

playBtn.addEventListener('click',()=>{
   if(currentSong.paused){ 
    currentSong.play();
    playPauseIcon.className = 'ph ph-pause';
   }
   else{
    currentSong.pause();
    playPauseIcon.className='ph ph-play';
   }
})
