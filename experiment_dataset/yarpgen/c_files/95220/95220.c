/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, (((((arr_2 [i_0]) | (arr_4 [i_1] [i_2 + 1])))))));
                    var_18 = arr_8 [i_0] [i_1] [6] [i_0];
                }
            }
        }
    }
    var_19 = (((((~var_7) == (var_3 | var_10))) ? var_9 : (min((~var_15), 30503))));
    var_20 = (max(var_20, var_6));

    for (int i_3 = 2; i_3 < 14;i_3 += 1)
    {
        var_21 = (min(((((25510 ? (arr_12 [14]) : (-32767 - 1))) + (arr_10 [i_3]))), ((min((-32767 - 1), (-32767 - 1))))));
        var_22 = (-((((-(arr_9 [i_3]))))));
        var_23 = ((~(((arr_9 [i_3]) | (((((-32767 - 1) <= -32755))))))));
    }
    #pragma endscop
}
