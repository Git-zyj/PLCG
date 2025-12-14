/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? (min(var_11, (((var_7 ? -1347486214 : var_3))))) : ((var_7 ? var_8 : -var_10))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_13 = -var_1;

                for (int i_2 = 3; i_2 < 23;i_2 += 1)
                {
                    var_14 -= (min(((((min(var_11, var_10))) ? (!var_3) : (min(var_3, (arr_2 [6] [6]))))), var_4));
                    var_15 = (max(var_15, ((((((min(var_4, 1347486216)) << (-var_8 - 56)))) ? ((((min(var_6, var_11))) ? var_6 : var_6)) : (arr_6 [i_0 + 1])))));
                }
                var_16 = min((((((arr_4 [i_1] [i_0] [i_0]) ? var_7 : 1347486211)) ^ ((var_1 ? var_11 : 5)))), (~var_8));
                var_17 = ((((min((arr_0 [i_0 + 1]), (arr_0 [i_0 + 2])))) + var_9));
            }
        }
    }
    #pragma endscop
}
