/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((-((var_8 / ((4183344059 ? var_1 : 8503695026799441117))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_1] = (min(((((arr_1 [i_0]) + 58503))), (((~(((arr_0 [i_1]) ? (arr_2 [i_0]) : (arr_1 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = var_8;
                var_19 = (((-29085 | 32749) <= 1));
                arr_7 [i_0 - 1] = ((((min(7032, 1))) ? (min(4470459484789482325, 2687214558893535161)) : ((~((~(arr_0 [i_1])))))));
            }
        }
    }
    #pragma endscop
}
