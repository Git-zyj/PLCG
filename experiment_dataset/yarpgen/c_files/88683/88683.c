/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min(11569736371133233441, (arr_5 [i_1] [i_1])));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = ((((var_6 ? (arr_4 [i_0] [i_1]) : (min(1750114275, var_1))))) ? (((-(arr_3 [i_0])))) : (arr_0 [i_1] [17]));

                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        var_13 *= var_6;
                        var_14 -= (arr_1 [i_0]);
                        arr_12 [i_0] [i_1] [7] [7] [i_2] [13] = (min((arr_5 [i_1] [i_1]), (arr_11 [8] [i_1] [i_2] [8])));
                        arr_13 [i_1] [i_1] [i_1] [i_3] = ((~(((arr_2 [i_0]) << (((arr_2 [i_1]) - 13347176681832129943))))));
                        var_15 = ((((+(((arr_10 [i_0] [i_0] [15] [i_3]) ? (arr_3 [i_0]) : var_2)))) >= (min((arr_11 [i_0] [i_1] [i_2] [i_3]), (var_10 * var_3)))));
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        arr_16 [i_1] [i_1] [i_2] [12] = (arr_10 [i_0] [i_0] [20] [i_0]);
                        var_16 = (min(((((arr_0 [19] [i_0]) ? (arr_3 [i_2]) : (arr_3 [i_4])))), (arr_0 [i_2] [i_4])));
                        var_17 = ((var_10 ? var_7 : (min(((min(55812, (arr_6 [5] [9] [i_2] [i_1])))), (arr_9 [i_0] [7] [i_0] [i_1] [i_0])))));
                    }
                    arr_17 [i_1] [i_1] [11] = (arr_7 [i_0] [i_1] [i_2] [i_2]);
                }
            }
        }
    }
    var_18 = ((((min((((var_5 ? var_5 : var_5))), ((var_8 ? var_7 : var_1))))) ? var_11 : var_2));
    var_19 = ((var_4 ? (~var_2) : 4329327034368));
    #pragma endscop
}
