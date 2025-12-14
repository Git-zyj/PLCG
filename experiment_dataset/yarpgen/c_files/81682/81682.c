/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81682
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81682 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81682
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 17926911513864143725;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, (((!(arr_1 [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((-191 && ((((arr_4 [i_1]) ? (arr_9 [i_0] [i_2] [i_2] [i_1]) : (arr_0 [i_0]))))));
                        var_18 += ((1539957615 ? -var_8 : var_1));
                    }
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        arr_18 [i_4] [i_2] [i_2] [i_2] [i_0] = ((!(((~(arr_6 [i_0]))))));
                        var_19 += (!-16383);
                    }
                    var_20 = (((((arr_7 [6]) ? (arr_7 [i_2]) : var_10)) ^ -1));
                    var_21 &= ((!((((arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]) ? (arr_12 [i_0]) : (arr_6 [i_0]))))));
                }
            }
        }
        arr_19 [i_0] = ((~((30 ^ (arr_4 [i_0])))));
        arr_20 [i_0] = (((((arr_6 [i_0]) + 30)) << (((255 | 56) - 247))));
        arr_21 [i_0] = ((~(arr_2 [i_0])));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        arr_25 [0] &= (((arr_23 [14] [0]) > (arr_22 [i_5] [i_5])));
        var_22 = var_5;
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        arr_29 [i_6] &= ((10 / (-2147483647 - 1)));
        var_23 = ((-(arr_22 [i_6] [i_6])));
        /* LoopNest 2 */
        for (int i_7 = 1; i_7 < 18;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    var_24 = -var_8;
                    arr_35 [i_6] [5] = (((arr_28 [i_8]) ? var_0 : ((var_3 / (arr_22 [i_8] [i_6])))));
                }
            }
        }
    }
    var_25 = ((((((var_1 >= -1632276977143566481) ? (max((-32767 - 1), var_7)) : var_10))) || ((max((!var_11), ((var_1 ? var_8 : 2147483647)))))));
    #pragma endscop
}
