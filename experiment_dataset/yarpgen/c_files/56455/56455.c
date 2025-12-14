/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_11 = ((7817955803336597425 * (max(var_8, (arr_0 [i_0] [i_0])))));
        arr_2 [i_0] = (((((~((var_0 ? var_3 : var_2))))) ? (arr_0 [i_0] [i_0]) : var_2));
    }
    var_12 = var_4;
    var_13 = (((((min(var_0, var_6))) ? (((max(var_5, var_10)))) : (min(8284430054778677063, 34985)))));
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            {
                var_14 = (min(var_14, ((((((!(arr_5 [i_1 - 1] [8])))) ? 7817955803336597406 : ((((max(0, 0))))))))));
                var_15 = ((max(var_0, (~var_7))));
            }
        }
    }
    #pragma endscop
}
