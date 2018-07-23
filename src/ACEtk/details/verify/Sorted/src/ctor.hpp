template< typename Arg = std::initializer_list< utility::value_t< Range > >,
          utility::Require< false, IsSorted, Arg > = true,
          utility::Require< true, utility::is_range, Arg > = true,
          utility::Require< true, std::is_constructible, Range, Arg > = true
        >
Sorted( Arg&& arg ) :
  Range( check( std::forward< Arg >( arg ) ) )
{ }

template< typename... Args, 
          utility::Require< true, std::is_constructible, Range, Args... > = true
        >
Sorted( Args&&... args ):
  Range( std::forward< Args >( args )... )
{ 
  check( *this );
}

template< typename Arg,
          utility::Require< true, IsSorted, Arg > = true,
          utility::Require< true, std::is_constructible, Range, Arg > = true 
        >
Sorted( Arg&& arg ) :
  Range( std::forward< Arg >( arg ) )
{ }

