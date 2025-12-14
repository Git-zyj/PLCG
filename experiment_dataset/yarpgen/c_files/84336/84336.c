/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84336
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((min(8260699140469239725, 18446744073709551615)) | ((((var_10 > (~127))))));
    var_19 = (~var_7);
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = 0;
                var_20 = (arr_2 [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 6;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [1] [i_2] [i_3] = (((arr_2 [i_3] [7] [i_0]) != (((1323823923 != (~13472494912589303701))))));
                            var_21 -= (arr_4 [i_0] [3]);
                            var_22 += 16770174171131954634;
                            var_23 += min(0, ((-1108450695 ? -64189 : (var_13 - 1))));
                            arr_12 [i_3 + 1] [i_3 - 2] [i_2] [i_0] [i_0] = ((~(arr_3 [i_0] [i_1] [i_2])));
                        }
                    }
                }
                var_24 = min((max(((var_11 ? var_16 : 1)), ((~(arr_2 [i_0] [i_0] [i_1]))))), ((((arr_10 [i_1]) < var_1))));
            }
        }
    }
    #pragma endscop
}
