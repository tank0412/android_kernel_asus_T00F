// generated file from <device>_reg_descr.hsd by hive_crgen.pl
#ifndef _ff_bitcomp_ccbcr_h
#define _ff_bitcomp_ccbcr_h


#define  FF_BITCOMP_DFD_DATA_READ_CMD_ADDR  0x0023c
#define  FF_BITCOMP_DFD_DATA_READ_COMPLETION_ADDR  0x00238
#define  FF_BITCOMP_DFD_EN_ADDR  0x00228
#define  FF_BITCOMP_DFD_SINGLE_STEP_ADDR  0x0022c
#define  FF_BITCOMP_DFD_TRACED_DATA_ADDR  0x00230
#define  FF_BITCOMP_DFD_TRACED_DATA_VALID_ADDR  0x00234
#define  FF_BC_CTRL_ADDR  0x00220
#define  FF_BC_SEG_0_CTRL_ADDR  0x00200
#define  FF_BC_SEG_1_CTRL_ADDR  0x00204
#define  FF_BC_SEG_2_CTRL_ADDR  0x00208
#define  FF_BC_SEG_3_CTRL_ADDR  0x0020c
#define  FF_BC_SEG_4_CTRL_ADDR  0x00210
#define  FF_BC_SEG_5_CTRL_ADDR  0x00214
#define  FF_BC_SEG_6_CTRL_ADDR  0x00218
#define  FF_BC_SEG_7_CTRL_ADDR  0x0021c
#define  FF_BITCOMP_HW_ASSR_CLEAR_ADDR  0x00240
#define  FF_BITCOMP_HW_ASSR_MASK_ADDR  0x00244
#define  FF_BITCOMP_HW_ASSR_RAW_STAT_ADDR  0x0024c
#define  FF_BITCOMP_HW_ASSR_STAT_ADDR  0x00248
#define  FF_BITCOMP_PWR_FEATURE_ADDR  0x00224



#define  MEM_BANK_FF_BITCOMP_EVENODD_LUT_BASE_REG_ID    0
#define  MEM_FF_BITCOMP_EVENODD_LUT_BASE_REG_IDX  0
#define  MEM_FF_BITCOMP_EVENODD_LUT_LIMIT_REG_IDX  127
#define  MEM_FF_BITCOMP_EVENODD_LUT_BASE_ADDR   0x00000
#define  MEM_FF_BITCOMP_EVENODD_LUT_LIMIT_ADDR   0x001fc



