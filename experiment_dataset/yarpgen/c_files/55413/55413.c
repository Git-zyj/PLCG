/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((~((0 ? (arr_0 [i_0] [i_0]) : (16 + 62156)))));
        arr_3 [i_0] = ((((((arr_1 [i_0 - 2]) ? var_2 : 55079))) ? var_1 : 242));
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1) /* same iter space */
    {
        var_11 = (min(var_11, (!3388)));
        arr_6 [i_1] = ((((((0 ? var_7 : 175))) ? 62148 : 239)));
        var_12 = ((((92 ? 137 : 229)) > (((((var_6 ? 255 : 151)) >= 17)))));
    }
    for (int i_2 = 2; i_2 < 18;i_2 += 1) /* same iter space */
    {
        var_13 = (min(var_13, 0));
        arr_10 [i_2 - 1] = (((arr_9 [i_2 - 1]) ? (min(((min(6, 0))), 16)) : ((20 ? ((min(var_3, 65516))) : var_7))));
        arr_11 [i_2] = 3388;
        var_14 |= max((~var_6), ((0 | (arr_8 [i_2 + 1]))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1) /* same iter space */
    {
        arr_16 [6] [i_3] = arr_12 [i_3 + 1];
        var_15 *= (((arr_0 [i_3] [i_3]) * 155));
        var_16 = 80;
        var_17 = (min(((((arr_12 [i_3 + 1]) || (arr_12 [i_3 - 2])))), ((-62155 ^ (arr_14 [i_3])))));
    }
    var_18 = (((((27 ? (155 && 80) : 31))) ? 192 : 20));
    #pragma endscop
}
