/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81674
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_2;
    var_11 = (min(var_11, (((((min(((3556799099349987186 ? var_3 : 3556799099349987199)), (!var_2)))) && (((var_7 && 3556799099349987209) && (var_8 && var_5))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (max((((((((arr_3 [8] [i_1] [i_2]) ? (arr_3 [12] [i_1] [i_2]) : 63228))) && ((max(3556799099349987209, -3556799099349987186)))))), (arr_4 [i_0 - 2] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_12 [i_0 - 1] = 16777216;
                                var_13 = (max(var_13, (((-(((((arr_7 [i_0] [7] [i_3 - 1] [i_4]) ? (arr_10 [i_0] [i_3 + 2] [i_2] [i_4] [i_4] [i_0 + 2]) : 901328941302099946)) | var_3)))))));
                            }
                        }
                    }
                    var_14 ^= (max(35288, ((((arr_10 [i_2] [i_2] [i_1] [11] [i_0 + 1] [i_0 + 1]) || ((-283792096 && (arr_1 [i_0]))))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 20;i_8 += 1)
                    {
                        {
                            arr_23 [i_7] [i_7] [i_8] = ((((((16777223 - var_7) ? -var_9 : (3194104122 / 3556799099349987186)))) ? (((((-283792096 || (arr_15 [i_7] [i_7]))) && (arr_13 [i_5 + 1])))) : ((((!(arr_21 [18] [i_6] [i_7] [i_8]))) ? ((((arr_21 [i_5 + 1] [i_6] [i_7] [i_8 - 1]) || (arr_20 [i_5])))) : (((var_5 || (arr_21 [i_5] [i_6] [i_7] [i_8]))))))));
                            var_15 = (arr_17 [i_8 + 1] [i_7 + 1] [i_5]);
                            arr_24 [i_7] = (max((arr_18 [i_8 - 2] [i_8 - 2] [i_7] [i_8 + 1]), ((max((arr_18 [i_5] [i_5] [i_7] [i_5 - 1]), 0)))));
                            var_16 -= ((!((min((((arr_22 [i_6] [i_6] [i_7] [i_8]) ? var_6 : (arr_14 [i_5 - 1]))), ((((arr_20 [i_8]) || (arr_15 [i_5] [i_8])))))))));
                        }
                    }
                }
                arr_25 [i_5] = arr_16 [i_5];
                var_17 = ((((arr_21 [i_5] [i_5 + 1] [i_6 + 2] [i_6 - 1]) != (arr_21 [i_5 + 1] [i_5 + 1] [i_6 + 2] [i_6 - 1]))) ? ((-35 ? (!-16777230) : 1)) : (((((((arr_14 [i_5]) * 1)) != 63222)))));
                var_18 &= (arr_13 [i_5 + 1]);
            }
        }
    }
    #pragma endscop
}
