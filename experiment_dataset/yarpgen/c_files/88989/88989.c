/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88989
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, 3698594359725129113));

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [0] [i_0] = 2807399670120977425;
        arr_3 [i_0] = 0;
        arr_4 [i_0] = (-127 - 1);
        arr_5 [i_0] = 0;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_12 = var_4;
        arr_8 [12] = 0;

        for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                arr_16 [1] [11] = var_3;
                arr_17 [i_1] [i_2] [i_1] [i_3] = var_7;
                var_13 = 21;
            }
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        var_14 += 1099511627775;
                        arr_23 [i_1] [14] [14] = -1;
                        arr_24 [i_5] [i_2] [9] [i_4] [i_2] [i_1] = 18446744073709551601;
                        var_15 = var_4;
                        var_16 = 576460752303423488;
                    }
                }
            }
            var_17 = var_10;
            arr_25 [i_1] = var_10;
        }
        for (int i_6 = 0; i_6 < 15;i_6 += 1) /* same iter space */
        {
            arr_30 [i_1] [i_1] [i_6] = 4294967288;
            var_18 ^= 61222;
            var_19 = 107;
        }
        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_20 = var_9;
            arr_33 [i_1] = 1;
            var_21 = var_9;
            arr_34 [i_1] [i_7] [i_1] = var_2;
            var_22 = (min(var_22, var_4));
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        arr_37 [i_8] = var_2;
        var_23 &= -35;
        arr_38 [i_8] |= var_0;
        var_24 = (-127 - 1);
    }
    #pragma endscop
}
