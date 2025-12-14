/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97389
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 3; i_2 < 19; i_2 += 2) 
                {
                    for (signed char i_3 = 1; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_9 [i_0] [i_1] [i_2] [i_3 - 1] = ((/* implicit */short) (+((+(((arr_8 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
                            arr_10 [i_2] [i_0] [i_0] [i_2] = ((/* implicit */short) max(((+(max((var_2), (arr_8 [i_1] [i_1 - 1] [i_1 + 2] [16U] [i_1 - 1]))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_2] [i_1]))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_12 [i_0] [i_1]);
                            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_2))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 19; i_6 += 1) 
                {
                    for (signed char i_7 = 2; i_7 < 20; i_7 += 3) 
                    {
                        {
                            var_16 += ((/* implicit */_Bool) arr_5 [18ULL] [i_1] [18ULL]);
                            var_17 |= ((/* implicit */unsigned short) (~(max((((/* implicit */long long int) ((((/* implicit */int) arr_0 [(unsigned short)6])) ^ (((/* implicit */int) arr_15 [i_0] [i_1] [i_6 - 1] [i_1]))))), (var_1)))));
                            var_18 = min((((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)44125)) ? (((/* implicit */int) (signed char)-95)) : (((/* implicit */int) (unsigned char)54)))), (((arr_17 [i_0] [i_0] [(short)1]) * (((/* implicit */int) (_Bool)1))))))), (arr_20 [i_6]));
                            arr_22 [(short)8] &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (short)10223)) ? (((/* implicit */int) (signed char)68)) : (((/* implicit */int) (unsigned short)65518)))), (((/* implicit */int) arr_0 [i_0]))));
                            arr_23 [i_6] = min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (signed char)-1))))), (arr_12 [i_6] [20]));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_8 = 1; i_8 < 19; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_29 [i_0] [i_1] [i_8] [i_0] [i_8 + 1]))))));
                                var_20 = ((/* implicit */unsigned long long int) ((-8684365302876815708LL) ^ (((/* implicit */long long int) ((/* implicit */int) min((arr_19 [4] [i_8 - 1] [i_8 + 1] [i_1 - 3] [i_1] [i_1 + 1]), (arr_19 [i_8] [i_8 + 3] [i_8 + 2] [i_1 - 1] [i_1 + 2] [i_1 - 1])))))));
                                arr_31 [i_0] [i_8] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_18 [i_1 - 2] [i_1 - 3] [i_8 - 1] [i_8] [i_9])) ? (arr_12 [i_1 - 3] [(_Bool)1]) : (((/* implicit */long long int) arr_17 [i_1 + 1] [i_1] [i_8 + 2]))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        for (short i_12 = 1; i_12 < 21; i_12 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                {
                    for (unsigned long long int i_14 = 4; i_14 < 19; i_14 += 2) 
                    {
                        {
                            arr_42 [19U] = ((/* implicit */unsigned short) arr_33 [i_11]);
                            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) arr_13 [i_11] [(short)14] [i_13] [i_14]))));
                            var_22 = ((/* implicit */unsigned short) arr_27 [i_14] [i_11] [i_14] [i_11] [i_11] [i_11]);
                            var_23 = ((/* implicit */unsigned long long int) ((((long long int) ((((/* implicit */_Bool) (short)10218)) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (signed char)-95))))) != (((long long int) ((unsigned int) (_Bool)1)))));
                            var_24 = ((/* implicit */_Bool) arr_5 [i_11] [i_12 + 1] [i_14]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                {
                    for (signed char i_16 = 1; i_16 < 20; i_16 += 4) 
                    {
                        {
                            arr_49 [i_16] [i_11] [i_12] [i_12 - 1] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_11);
                            arr_50 [i_11] [i_12] [i_15] = ((/* implicit */signed char) arr_4 [i_11] [i_12 + 1] [i_15] [i_16]);
                            arr_51 [i_11] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_11] [i_12 - 1] [i_15])) >= (((/* implicit */int) (_Bool)1))))) + (((/* implicit */int) arr_6 [i_15] [i_16 + 1])))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) var_9)) != (((/* implicit */int) arr_41 [i_15] [i_12] [i_15] [i_16 - 1] [i_11]))));
                            arr_52 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) arr_13 [i_12 - 1] [i_12] [i_12 + 1] [i_11])), (arr_15 [i_12 - 1] [i_12] [2U] [i_11]))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (long long int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                    {
                        for (signed char i_19 = 0; i_19 < 22; i_19 += 3) 
                        {
                            {
                                var_26 = ((((/* implicit */int) arr_16 [i_18 + 1] [i_17] [(signed char)3])) == (((((/* implicit */_Bool) (unsigned short)65528)) ? (((/* implicit */int) (unsigned short)65518)) : (((/* implicit */int) (signed char)1)))));
                                arr_62 [i_19] [i_12 + 1] [i_17] [(short)15] [i_18] [i_18] [i_19] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 6917529027641081856ULL)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_19] [i_18] [i_17] [i_12]))))))), ((((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 3623428156U)))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))))))));
                                arr_63 [i_18] = ((/* implicit */long long int) (signed char)-125);
                                arr_64 [i_12 + 1] [(signed char)6] [(signed char)6] [i_18] [(unsigned short)20] [i_18] = ((((/* implicit */_Bool) arr_56 [i_11] [(unsigned char)19] [i_11] [i_11] [i_11])) ? ((~(arr_34 [i_18 + 1] [i_12 - 1]))) : (((/* implicit */unsigned long long int) max((-6530077254786127843LL), (((/* implicit */long long int) var_7))))));
                                var_27 *= ((/* implicit */int) (~(max((((unsigned long long int) arr_19 [i_18 + 1] [i_18] [i_18] [i_18] [i_18 + 1] [i_18 + 1])), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) < (9545307121264729789ULL))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_20 = 4; i_20 < 20; i_20 += 2) 
                {
                    for (int i_21 = 1; i_21 < 20; i_21 += 2) 
                    {
                        {
                            arr_69 [i_11] [i_12] [i_12] [4LL] [(signed char)20] [i_21] = ((/* implicit */long long int) (-(min((((((/* implicit */_Bool) arr_44 [4U])) ? (((/* implicit */int) var_0)) : (arr_17 [i_11] [i_12 - 1] [i_20]))), (((/* implicit */int) ((arr_20 [i_20]) > (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
                            arr_70 [18ULL] [18ULL] [i_20] [i_21] [i_21] [i_21 - 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((6530077254786127842LL), (((/* implicit */long long int) arr_44 [i_11])))), (max((arr_59 [i_11] [i_12 + 1] [i_20] [i_21 + 2]), (((/* implicit */long long int) arr_40 [i_21] [(unsigned short)1] [i_21] [i_21] [i_21] [i_21 - 1])))))))));
                            arr_71 [12LL] = ((/* implicit */signed char) ((max((3072), (((/* implicit */int) ((((/* implicit */int) var_4)) < (((/* implicit */int) arr_39 [(_Bool)1] [(_Bool)1] [i_20 - 4] [i_20 - 3]))))))) | (((/* implicit */int) (((~(arr_38 [i_21]))) > (((/* implicit */long long int) ((/* implicit */int) arr_53 [i_11] [i_11] [i_11] [i_11]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 1; i_22 < 20; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 22; i_23 += 2) 
                    {
                        {
                            var_28 += ((/* implicit */int) ((unsigned short) arr_47 [i_11] [13ULL] [(unsigned short)18] [6U] [i_11] [i_11]));
                            var_29 = ((/* implicit */long long int) min((var_29), ((-(min((6530077254786127817LL), (((/* implicit */long long int) (signed char)-6))))))));
                            arr_77 [i_11] [i_11] [i_12] [11LL] [i_11] = ((/* implicit */long long int) max(((~(((/* implicit */int) var_8)))), ((((-(((/* implicit */int) arr_76 [i_22] [i_22] [i_11])))) * (((/* implicit */int) arr_0 [i_12 + 1]))))));
                            var_30 = ((/* implicit */long long int) arr_2 [(unsigned char)4] [i_12] [i_12]);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
    {
        for (int i_25 = 2; i_25 < 19; i_25 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_26 = 0; i_26 < 22; i_26 += 3) 
                {
                    for (unsigned short i_27 = 1; i_27 < 20; i_27 += 1) 
                    {
                        for (long long int i_28 = 0; i_28 < 22; i_28 += 4) 
                        {
                            {
                                var_31 = ((/* implicit */unsigned short) 3072);
                                var_32 = ((/* implicit */_Bool) var_0);
                                arr_92 [i_27] [i_25 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((unsigned short)65518), (((/* implicit */unsigned short) arr_3 [i_25 + 3])))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_29 = 1; i_29 < 20; i_29 += 2) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                            var_34 = ((/* implicit */signed char) max(((-(((arr_60 [i_24] [i_25] [i_29] [i_30] [i_25] [i_29]) + (var_12))))), (((/* implicit */unsigned long long int) max((arr_54 [i_29] [i_29] [i_29 + 2] [i_25 + 1]), (arr_54 [i_25] [(short)15] [i_25 - 2] [i_25 + 3]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_31 = 0; i_31 < 16; i_31 += 4) 
    {
        for (short i_32 = 1; i_32 < 15; i_32 += 1) 
        {
            for (unsigned char i_33 = 0; i_33 < 16; i_33 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                    {
                        for (unsigned long long int i_35 = 0; i_35 < 16; i_35 += 1) 
                        {
                            {
                                arr_115 [i_33] |= 2846407400890642357LL;
                                var_35 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_60 [i_31] [i_31] [i_31] [i_31] [i_31] [(_Bool)1]), (((/* implicit */unsigned long long int) arr_54 [i_31] [i_31] [i_34 - 1] [i_35]))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 549755813887LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_35] [i_35] [0U] [i_33] [i_32 + 1] [(_Bool)1]))) : (1070553920U)))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)1))) & (18242615013739591408ULL)))))) : ((-(((/* implicit */int) arr_53 [i_31] [i_32] [i_32 + 1] [i_32]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_36 = 1; i_36 < 15; i_36 += 3) 
                    {
                        for (unsigned short i_37 = 3; i_37 < 15; i_37 += 3) 
                        {
                            {
                                var_36 = ((/* implicit */signed char) (+((-(arr_118 [i_33] [i_32] [i_33] [i_36] [i_36 - 1] [i_31])))));
                                arr_121 [i_31] [i_32 + 1] [3LL] [i_36] [i_32] [i_31] = ((/* implicit */long long int) var_0);
                                arr_122 [i_32] = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_24 [i_31] [i_32 - 1] [i_36 - 1]), (arr_24 [i_36] [i_32] [i_36 - 1])))) && ((!(((/* implicit */_Bool) arr_24 [i_36 - 1] [i_32] [i_36 + 1]))))));
                                var_37 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) arr_40 [i_31] [i_32] [i_33] [i_33] [i_36 - 1] [i_37 - 2]))))) ? ((+(((/* implicit */int) var_0)))) : (((/* implicit */int) ((-1934271262) < (((/* implicit */int) arr_53 [i_32] [i_32 - 1] [i_33] [i_33])))))))) >= (((((/* implicit */_Bool) ((long long int) 137438953471LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13367))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_13)) : (5691252089097753900ULL)))))));
                                arr_123 [i_31] [i_32] [i_31] [i_36 + 1] [i_31] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) arr_5 [i_37 + 1] [i_37 - 1] [i_32])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
