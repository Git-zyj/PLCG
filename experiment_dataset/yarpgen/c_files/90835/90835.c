/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_10 [8] [i_1] [i_2] [5] = (((((!(arr_9 [i_0] [i_0])))) ^ (arr_4 [i_2])));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            arr_13 [i_1] = (((arr_7 [i_0] [i_1] [i_4]) <= (((-23 + 2147483647) >> (-1 + 28)))));
                            arr_14 [i_0] [i_1] [i_2] [4] [i_3] = ((((((arr_6 [8] [i_3]) ? var_3 : 4))) || (!var_7)));
                        }
                    }
                }
            }
            arr_15 [i_0] [i_1] [i_0] = (max((((max(var_3, var_4)) << (((arr_2 [i_0 - 1]) - 15527)))), (((((max((arr_8 [i_1]), (arr_1 [9])))) ? ((((arr_4 [i_0]) == (arr_0 [i_0])))) : ((~(arr_11 [i_0 + 1] [9] [i_1] [1] [i_1] [9]))))))));
        }
        arr_16 [i_0] = (max((arr_1 [3]), (((2159946149 ? (arr_12 [i_0] [i_0 + 3] [2] [i_0 + 4] [i_0] [i_0 + 4]) : (max(var_7, 0)))))));
    }
    /* LoopNest 2 */
    for (int i_5 = 3; i_5 < 12;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 12;i_6 += 1)
        {
            {
                arr_23 [6] [i_5] = (min(((((((0 && (arr_17 [i_5])))) < ((max(511, 252)))))), var_9));
                arr_24 [i_5] = (-((2044 ? (((arr_20 [i_5]) ? (arr_18 [i_5]) : (arr_19 [8] [8] [8]))) : ((max(10, (arr_17 [0])))))));
            }
        }
    }
    var_10 = ((max(-9, var_1)));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            {
                arr_31 [i_8] [i_8] = (((((4294965252 ? 2 : (max(-3, 2228255903))))) ? (max((((var_4 ? (arr_29 [i_8] [i_7]) : var_3))), 4428815161509300082)) : (arr_25 [1])));
                arr_32 [i_8] = (((arr_26 [i_7]) & (min((-4428815161509300091 | var_7), (arr_29 [i_8 - 1] [i_8 - 1])))));
            }
        }
    }
    #pragma endscop
}
