/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96521
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
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 21; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    for (signed char i_3 = 1; i_3 < 22; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) arr_4 [i_4]);
                                arr_11 [i_2] = ((/* implicit */unsigned short) arr_5 [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) max((max((((/* implicit */unsigned short) (unsigned char)94)), ((unsigned short)11781))), (((/* implicit */unsigned short) min(((_Bool)1), (arr_3 [i_0] [i_0])))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) var_2);
}
