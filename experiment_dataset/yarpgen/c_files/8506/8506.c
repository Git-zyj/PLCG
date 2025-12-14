/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (max((!var_11), -23980));
        arr_3 [12] = (((((max(15, 0))) ? 1 : 1)));
        arr_4 [i_0] = ((min(31, (arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((-(((arr_0 [i_0] [i_0 + 2]) ? (arr_0 [i_0] [i_0 + 1]) : (arr_0 [i_0] [i_0 + 1])))));
        arr_6 [i_0] = (arr_0 [i_0] [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_9 [0] = 29589;
        arr_10 [i_1] = ((((var_11 ? (arr_1 [i_1]) : (arr_7 [i_1] [i_1]))) * (arr_7 [i_1 + 2] [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 17;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [i_2] &= 1;
        arr_14 [i_2] = (((((arr_7 [16] [0]) && (arr_12 [i_2] [i_2 - 1]))) || ((((arr_8 [i_2]) ? (arr_1 [i_2 + 2]) : (arr_11 [5] [5]))))));
        arr_15 [i_2 + 1] = (arr_7 [i_2] [14]);
        arr_16 [8] = (arr_0 [0] [i_2 + 2]);
    }
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            {
                arr_21 [i_3] [2] [i_4] = ((((!(!0))) ? (arr_11 [i_3] [i_4]) : (arr_18 [i_3] [i_4])));
                arr_22 [i_3] [i_4] [i_4] = (arr_20 [i_3] [i_4]);
            }
        }
    }
    #pragma endscop
}
