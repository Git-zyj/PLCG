/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96044
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_5));
    var_11 |= ((((-((var_4 ? var_3 : 268435455))))) ? var_5 : ((-var_3 ? ((-4939157405622154416 ? var_3 : 6696169634064219522)) : var_7)));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_13 = var_3;
                    var_14 = (((((((arr_3 [i_2] [i_1 - 1]) + 2147483647)) << (((((arr_3 [i_2] [i_1 - 1]) + 29857)) - 25))))) ? (((arr_4 [i_0 + 3]) ? var_1 : ((var_9 ? var_8 : var_8)))) : (((((var_6 ? var_7 : (arr_4 [i_2])))) ? var_6 : 4939157405622154410)));
                }
            }
        }
    }
    var_15 = var_2;
    #pragma endscop
}
