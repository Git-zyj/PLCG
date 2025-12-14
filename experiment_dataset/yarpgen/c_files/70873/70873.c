/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (((63545 ^ 242) ? (min((max(753195400, (arr_1 [i_1]))), ((max((arr_4 [i_0] [i_0] [i_2]), var_10))))) : ((((arr_0 [i_1]) % (arr_0 [i_1]))))))));

                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            arr_12 [i_0] [i_0 - 1] [i_1] [i_0] [i_3] [i_4] = (((arr_11 [i_0] [i_1] [i_0 - 1] [14] [i_0] [i_4] [i_2]) ? (arr_5 [i_4] [i_3 + 1] [i_2] [i_1]) : ((var_6 ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_3 - 1] [i_4]) : 2198736463281307869))));
                            var_12 = var_10;
                        }
                        for (int i_5 = 0; i_5 < 15;i_5 += 1)
                        {
                            var_13 *= (min((!-6526335053155465881), (((arr_7 [i_0 - 1] [i_0 - 1] [i_5] [i_3 + 1]) > 16248007610428243729))));
                            var_14 = var_1;
                        }
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            var_15 ^= (((arr_13 [2] [i_1] [3] [i_3 - 1] [i_1] [i_6]) ? var_4 : 2147483643));
                            arr_20 [1] [i_3] [i_0] [i_0] [1] [i_0] = (arr_4 [i_0] [i_0] [i_6]);
                            var_16 = 2429737496;
                            arr_21 [i_0] = ((var_9 ? 6526335053155465881 : (((5963 + (((arr_9 [i_0] [i_1] [i_0]) << (((arr_5 [i_1] [i_1] [i_1] [i_1]) - 65184)))))))));
                        }

                        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_17 = (!16040606924379310879);
                            var_18 = ((+((((arr_4 [1] [i_3 - 1] [i_0 - 1]) || 61529)))));
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
                        {
                            var_19 = (max(var_19, ((max((arr_6 [i_2] [i_1]), -1834)))));
                            var_20 = (((~2406137149330240736) ^ var_2));
                            arr_26 [i_2] [i_1] [i_0] = ((((((arr_5 [i_0 - 1] [i_1] [i_3 + 1] [i_0 - 1]) / (arr_6 [i_3 - 1] [i_1])))) ? (((arr_5 [1] [i_1] [i_3 + 1] [i_0 - 1]) / (arr_5 [i_0] [i_1] [i_3 + 1] [i_0 - 1]))) : (var_1 / 4006)));
                        }
                        arr_27 [i_0] [4] [i_2] [i_2] = var_3;
                        var_21 ^= (min((((!(~-32562)))), (arr_9 [i_0 - 1] [i_1] [i_2])));
                    }
                    for (int i_9 = 0; i_9 < 0;i_9 += 1)
                    {
                        var_22 = (min(var_22, var_2));
                        var_23 *= var_9;
                        var_24 *= 242;
                    }
                    arr_30 [i_0] [i_1] [i_2] |= var_3;
                    arr_31 [i_0] [i_0] [1] = (((((-31 & (((arr_0 [i_0]) << 0))))) ? (var_1 || 16040606924379310879) : (((arr_22 [i_0] [i_0 - 1] [i_0 - 1]) / (arr_22 [i_0] [i_0 - 1] [i_0 - 1])))));
                }
            }
        }
    }

    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        var_25 = (~90);

        for (int i_11 = 0; i_11 < 12;i_11 += 1)
        {
            arr_38 [i_11] [i_11] [i_10] = (max(((((arr_37 [i_10]) != var_2))), var_1));
            var_26 = (max(var_26, (((var_5 ? (~4011) : -var_8)))));
        }
        var_27 = (max(var_27, 16248007610428243736));
    }
    #pragma endscop
}
