/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98316
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
    var_11 = ((/* implicit */long long int) var_4);
    var_12 = ((/* implicit */_Bool) (~(((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_9)))) | (((/* implicit */int) var_1))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_13 = var_8;
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) ((unsigned long long int) (signed char)127));
                            arr_10 [i_1] [i_1] [i_2] [i_1] [i_2] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)-98)) <= (((/* implicit */int) (short)768))));
                        }
                    } 
                } 
            }
        } 
    } 
}