#define FF_BITCOMP_CCBCR_PARAM \
CONSTANT  FF_BC_SEG_0_CTRL_REG_ID    : INTEGER := 0 ; \
CONSTANT  FF_BC_SEG_1_CTRL_REG_ID    : INTEGER := 1 ; \
CONSTANT  FF_BC_SEG_2_CTRL_REG_ID    : INTEGER := 2 ; \
CONSTANT  FF_BC_SEG_3_CTRL_REG_ID    : INTEGER := 3 ; \
CONSTANT  FF_BC_SEG_4_CTRL_REG_ID    : INTEGER := 4 ; \
CONSTANT  FF_BC_SEG_5_CTRL_REG_ID    : INTEGER := 5 ; \
CONSTANT  FF_BC_SEG_6_CTRL_REG_ID    : INTEGER := 6 ; \
CONSTANT  FF_BC_SEG_7_CTRL_REG_ID    : INTEGER := 7 ; \
CONSTANT  FF_BC_CTRL_REG_ID    : INTEGER := 8 ; \
CONSTANT  PWR_FEATURE_REG_ID    : INTEGER := 9 ; \
CONSTANT  DFD_EN_REG_ID    : INTEGER := 10 ; \
CONSTANT  DFD_SINGLE_STEP_REG_ID    : INTEGER := 11 ; \
CONSTANT  DFD_TRACED_DATA_REG_ID    : INTEGER := 12 ; \
CONSTANT  DFD_TRACED_DATA_VALID_REG_ID    : INTEGER := 13 ; \
CONSTANT  DFD_DATA_READ_COMPLETION_REG_ID    : INTEGER := 14 ; \
CONSTANT  DFD_DATA_READ_CMD_REG_ID    : INTEGER := 15 ; \
CONSTANT  HW_ASSR_CLEAR_REG_ID    : INTEGER := 16 ; \
CONSTANT  HW_ASSR_MASK_REG_ID    : INTEGER := 17 ; \
CONSTANT  HW_ASSR_STAT_REG_ID    : INTEGER := 18 ; \
CONSTANT  HW_ASSR_RAW_STAT_REG_ID    : INTEGER := 19 ; \
\
CONSTANT  DFD_DATA_READ_CMD_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  DFD_DATA_READ_COMPLETION_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  DFD_EN_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  DFD_SINGLE_STEP_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  DFD_TRACED_DATA_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  DFD_TRACED_DATA_VALID_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_0_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_1_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_2_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_3_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_4_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_5_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_6_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  FF_BC_SEG_7_CTRL_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  HW_ASSR_CLEAR_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  HW_ASSR_MASK_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  HW_ASSR_RAW_STAT_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  HW_ASSR_STAT_REG_WIDTH    : INTEGER := 32 ; \
CONSTANT  PWR_FEATURE_REG_WIDTH    : INTEGER := 32 ; \
\
CONSTANT  DFD_DATA_READ_CMD_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  DFD_DATA_READ_COMPLETION_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  DFD_EN_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  DFD_SINGLE_STEP_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  DFD_TRACED_DATA_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  DFD_TRACED_DATA_VALID_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_CTRL_REG_RSTVAL    : NATURAL := 65792 ; \
CONSTANT  FF_BC_SEG_0_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_1_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_2_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_3_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_4_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_5_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_6_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  FF_BC_SEG_7_CTRL_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  HW_ASSR_CLEAR_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  HW_ASSR_MASK_REG_RSTVAL    : NATURAL := 15 ; \
CONSTANT  HW_ASSR_RAW_STAT_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  HW_ASSR_STAT_REG_RSTVAL    : NATURAL := 0 ; \
CONSTANT  PWR_FEATURE_REG_RSTVAL    : NATURAL := 0 ; \
\
CONSTANT  FF_BITCOMP_NOF_REGS : NATURAL := 148 ; \
CONSTANT  FF_BITCOMP_NOF_REGS_BANK : NATURAL := 20 ; \
CONSTANT  c_num_of_regs : NATURAL := 148 ; \
CONSTANT  c_num_of_regs_bank : NATURAL :=  20; \
\
\
CONSTANT p_data_width                             : D1<INTEGER>; \
p_data_width{DFD_DATA_READ_CMD_REG_ID} := DFD_DATA_READ_CMD_REG_WIDTH   ; \
p_data_width{DFD_DATA_READ_COMPLETION_REG_ID} := DFD_DATA_READ_COMPLETION_REG_WIDTH   ; \
p_data_width{DFD_EN_REG_ID} := DFD_EN_REG_WIDTH   ; \
p_data_width{DFD_SINGLE_STEP_REG_ID} := DFD_SINGLE_STEP_REG_WIDTH   ; \
p_data_width{DFD_TRACED_DATA_REG_ID} := DFD_TRACED_DATA_REG_WIDTH   ; \
p_data_width{DFD_TRACED_DATA_VALID_REG_ID} := DFD_TRACED_DATA_VALID_REG_WIDTH   ; \
p_data_width{FF_BC_CTRL_REG_ID} := FF_BC_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_0_CTRL_REG_ID} := FF_BC_SEG_0_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_1_CTRL_REG_ID} := FF_BC_SEG_1_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_2_CTRL_REG_ID} := FF_BC_SEG_2_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_3_CTRL_REG_ID} := FF_BC_SEG_3_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_4_CTRL_REG_ID} := FF_BC_SEG_4_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_5_CTRL_REG_ID} := FF_BC_SEG_5_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_6_CTRL_REG_ID} := FF_BC_SEG_6_CTRL_REG_WIDTH   ; \
p_data_width{FF_BC_SEG_7_CTRL_REG_ID} := FF_BC_SEG_7_CTRL_REG_WIDTH   ; \
p_data_width{HW_ASSR_CLEAR_REG_ID} := HW_ASSR_CLEAR_REG_WIDTH   ; \
p_data_width{HW_ASSR_MASK_REG_ID} := HW_ASSR_MASK_REG_WIDTH   ; \
p_data_width{HW_ASSR_RAW_STAT_REG_ID} := HW_ASSR_RAW_STAT_REG_WIDTH   ; \
p_data_width{HW_ASSR_STAT_REG_ID} := HW_ASSR_STAT_REG_WIDTH   ; \
p_data_width{PWR_FEATURE_REG_ID} := PWR_FEATURE_REG_WIDTH   ; \
\
FEATURE c_reg_rst_val                             : D1<BITVECTOR>; \
c_reg_rst_val{DFD_DATA_READ_CMD_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_DATA_READ_CMD_REG_RSTVAL), p_data_width{DFD_DATA_READ_CMD_REG_ID})); \
c_reg_rst_val{DFD_DATA_READ_COMPLETION_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_DATA_READ_COMPLETION_REG_RSTVAL), p_data_width{DFD_DATA_READ_COMPLETION_REG_ID})); \
c_reg_rst_val{DFD_EN_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_EN_REG_RSTVAL), p_data_width{DFD_EN_REG_ID})); \
c_reg_rst_val{DFD_SINGLE_STEP_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_SINGLE_STEP_REG_RSTVAL), p_data_width{DFD_SINGLE_STEP_REG_ID})); \
c_reg_rst_val{DFD_TRACED_DATA_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_TRACED_DATA_REG_RSTVAL), p_data_width{DFD_TRACED_DATA_REG_ID})); \
c_reg_rst_val{DFD_TRACED_DATA_VALID_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(DFD_TRACED_DATA_VALID_REG_RSTVAL), p_data_width{DFD_TRACED_DATA_VALID_REG_ID})); \
c_reg_rst_val{FF_BC_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_CTRL_REG_RSTVAL), p_data_width{FF_BC_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_0_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_0_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_0_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_1_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_1_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_1_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_2_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_2_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_2_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_3_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_3_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_3_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_4_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_4_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_4_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_5_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_5_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_5_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_6_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_6_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_6_CTRL_REG_ID})); \
c_reg_rst_val{FF_BC_SEG_7_CTRL_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(FF_BC_SEG_7_CTRL_REG_RSTVAL), p_data_width{FF_BC_SEG_7_CTRL_REG_ID})); \
c_reg_rst_val{HW_ASSR_CLEAR_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(HW_ASSR_CLEAR_REG_RSTVAL), p_data_width{HW_ASSR_CLEAR_REG_ID})); \
c_reg_rst_val{HW_ASSR_MASK_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(HW_ASSR_MASK_REG_RSTVAL), p_data_width{HW_ASSR_MASK_REG_ID})); \
c_reg_rst_val{HW_ASSR_RAW_STAT_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(HW_ASSR_RAW_STAT_REG_RSTVAL), p_data_width{HW_ASSR_RAW_STAT_REG_ID})); \
c_reg_rst_val{HW_ASSR_STAT_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(HW_ASSR_STAT_REG_RSTVAL), p_data_width{HW_ASSR_STAT_REG_ID})); \
c_reg_rst_val{PWR_FEATURE_REG_ID} := BITVECTOR(TO_UNSIGNED(NATURAL(PWR_FEATURE_REG_RSTVAL), p_data_width{PWR_FEATURE_REG_ID})); \
\
FEATURE p_reg_wmask                             : D1<BITVECTOR>;  \
 p_reg_wmask{DFD_DATA_READ_CMD_REG_ID}  := X"00000001";\
 p_reg_wmask{DFD_DATA_READ_COMPLETION_REG_ID}  := X"00000000";\
 p_reg_wmask{DFD_EN_REG_ID}  := X"00000111";\
 p_reg_wmask{DFD_SINGLE_STEP_REG_ID}  := X"00000001";\
 p_reg_wmask{DFD_TRACED_DATA_REG_ID}  := X"00000000";\
 p_reg_wmask{DFD_TRACED_DATA_VALID_REG_ID}  := X"00000000";\
 p_reg_wmask{FF_BC_CTRL_REG_ID}  := X"000101FF";\
 p_reg_wmask{FF_BC_SEG_0_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_1_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_2_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_3_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_4_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_5_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_6_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{FF_BC_SEG_7_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_wmask{HW_ASSR_CLEAR_REG_ID}  := X"0000000F";\
 p_reg_wmask{HW_ASSR_MASK_REG_ID}  := X"0000000F";\
 p_reg_wmask{HW_ASSR_RAW_STAT_REG_ID}  := X"00000000";\
 p_reg_wmask{HW_ASSR_STAT_REG_ID}  := X"00000000";\
 p_reg_wmask{PWR_FEATURE_REG_ID}  := X"00000003";\
\
FEATURE p_reg_rmask                             : D1<BITVECTOR>;  \
 p_reg_rmask{DFD_DATA_READ_CMD_REG_ID}  := X"00000001";\
 p_reg_rmask{DFD_DATA_READ_COMPLETION_REG_ID}  := X"00000001";\
 p_reg_rmask{DFD_EN_REG_ID}  := X"00000111";\
 p_reg_rmask{DFD_SINGLE_STEP_REG_ID}  := X"00000001";\
 p_reg_rmask{DFD_TRACED_DATA_REG_ID}  := X"FFFFFFFF";\
 p_reg_rmask{DFD_TRACED_DATA_VALID_REG_ID}  := X"00000001";\
 p_reg_rmask{FF_BC_CTRL_REG_ID}  := X"000101FF";\
 p_reg_rmask{FF_BC_SEG_0_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_1_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_2_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_3_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_4_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_5_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_6_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{FF_BC_SEG_7_CTRL_REG_ID}  := X"0FFFFFFF";\
 p_reg_rmask{HW_ASSR_CLEAR_REG_ID}  := X"0000000F";\
 p_reg_rmask{HW_ASSR_MASK_REG_ID}  := X"0000000F";\
 p_reg_rmask{HW_ASSR_RAW_STAT_REG_ID}  := X"0000000F";\
 p_reg_rmask{HW_ASSR_STAT_REG_ID}  := X"0000000F";\
 p_reg_rmask{PWR_FEATURE_REG_ID}  := X"00000003";\
\
FEATURE p_reg_womask                             : D1<BITVECTOR>;  \
 p_reg_womask{DFD_DATA_READ_CMD_REG_ID}  := X"00000000";\
 p_reg_womask{DFD_DATA_READ_COMPLETION_REG_ID}  := X"00000000";\
 p_reg_womask{DFD_EN_REG_ID}  := X"00000000";\
 p_reg_womask{DFD_SINGLE_STEP_REG_ID}  := X"00000000";\
 p_reg_womask{DFD_TRACED_DATA_REG_ID}  := X"00000000";\
 p_reg_womask{DFD_TRACED_DATA_VALID_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_0_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_1_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_2_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_3_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_4_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_5_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_6_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{FF_BC_SEG_7_CTRL_REG_ID}  := X"00000000";\
 p_reg_womask{HW_ASSR_CLEAR_REG_ID}  := X"00000000";\
 p_reg_womask{HW_ASSR_MASK_REG_ID}  := X"00000000";\
 p_reg_womask{HW_ASSR_RAW_STAT_REG_ID}  := X"00000000";\
 p_reg_womask{HW_ASSR_STAT_REG_ID}  := X"00000000";\
 p_reg_womask{PWR_FEATURE_REG_ID}  := X"00000000";\
\
FEATURE p_reg_romask                             : D1<BITVECTOR>;  \
 p_reg_romask{DFD_DATA_READ_CMD_REG_ID}  := X"00000000";\
 p_reg_romask{DFD_DATA_READ_COMPLETION_REG_ID}  := X"00000001";\
 p_reg_romask{DFD_EN_REG_ID}  := X"00000000";\
 p_reg_romask{DFD_SINGLE_STEP_REG_ID}  := X"00000000";\
 p_reg_romask{DFD_TRACED_DATA_REG_ID}  := X"FFFFFFFF";\
 p_reg_romask{DFD_TRACED_DATA_VALID_REG_ID}  := X"00000001";\
 p_reg_romask{FF_BC_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_0_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_1_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_2_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_3_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_4_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_5_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_6_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{FF_BC_SEG_7_CTRL_REG_ID}  := X"00000000";\
 p_reg_romask{HW_ASSR_CLEAR_REG_ID}  := X"00000000";\
 p_reg_romask{HW_ASSR_MASK_REG_ID}  := X"00000000";\
 p_reg_romask{HW_ASSR_RAW_STAT_REG_ID}  := X"0000000F";\
 p_reg_romask{HW_ASSR_STAT_REG_ID}  := X"0000000F";\
 p_reg_romask{PWR_FEATURE_REG_ID}  := X"00000000";\
\
FEATURE p_func_en                             : D1<BOOLEAN>;  \
 p_func_en{DFD_DATA_READ_CMD_REG_ID}  := FALSE; \
 p_func_en{DFD_DATA_READ_COMPLETION_REG_ID}  := TRUE; \
 p_func_en{DFD_EN_REG_ID}  := FALSE; \
 p_func_en{DFD_SINGLE_STEP_REG_ID}  := FALSE; \
 p_func_en{DFD_TRACED_DATA_REG_ID}  := TRUE; \
 p_func_en{DFD_TRACED_DATA_VALID_REG_ID}  := TRUE; \
 p_func_en{FF_BC_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_0_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_1_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_2_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_3_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_4_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_5_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_6_CTRL_REG_ID}  := FALSE; \
 p_func_en{FF_BC_SEG_7_CTRL_REG_ID}  := FALSE; \
 p_func_en{HW_ASSR_CLEAR_REG_ID}  := FALSE; \
 p_func_en{HW_ASSR_MASK_REG_ID}  := FALSE; \
 p_func_en{HW_ASSR_RAW_STAT_REG_ID}  := TRUE; \
 p_func_en{HW_ASSR_STAT_REG_ID}  := TRUE; \
 p_func_en{PWR_FEATURE_REG_ID}  := FALSE; \


#define FF_BITCOMP_CCBCR_SIGNALS \
SIGNAL func_en                                : D1<BIT>(FF_BITCOMP_NOF_REGS_BANK); \
SIGNAL wire_reg_we                            : D1<BIT>(FF_BITCOMP_NOF_REGS_BANK); \
SIGNAL wire_reg_outputs                       : D1<BITVECTOR>(p_data_width); \
SIGNAL func_data                              : D1<BITVECTOR>(p_data_width);

#define DFD_DATA_READ_CMD_FETCH_RANGE   0
#define DFD_DATA_READ_COMPLETION_RD_COMP_RANGE   0
#define DFD_EN_DFD_EN_RANGE   0
#define DFD_EN_USE_PREV_TRACE_CHAIN_RANGE   8
#define DFD_EN_USE_PREV_TRIG_CHAIN_RANGE   4
#define DFD_SINGLE_STEP_SINGLE_STEP_RANGE   0
#define DFD_TRACED_DATA_DFD_TRACED_DATA_RANGE   31 DOWNTO 0
#define DFD_TRACED_DATA_VALID_DATA_VALID_RANGE   0
#define FF_BC_CTRL_EN_RANGE   16
#define FF_BC_CTRL_LUT_SIZE_RANGE   8 DOWNTO 0
#define FF_BC_SEG_0_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_0_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_0_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_1_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_1_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_1_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_2_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_2_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_2_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_3_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_3_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_3_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_4_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_4_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_4_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_5_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_5_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_5_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_6_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_6_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_6_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define FF_BC_SEG_7_CTRL_BASE_LEVEL_RANGE   15 DOWNTO 0
#define FF_BC_SEG_7_CTRL_START_BIN_RANGE   27 DOWNTO 20
#define FF_BC_SEG_7_CTRL_STEP_SIZE_RANGE   19 DOWNTO 16
#define HW_ASSR_CLEAR_CLEAR_RANGE   3 DOWNTO 0
#define HW_ASSR_MASK_MASK_RANGE   3 DOWNTO 0
#define HW_ASSR_RAW_STAT_STAT_RANGE   3 DOWNTO 0
#define HW_ASSR_STAT_STAT_RANGE   3 DOWNTO 0
#define PWR_FEATURE_EMPTY_EN_RANGE   0
#define PWR_FEATURE_MOL_EN_RANGE   1

#define DFD_DATA_READ_CMD_FETCH_WIDTH  1
#define DFD_DATA_READ_COMPLETION_RD_COMP_WIDTH  1
#define DFD_EN_DFD_EN_WIDTH  1
#define DFD_EN_USE_PREV_TRACE_CHAIN_WIDTH  1
#define DFD_EN_USE_PREV_TRIG_CHAIN_WIDTH  1
#define DFD_SINGLE_STEP_SINGLE_STEP_WIDTH  1
#define DFD_TRACED_DATA_DFD_TRACED_DATA_WIDTH  32
#define DFD_TRACED_DATA_VALID_DATA_VALID_WIDTH  1
#define FF_BC_CTRL_EN_WIDTH  1
#define FF_BC_CTRL_LUT_SIZE_WIDTH  9
#define FF_BC_SEG_0_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_0_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_0_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_1_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_1_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_1_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_2_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_2_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_2_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_3_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_3_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_3_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_4_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_4_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_4_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_5_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_5_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_5_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_6_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_6_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_6_CTRL_STEP_SIZE_WIDTH  4
#define FF_BC_SEG_7_CTRL_BASE_LEVEL_WIDTH  16
#define FF_BC_SEG_7_CTRL_START_BIN_WIDTH  8
#define FF_BC_SEG_7_CTRL_STEP_SIZE_WIDTH  4
#define HW_ASSR_CLEAR_CLEAR_WIDTH  4
#define HW_ASSR_MASK_MASK_WIDTH  4
#define HW_ASSR_RAW_STAT_STAT_WIDTH  4
#define HW_ASSR_STAT_STAT_WIDTH  4
#define PWR_FEATURE_EMPTY_EN_WIDTH  1
#define PWR_FEATURE_MOL_EN_WIDTH  1


#endif
