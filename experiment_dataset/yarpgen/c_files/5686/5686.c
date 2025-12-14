/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((((min(-126, var_13))) ? 0 : ((max(255, var_8)))))), var_3));
    var_18 = ((~(!126)));
    var_19 = var_0;
    var_20 = var_1;

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (arr_1 [10]);
        arr_3 [7] &= ((-(max((arr_0 [i_0]), var_10))));
        arr_4 [i_0] = ((+((((arr_0 [5]) < (((var_11 ? var_5 : 255))))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = ((-var_16 > (arr_0 [i_1])));
        arr_8 [i_1] = -1656161654;
        arr_9 [i_1] [i_1] = ((127 ? 5365559477826480548 : 4294967295));
        arr_10 [i_1] [i_1] = (arr_6 [i_1]);
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_21 = (max(var_21, ((((arr_1 [7]) & var_4)))));
        var_22 = (min((((!(~var_8)))), ((((min(var_16, var_15))) ? (min(0, 1656161654)) : var_12))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_23 = ((+(min((!var_9), var_7))));
        var_24 = (max(var_24, ((((((var_16 ? (arr_15 [8]) : var_16))) ? (((max(var_10, (arr_14 [20] [i_3]))))) : 13081184595883071067)))));
        arr_16 [i_3] [i_3] = ((((min(-46, 13081184595883071070))) ? (max(var_3, var_8)) : (arr_15 [i_3])));
        var_25 = (((((~var_11) | ((var_0 ? var_1 : (arr_15 [i_3]))))) - (~62)));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            arr_19 [i_3] [15] = (((var_11 ? -1656161655 : (arr_15 [i_3]))));
            arr_20 [i_3] [i_3] [i_3] = var_6;
        }
    }
    #pragma endscop
}
