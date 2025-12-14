/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95217
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95217 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95217
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
    var_19 |= var_18;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_20 *= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) arr_0 [(short)0])))))), (((unsigned int) arr_2 [i_0 - 1]))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_21 &= ((/* implicit */short) 268435200);
            var_22 = ((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1 + 1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_7 [i_0 + 1] [i_1] [(_Bool)1]))));
                /* LoopSeq 1 */
                for (short i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) 3821169848U);
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((arr_8 [i_0] [i_1]) + (996409235412371075ULL))))));
                }
            }
        }
        var_25 |= ((/* implicit */unsigned long long int) var_13);
    }
}
