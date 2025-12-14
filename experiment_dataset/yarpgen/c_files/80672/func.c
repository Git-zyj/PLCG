/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80672
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        {
                            arr_11 [i_1] [(unsigned char)0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_5))))) * (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_15))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_17))))) ? (max((var_14), (var_16))) : (((/* implicit */long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_5)))))))));
                            arr_12 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_8)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_4)), (var_13)))) : (max((((/* implicit */long long int) var_4)), (var_6)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_9) : (var_8)))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (var_17)))) ? (((var_4) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6))) : (var_9)))));
                            arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (~(var_13)))) : (((var_10) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))) ^ (max((((((/* implicit */_Bool) var_10)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) var_13)) : (var_10))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                {
                    for (unsigned char i_5 = 1; i_5 < 13; i_5 += 1) 
                    {
                        {
                            arr_22 [i_0] [i_1 + 1] [i_1 + 1] [6LL] [i_5 + 3] = ((/* implicit */int) var_11);
                            arr_23 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((var_8) + (9223372036854775807LL))) << (((((((/* implicit */int) var_7)) + (104))) - (40)))))) ? (((var_4) ? (var_13) : (((/* implicit */int) var_0)))) : (((/* implicit */int) max((var_0), (var_18))))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_9)))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_6 = 1; i_6 < 15; i_6 += 1) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            {
                                arr_34 [i_0] [(short)10] [i_6] [(short)10] [i_8] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((var_15), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) (+(((/* implicit */int) var_0)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (var_6)))) ? (((/* implicit */long long int) (+(var_1)))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_14))))) : (((var_11) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_14))) : (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_17)))))))));
                                arr_35 [i_0] [i_0] [i_0] [i_1] [i_7] [i_8] [i_8] = ((/* implicit */signed char) (-(var_10)));
                                arr_36 [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_1] = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_13)) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_3))))) : (max((((/* implicit */long long int) var_11)), (var_14))))), (((/* implicit */long long int) (((~(((/* implicit */int) var_4)))) * (((/* implicit */int) min((var_11), (var_4))))))));
                                arr_37 [i_1] [i_6 - 1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_5))))) ? (((((var_15) + (9223372036854775807LL))) >> (((/* implicit */int) var_11)))) : (((((/* implicit */_Bool) var_12)) ? (var_8) : (var_9)))))) ? (((((/* implicit */_Bool) ((var_4) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))) ? (min((((/* implicit */long long int) var_7)), (var_9))) : (((/* implicit */long long int) ((var_13) % (((/* implicit */int) var_12))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_17)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))) : (((var_11) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))));
                                arr_38 [i_1] [i_1 + 1] [(unsigned short)3] [i_1 + 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_8) : (var_6)))) ? (min((((/* implicit */long long int) var_4)), (var_16))) : (((((/* implicit */_Bool) var_7)) ? (var_14) : (var_16))))) : (((/* implicit */long long int) (-(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_12)))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_9 = 1; i_9 < 13; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            {
                                arr_48 [i_1] [i_11] [i_10] [i_9] [i_9] [i_1 + 1] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_18))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) var_4)), (var_10)))) : (((((/* implicit */_Bool) var_1)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
                                arr_49 [i_0] [i_1 + 1] [i_1] [i_0] [i_11] = ((/* implicit */unsigned long long int) var_5);
                                arr_50 [(unsigned char)14] [i_10] [i_1 - 1] [i_1 - 1] [(unsigned char)14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_17)))))) ? (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_2))))) ^ (((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */long long int) var_1)))))) : (((((/* implicit */_Bool) var_8)) ? (min((((/* implicit */long long int) var_11)), (var_9))) : (var_8)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_12 = 1; i_12 < 14; i_12 += 1) 
    {
        for (int i_13 = 0; i_13 < 15; i_13 += 1) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 15; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 1) 
                    {
                        {
                            arr_62 [i_12] [4LL] [i_14] &= ((/* implicit */short) max((max((((/* implicit */long long int) (-(((/* implicit */int) var_7))))), (var_9))), (((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned char) var_5))))) ? (((var_11) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (max((var_14), (((/* implicit */long long int) var_1))))))));
                            arr_63 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_15))) * (((((/* implicit */long long int) ((/* implicit */int) var_18))) / (var_8)))))) ? (max((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) max((((/* implicit */signed char) var_4)), (var_7)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))) ? (var_15) : (((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
                            arr_64 [i_12] [i_14] [i_13] [i_12] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((var_7), (((/* implicit */signed char) var_11))))) ? (max((var_14), (var_15))) : (((var_5) ? (((/* implicit */long long int) var_13)) : (var_16))))) | (((var_4) ? (((var_9) / (((/* implicit */long long int) var_10)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_8)))))));
                            arr_65 [i_13] [i_12] [i_13] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_15)))) ? (((((/* implicit */_Bool) var_15)) ? (var_8) : (var_15))) : (((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) var_1))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_8) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_16 = 0; i_16 < 15; i_16 += 1) 
                {
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned char i_18 = 0; i_18 < 15; i_18 += 1) 
                        {
                            {
                                arr_76 [11LL] [i_13] [i_16] [i_17] [i_12] [i_16] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_10)) : (var_15)))))) ? (((/* implicit */int) ((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_17))) : (var_15))) > (min((var_16), (((/* implicit */long long int) var_7))))))) : (((/* implicit */int) ((((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_1))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) << (((((/* implicit */int) var_17)) - (47352)))))))))));
                                arr_77 [i_12 - 1] [i_13] [8LL] [i_17] [8LL] [i_17] = ((/* implicit */unsigned char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_7)), (var_17)))), (min((var_1), (var_1)))))), (max((max((var_6), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) min((var_12), (((/* implicit */unsigned short) var_0)))))))));
                                arr_78 [i_12] [i_13] [10LL] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_2))))) ^ (max((((/* implicit */long long int) var_4)), (var_9)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_17)), (var_1)))) || (((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_15)))))))) : ((((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) : (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_16)))))));
                                arr_79 [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((min((var_11), (var_11))) ? (max((((/* implicit */long long int) var_18)), (var_15))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (var_2)))))))));
                            }
                        } 
                    } 
                } 
                arr_80 [i_12] [i_13] = ((/* implicit */int) max((max((((var_16) ^ (((/* implicit */long long int) ((/* implicit */int) var_11))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_0)) : (var_13)))))), (((/* implicit */long long int) var_2))));
                arr_81 [8ULL] [i_13] = ((/* implicit */int) ((((/* implicit */_Bool) min((((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_18))) : (var_8))), (((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_3)))))))) ? (max((((var_4) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7))))), (min((((/* implicit */long long int) var_13)), (var_8))))) : (((((/* implicit */_Bool) (-(var_13)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */long long int) ((/* implicit */int) max((var_0), (var_7)))))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) 
    {
        for (signed char i_20 = 2; i_20 < 21; i_20 += 1) 
        {
            for (short i_21 = 1; i_21 < 23; i_21 += 1) 
            {
                {
                    arr_90 [i_19] [0LL] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) max((((var_16) ^ (var_8))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_12)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) var_1)) : (var_6)))) ? (((/* implicit */long long int) var_10)) : (((var_5) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))));
                    /* LoopNest 2 */
                    for (unsigned short i_22 = 0; i_22 < 25; i_22 += 1) 
                    {
                        for (unsigned long long int i_23 = 0; i_23 < 25; i_23 += 1) 
                        {
                            {
                                arr_97 [(unsigned char)3] [i_19] = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_13)), (var_14)))) ? (((var_6) ^ (((/* implicit */long long int) var_10)))) : (max((var_8), (((/* implicit */long long int) var_2)))))) : (var_14));
                                arr_98 [i_19] = ((/* implicit */unsigned int) var_5);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_24 = 1; i_24 < 13; i_24 += 1) 
    {
        for (signed char i_25 = 0; i_25 < 14; i_25 += 1) 
        {
            {
                arr_105 [i_24 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) <= (((/* implicit */int) var_0)))) ? (((var_5) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (max((var_15), (((/* implicit */long long int) var_11))))))) ? (min((((/* implicit */long long int) var_2)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_13)) : (var_8))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_16)))) ? (((var_11) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_3)))))))));
                arr_106 [i_24 + 1] [i_25] [i_24 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_14) : (var_14)))) ? (((((/* implicit */_Bool) var_8)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_17)))))))) ? (((/* implicit */int) var_2)) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))))));
                /* LoopNest 3 */
                for (int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    for (short i_27 = 0; i_27 < 14; i_27 += 1) 
                    {
                        for (int i_28 = 3; i_28 < 13; i_28 += 1) 
                        {
                            {
                                arr_114 [i_26] [3LL] [i_26] [3LL] [i_24] [i_26] = ((/* implicit */int) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9)))))));
                                arr_115 [i_26] [i_25] [i_26] [10ULL] [i_27] [i_28] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_1)) : (var_14)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_15)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (var_6) : (((/* implicit */long long int) max((var_13), (var_13))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_1)))) ? (((((/* implicit */_Bool) var_0)) ? (var_14) : (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_13) : (((/* implicit */int) var_2)))))))) ? (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) : (max((((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_8)))))));
}
