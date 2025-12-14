/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89998
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
    var_15 |= var_8;
    var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_11)))))))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) max((((/* implicit */long long int) ((arr_1 [i_0] [i_1 + 1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)126)))))), ((~(arr_1 [i_1] [i_1 - 1]))))))));
                var_18 &= var_9;
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 21; i_3 += 2) 
                    {
                        {
                            var_19 &= ((/* implicit */short) (~(arr_3 [i_0])));
                            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_13))));
                        }
                    } 
                } 
            }
        } 
    } 
}
