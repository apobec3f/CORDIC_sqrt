// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _cordic_base_HH_
#define _cordic_base_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct cordic_base : public sc_module {
    // Port declarations 8
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<48> > inputData_in_V_read;
    sc_out< sc_lv<25> > ap_return;


    // Module declarations
    cordic_base(sc_module_name name);
    SC_HAS_PROCESS(cordic_base);

    ~cordic_base();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<6> > bit_fu_290_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<48> > p_Result_s_fu_307_p4;
    sc_signal< sc_lv<1> > exitcond_i3_fu_284_p2;
    sc_signal< sc_lv<6> > i_fu_327_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<50> > p_050_6_i_fu_427_p3;
    sc_signal< sc_lv<1> > exitcond_i_fu_321_p2;
    sc_signal< sc_lv<50> > p_Result_12_fu_482_p4;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > tmp_11_fu_452_p3;
    sc_signal< sc_lv<6> > j_fu_492_p2;
    sc_signal< sc_lv<50> > p_Result_13_fu_542_p5;
    sc_signal< sc_lv<50> > p_Result_13_reg_791;
    sc_signal< sc_lv<6> > j_1_fu_598_p2;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > tmp_19_fu_558_p3;
    sc_signal< sc_lv<50> > rem_next_V_fu_609_p2;
    sc_signal< sc_lv<50> > rem_next_V_reg_805;
    sc_signal< sc_lv<25> > p_Result_15_fu_648_p4;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > tmp_22_fu_618_p3;
    sc_signal< sc_lv<6> > j_2_fu_658_p2;
    sc_signal< sc_lv<25> > sqrt_int_V_fu_677_p4;
    sc_signal< sc_lv<50> > p_0289_2_i_fu_687_p3;
    sc_signal< sc_lv<6> > i_2_fu_693_p2;
    sc_signal< sc_lv<5> > bit_1_fu_709_p2;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<25> > p_Result_4_fu_727_p4;
    sc_signal< sc_lv<1> > exitcond_i6_fu_703_p2;
    sc_signal< sc_lv<48> > x_in_V_reg_120;
    sc_signal< sc_lv<6> > bvh_d_index_reg_132;
    sc_signal< sc_lv<50> > p_Val2_s_reg_143;
    sc_signal< sc_lv<6> > i1_0_i_reg_155;
    sc_signal< sc_lv<25> > data_x_outp_V_reg_166;
    sc_signal< sc_lv<50> > p_0289_0_i_reg_178;
    sc_signal< sc_lv<6> > i2_0_i_reg_190;
    sc_signal< sc_lv<50> > p_Val2_3_reg_202;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<1> > tmp_10_fu_440_p3;
    sc_signal< sc_lv<6> > bvh_d_index_4_reg_212;
    sc_signal< sc_lv<6> > bvh_d_index_9_reg_223;
    sc_signal< sc_lv<25> > p_Val2_6_reg_234;
    sc_signal< sc_lv<6> > bvh_d_index_11_reg_244;
    sc_signal< sc_lv<25> > p_Val2_7_reg_255;
    sc_signal< sc_lv<5> > bvh_d_index_6_reg_266;
    sc_signal< sc_lv<50> > p_Val2_4_fu_110;
    sc_signal< sc_lv<50> > p_Result_14_fu_588_p4;
    sc_signal< sc_lv<32> > index_assign_11_cast_fu_280_p1;
    sc_signal< sc_lv<1> > tmp_2_fu_296_p3;
    sc_signal< sc_lv<64> > p_Repl2_4_fu_303_p1;
    sc_signal< sc_lv<6> > bvh_d_index_1_fu_355_p2;
    sc_signal< sc_lv<7> > i1_0_i_cast_fu_317_p1;
    sc_signal< sc_lv<7> > bvh_d_index_2_fu_365_p2;
    sc_signal< sc_lv<32> > index_assign_12_cast_fu_371_p1;
    sc_signal< sc_lv<1> > tmp_7_fu_375_p3;
    sc_signal< sc_lv<32> > index_assign_cast_fu_361_p1;
    sc_signal< sc_lv<64> > p_Repl2_s_fu_383_p1;
    sc_signal< sc_lv<1> > tmp_fu_333_p2;
    sc_signal< sc_lv<50> > p_Result_9_fu_339_p4;
    sc_signal< sc_lv<50> > p_Result_11_fu_397_p4;
    sc_signal< sc_lv<1> > tmp_1_fu_349_p2;
    sc_signal< sc_lv<1> > sel_tmp1_fu_415_p2;
    sc_signal< sc_lv<1> > sel_tmp2_fu_421_p2;
    sc_signal< sc_lv<50> > p_Result_10_fu_387_p4;
    sc_signal< sc_lv<50> > sel_tmp_fu_407_p3;
    sc_signal< sc_lv<6> > bvh_d_index_3_fu_460_p2;
    sc_signal< sc_lv<32> > index_assign_14_cast_fu_448_p1;
    sc_signal< sc_lv<1> > tmp_17_fu_470_p3;
    sc_signal< sc_lv<32> > index_assign_13_cast_fu_466_p1;
    sc_signal< sc_lv<64> > p_Repl2_1_fu_478_p1;
    sc_signal< sc_lv<6> > bvh_d_index_7_fu_498_p2;
    sc_signal< sc_lv<6> > bvh_d_index_5_fu_508_p2;
    sc_signal< sc_lv<32> > index_assign_15_cast_fu_514_p1;
    sc_signal< sc_lv<32> > index_assign_16_cast_fu_504_p1;
    sc_signal< sc_lv<1> > tmp_15_fu_518_p3;
    sc_signal< sc_lv<1> > tmp_16_fu_526_p3;
    sc_signal< sc_lv<2> > tmp_6_fu_534_p3;
    sc_signal< sc_lv<6> > bvh_d_index_8_fu_566_p2;
    sc_signal< sc_lv<32> > index_assign_18_cast_fu_554_p1;
    sc_signal< sc_lv<1> > tmp_20_fu_576_p3;
    sc_signal< sc_lv<32> > index_assign_17_cast_fu_572_p1;
    sc_signal< sc_lv<64> > p_Repl2_2_fu_584_p1;
    sc_signal< sc_lv<6> > bvh_d_index_10_fu_626_p2;
    sc_signal< sc_lv<32> > index_assign_20_cast_fu_614_p1;
    sc_signal< sc_lv<1> > tmp_25_fu_636_p3;
    sc_signal< sc_lv<32> > index_assign_19_cast_fu_632_p1;
    sc_signal< sc_lv<64> > p_Repl2_3_fu_644_p1;
    sc_signal< sc_lv<1> > tmp_23_fu_664_p3;
    sc_signal< sc_lv<1> > not_Result_s_fu_671_p2;
    sc_signal< sc_lv<32> > index_assign_21_cast_fu_699_p1;
    sc_signal< sc_lv<1> > tmp_12_fu_715_p3;
    sc_signal< sc_lv<64> > p_Repl2_5_fu_723_p1;
    sc_signal< sc_lv<25> > ap_return_preg;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<6> ap_const_lv6_0;
    static const sc_lv<25> ap_const_lv25_0;
    static const sc_lv<50> ap_const_lv50_0;
    static const sc_lv<6> ap_const_lv6_18;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<6> ap_const_lv6_17;
    static const sc_lv<6> ap_const_lv6_16;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<50> ap_const_lv50_1;
    static const sc_lv<6> ap_const_lv6_30;
    static const sc_lv<6> ap_const_lv6_1;
    static const sc_lv<6> ap_const_lv6_32;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<6> ap_const_lv6_31;
    static const sc_lv<7> ap_const_lv7_30;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<6> ap_const_lv6_2;
    static const sc_lv<6> ap_const_lv6_3F;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_bit_1_fu_709_p2();
    void thread_bit_fu_290_p2();
    void thread_bvh_d_index_10_fu_626_p2();
    void thread_bvh_d_index_1_fu_355_p2();
    void thread_bvh_d_index_2_fu_365_p2();
    void thread_bvh_d_index_3_fu_460_p2();
    void thread_bvh_d_index_5_fu_508_p2();
    void thread_bvh_d_index_7_fu_498_p2();
    void thread_bvh_d_index_8_fu_566_p2();
    void thread_exitcond_i3_fu_284_p2();
    void thread_exitcond_i6_fu_703_p2();
    void thread_exitcond_i_fu_321_p2();
    void thread_i1_0_i_cast_fu_317_p1();
    void thread_i_2_fu_693_p2();
    void thread_i_fu_327_p2();
    void thread_index_assign_11_cast_fu_280_p1();
    void thread_index_assign_12_cast_fu_371_p1();
    void thread_index_assign_13_cast_fu_466_p1();
    void thread_index_assign_14_cast_fu_448_p1();
    void thread_index_assign_15_cast_fu_514_p1();
    void thread_index_assign_16_cast_fu_504_p1();
    void thread_index_assign_17_cast_fu_572_p1();
    void thread_index_assign_18_cast_fu_554_p1();
    void thread_index_assign_19_cast_fu_632_p1();
    void thread_index_assign_20_cast_fu_614_p1();
    void thread_index_assign_21_cast_fu_699_p1();
    void thread_index_assign_cast_fu_361_p1();
    void thread_j_1_fu_598_p2();
    void thread_j_2_fu_658_p2();
    void thread_j_fu_492_p2();
    void thread_not_Result_s_fu_671_p2();
    void thread_p_0289_2_i_fu_687_p3();
    void thread_p_050_6_i_fu_427_p3();
    void thread_p_Repl2_1_fu_478_p1();
    void thread_p_Repl2_2_fu_584_p1();
    void thread_p_Repl2_3_fu_644_p1();
    void thread_p_Repl2_4_fu_303_p1();
    void thread_p_Repl2_5_fu_723_p1();
    void thread_p_Repl2_s_fu_383_p1();
    void thread_p_Result_10_fu_387_p4();
    void thread_p_Result_11_fu_397_p4();
    void thread_p_Result_12_fu_482_p4();
    void thread_p_Result_13_fu_542_p5();
    void thread_p_Result_14_fu_588_p4();
    void thread_p_Result_15_fu_648_p4();
    void thread_p_Result_4_fu_727_p4();
    void thread_p_Result_9_fu_339_p4();
    void thread_p_Result_s_fu_307_p4();
    void thread_rem_next_V_fu_609_p2();
    void thread_sel_tmp1_fu_415_p2();
    void thread_sel_tmp2_fu_421_p2();
    void thread_sel_tmp_fu_407_p3();
    void thread_sqrt_int_V_fu_677_p4();
    void thread_tmp_10_fu_440_p3();
    void thread_tmp_11_fu_452_p3();
    void thread_tmp_12_fu_715_p3();
    void thread_tmp_15_fu_518_p3();
    void thread_tmp_16_fu_526_p3();
    void thread_tmp_17_fu_470_p3();
    void thread_tmp_19_fu_558_p3();
    void thread_tmp_1_fu_349_p2();
    void thread_tmp_20_fu_576_p3();
    void thread_tmp_22_fu_618_p3();
    void thread_tmp_23_fu_664_p3();
    void thread_tmp_25_fu_636_p3();
    void thread_tmp_2_fu_296_p3();
    void thread_tmp_6_fu_534_p3();
    void thread_tmp_7_fu_375_p3();
    void thread_tmp_fu_333_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
