/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90788
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
    var_19 *= ((/* implicit */short) (-(((/* implicit */int) var_18))));
    var_20 *= ((/* implicit */short) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            var_21 ^= arr_4 [i_0 - 1];
            var_22 = ((/* implicit */long long int) (((~(arr_2 [i_0] [i_0] [i_0]))) != (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 2147483647))))));
            var_23 = ((/* implicit */int) (((+(2147483647))) < (((/* implicit */int) var_18))));
            var_24 = ((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (((((/* implicit */_Bool) (short)-32765)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (unsigned short)4095)))) : (((/* implicit */int) ((short) arr_2 [i_0 + 1] [i_0 + 1] [i_0]))));
        }
        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */int) arr_4 [i_0])) : (130560))) : (((/* implicit */int) arr_1 [i_0] [3ULL])))))));
        /* LoopNest 2 */
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                {
                    var_26 = ((/* implicit */long long int) min((var_26), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_0 - 1] [i_0 - 1])) ? (arr_10 [i_0] [i_0] [i_0 - 1] [i_3]) : (arr_10 [i_0] [(short)3] [i_0 - 1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            {
                                arr_16 [(short)2] [i_2] [i_3] [i_4] [i_5] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */int) arr_1 [9] [9])) : (arr_11 [i_3] [i_2])))));
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_12 [i_0 + 1]) : (((/* implicit */int) arr_13 [i_5 - 1] [i_5 - 2] [i_5 - 4] [i_0 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_28 *= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned short)17)) ? (2147483647) : (arr_10 [i_0] [i_2] [i_3] [i_3])))));
                }
            } 
        } 
    }
}
