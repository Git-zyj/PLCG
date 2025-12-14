/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95550
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
    var_17 += (~(2950564253U));
    var_18 = ((/* implicit */_Bool) var_13);
    var_19 = ((/* implicit */_Bool) (+(var_6)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        var_20 += ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_2 [i_0])) * (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) arr_0 [i_1 - 1] [i_1 - 1]);
                                var_22 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                            }
                        } 
                    } 
                    var_23 |= ((/* implicit */short) (~(arr_1 [i_1 - 1])));
                }
            } 
        } 
    }
}
