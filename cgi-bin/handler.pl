#!/usr/local/bin/perl -w
use CGI;
print "Content-type: text/html\n\n";
$my_cgi = new CGI;
$your_name = $my_cgi->param('name');
print "Hello $your_name!!!";