/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_9, ((((min(var_6, 6144))) ? 0 : ((var_9 ? 122 : var_8))))));

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] = max((101 - 1610679992), 25886);
        var_12 = -2071;
        arr_3 [i_0] = ((-var_9 / ((((max(8444, 1740672118))) % -5881014643854472686))));
    }
    for (int i_1 = 2; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            var_13 = (arr_5 [i_1]);
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    {
                        var_14 = ((((((((50537 ? 1 : 0))) ? var_0 : (9465834156003109337 + 7900296601822964192)))) ? ((((((arr_5 [i_3]) + (arr_1 [i_2])))) ? ((min(var_7, (arr_1 [2])))) : (~1))) : (((((0 ? 126 : 32525)) > 9)))));
                        arr_14 [i_1] [i_2] [i_3 + 2] [i_3 + 2] [i_3 + 1] = 10;
                    }
                }
            }

            /* vectorizable */
            for (int i_5 = 1; i_5 < 16;i_5 += 1)
            {
                var_15 = 2531246477;
                arr_17 [i_1 - 2] [i_5] = (((~-32754) ? -29409 : (arr_0 [i_5])));
            }
            for (int i_6 = 4; i_6 < 15;i_6 += 1)
            {

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    var_16 -= (max((((-((var_10 ? 65533 : (arr_10 [i_1 - 2] [i_6])))))), -27452003456909634));
                    arr_23 [1] [i_2 + 1] [i_7] [11] = var_5;
                }
                arr_24 [i_6 + 1] [i_2 - 2] [i_1] = (max((var_5 < var_7), ((!(arr_20 [i_1 + 2] [10] [i_2] [i_6])))));
                arr_25 [i_6 - 1] = (((((133693440 ? var_6 : 24483))) ? (((arr_7 [i_6 - 2]) ? (arr_7 [i_6 - 4]) : (arr_9 [i_2 + 1]))) : ((((9223372036854775807 ? var_2 : (arr_7 [i_2])))))));
                arr_26 [i_1] [i_1] [i_1] = ((((((arr_8 [i_2 + 1] [i_2 - 1]) ? (arr_8 [i_2] [i_2 + 1]) : (arr_8 [i_2] [i_2 - 1])))) ? (arr_12 [i_1] [i_2 + 1] [i_6 - 3] [i_6] [i_6 - 4]) : (((arr_21 [i_1] [i_1 + 2] [i_1] [i_6]) ? var_4 : (arr_13 [i_1 - 1] [i_6] [i_2] [16] [i_1 - 1])))));
            }
            arr_27 [12] [i_2 - 1] = 1;
            var_17 &= ((~(~-2044)));
        }
        var_18 -= 65535;
        var_19 = -23081;
        arr_28 [i_1] [i_1 - 2] = (arr_10 [i_1] [i_1 + 1]);
    }
    var_20 = var_3;
    #pragma endscop
}
