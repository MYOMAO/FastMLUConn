set i=1
set f=20



while ( $i < $f )

             
		condor_submit condor.sh

        @ i = $i + 1


end

