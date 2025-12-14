/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        var_20 = (((((((arr_1 [i_0]) || (arr_1 [i_0]))) && 1856825271019043144)) ? ((var_18 ? -24377 : (((var_10 || (arr_1 [11])))))) : -24401));
        arr_2 [i_0] = 24601;
        var_21 = arr_0 [i_0 + 1];
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 22;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1 + 1] [i_1] = 8082844651636716809;
        arr_6 [14] [i_1 + 2] = (arr_4 [i_1 + 1]);
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                {
                    arr_13 [i_1] = (((arr_12 [i_1 + 1] [i_3]) ? (arr_8 [i_2 + 1]) : (((((arr_3 [i_3]) > var_3))))));
                    arr_14 [i_1 + 2] [4] [i_1 - 1] = (((((arr_8 [i_1]) ^ -11424)) / ((((24377 < (arr_8 [i_2])))))));
                }
            }
        }
        var_22 &= -57;
        arr_15 [i_1] = -57;
    }
    for (int i_4 = 1; i_4 < 22;i_4 += 1) /* same iter space */
    {
        var_23 = var_2;
        var_24 = -11408;
    }
    var_25 = (!(((11407 / (((var_15 ? var_6 : var_9)))))));
    var_26 = var_12;
    var_27 = (((~-13118) >> 1));
    #pragma endscop
}
