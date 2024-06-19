module Solution
    implicit none
  contains
    pure function arithmeticSequenceElements(a, d, n) result(sequence)
      integer, intent(in)       :: a, d, n
      integer                   :: i
      character(:), allocatable :: sequence
      character(len = 1024)     :: temp

      sequence = "" ! TODO

      ! Case where n = 0

      if (n .eq. 0) then
        return
      end if
        
      write(temp, '(I0)') a + i*d

      sequence = sequence // trim(temp)

      do i=1,n-1
       
        write(temp, '(I0)') a + i*d

        sequence = sequence // ', ' // trim(temp)

      end do


    end function arithmeticSequenceElements
  end module Solution