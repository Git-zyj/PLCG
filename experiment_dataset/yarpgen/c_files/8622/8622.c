/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((2172930995593705279 * 2172930995593705273) | (((max(var_6, var_9)))))));
    var_14 = (min(var_14, (2172930995593705279 == 1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {
                var_15 = (max(var_15, (arr_1 [i_0])));
                var_16 = (((arr_6 [i_1 + 2] [i_1 + 1] [i_1]) != ((~(arr_6 [i_1 + 2] [8] [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_2] [i_1 + 1] = (((arr_4 [i_1 + 1]) <= 65970697666560));
                    arr_10 [7] [i_1 + 1] [i_2] [i_2] = (!2172930995593705279);
                }
                for (int i_3 = 1; i_3 < 7;i_3 += 1) /* same iter space */
                {
                    var_17 = (max((arr_0 [i_3 + 3] [i_1 + 1]), (min((arr_0 [i_3 - 1] [i_1 - 1]), (arr_0 [i_3 - 1] [i_1 + 2])))));
                    var_18 *= (arr_5 [i_0]);
                    arr_14 [i_0] [i_1 + 2] = (min(((((~var_12) >> (var_1 - 28406)))), ((~(max(-89, (arr_6 [i_3] [i_1] [i_0])))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (((((max(-1, 17549)))) < (((arr_5 [i_0]) ^ var_7))));
                    arr_16 [i_1] [i_3] = ((-((((min(var_11, (arr_6 [i_3 + 3] [i_0] [i_0]))) <= (min(var_10, (arr_0 [i_0] [i_0]))))))));
                }
                for (int i_4 = 1; i_4 < 7;i_4 += 1) /* same iter space */
                {
                    var_19 = (min((max((arr_12 [i_1] [i_1 - 1] [i_1]), (((!(arr_17 [i_4] [5] [5] [i_0])))))), (max(2172930995593705279, 0))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            {
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] |= 1;
                                var_20 = ((~(arr_21 [i_6] [i_4 + 1] [i_1] [i_0])));
                                arr_27 [i_4] [i_1] [i_4] [i_4 + 1] [i_5] [i_5] = (arr_22 [i_4]);
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = ((~(((min(262143, -1)) ^ -89))));
    #pragma endscop
}
