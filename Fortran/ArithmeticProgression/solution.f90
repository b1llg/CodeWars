module Solution
    implicit none
  contains
    pure function arithmeticSequenceElements(a, d, n) result(sequence)
      integer, intent(in)       :: a, d, n
      integer                   :: i
      character(:), allocatable :: sequence

      sequence = "" ! TODO

      do i=0,n-1
        write(sequence,'(A)') a + i*d
      end do


    end function arithmeticSequenceElements
  end module Solution