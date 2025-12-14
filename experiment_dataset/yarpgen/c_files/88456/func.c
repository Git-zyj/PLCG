/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88456
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
    var_11 &= ((/* implicit */long long int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 15; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? (arr_3 [i_1]) : (((/* implicit */long long int) arr_0 [i_0 + 1]))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_13 = ((/* implicit */short) 2038872152U);
                        var_14 = ((/* implicit */unsigned long long int) arr_4 [i_0 - 2] [i_0] [i_0 - 2]);
                        arr_11 [i_0 + 2] [i_0] [i_0 - 3] [i_3] = ((/* implicit */_Bool) arr_9 [(signed char)7] [i_3] [(unsigned char)3] [i_1] [(signed char)2]);
                    }
                    var_15 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32764)) ? (2776828460U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0 + 1] [i_1])))));
                    arr_12 [i_0 + 1] [15U] [5U] [i_0] = ((/* implicit */_Bool) 1518138824U);
                    arr_13 [(unsigned short)4] [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_1)))) == (0U)));
                }
                var_16 = ((/* implicit */unsigned int) ((short) (((!(((/* implicit */_Bool) 4294967295U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) var_5)))))) : (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_0 - 3]) : (4294967295U))))));
            }
        } 
    } 
}
