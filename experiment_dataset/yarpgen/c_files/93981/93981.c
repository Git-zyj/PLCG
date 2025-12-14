/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_11 = var_0;
                arr_4 [i_1] = var_10;
            }
        }
    }
    var_12 = var_10;
    var_13 = var_10;
    var_14 = var_2;
    var_15 = ((var_10 ? (((!1457587354) ? (4036006770 & -1457587355) : -78)) : ((((!(((var_0 ? 2325635126804870513 : var_1)))))))));
    #pragma endscop
}
