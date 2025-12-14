/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87498
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87498 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87498
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((((max(0, var_0))) / ((var_0 ? var_3 : 153)))) >> (((var_0 | var_7) - 143))));
    var_21 = (((153 ? 134 : 0)) + ((var_1 ? ((var_3 ? var_4 : var_9)) : var_13)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (min(((min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))), ((546996419 ? 0 : 0))));
        var_23 = ((13848406348402380153 ? (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : var_10)) : (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                {
                    var_24 |= (((arr_4 [i_1] [i_2]) ? (min((arr_3 [i_1 - 1] [i_2]), (((arr_5 [0] [i_2 - 1]) ? (arr_6 [i_3]) : var_17)))) : ((max((max((arr_0 [i_1] [i_2 - 2]), var_19)), (((var_16 >= (arr_7 [i_1])))))))));
                    arr_9 [i_3] [4] [i_2 - 2] [i_1] = ((-(((arr_5 [i_1 + 1] [i_2 - 1]) ? (arr_5 [i_2] [4]) : var_9))));
                }
            }
        }
        var_25 += var_17;
        var_26 &= (~124);
        var_27 = (((arr_3 [i_1] [i_1]) << ((((max(var_0, (arr_4 [i_1] [i_1 + 1])))) - 169))));
    }
    for (int i_4 = 1; i_4 < 18;i_4 += 1)
    {
        arr_12 [i_4] = (min(-4759598792951326652, 3854496931));
        arr_13 [i_4] = (((((17622110109810945546 ? 7 : (arr_10 [i_4 - 1])))) ? (((1436335445 <= (arr_11 [i_4 - 1])))) : ((min((arr_10 [i_4 - 1]), 224)))));
        var_28 = (((arr_11 [i_4 + 1]) * (arr_11 [i_4])));
        arr_14 [i_4] [i_4] = (arr_10 [i_4 + 1]);
        arr_15 [i_4] = 358111355;
    }
    #pragma endscop
}
