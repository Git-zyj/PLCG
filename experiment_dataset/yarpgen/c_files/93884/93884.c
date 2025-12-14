/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_12));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_20 = (min(var_20, -6918169298280930278));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_21 -= min((186 / var_2), (-86 % -2564283923055513575));
                    arr_9 [i_0] [i_0 + 1] [i_1 + 1] [i_0] = (13728 / 2871500940863433008);
                    var_22 = (max(var_22, var_15));
                    var_23 = (max(var_23, ((max(var_17, -1808067712)))));
                }
            }
        }
    }
    #pragma endscop
}
