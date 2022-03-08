<?php
echo phpinfo();

//Store the output of the executed command

$output1 = exec('which perl');
print_r($output1);
//Store the last line  the executed command

$output2 = exec('which python');

//Print the return value

print_r($output2);

?>