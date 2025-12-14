/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87078
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
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) (~(((/* implicit */int) (!(arr_0 [i_1]))))));
                var_14 = ((/* implicit */int) -1859390297255519592LL);
                /* LoopSeq 2 */
                for (long long int i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */int) (unsigned char)93)) : (((/* implicit */int) (unsigned short)7))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) max((var_5), (arr_9 [i_4 - 2] [(unsigned short)4] [i_2] [i_0 - 1])))))))) ? ((+(((((/* implicit */int) arr_11 [i_4] [i_3 - 1] [i_2 + 2] [i_1])) ^ (((/* implicit */int) arr_9 [i_2 + 2] [i_2 - 1] [i_2] [i_2 + 2])))))) : (max((((/* implicit */int) (unsigned char)109)), (arr_4 [i_0 + 1] [i_0 - 2])))));
                                var_16 = (unsigned short)31214;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_19 [i_0] [i_1] [i_2 + 2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */int) var_3)) <= (((/* implicit */int) ((unsigned char) (-(((/* implicit */int) (unsigned short)40831))))))));
                                var_17 -= ((/* implicit */signed char) ((unsigned long long int) var_11));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 13; i_7 += 1) /* same iter space */
                {
                    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_7] [11U] [i_7] [i_7] [i_0 - 1] [i_0 - 1])) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_7 + 2] [i_1] [i_1] [i_0 - 1])))));
                    /* LoopSeq 2 */
                    for (unsigned short i_8 = 1; i_8 < 13; i_8 += 2) 
                    {
                        var_19 ^= ((/* implicit */int) arr_21 [i_8] [i_0] [i_0] [i_0]);
                        /* LoopSeq 3 */
                        for (unsigned int i_9 = 1; i_9 < 13; i_9 += 3) 
                        {
                            var_20 = ((/* implicit */unsigned long long int) ((var_13) + (arr_22 [i_0 - 1] [i_1] [i_8] [i_9 + 2])));
                            arr_28 [i_0 - 1] [i_7] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
                        {
                            arr_31 [i_0 - 2] [(unsigned char)3] [i_0] [i_7] [i_0] [i_0 - 2] [(short)13] = arr_4 [i_10] [i_7 + 1];
                            var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0 - 2] [i_7 + 1]))));
                            arr_32 [i_7] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_8] [i_10])))));
                        }
                        for (unsigned short i_11 = 3; i_11 < 14; i_11 += 4) 
                        {
                            var_22 = ((unsigned short) ((((/* implicit */int) (unsigned char)106)) ^ (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_0]))));
                            arr_35 [i_7] [i_7] [i_7] [i_7 + 1] [i_7] = (!(((/* implicit */_Bool) arr_23 [i_7 - 1] [i_11] [i_11 - 1])));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(((/* implicit */int) (short)-10412)))))));
                        }
                        arr_36 [i_0] [i_7] [i_0] [i_0 - 1] = ((/* implicit */int) ((short) var_2));
                        arr_37 [i_0] [i_1] [i_7] [i_7] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_10 [i_0] [i_1] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-48))))) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)98)))))));
                    }
                    for (short i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        arr_42 [i_0] [i_1] [i_0 - 1] [i_1] [i_1] [i_12] &= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_27 [i_0 - 2] [i_0] [i_7 + 2] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_0] [i_0] [i_0]))) : (var_7))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_7 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_6 [i_7 + 1] [i_0 + 1])));
                        var_25 = ((/* implicit */long long int) max((var_25), (arr_30 [i_7 - 1])));
                    }
                }
                var_26 = ((/* implicit */unsigned long long int) 4503599627370495LL);
                var_27 = ((/* implicit */unsigned long long int) ((short) (+((-(((/* implicit */int) arr_16 [(_Bool)1] [i_1] [i_1] [i_1] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned char i_13 = 0; i_13 < 17; i_13 += 4) 
    {
        arr_46 [i_13] = ((/* implicit */unsigned char) (-(max(((-(2096128U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_45 [i_13])) < (((/* implicit */int) arr_45 [i_13])))))))));
        var_28 = ((/* implicit */short) var_13);
        arr_47 [(unsigned short)13] [i_13] = ((/* implicit */unsigned short) arr_45 [(unsigned char)6]);
    }
    var_29 = ((/* implicit */long long int) var_8);
}
