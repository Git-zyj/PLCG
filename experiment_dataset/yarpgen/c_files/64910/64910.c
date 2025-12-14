/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (max(((2449775984 ? (arr_3 [i_1] [i_1 - 2] [i_1 - 2]) : 67)), (arr_3 [i_1 - 4] [i_1 - 4] [i_1 - 4])));
                arr_4 [i_0] = (((188 || -847425068) && 1845191333));
                var_21 = (min(var_21, (-847425068 && -1462)));
                arr_5 [i_0] [i_0] [i_0] = (((((67 ? (arr_3 [i_1] [i_1] [i_1 - 4]) : (arr_3 [i_0] [i_0] [i_1 - 4])))) ? (min((arr_3 [i_0] [i_1] [i_1 - 4]), (arr_3 [i_1 - 2] [i_1 - 1] [i_1 - 4]))) : 0));
            }
        }
    }
    var_22 = var_11;
    var_23 = ((((((min(var_6, -26058))) ? ((max(var_0, var_9))) : var_6)) != var_10));
    var_24 &= 51651;
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_25 = (max(var_25, ((min((((max((arr_3 [i_3] [i_3] [i_4]), -26175)) + 105)), (arr_10 [i_4] [i_3]))))));
                    arr_14 [i_2] [i_4] [i_4] [i_3] |= (min((((arr_0 [i_2 - 1]) ? -3549630004102224893 : (arr_2 [i_2 + 1]))), ((max(var_1, 81)))));
                    var_26 = ((max((arr_8 [i_2 - 1]), -16)));
                }
            }
        }
    }
    #pragma endscop
}
