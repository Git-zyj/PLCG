/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = 2;
                var_11 = ((~((((arr_2 [i_1 - 1] [i_1]) <= (arr_2 [i_1 - 1] [i_1 - 1]))))));
                arr_5 [i_0] [i_0] [i_1] = ((((((arr_1 [i_1 - 3]) ? (arr_4 [i_1 - 3]) : (arr_1 [i_1 + 1])))) ? (((arr_2 [i_1 - 1] [i_1 - 3]) & 2607055823)) : (((~((max((arr_4 [i_1 - 3]), (arr_0 [i_1])))))))));
                var_12 ^= (((((-(arr_2 [i_1 - 3] [i_1 + 2])))) ? (min((arr_2 [i_0] [i_1 - 1]), (arr_3 [i_1 - 1] [i_0]))) : (((((min(-14124, (arr_3 [i_0] [i_0])))) ? (arr_0 [i_1 - 1]) : -1897726390)))));
                var_13 ^= var_3;
            }
        }
    }

    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_14 = ((-1447241406 ? ((max((arr_7 [i_2] [i_2]), (arr_7 [i_2] [i_2])))) : (((arr_7 [i_2] [i_2]) ? (arr_7 [i_2] [i_2]) : (arr_7 [i_2] [i_2])))));
        arr_9 [i_2] [i_2] = (1073733632 ? 6 : -42);
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_15 = ((~((4346917086362890771 ? (arr_11 [i_3]) : (arr_11 [i_3])))));
        arr_13 [i_3] [i_3] |= (min((arr_11 [i_3]), (((+((((arr_8 [i_3]) > var_6))))))));
        arr_14 [i_3] [i_3] = (arr_10 [i_3] [i_3]);
        var_16 = (min((((arr_7 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_8 [i_3]))), (min(-1271378137, -16852))));
        arr_15 [i_3] [17] = (((((4294967288 <= (((((arr_6 [i_3] [i_3]) && var_0))))))) < (((arr_7 [i_3] [i_3]) ? (arr_7 [i_3] [i_3]) : (arr_7 [i_3] [i_3])))));
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 18;i_6 += 1)
            {
                {
                    var_17 = (min(1, ((2 ? ((min(50595, 12))) : 65099))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 19;i_8 += 1)
                        {
                            {
                                arr_29 [i_8 - 4] [i_8 - 2] [i_8] [i_8] [i_8] [i_8] = (arr_25 [i_4] [i_6 - 3] [14] [i_8]);
                                arr_30 [i_6] |= (arr_22 [12] [i_5] [i_7] [8]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
