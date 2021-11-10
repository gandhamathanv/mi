 page 1:first index page--->class_no,availability,projector
            ->program to display table 
        moveto "page 2"
 page 2:second-->change from to update s1 s2
             #if 1--->if(from==0){empty}
                   go to page 3
                
             #if 2---> else if(to!=0){occupied}
                  goto page 4

             #if 3--->else database la change pannonum
                    UPDATE ->PROGRAM
                    goto page 5;
                        
page 3:
    ("class is empty")
    page 2;
page 4:
    ("occupied");
    page 2;
page 5:
    ("changed");
    page 1;
