/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 16;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_4] [i_4] = (((((0 ? (((arr_0 [i_0]) ? 5617630415650897760 : 32256)) : (((arr_7 [i_1 + 2] [i_3]) ? 32256 : 0))))) ? (((arr_4 [i_0] [15] [i_2]) ? 3556465636 : (((1 ? (arr_1 [i_0]) : 11338))))) : 1023));
                                arr_14 [0] [0] [i_2] [10] [i_4] = 131071;
                            }
                        }
                    }
                    var_16 = (arr_7 [14] [i_2 - 2]);
                    arr_15 [i_0 - 2] [i_0 - 2] = (!(~-1024));
                }
                arr_16 [i_0] [i_1] = (arr_2 [i_0] [12]);
                var_17 = (min(var_17, 127));

                /* vectorizable */
                for (int i_5 = 1; i_5 < 15;i_5 += 1)
                {
                    arr_21 [i_0 - 3] = ((arr_6 [i_0] [i_1] [i_1 + 1]) ? (arr_17 [i_0] [i_1 + 2] [i_5]) : 10255657059316149145);
                    var_18 = 17454747090944;
                    arr_22 [i_0] = (arr_19 [i_0] [i_1 + 1]);
                    var_19 += arr_5 [i_0] [i_1] [i_5 - 1];
                }
                for (int i_6 = 2; i_6 < 13;i_6 += 1)
                {
                    var_20 &= -11445;
                    arr_25 [i_0 + 2] [0] = 0;

                    for (int i_7 = 2; i_7 < 15;i_7 += 1)
                    {
                        arr_28 [i_7] [i_6] [i_6] = 18446744073709551615;
                        arr_29 [i_7] = 6;
                        var_21 &= (arr_18 [i_0 + 1] [i_6 - 1] [i_7]);

                        for (int i_8 = 3; i_8 < 15;i_8 += 1)
                        {
                            arr_33 [i_0] [i_1] [i_7] [i_7 + 2] [i_7] [i_8] = ((-((-((-(arr_9 [2] [i_1] [1] [11] [i_8 - 2])))))));
                            arr_34 [i_0 - 1] [i_7] [i_6 - 1] [i_7] [i_7] [i_0 - 1] = ((((((((-7916728456887694931 ? (arr_24 [i_0] [15] [15]) : 6))) ? -58 : 16384))) ? -1 : (-2147483647 - 1)));
                            arr_35 [i_0] [i_1] [i_1] [i_7] [i_1] [12] = 6160;
                            var_22 = (arr_10 [i_0] [i_0] [i_8] [i_7] [i_8]);
                        }
                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 16;i_9 += 1)
                        {
                            var_23 = (min(var_23, 272678883688448));
                            var_24 = (arr_37 [i_0] [i_1] [i_6 - 1] [i_7 - 1] [12]);
                        }
                    }
                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 15;i_10 += 1)
                    {
                        arr_42 [i_0] [i_1 + 1] [i_0] [i_0] = ((~(arr_38 [i_0] [i_1] [i_6] [i_10])));
                        arr_43 [i_0] [i_1 + 3] [i_1 + 3] [i_10] &= 17;
                    }
                    for (int i_11 = 1; i_11 < 16;i_11 += 1)
                    {
                        arr_46 [10] [i_0 - 3] [i_11] [i_6 - 1] [i_11] = ((431441718696097916 ? (arr_38 [i_0] [2] [i_6] [i_11]) : 1307));
                        arr_47 [i_0] [i_11] = ((((!(arr_24 [i_1] [i_6] [i_11]))) ? (((arr_40 [i_0] [i_1 - 1] [9] [9]) ? (((arr_38 [15] [4] [i_6] [i_11]) ? 2888379886 : (arr_40 [i_0 - 1] [i_0 - 1] [i_11] [i_11]))) : -2888379886)) : (((~(arr_6 [i_1 + 2] [i_1 + 2] [i_1 + 2]))))));
                        arr_48 [i_0 + 1] [i_11] [i_11 - 1] = (!53794);
                    }
                }
            }
        }
    }
    var_25 = (max(var_25, 1));
    var_26 |= 16556;
    #pragma endscop
}
