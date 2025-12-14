/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_0] = ((min(6251902660060631175, var_17)));
                var_19 = ((((-(((arr_0 [i_0]) ? -6251902660060631188 : (arr_5 [i_0]))))) != ((min((((arr_5 [i_0]) - (arr_0 [i_0]))), -var_8)))));
                arr_9 [i_0] [11] [i_1] = ((((7 ? 1 : 1))) * (((arr_1 [i_0]) ? 6251902660060631180 : (arr_1 [i_1]))));
                var_20 = ((+(((((arr_6 [i_0] [i_1]) * 46))))));
            }
        }
    }
    var_21 = (max(var_21, (((((~((var_8 ? var_4 : var_1)))) >> (-63 + 77))))));
    #pragma endscop
}
