/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96883
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (signed char i_3 = 2; i_3 < 13; i_3 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */int) arr_4 [i_2] [i_1] [i_2] [i_0]);
                            var_21 *= ((/* implicit */signed char) (-(max((12641585255491409243ULL), (5805158818218142375ULL)))));
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-100)) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)19048)))))));
                        }
                    } 
                } 
                arr_8 [i_0] = ((/* implicit */unsigned int) ((12641585255491409244ULL) * (((/* implicit */unsigned long long int) (~(((((/* implicit */unsigned int) var_18)) - (1315196695U))))))));
            }
        } 
    } 
    var_23 = 5805158818218142392ULL;
}
