//ass5 1
<html>
    <head>
        <title>chess board</title>
        </head>
        <body>


            <table border="1" cellspacing="0" cellspadding="0" >
                <?php
                $size=$_POST['size'];
                for( $r = 0; $r < $size; $r++ ) {
                  ?>  
                <tr>
                    <?php
                    for($C=0;$C<$size;$c++){
                        $isblack=($r+$c)%2==1;
                        $color=$isblack?"black":"white";
                    ?>
                        <td width="50" height="50" bgcolor="<?php echo $color;?>"></td>
                    <?php
                    }
                    ?>
                    </tr>
                    <?php
                    }
                    ?>
                    </table>
                    </body>
                    </html>
                