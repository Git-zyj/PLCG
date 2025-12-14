/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    var_18 = (min(var_18, ((min((((arr_5 [i_0] [9] [i_1] [i_0]) ? (127 * -127) : ((1 | (arr_3 [i_2]))))), (((+((((arr_2 [i_0]) == (arr_2 [0]))))))))))));
                    var_19 = (((((((arr_4 [10] [10] [i_2] [i_2]) / (arr_0 [i_2 + 2] [i_0])))) ? -107 : 221)));
                    var_20 = (max(((1 | (((arr_4 [i_0] [i_1] [i_2] [i_2]) * (arr_1 [9] [i_1]))))), ((((447215624 ? (arr_5 [1] [i_1] [8] [i_1]) : (arr_3 [i_2])))))));
                }
                for (int i_3 = 1; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    arr_9 [i_3] = (((((-2147483647 - 1) | (arr_4 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3 + 1])))) && (arr_4 [i_3 - 1] [i_3 - 1] [i_3 + 2] [i_3 - 1]));
                    var_21 = ((min(1858483941320607082, (arr_7 [i_3 + 1] [i_3 - 1] [i_3 - 1]))) & (max((min(2097151, 78)), (((510 < (arr_0 [16] [i_1])))))));
                }
                for (int i_4 = 1; i_4 < 21;i_4 += 1) /* same iter space */
                {
                    var_22 -= (max(((((arr_0 [i_0] [1]) & (((1 & (arr_11 [i_4] [i_4] [i_1] [i_0]))))))), (arr_10 [i_0] [i_0] [i_1] [i_1])));
                    var_23 = ((max((((-(arr_11 [i_0] [i_0] [i_1] [i_4])))), -1820539546)));
                }
                arr_12 [i_0] [15] = ((max(((1 >> (32767 - 32745))), (arr_11 [i_0] [i_1] [i_1] [i_0]))));
                var_24 = (max(((((arr_10 [i_0] [i_0] [i_0] [i_0]) >> (((((arr_11 [i_0] [i_0] [i_1] [i_1]) * -107)) - 5640))))), ((max((arr_8 [i_0] [i_1]), 1034380818)))));
            }
        }
    }
    var_25 = (max(((max((min(var_2, 2079904614)), (!-1744109293)))), (min(-1, var_5))));
    var_26 *= var_17;
    var_27 = (max(var_27, (!var_8)));
    #pragma endscop
}
