/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59104
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
    var_14 += ((/* implicit */signed char) ((((/* implicit */int) var_10)) >> (((((/* implicit */int) var_10)) - (24)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2638163182U)) ? (min((231087166), (((/* implicit */int) (short)-32752)))) : (((/* implicit */int) arr_3 [i_0] [i_1]))))) ? (1502701602U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))));
                var_15 = ((/* implicit */_Bool) min((var_15), (((((/* implicit */int) var_0)) > ((-(((/* implicit */int) var_0))))))));
                arr_6 [i_1] [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_6))));
                /* LoopSeq 1 */
                for (unsigned char i_2 = 1; i_2 < 10; i_2 += 1) 
                {
                    arr_11 [i_0] [i_0] [i_1] [i_1] |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_1])) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */int) (unsigned short)7936)) << (((var_1) + (1484755767047518428LL)))))))) : (max((((unsigned long long int) (short)32767)), (((/* implicit */unsigned long long int) arr_8 [i_2] [i_2 - 1] [i_2] [i_2 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 8; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_4 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((long long int) 9223372036854775807LL))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned short)5))))), ((+(arr_17 [i_0] [i_1] [i_1] [i_1] [i_4])))))));
                                var_16 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (-(((unsigned int) var_12))))), (((arr_15 [i_2 - 1] [i_3 - 4]) | (arr_15 [i_2 - 1] [i_3 + 1])))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        var_17 -= ((/* implicit */unsigned long long int) arr_3 [i_1] [i_0]);
                        /* LoopSeq 4 */
                        for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                        {
                            var_18 = ((/* implicit */_Bool) 2792265720U);
                            arr_25 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 3) 
                        {
                            var_19 = ((/* implicit */int) 3356435528U);
                            arr_29 [i_0] [i_0] [i_2 + 1] [i_5] [i_7] = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) (unsigned short)0)));
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)118))))) - (var_1))))));
                            var_21 = ((/* implicit */unsigned short) var_4);
                            var_22 *= ((/* implicit */short) ((((/* implicit */int) var_8)) & (((/* implicit */int) arr_3 [i_5] [i_0]))));
                        }
                        for (unsigned short i_8 = 1; i_8 < 8; i_8 += 4) 
                        {
                            arr_33 [i_0] [i_0] [i_2 + 1] [i_0] [i_8] [i_0] [i_8] = ((/* implicit */unsigned int) (unsigned char)2);
                            var_23 = ((/* implicit */unsigned long long int) 321622962);
                        }
                        for (signed char i_9 = 1; i_9 < 9; i_9 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_3 [i_1] [i_1]))));
                            var_25 ^= ((/* implicit */unsigned short) (~(((arr_15 [i_9] [i_1]) >> (((var_4) - (8920826020595431922ULL)))))));
                        }
                        var_26 += (_Bool)0;
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 11; i_10 += 2) 
                    {
                        var_27 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_20 [i_2] [i_10] [i_10] [i_2] [i_2 - 1] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 2) 
                        {
                            arr_40 [i_11] [i_2] [i_10] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)32)) ? (arr_36 [i_2] [i_0] [i_2] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_2] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((long long int) var_10))));
                            arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)7945))));
                        }
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)7945)) ? (((/* implicit */int) (signed char)107)) : (((/* implicit */int) (signed char)-30))))) ? (((/* implicit */int) var_0)) : (arr_10 [i_0])));
                    }
                    /* vectorizable */
                    for (int i_12 = 1; i_12 < 10; i_12 += 4) 
                    {
                        arr_45 [i_1] = arr_0 [i_2 - 1] [i_2 - 1];
                        arr_46 [i_0] [i_0] = ((/* implicit */unsigned int) var_1);
                    }
                    /* vectorizable */
                    for (int i_13 = 2; i_13 < 9; i_13 += 3) 
                    {
                        var_29 += ((/* implicit */int) ((_Bool) arr_19 [i_0] [i_1] [i_2 - 1] [i_1] [i_13]));
                        var_30 -= ((/* implicit */_Bool) ((var_12) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_2] [i_0]))) : (((arr_26 [i_2] [i_1] [i_2] [i_1]) % (((/* implicit */long long int) arr_17 [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                    }
                }
                arr_49 [i_0] [i_0] [i_0] = arr_21 [i_1];
            }
        } 
    } 
    var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) var_8))));
}
