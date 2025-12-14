/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84574
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_11 = (max((!12900284826096451107), (((arr_1 [i_0] [i_0]) < (arr_1 [i_0] [i_0])))));
        var_12 = (min(var_12, ((max((min(((var_0 ? 12900284826096451096 : -1)), ((min((arr_0 [i_0]), (arr_2 [i_0] [i_0])))))), (((!(arr_0 [i_0])))))))));
        var_13 = 12212373300855920489;
        var_14 &= ((-5546459247613100511 / ((((262143 ? var_6 : 12212373300855920498))))));
        arr_3 [i_0] [i_0] = 6245575170270428042;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {
        arr_6 [16] = (!var_10);
        arr_7 [i_1] = var_10;
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {
                    {
                        var_15 = ((!(arr_12 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1])));
                        arr_15 [i_2] [i_3 + 2] [i_2 + 2] [i_2] = ((!((((arr_14 [i_1] [i_2] [i_3 + 1] [i_4]) ? (arr_14 [i_1] [i_2] [i_3] [i_4]) : (arr_5 [i_3]))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        var_16 *= (((0 ? var_1 : 12900284826096451107)));
        arr_18 [i_5] [i_5 - 1] = ((((arr_16 [i_5]) & (arr_17 [22] [i_5]))) != (arr_17 [i_5 - 1] [i_5 - 1]));
    }
    var_17 = ((((-(max(-6891941476041901292, -6245575170270428043)))) >= ((var_0 ? -81 : -1))));
    var_18 = (max(var_18, (((~(var_6 ^ var_4))))));
    #pragma endscop
}
