/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((max(230, var_9)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_18 = (max(((244 ? 12760458075942643392 : (11980709810298361592 % 14))), (((63 ? 0 : 19)))));
                arr_4 [i_0] [i_0] = ((58 ? 4294967271 : 3208963109));
            }
        }
    }
    var_19 = (~-var_2);
    var_20 = max((((var_2 != ((min(var_6, 0)))))), (min((var_7 / var_12), (!var_12))));
    var_21 = (max(var_21, (((((4 >> (1 % var_3))) % 2022211913)))));
    #pragma endscop
}
