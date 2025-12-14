/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_3 + ((var_7 + (((min(var_10, var_14))))))));
    var_16 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 &= (((arr_6 [i_1 - 2] [11] [i_0]) | (min(((max((arr_1 [i_0]), (arr_1 [i_0])))), (min((arr_0 [i_0]), (arr_6 [i_1] [i_1] [9])))))));
                var_18 = ((-(arr_3 [i_1 - 1] [i_1 + 2])));
                var_19 = (((min((arr_3 [i_1 + 1] [i_1 + 2]), (arr_3 [i_1 + 1] [i_1 + 2])))) ? (min((arr_3 [i_1 + 1] [i_1 + 2]), (arr_3 [i_1 + 1] [i_1 + 2]))) : (arr_3 [i_1 + 1] [i_1 + 2]));
                var_20 = (max(var_20, (arr_3 [i_0] [i_1])));
            }
        }
    }
    var_21 = (min(var_8, var_2));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_2] = ((((((min((arr_9 [i_3 + 2] [i_2]), (arr_12 [i_2])))) ? (arr_7 [i_3 - 1] [i_3 + 1]) : (arr_12 [i_2]))) == (max(((min((arr_8 [i_2] [i_2]), (arr_11 [i_2] [i_2] [11])))), (arr_9 [i_3 + 2] [4])))));
                var_22 = (min((((arr_12 [i_2]) ? (max((arr_9 [i_2] [i_3 - 1]), (arr_9 [i_2] [i_3 + 3]))) : ((~(arr_9 [i_2] [i_3]))))), (((-((-(arr_8 [4] [i_2]))))))));
                arr_14 [i_2] [i_3] [i_3 - 1] = (((arr_9 [i_2] [i_3 - 1]) && ((min((arr_9 [i_2] [i_3 - 1]), (arr_10 [i_2] [i_3 - 1] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
