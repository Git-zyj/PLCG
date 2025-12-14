/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_11 [i_2] [i_2] = -2592;
                        arr_12 [1] [i_0] [i_2 + 2] [i_2 + 2] [i_0] [i_2] |= (min(var_14, (((!(-337550090 | var_5))))));
                        arr_13 [i_3 - 3] [i_2 - 1] [i_2] [i_2] [i_0 + 1] [i_0] = (~4394866005643013010);
                        arr_14 [13] [13] [i_2] = var_9;

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
                        {
                            arr_17 [i_1 - 2] [i_2] = (((arr_3 [i_0 - 1]) % 32760));
                            var_15 = (arr_2 [i_2 + 1] [i_4] [i_4]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
                        {
                            var_16 = ((~(arr_9 [i_3] [i_3 - 3] [i_2] [i_3 + 1] [i_3] [7])));
                            var_17 = ((1 & ((~(arr_4 [i_3] [i_3])))));
                            var_18 = (arr_18 [i_0] [3] [i_1 - 1] [i_2] [i_2] [i_3] [i_2]);
                            var_19 = (((arr_0 [i_0]) & (arr_2 [4] [1] [i_2 + 2])));
                        }
                    }
                }
            }
        }
        arr_20 [i_0] = ((((var_11 > (arr_6 [i_0 - 1] [i_0 - 2] [i_0 + 1] [i_0]))) ? ((max((((arr_9 [i_0 + 1] [i_0] [i_0] [i_0 - 1] [i_0] [i_0 + 1]) | -18258)), 4394866005643013005))) : (((arr_5 [i_0 + 1]) >> (((arr_5 [i_0 - 1]) - 1183572818))))));
    }
    for (int i_6 = 2; i_6 < 7;i_6 += 1)
    {
        var_20 = ((((arr_15 [i_6 + 3] [i_6] [i_6] [1] [5] [i_6] [i_6 - 1]) - (arr_15 [i_6 + 3] [3] [i_6 - 1] [5] [i_6 + 3] [i_6 + 3] [i_6 + 3]))));
        arr_24 [i_6] = ((1 > ((((((arr_4 [i_6 + 2] [i_6 - 2]) - 880667220))) ^ (arr_21 [i_6])))));
    }
    var_21 = (max(var_21, -880179729));
    #pragma endscop
}
