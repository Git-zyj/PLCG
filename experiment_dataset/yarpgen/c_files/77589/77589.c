/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [0] = (((((arr_1 [i_0]) ? (!8) : ((~(arr_0 [20])))))) ? var_3 : ((((var_2 > (arr_1 [i_0]))))));
        arr_3 [i_0] = (max(((-8 ? (((2 ? 0 : 243))) : 0)), ((max((var_12 | var_9), (!185))))));
        var_19 = (min(((max((arr_1 [i_0]), (((arr_1 [11]) ? var_14 : var_3))))), ((71 ? ((18446744073709551615 ^ (arr_1 [i_0]))) : (((19 ? var_14 : (arr_1 [i_0]))))))));
        var_20 = 0;
        arr_4 [9] [i_0] = (min((arr_1 [16]), (((arr_1 [i_0]) | ((var_3 ? 38 : var_4))))));
    }
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        var_21 = min(var_18, (((((~(arr_5 [3] [3])))) ? ((min((arr_5 [i_1] [0]), (arr_5 [i_1] [i_1])))) : (arr_6 [i_1] [5]))));
        arr_7 [i_1] = (max((~45), ((((-1993809608 ^ (arr_5 [i_1] [6]))) | var_15))));
    }
    var_22 = ((~(((((var_10 ? 70 : -2035759620815859521))) ? (min(var_11, var_4)) : (~var_3)))));
    var_23 = (~var_4);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 19;i_3 += 1)
        {
            {
                arr_14 [i_3] [i_2] = (((~-951229612920081549) ? ((max(var_10, (((63 ? var_6 : var_6)))))) : ((-(max(-60, var_1))))));
                arr_15 [i_3] = ((-(((77 ^ var_10) % (arr_8 [i_3 + 1])))));
            }
        }
    }
    #pragma endscop
}
