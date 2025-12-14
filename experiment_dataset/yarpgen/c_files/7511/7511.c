/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7511
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_10;
    var_19 = var_17;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_20 = (!3085);
        arr_3 [16] = 8761;
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_7 [20] |= (!1);
        arr_8 [14] [4] &= (((((62452 <= (!var_6)))) << (((arr_4 [4]) - 11888))));
        var_21 = 45615;
        var_22 = (max(var_22, (1 == 207)));
    }
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = ((arr_2 [i_2] [i_2]) <= (arr_2 [i_2] [i_2]));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {

                    for (int i_5 = 1; i_5 < 13;i_5 += 1)
                    {
                        var_24 += (!(((+((((arr_19 [i_2] [i_2] [1] [i_2] [i_2] [i_2]) && var_11)))))));
                        arr_20 [i_4] [i_3 + 1] [i_2] = (((((arr_4 [i_2]) && (arr_4 [i_3]))) ? ((((arr_4 [i_3]) && 16863348137542025741))) : (((!(arr_4 [i_2]))))));
                        arr_21 [i_2] [1] [i_3] [1] [2] = (((!var_4) > var_16));
                    }
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {

                        for (int i_7 = 3; i_7 < 13;i_7 += 1)
                        {
                            var_25 = (min(var_0, 62457));
                            var_26 -= 923922833268941172;
                        }
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            arr_29 [4] [i_6] [i_4] = ((3101 | (arr_6 [i_6])));
                            arr_30 [i_2] [i_3] [i_4] [i_6] [9] [i_8] [i_8] = var_12;
                            arr_31 [10] [i_3] [i_6] [11] [1] = (arr_16 [i_4]);
                            var_27 = (min(var_27, ((((!-1) ? (arr_11 [i_3 - 1] [9]) : (((!(arr_16 [11])))))))));
                            arr_32 [i_2] [i_2] [i_6] [i_6] [1] = (!2147483637);
                        }
                        arr_33 [1] [i_6] [i_3] [i_4] [i_6] = (arr_16 [i_2]);
                    }
                    var_28 ^= (min((!var_13), var_6));
                }
            }
        }
        arr_34 [i_2] = (!92);
        var_29 -= ((45474 << (62452 - 62449)));
    }
    for (int i_9 = 1; i_9 < 16;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 4; i_11 < 15;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 18;i_12 += 1)
                {
                    {
                        var_30 ^= ((+((((min((arr_41 [i_9] [i_10] [i_11] [5]), var_17))) % var_8))));
                        var_31 = (min(var_31, ((((65535 % 4294967295) | 255)))));
                    }
                }
            }
        }
        var_32 += var_1;
    }
    var_33 *= var_4;
    #pragma endscop
}
