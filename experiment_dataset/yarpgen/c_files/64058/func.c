/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64058
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_4 [18U] [i_0] |= ((/* implicit */unsigned short) (signed char)43);
        arr_5 [i_0] [(_Bool)1] |= ((/* implicit */_Bool) arr_1 [i_0]);
        arr_6 [2U] = (!(((/* implicit */_Bool) var_5)));
        arr_7 [i_0] [i_0] &= ((/* implicit */_Bool) -862016604);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 19; i_1 += 3) 
    {
        var_12 += ((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1 - 1]))));
        arr_12 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_9 [i_1 - 1]))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_3 [i_1 - 1] [i_1 + 1]))));
        /* LoopSeq 3 */
        for (unsigned short i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            arr_17 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [6LL] [i_1 - 1]))));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (int i_4 = 2; i_4 < 19; i_4 += 1) 
                {
                    {
                        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : ((-(((/* implicit */int) arr_8 [15LL] [15LL])))))))));
                        var_15 = ((/* implicit */short) (((_Bool)1) ? (-7251329887816400713LL) : (7251329887816400713LL)));
                        arr_24 [i_1] [i_1] [i_1 - 1] [11LL] [i_1 - 1] = ((/* implicit */short) var_7);
                        arr_25 [(short)13] [(unsigned char)11] [i_4] = ((/* implicit */_Bool) arr_0 [i_1]);
                        /* LoopSeq 3 */
                        for (short i_5 = 0; i_5 < 20; i_5 += 1) 
                        {
                            arr_30 [i_3] = ((/* implicit */unsigned char) arr_2 [10LL]);
                            var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (~((+(7251329887816400707LL))))))));
                            arr_31 [i_1 + 1] [i_4] [i_1 + 1] [(_Bool)1] [i_1 + 1] = ((/* implicit */short) arr_2 [i_1]);
                        }
                        for (short i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_34 [i_1] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) ((signed char) arr_16 [(signed char)10] [i_3] [i_3])))));
                            arr_35 [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))));
                            arr_36 [i_1] [i_2] [17] [1LL] |= ((/* implicit */unsigned short) ((long long int) arr_19 [i_4 + 1] [i_1 - 1]));
                        }
                        for (unsigned char i_7 = 3; i_7 < 18; i_7 += 2) 
                        {
                            var_17 |= ((/* implicit */long long int) arr_33 [i_1] [i_2] [(signed char)13]);
                            arr_40 [(unsigned char)12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_38 [(signed char)3] [i_2] [i_3] [i_4 - 1] [i_7])))))));
                        }
                    }
                } 
            } 
        }
        for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
        {
            var_18 += ((/* implicit */unsigned short) ((arr_32 [(unsigned short)7] [7LL] [i_1 + 1] [(unsigned char)5] [i_8] [i_8]) - (((/* implicit */int) (short)4513))));
            arr_44 [i_1] [i_8] = ((/* implicit */long long int) (~(((/* implicit */int) arr_13 [i_1 - 1]))));
        }
        for (unsigned char i_9 = 0; i_9 < 20; i_9 += 1) 
        {
            arr_47 [i_1 + 1] [i_9] [(unsigned short)8] = ((/* implicit */unsigned char) 7251329887816400701LL);
            var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) ((short) -7251329887816400713LL)))));
            var_20 ^= (short)4826;
        }
        var_21 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)111)) - (1127266544))));
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        arr_50 [i_10] = arr_20 [i_10] [(unsigned char)5] [i_10] [i_10];
        /* LoopNest 2 */
        for (signed char i_11 = 0; i_11 < 12; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) ((((((/* implicit */int) (short)32738)) & (((/* implicit */int) var_6)))) - (((/* implicit */int) arr_56 [(unsigned short)1] [i_11] [i_12] [i_12]))));
                    /* LoopSeq 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 3) 
                        {
                            var_23 = ((/* implicit */signed char) ((unsigned char) 862016583));
                            arr_63 [i_10] [i_10] [i_11] [(_Bool)1] [i_13] [(signed char)1] = ((/* implicit */int) arr_39 [i_12] [i_11] [(signed char)5] [i_12]);
                        }
                        for (signed char i_15 = 0; i_15 < 12; i_15 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (!(((/* implicit */_Bool) -7251329887816400702LL)))))));
                            arr_66 [i_15] [i_13] [i_13] [i_13] [i_10] [(unsigned char)7] [i_10] = ((/* implicit */unsigned char) ((short) (signed char)120));
                            arr_67 [i_10] [i_11] [i_10] [i_13] [i_15] = ((/* implicit */signed char) arr_26 [i_15] [i_15] [(unsigned char)4] [i_15] [i_15]);
                        }
                        for (long long int i_16 = 0; i_16 < 12; i_16 += 2) 
                        {
                            arr_71 [i_16] [i_13] [i_13] [i_13] [i_13] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_10] [i_12] [i_10]))) : ((+(arr_20 [i_16] [(unsigned char)16] [(unsigned char)16] [i_10])))));
                            arr_72 [i_16] [(signed char)0] [i_13] [i_13] [i_11] [9] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)0))));
                            arr_73 [i_10] [i_11] [5] [i_13] [i_13] [i_16] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_0)) & (((/* implicit */int) arr_46 [i_10] [(signed char)19] [i_10]))))));
                            var_25 = ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)119)))) << (((((/* implicit */int) arr_1 [i_12])) - (229)))));
                        }
                        arr_74 [i_13] [i_13] [i_12] = ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 12; i_17 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_18 = 0; i_18 < 12; i_18 += 4) 
                        {
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) (unsigned char)15))));
                            arr_83 [i_11] = ((/* implicit */short) (-(((/* implicit */int) arr_76 [i_10] [i_10] [i_12] [i_17] [i_17] [i_10]))));
                        }
                        var_27 -= ((/* implicit */unsigned char) ((unsigned short) arr_22 [i_10] [i_11] [i_11] [(signed char)19] [i_12] [i_11]));
                        arr_84 [8] [i_12] [i_11] [(unsigned char)3] [i_10] &= ((/* implicit */unsigned short) (-((-(((/* implicit */int) arr_22 [i_10] [0] [i_11] [i_11] [0] [i_11]))))));
                        /* LoopSeq 3 */
                        for (int i_19 = 1; i_19 < 11; i_19 += 3) 
                        {
                            var_28 *= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_15 [i_10] [i_10] [i_10]))));
                            var_29 |= ((/* implicit */_Bool) (~(arr_32 [i_10] [i_11] [i_19 + 1] [(unsigned char)19] [i_19 - 1] [i_19 - 1])));
                            var_30 -= ((/* implicit */unsigned short) 7251329887816400719LL);
                            var_31 = ((/* implicit */unsigned char) arr_81 [i_10] [i_19]);
                            var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_54 [i_10] [i_19 - 1] [1U] [i_17]))));
                        }
                        for (signed char i_20 = 0; i_20 < 12; i_20 += 1) 
                        {
                            arr_89 [i_20] [i_17] [(signed char)6] [i_20] = ((/* implicit */long long int) ((unsigned char) var_5));
                            arr_90 [i_10] [i_20] = ((/* implicit */unsigned char) arr_78 [(unsigned char)4] [10U] [10U] [i_10]);
                            arr_91 [i_10] [i_11] [i_11] [i_12] [i_20] |= (-(((/* implicit */int) var_3)));
                            arr_92 [i_20] [i_20] [10LL] [i_20] [i_10] = ((/* implicit */_Bool) (~(((/* implicit */int) ((-7251329887816400709LL) >= ((-9223372036854775807LL - 1LL)))))));
                            arr_93 [(unsigned char)0] [i_11] [i_12] |= ((/* implicit */signed char) (~(((/* implicit */int) arr_41 [i_11] [i_11] [(unsigned short)1]))));
                        }
                        for (long long int i_21 = 0; i_21 < 12; i_21 += 1) 
                        {
                            arr_96 [i_21] [i_17] [i_21] [i_21] [(short)11] [i_10] = arr_69 [i_10] [i_10] [(unsigned char)9] [i_10] [(_Bool)1];
                            arr_97 [i_10] [i_11] [i_21] [i_21] [i_21] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_11] [i_12] [i_17] [i_21])) & (((/* implicit */int) arr_28 [i_21] [i_11] [i_12] [i_17]))));
                        }
                    }
                    var_33 += var_8;
                }
            } 
        } 
        arr_98 [i_10] = arr_65 [(unsigned char)0] [(unsigned char)8] [i_10] [i_10] [i_10];
        arr_99 [i_10] [i_10] = ((/* implicit */short) var_4);
    }
    /* LoopNest 3 */
    for (unsigned char i_22 = 1; i_22 < 8; i_22 += 4) 
    {
        for (int i_23 = 0; i_23 < 11; i_23 += 3) 
        {
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                {
                    var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) arr_19 [i_22] [i_23]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_25 = 0; i_25 < 11; i_25 += 4) 
                    {
                        arr_114 [i_22] [i_23] [i_24] [i_25] |= ((/* implicit */short) arr_32 [1U] [i_23] [i_24] [i_25] [(unsigned short)1] [i_23]);
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((unsigned char) var_1)))));
                        arr_115 [(unsigned short)7] [i_23] [9] [i_25] [i_25] [i_25] = ((/* implicit */signed char) var_9);
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */int) arr_104 [(signed char)0] [i_23] [i_22])), ((+(((/* implicit */int) arr_43 [i_22 + 2])))))))));
                        arr_116 [i_22] [i_22] [i_24] [i_25] [i_22] = ((/* implicit */unsigned char) max((((/* implicit */unsigned short) max(((signed char)127), (((/* implicit */signed char) arr_55 [i_22 - 1]))))), (var_11)));
                    }
                    for (signed char i_26 = 4; i_26 < 9; i_26 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_27 = 0; i_27 < 11; i_27 += 1) 
                        {
                            var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) var_10)) ^ (max((max((-862016604), (((/* implicit */int) arr_18 [i_26] [i_23] [i_24])))), (((/* implicit */int) arr_65 [i_26] [i_23] [i_24] [(unsigned char)4] [i_27])))))))));
                            arr_121 [(signed char)10] [i_23] [(signed char)10] [(signed char)10] [i_27] [i_22] [2LL] = ((/* implicit */short) arr_39 [i_22] [7] [i_26] [7]);
                            var_38 = ((/* implicit */unsigned char) max((var_38), (max((min((min((((/* implicit */unsigned char) var_10)), (var_9))), (((/* implicit */unsigned char) ((-82150639) >= (((/* implicit */int) (signed char)-99))))))), (((unsigned char) (-(((/* implicit */int) (unsigned char)231)))))))));
                        }
                        arr_122 [i_23] [i_24] [i_23] = ((/* implicit */signed char) arr_87 [i_22] [i_23] [i_24]);
                    }
                    arr_123 [i_22 + 3] [i_23] = ((/* implicit */signed char) max((-862016583), ((-(((/* implicit */int) ((signed char) -82150627)))))));
                    var_39 = (!(((/* implicit */_Bool) (unsigned char)246)));
                    var_40 = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_41 [i_22] [i_22] [i_24])), (max((-3475589765058101657LL), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)18)))))))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (-(((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */long long int) 2712467701U)) : (var_2))))))));
}
