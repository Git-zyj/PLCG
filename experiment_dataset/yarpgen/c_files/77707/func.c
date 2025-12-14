/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77707
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 3; i_2 < 19; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)57)) : (((/* implicit */int) ((var_3) < (((/* implicit */int) arr_6 [i_3] [i_2 - 3] [i_1]))))))))));
                                var_11 = ((((/* implicit */_Bool) (+(((/* implicit */int) min(((unsigned char)123), (var_2))))))) ? (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))), (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) var_8)) < (((((/* implicit */_Bool) -121503712607488096LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)57))) : (3372684429738859927LL))))))));
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) 121503712607488095LL))) >> (((((((/* implicit */_Bool) 4998907362473562164LL)) ? (((/* implicit */long long int) 948635640)) : (5329499585661699357LL))) - (948635614LL))))))));
                                var_13 = ((/* implicit */short) (+(((/* implicit */int) var_7))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) arr_0 [i_0] [i_0]);
                    var_15 = var_4;
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? ((~(((/* implicit */int) arr_6 [i_0] [i_0] [i_5])))) : (((/* implicit */int) arr_1 [i_2 - 2] [i_0 + 2])))), (((/* implicit */int) (((!(((/* implicit */_Bool) -948635662)))) || (((_Bool) var_1)))))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) -1699826745363309828LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_4))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))))))));
                        /* LoopSeq 1 */
                        for (long long int i_6 = 1; i_6 < 17; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) ((((-121503712607488096LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_13 [i_6 + 2] [(unsigned char)0] [i_2] [i_0])) : (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) / (((/* implicit */int) arr_7 [i_1] [i_2 - 1] [i_1]))))) : (min((((/* implicit */long long int) var_2)), (-4501569593267167990LL))))))))));
                            var_19 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0 + 3] [i_0] [i_0] [i_0 + 3]))) ^ (var_4))) - (((/* implicit */long long int) ((((((/* implicit */int) var_6)) * (((/* implicit */int) var_0)))) - (((/* implicit */int) min((var_7), (var_5)))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 4) 
                        {
                            {
                                var_20 = var_0;
                                var_21 = ((/* implicit */long long int) (~(((((var_8) + (2147483647))) << (((((((/* implicit */int) var_5)) | (((/* implicit */int) var_6)))) - (159)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        for (unsigned char i_10 = 2; i_10 < 11; i_10 += 2) 
        {
            {
                var_22 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))) : (((-121503712607488095LL) | (4501569593267167990LL))))) == (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */int) var_1)))))));
                /* LoopNest 2 */
                for (unsigned char i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    for (short i_12 = 2; i_12 < 10; i_12 += 1) 
                    {
                        {
                            arr_35 [i_10 - 2] [i_11] [i_10 - 2] [i_9] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_1 [i_12] [i_12])) : (((/* implicit */int) (unsigned char)9))));
                            arr_36 [i_11] = ((/* implicit */_Bool) arr_34 [i_9] [0LL] [i_12 + 1] [i_12 + 1]);
                            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((var_3), (((/* implicit */int) (unsigned char)84))))) ? (max((var_4), (arr_10 [i_9] [i_12] [i_11] [i_12] [i_10] [i_10]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 3; i_14 < 10; i_14 += 3) 
                    {
                        arr_43 [i_14 + 2] [i_13] [i_10] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (unsigned char)57))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (var_3))) : (((/* implicit */int) (unsigned char)142)))))));
                        var_24 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_9)) : (-121503712607488090LL)))))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)47)) ? (-4501569593267167990LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))))))))));
                    }
                    arr_44 [i_9] [i_9] [i_13] &= ((/* implicit */unsigned char) ((((/* implicit */int) max((var_2), (arr_20 [i_10 + 1] [i_10] [(short)16])))) * (((((/* implicit */int) arr_5 [i_10] [i_10 + 1] [i_10])) / (var_9)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_15 = 0; i_15 < 13; i_15 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) var_9)) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_8)) : (var_4))))))));
                        /* LoopSeq 2 */
                        for (long long int i_16 = 4; i_16 < 11; i_16 += 3) 
                        {
                            arr_49 [i_9] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_8) / (var_3)))) ? (((((/* implicit */_Bool) arr_6 [i_13] [i_10] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)237)))) : (arr_46 [i_9] [i_10 + 2] [i_15] [i_16 + 2]))) << (((((/* implicit */int) var_5)) - (18)))));
                            arr_50 [i_9] [i_9] [i_13] [i_13] [i_9] [i_9] = var_3;
                        }
                        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 2) 
                        {
                            arr_54 [i_17] [i_15] [(unsigned char)10] [i_13] [(unsigned char)6] [(unsigned char)6] [i_9] = ((((((/* implicit */int) var_0)) / (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) arr_5 [i_17] [i_13] [i_15]))))))) | ((+(((/* implicit */int) var_6)))));
                            var_26 = ((/* implicit */unsigned char) ((((long long int) var_5)) > (((/* implicit */long long int) max((((/* implicit */int) arr_13 [i_10 + 2] [i_10 + 2] [i_10 + 2] [i_10 + 2])), (var_8))))));
                        }
                        var_27 = ((/* implicit */short) var_4);
                        arr_55 [i_15] [i_9] [i_10] [i_9] = ((/* implicit */short) max((max((var_4), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) (~(var_3))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_18 = 1; i_18 < 12; i_18 += 4) 
                    {
                        for (long long int i_19 = 0; i_19 < 13; i_19 += 1) 
                        {
                            {
                                arr_62 [i_9] [(short)0] [i_10] [9] [9] [i_19] [i_19] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((var_9) ^ ((+(var_3)))))), (((max((((/* implicit */long long int) var_6)), (5329499585661699351LL))) ^ (((long long int) var_4))))));
                                arr_63 [i_9] [i_9] [i_9] = var_0;
                                arr_64 [i_9] [i_10 + 2] [i_9] [i_18] [i_19] = ((/* implicit */int) min((((/* implicit */long long int) ((arr_12 [i_10] [i_10] [i_10 + 1] [i_10 + 1]) % (arr_12 [i_9] [i_9] [i_10] [i_10 - 2])))), (8070450532247928832LL)));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
