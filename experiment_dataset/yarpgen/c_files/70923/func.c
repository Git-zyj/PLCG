/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70923
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
    for (long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_12 += ((/* implicit */signed char) (!(((((/* implicit */int) (signed char)(-127 - 1))) > (((/* implicit */int) (unsigned char)190))))));
                                arr_13 [i_0] [i_0] [i_1] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_0 - 1] [i_0])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1] [i_0 + 1] [i_0 + 1]))))) : (((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_1] [(signed char)5] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_1] [i_0] [i_0]))))));
                            }
                        } 
                    } 
                    var_13 *= (+(((unsigned long long int) 1206739924)));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_6) & (((/* implicit */long long int) ((/* implicit */int) ((512ULL) > (18446744073709551593ULL))))))))));
}
