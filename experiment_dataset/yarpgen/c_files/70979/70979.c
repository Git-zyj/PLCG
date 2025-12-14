/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((min(var_5, var_5)));
    var_12 = ((((max(-104, 1))) << (var_2 - 193)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_13 = (((((1 - 0) ? 1 : 1)) ^ ((((((arr_8 [i_3] [i_2] [0] [1] [i_0] [i_0]) != var_5))) >> (arr_4 [i_0] [5] [i_2] [12])))));
                        arr_9 [i_0] [i_1] [15] [i_2] [4] [0] = ((+(((~var_8) ^ (var_7 | var_9)))));
                        var_14 = (((arr_0 [i_3]) ? (arr_2 [i_0 - 1] [i_1] [i_2 + 2]) : (((min((arr_0 [i_3 + 1]), (arr_0 [i_3 + 1])))))));
                    }
                    arr_10 [15] [i_2] [16] [i_0] = ((((arr_0 [8]) ? (arr_7 [i_2 - 1] [i_0 - 1] [i_0 + 2] [9]) : (arr_0 [i_0]))) <= ((min((arr_0 [9]), (arr_0 [11])))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_15 = (min(var_15, (~1)));
                                arr_15 [18] [i_1] [i_1] [7] [16] [i_1] [18] = (var_6 * 1647982164);
                                var_16 = (((((var_1 - ((((arr_14 [3] [12] [i_2] [1] [5] [9] [0]) == var_6)))))) ? (arr_12 [i_2 - 1] [1] [i_0 + 1] [2] [i_4]) : ((((((arr_3 [9] [5]) == (arr_14 [9] [i_1] [i_1] [3] [i_2] [1] [3])))) << (((arr_8 [i_5] [4] [i_2] [6] [i_1] [2]) - 14172))))));
                                var_17 &= ((var_6 || ((((arr_3 [i_0 + 2] [i_2 - 1]) ? (arr_3 [i_0 - 1] [i_2 - 2]) : (arr_3 [i_0 + 1] [i_2 - 2]))))));
                                var_18 = (max((((((1 & (arr_7 [i_0] [i_1] [12] [i_5])))) ? (arr_5 [1] [i_0]) : var_7)), (max((arr_14 [16] [10] [0] [1] [19] [1] [14]), ((255 ? 1 : 1))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
