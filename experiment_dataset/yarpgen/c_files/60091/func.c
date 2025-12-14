/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60091
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
    var_13 ^= ((/* implicit */signed char) ((((((/* implicit */int) var_4)) - (((/* implicit */int) (short)-1)))) / (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_1] [i_2] [(_Bool)1] = ((/* implicit */_Bool) arr_1 [i_1] [9]);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) (unsigned short)1);
                            var_15 = ((/* implicit */_Bool) (short)-2820);
                            var_16 = ((/* implicit */short) (((~(2147483647))) > ((+(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(short)5])) ? (-1674179839) : (((/* implicit */int) arr_8 [i_1]))))))));
                            arr_12 [i_1] = ((((/* implicit */int) arr_0 [i_4])) < ((~(((/* implicit */int) (short)-260)))));
                        }
                        for (unsigned char i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
                        {
                            var_17 = ((long long int) arr_13 [i_0] [i_2] [i_3]);
                            var_18 = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) min((arr_0 [i_5]), (var_11)))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_3] [(unsigned short)9]))) & (arr_14 [i_5] [i_5] [i_5] [i_3] [(signed char)5]))))) + (((/* implicit */long long int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [6LL] [i_3] [i_5])))))));
                            arr_15 [3U] [i_1] [i_1] [(unsigned short)5] [i_1] [(unsigned short)5] [(unsigned short)5] = ((/* implicit */signed char) min((max((arr_9 [i_0] [i_1] [i_2] [11U] [i_5] [i_5]), (((/* implicit */short) var_7)))), (((/* implicit */short) arr_2 [i_5] [(short)3] [11LL]))));
                        }
                        var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (1674179829)))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (528322362U)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1674179824)) & (35184372088831ULL)))))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) arr_0 [8U])), (min((((/* implicit */unsigned short) max((((/* implicit */short) arr_5 [i_2])), (arr_9 [i_2] [i_2] [i_1] [i_1] [i_0] [i_0])))), (arr_13 [i_0] [i_0] [i_0])))));
                }
            } 
        } 
        var_21 = ((/* implicit */int) min((((unsigned char) max((arr_4 [i_0] [(short)0] [i_0]), (var_0)))), (arr_8 [i_0])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 2) 
        {
            var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) (short)63)))))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 16; i_7 += 2) 
            {
                arr_21 [(unsigned short)8] [0U] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_7] [i_6 + 1] [i_0])) + (((/* implicit */int) arr_13 [i_7] [i_6] [12LL]))));
                arr_22 [i_7] [i_6] [i_0] = ((/* implicit */short) (+(((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_6] [i_7] [i_7] [i_7]))));
                arr_23 [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned char) arr_2 [i_7] [i_6] [i_0]);
                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (short)195))));
            }
            for (short i_8 = 1; i_8 < 13; i_8 += 3) 
            {
                var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(arr_7 [i_6] [i_8 + 2] [i_0] [i_6] [(unsigned short)12] [i_6]))))));
                arr_26 [i_0] [i_8] [i_0] [i_0] = ((/* implicit */short) (-(arr_14 [i_6 + 3] [i_6] [i_8] [i_8 + 2] [i_8 + 2])));
                var_25 = ((/* implicit */int) arr_25 [i_0]);
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 16; i_9 += 3) /* same iter space */
                {
                    var_26 *= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)244)) % (((/* implicit */int) (unsigned char)54))));
                    var_27 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_8])) ^ (((/* implicit */int) var_12))));
                }
                for (short i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
                {
                    var_28 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_10]))));
                    var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_4 [2] [(signed char)12] [i_0]) / (var_2)))))))));
                    var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)7503)) != (((/* implicit */int) (_Bool)0))))))))));
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) arr_18 [i_6 - 2] [i_8 + 3] [i_8] [i_8 - 1]))));
                }
                for (short i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
                {
                    var_32 -= ((/* implicit */_Bool) 528322362U);
                    /* LoopSeq 2 */
                    for (signed char i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) arr_20 [i_6] [i_8] [i_11] [i_12]))));
                        var_34 |= ((/* implicit */int) arr_7 [i_0] [i_11] [(short)8] [(signed char)6] [i_6] [i_0]);
                        var_35 -= ((/* implicit */short) (_Bool)1);
                        var_36 = ((/* implicit */_Bool) max((var_36), (((_Bool) (~(((/* implicit */int) var_3)))))));
                        var_37 = ((/* implicit */unsigned char) max((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) >= (((((/* implicit */int) arr_27 [14LL] [(short)10] [i_6] [i_11])) & (((/* implicit */int) (signed char)-61)))))))));
                    }
                    for (short i_13 = 2; i_13 < 14; i_13 += 3) 
                    {
                        arr_38 [i_8] = ((/* implicit */unsigned short) var_2);
                        arr_39 [i_8] = ((/* implicit */long long int) (+(((/* implicit */int) arr_36 [(_Bool)1] [i_8]))));
                        var_38 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)24390)) << (((((((/* implicit */int) arr_9 [i_13 + 1] [(unsigned char)5] [i_8 + 1] [i_11] [i_6 - 1] [2LL])) + (4767))) - (25)))));
                        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (short)16380)))))));
                    }
                }
            }
            for (unsigned int i_14 = 0; i_14 < 16; i_14 += 2) 
            {
                var_40 = ((/* implicit */unsigned char) arr_5 [14LL]);
                var_41 = ((/* implicit */unsigned char) ((short) arr_16 [i_6 + 2]));
            }
        }
    }
}
