/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9092
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = ((2095260144 == 2187660038) ? (arr_1 [i_0]) : (arr_0 [i_0]));

        for (int i_1 = 1; i_1 < 1;i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] [i_0] |= (((((2187660027 ? 2107307245 : (2187660055 * 1)))) ? (min((arr_0 [i_1 - 1]), 471914585)) : (((-((max(1, (arr_1 [24])))))))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_12 = max((1287923416 ^ 4294967295), (((2187660050 && 2107307265) ? 2107307270 : 2187660058)));
                        arr_11 [i_0] [i_2] [i_0] [i_3 - 1] = min((min((arr_10 [i_3] [i_3] [i_3] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_3 - 1] [9] [22] [i_3 - 1]))), ((256990388 ? 10 : 2560515293)));
                    }
                }
            }
        }
        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_0] [i_4] = ((!(((+(((arr_9 [1] [1]) / var_2)))))));
            arr_15 [i_0] [1] [1] = (min(((((min((arr_13 [i_0]), 4294967279))) ? (arr_8 [1] [i_4] [i_4] [i_4]) : 2107307246)), (min(((var_10 ? 2187660064 : (arr_3 [i_0] [22]))), (var_4 & 1)))));
            var_13 = 2187660062;
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_14 = (arr_1 [i_5]);
        var_15 = ((((min(2187660067, (arr_2 [i_5])))) ? (((arr_8 [1] [1] [1] [i_5]) ? 1079758709 : 1)) : ((((((var_9 ? (arr_13 [i_5]) : 2422221420)) < 1))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        var_16 = (arr_6 [1] [i_6] [i_6]);
        arr_21 [12] = (arr_12 [i_6] [1] [i_6]);
    }
    var_17 = (min(var_17, (((((max((min(2677425219, 2677425203)), 2187660050))) ? ((((!(((1 ? 2107307230 : 2187660061))))))) : ((var_9 ? ((1 ? var_5 : 2187660065)) : var_6)))))));
    var_18 = (((((((2187660040 ? var_8 : var_9))) * var_10))) ? (((1 ? 3011079412 : 1))) : var_6);
    var_19 = (((((2187660069 < ((1 ? 474780298 : 1)))))) == var_6);
    #pragma endscop
}
