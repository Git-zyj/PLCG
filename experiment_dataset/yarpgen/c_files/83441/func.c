/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83441
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] = ((/* implicit */_Bool) 16773120U);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 2) 
                {
                    for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_12 [i_0] [i_1] [i_2] [i_2] [i_0] = (unsigned char)248;
                            arr_13 [i_0] [i_1] [i_1] [i_3] [i_3] = var_5;
                            arr_14 [i_1] [i_0] [i_1] [i_1] [i_2] [i_3] = (short)-4086;
                        }
                    } 
                } 
            }
        } 
    } 
    var_19 = ((/* implicit */short) (-(var_5)));
}
