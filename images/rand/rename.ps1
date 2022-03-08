$nr = 200000

Dir | %{Rename-Item $_ -NewName (‘about{0}.jpg’ -f $nr++)}