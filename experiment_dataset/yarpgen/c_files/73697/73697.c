/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, var_6));
    var_11 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_12 = (max(var_12, (((!((min(((max((arr_0 [i_0] [i_1]), var_7))), -var_6))))))));
                    arr_8 [i_1] [i_1] [i_2] [i_2] = ((((-1329251754552902892 ? (((((arr_0 [8] [i_2 + 1]) == 1609184404)))) : (((arr_6 [1] [i_1] [i_2]) ? (arr_2 [i_1] [i_1]) : 65264256)))) / (((-((var_8 ? (arr_5 [5] [5] [i_1]) : (arr_7 [i_0] [5] [i_1] [i_2]))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_15 [i_1] [0] [0] = ((65264257 ? 47780 : (arr_12 [i_0] [i_1] [11] [i_3 - 1])));
                                var_13 = (min(var_13, (((2934 <= (arr_13 [i_0] [i_1] [i_2 - 1] [i_2] [i_3] [i_2 - 1]))))));
                                var_14 = (min(var_14, var_8));
                            }
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        arr_18 [i_5] [1] = (((((arr_12 [i_5] [i_5] [i_5] [i_5]) + 2147483647)) << (((arr_11 [i_5] [3] [i_5] [i_5]) - 419216781))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 14;i_8 += 1)
                {
                    {
                        var_15 = arr_17 [1];
                        var_16 *= ((var_8 >> ((((252 ? 247 : (arr_17 [i_5]))) - 242))));
                        var_17 = 4229703016;
                    }
                }
            }
        }
    }
    for (int i_9 = 3; i_9 < 23;i_9 += 1)
    {
        var_18 = (((arr_27 [i_9 + 1]) / (((((((arr_27 [i_9]) + 9223372036854775807)) << (65264247 - 65264247))) ^ (arr_27 [i_9 - 2])))));
        arr_28 [i_9] [i_9] = 1;
    }
    #pragma endscop
}
