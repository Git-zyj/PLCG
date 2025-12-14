/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80048
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((arr_6 [i_0] [i_1] [i_1]), (arr_5 [i_0] [i_0])))), (max((var_4), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    for (int i_3 = 4; i_3 < 9; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (unsigned char)45)), (-8498528043129999810LL))), (((/* implicit */long long int) max((arr_11 [i_3] [i_3] [i_3 + 3] [i_0]), (((/* implicit */int) var_9)))))));
                            var_12 = ((/* implicit */short) max((805801596), (((/* implicit */int) (short)-4945))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 += ((/* implicit */long long int) var_6);
}
