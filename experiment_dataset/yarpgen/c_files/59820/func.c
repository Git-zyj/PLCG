/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59820
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) ((long long int) max(((unsigned char)203), (((/* implicit */unsigned char) arr_4 [i_1] [i_0])))));
                var_20 ^= ((/* implicit */signed char) arr_6 [i_0] [i_0] [i_1]);
                var_21 -= ((/* implicit */short) ((var_4) >> (((((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0])), (var_3)))) - (12386)))));
                arr_7 [i_0] [i_1] [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) (unsigned short)33474)) % (((/* implicit */int) (unsigned char)195)))), (((/* implicit */int) (!(((/* implicit */_Bool) min((-2096932768), (-2096932754)))))))));
            }
        } 
    } 
    var_22 = var_14;
    var_23 = ((/* implicit */long long int) var_17);
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_24 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_22 [i_4] [i_3] [i_4] [i_5] [i_6]) ? (0LL) : (((/* implicit */long long int) var_6))))) <= ((~(arr_1 [i_4])))));
                                arr_23 [10] [10] [i_4] [10] [i_4] [i_4] &= ((/* implicit */unsigned char) (((((~(2096932781))) + (2147483647))) << (((((((/* implicit */_Bool) arr_1 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_2 - 1] [i_2 - 1]))) : (arr_15 [1U] [i_4]))) - (22LL)))));
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (-6210584152254830953LL))))));
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(arr_1 [i_2 + 1]))))));
                }
                var_27 = ((/* implicit */unsigned short) (signed char)0);
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    for (signed char i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            arr_28 [(short)10] [i_3] = ((/* implicit */int) arr_26 [i_8] [i_2 + 1] [i_2 + 1] [i_2 + 1]);
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 2) 
                            {
                                arr_33 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2]);
                                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) arr_0 [i_2 - 1]))));
                            }
                            /* vectorizable */
                            for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
                            {
                                arr_38 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) -2697635270125440350LL);
                                var_29 = ((/* implicit */int) (~(arr_13 [i_2] [i_2 - 1] [i_2 + 1])));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_30 = ((/* implicit */unsigned long long int) (~(max((max((var_9), (var_11))), (min((var_13), (((/* implicit */unsigned int) var_16))))))));
}
