/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_4;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0 - 1]);
        var_12 = (arr_0 [i_0]);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_0] = var_7;
                        arr_12 [i_2] [10] [4] [i_2] [2] = (min(var_1, ((((max(var_7, 39466)))))));
                        arr_13 [i_0] &= var_8;
                        var_13 = 1;
                        var_14 = var_5;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 10;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 10;i_5 += 1)
            {
                {
                    arr_19 [7] [i_4] = ((var_7 ? (((8383211275237405360 ? (((8383211275237405361 ? 87 : 3))) : (max(var_1, (arr_18 [i_4] [10] [i_4])))))) : (min((arr_10 [3] [i_0]), (min(var_9, 8383211275237405336))))));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 8;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_15 *= var_6;
                                var_16 = (((((var_3 ? -33554431 : (arr_1 [8])))) ? var_2 : ((1 ? 248 : 153))));
                                arr_24 [i_4] [i_4] [0] [0] [i_4] [i_4] = (min(8383211275237405346, (max(1354323011322747219, (arr_10 [i_0] [i_4 + 1])))));
                            }
                        }
                    }
                    var_17 = (max((max((min(var_0, (arr_8 [i_0] [i_0] [i_0] [10]))), 118)), var_2));
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 11;i_8 += 1)
    {
        arr_27 [i_8] = var_6;
        var_18 = ((10241803623906079827 ? (((~(!var_6)))) : 2885729304509300051));
    }
    for (int i_9 = 2; i_9 < 9;i_9 += 1)
    {
        var_19 = -var_8;
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            for (int i_11 = 2; i_11 < 7;i_11 += 1)
            {
                for (int i_12 = 1; i_12 < 6;i_12 += 1)
                {
                    {
                        var_20 = ((((((14 ? var_8 : 24283)))) ? var_8 : (arr_36 [i_9] [i_9])));
                        arr_40 [i_9] [i_9] [i_9] = (min((max(var_10, (arr_28 [6] [i_10]))), var_0));
                        var_21 = (((((max((arr_37 [1] [1] [5] [1]), 70))) ? (arr_0 [6]) : (arr_29 [5]))));
                        arr_41 [i_9] [i_9] [6] [i_9] = (arr_38 [i_9] [i_9] [3] [8]);
                    }
                }
            }
        }
    }
    for (int i_13 = 0; i_13 < 15;i_13 += 1)
    {
        arr_44 [9] [i_13] = (arr_42 [i_13]);
        arr_45 [i_13] = ((((max(-1, 1))) ? (((arr_42 [1]) ? (max(2245511515, 1)) : (((min(57398, (arr_43 [14] [14]))))))) : -1));
        var_22 = var_2;
    }
    #pragma endscop
}
