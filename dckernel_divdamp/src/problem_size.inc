!-------------------------------------------------------------------------------
!
! Problem size and global parameters
!
!-------------------------------------------------------------------------------

  integer,  public, parameter :: ADM_NSYS     = 32
  integer,  public, parameter :: ADM_MAXFNAME = 1024
  integer,  public            :: ADM_LOG_FID  = 6

  integer,  public, parameter :: IO_FREAD = 0

  !--- Identifier of triangle element (i-axis-side or j-axis side)
  integer,  public, parameter :: TI  = 1
  integer,  public, parameter :: TJ  = 2

  !--- Identifier of line element (i-axis-side, ij-axis side, or j-axis side)
  integer,  public, parameter :: AI  = 1
  integer,  public, parameter :: AIJ = 2
  integer,  public, parameter :: AJ  = 3

  !--- Identifier of 1 variable
  integer,  public, parameter :: K0  = 1

  integer,  public, parameter :: ADM_nxyz = 3 ! dimension of the spacial vector

  !--- region
  integer,  public            :: ADM_lall      = 1     ! number of regular region per process
  integer,  public, parameter :: ADM_lall_pl   = 2     ! number of pole    region per process

  !--- horizontal grid
  integer,  public            :: ADM_gall      = 16900 ! number of horizontal grid per regular region
  integer,  public            :: ADM_gall_1d   = 130   ! number of horizontal grid (1D)
  integer,  public            :: ADM_gmin      = 2     ! start index of 1D horizontal grid
  integer,  public            :: ADM_gmax      = 129   ! end   index of 1D horizontal grid

  integer,  public            :: ADM_iall      = 130
  integer,  public            :: ADM_imin      = 2
  integer,  public            :: ADM_imax      = 129
  integer,  public            :: ADM_jall      = 130
  integer,  public            :: ADM_jmin      = 2
  integer,  public            :: ADM_jmax      = 129

  integer,  public            :: ADM_gall_pl   = 6     ! number of horizontal grid for pole region
  integer,  public, parameter :: ADM_gslf_pl   = 1     ! index for pole point
  integer,  public, parameter :: ADM_gmin_pl   = 2     ! start index of grid around the pole point
  integer,  public            :: ADM_gmax_pl   = 6     ! end   index of grid around the pole point
  integer,  public, parameter :: ADM_vlink     = 5     ! number of grid around the pole point

  !--- vertical grid
  integer,  public            :: ADM_vlayer    = 40    ! number of vertical layer
  integer,  public            :: ADM_kall      = 42    ! number of vertical grid
  integer,  public            :: ADM_kmin      = 2     ! start index of vertical grid
  integer,  public            :: ADM_kmax      = 41    ! end   index of vertical grid

  logical,  public            :: ADM_have_pl     = .true. ! this ID manages pole region?
  logical,  public            :: ADM_have_sgp(1) = .true. ! region have singlar point?

  !--- constant parameters
  real(RP), public            :: PI    = 3.14159265358979_RP !< pi
  real(RP), public            :: EPS   = 1.E-16_RP           !< small number
  real(RP), public            :: GRAV  = 9.80616_RP  ! Gravitational accerlaration of the Earth [m/s2]
  real(RP), public            :: Rdry  =   287.0_RP   ! Gas constant of air
  real(RP), public            :: CVdry =   717.5_RP   ! Specific heat of air (consant volume)
  integer,  public            :: NON_HYDRO_ALPHA = 1 ! Nonhydrostatic/hydrostatic flag

  !--- mod_grd
  integer,  public, parameter :: XDIR = 1
  integer,  public, parameter :: YDIR = 2
  integer,  public, parameter :: ZDIR = 3

  integer,  public, parameter :: GRD_LAT = 1
  integer,  public, parameter :: GRD_LON = 2

  real(RP), public            :: GRD_rscale = 6.37122E+6_RP !< radius of the planet [m]

  character(len=ADM_NSYS),     public :: GRD_grid_type = 'ON_SPHERE'
  character(len=ADM_MAXFNAME), public :: vgrid_fname   ='./vgrid40_600m_24km.dat'

  !--- mod_gmtr
  character(len=ADM_NSYS),     public :: GMTR_polygon_type = 'ON_SPHERE'

  integer,  public, parameter :: GMTR_p_nmax = 8

  integer,  public, parameter :: P_AREA  = 1
  integer,  public, parameter :: P_RAREA = 2
  integer,  public, parameter :: P_IX    = 3
  integer,  public, parameter :: P_IY    = 4
  integer,  public, parameter :: P_IZ    = 5
  integer,  public, parameter :: P_JX    = 6
  integer,  public, parameter :: P_JY    = 7
  integer,  public, parameter :: P_JZ    = 8

  integer,  public, parameter :: GMTR_t_nmax = 5

  integer,  public, parameter :: T_AREA  = 1
  integer,  public, parameter :: T_RAREA = 2
  integer,  public, parameter :: W1      = 3
  integer,  public, parameter :: W2      = 4
  integer,  public, parameter :: W3      = 5

  integer,  public, parameter :: GMTR_a_nmax    = 12
  integer,  public, parameter :: GMTR_a_nmax_pl = 18

  integer,  public, parameter :: HNX  = 1
  integer,  public, parameter :: HNY  = 2
  integer,  public, parameter :: HNZ  = 3
  integer,  public, parameter :: HTX  = 4
  integer,  public, parameter :: HTY  = 5
  integer,  public, parameter :: HTZ  = 6
  integer,  public, parameter :: TNX  = 7
  integer,  public, parameter :: TNY  = 8
  integer,  public, parameter :: TNZ  = 9
  integer,  public, parameter :: TTX  = 10
  integer,  public, parameter :: TTY  = 11
  integer,  public, parameter :: TTZ  = 12

  integer,  public, parameter :: TN2X = 13
  integer,  public, parameter :: TN2Y = 14
  integer,  public, parameter :: TN2Z = 15
  integer,  public, parameter :: TT2X = 16
  integer,  public, parameter :: TT2Y = 17
  integer,  public, parameter :: TT2Z = 18

  integer,  public :: SET_iteration = 1
  integer,  public :: SET_prc_me    = 1
  real(DP), public :: SET_dt        = 60.0_DP
