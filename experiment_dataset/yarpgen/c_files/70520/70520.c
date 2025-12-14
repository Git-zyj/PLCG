/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70520
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_10;
    var_13 = var_8;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_14 = (max(var_14, ((min(44468170, -2050911490)))));
        var_15 = var_2;
        var_16 = (max((((-((-(arr_3 [i_0])))))), ((((max((arr_0 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) : (arr_3 [i_0])))));
        arr_4 [i_0] [i_0] = 2720888952;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 9;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    arr_14 [i_2] = (arr_2 [i_2]);
                    arr_15 [i_1] [i_2] = (arr_2 [i_1 - 1]);
                    var_17 = (((arr_9 [i_1 + 1]) ? ((((arr_6 [i_1 - 1]) ? (arr_6 [i_2]) : -44468171))) : 0));
                }
            }
        }
        arr_16 [i_1] [i_1] = (arr_1 [i_1 - 1] [i_1]);
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        var_18 = 17000;
        var_19 = (min(var_19, (((0 ? 220 : 0)))));
        var_20 = 8;
    }
    #pragma endscop
}
