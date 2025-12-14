/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95627
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_9 [4] [i_1] [i_1] [i_2] [i_3] [i_1] = ((((max((arr_2 [i_0] [8] [i_3]), ((~(arr_1 [5] [i_1])))))) < (max((arr_0 [i_2]), (max(var_0, (arr_0 [i_3])))))));

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_13 [i_3] [i_1] = arr_8 [i_0] [i_4] [6];
                            arr_14 [i_0 - 1] [4] [i_2] [i_1] [i_4] = (((arr_12 [i_1] [i_3] [i_2] [i_1] [i_1]) ? (arr_7 [i_0] [2] [i_2] [i_3] [i_4] [i_2]) : 18446744073709551615));
                            arr_15 [i_3] = ((+(((arr_6 [i_0 - 1]) ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1])))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_18 [i_0] [i_0] [i_3] [i_3] [i_3] = ((var_16 ? (((var_8 + (arr_7 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_5] [i_3])))) : ((var_0 ? 52765 : (arr_0 [i_0])))));
                            arr_19 [i_5] [i_5] [i_5] [i_5] [i_3] = ((!(!85)));
                            arr_20 [i_0] [i_1] [i_3] [i_3] = (((arr_10 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) ? (arr_5 [i_5] [i_2] [i_2] [i_0]) : (min((arr_11 [i_0] [i_1] [i_1] [i_3] [i_2] [i_3]), (arr_11 [i_0 - 1] [i_1] [i_1] [i_3] [i_2] [0])))));
                        }
                        arr_21 [i_3] [i_3] [i_3] [i_0] = (~27836);
                        arr_22 [i_3] [i_3] = ((((var_14 ? (arr_7 [i_3] [i_3] [i_3] [i_0 - 1] [i_0 - 1] [i_3]) : (arr_7 [i_3] [i_0] [i_0] [i_0 - 1] [i_0] [i_3])))) ? (52765 || 0) : (((arr_7 [i_3] [i_3] [i_0] [i_0 - 1] [i_0] [i_3]) ? (arr_7 [i_3] [i_2] [i_2] [i_0 - 1] [i_0] [i_3]) : (arr_7 [i_3] [i_0] [i_0] [i_0 - 1] [i_0] [i_3]))));
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            arr_26 [i_6] = (((arr_4 [i_0]) / (((arr_0 [i_0 - 1]) % (((max(var_11, var_8))))))));
            arr_27 [8] [i_6] [i_6] = (!(((var_12 % (arr_12 [6] [i_0] [i_0 - 1] [8] [i_6])))));
        }
        arr_28 [9] = ((((((-(arr_0 [i_0])))) ? (arr_0 [i_0]) : (~var_14))));
        arr_29 [i_0] = var_2;
        arr_30 [i_0] = (min(4294967295, (((arr_12 [4] [i_0] [i_0 - 1] [i_0] [i_0]) ? (arr_8 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : (max((arr_11 [i_0 - 1] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_17 [i_0] [i_0] [4] [i_0] [2] [i_0 - 1])))))));
    }
    var_17 = min((max(((max(2766673972, 127))), 7469491386212360840)), var_7);
    #pragma endscop
}
