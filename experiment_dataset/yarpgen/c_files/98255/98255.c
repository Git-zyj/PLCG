/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(var_17, var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [5] = (max((max((((arr_0 [i_0]) ? (arr_3 [i_1]) : var_0)), var_11)), ((((((4294967295 ? (arr_5 [i_0] [i_0 - 2] [i_0]) : 3547470015))) ? (1 >= 1) : (((arr_0 [i_0]) * 520093696)))))));
                var_18 = (min((max(2950309448345052355, (((var_1 * (arr_0 [i_0])))))), -415490745));
                var_19 = (min(var_19, (((250 ? (((arr_0 [i_1]) * (arr_2 [i_1] [i_1]))) : (arr_2 [i_1] [i_1]))))));
                var_20 -= max((((!(arr_5 [i_0] [i_0 - 3] [10])))), (max((arr_5 [i_0] [i_0 - 2] [2]), (arr_5 [i_0 + 1] [i_0 + 1] [i_0]))));
            }
        }
    }
    var_21 ^= -2126;
    #pragma endscop
}
