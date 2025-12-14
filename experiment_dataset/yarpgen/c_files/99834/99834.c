/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1 - 1] = (arr_2 [i_0] [i_0]);
                var_10 = ((((min((arr_3 [i_1 - 1]), var_9))) ? ((-((36592 ? -32173 : -16965)))) : -32196));
            }
        }
    }
    var_11 = -33;
    var_12 = (((((~((36592 ? 3994 : 32161))))) ? ((((min(var_4, var_6)) || (((105 ? 26579 : 1)))))) : (((54 < 1) ? ((min(var_4, var_3))) : ((var_8 ? var_4 : var_4))))));
    #pragma endscop
}
