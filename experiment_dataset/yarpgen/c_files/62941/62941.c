/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62941
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62941 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62941
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_12 ^= (max((min((max(4651572030993256880, (arr_2 [i_0] [11] [0]))), ((((arr_4 [8]) ? (arr_0 [i_0]) : 1))))), ((((((arr_1 [i_1]) * (-127 - 1)))) ? ((0 ? (arr_2 [i_0] [i_1 + 3] [i_1 + 3]) : (arr_4 [14]))) : (max((arr_2 [5] [i_1] [i_1 + 2]), 3950601123666398073))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_13 |= arr_4 [10];
                            var_14 = (min(var_14, (((((min((((arr_0 [i_0]) << (1338657185 - 1338657183))), ((9189025876606695812 ? (arr_3 [16]) : (arr_4 [14])))))) ? (((max((arr_0 [i_1 - 1]), 1)))) : ((~(arr_8 [i_0] [i_0] [i_1 - 1] [i_2] [i_3]))))))));
                            var_15 -= (((min((((arr_2 [i_1] [i_2] [i_3]) + (arr_1 [14]))), ((min((arr_7 [i_0] [i_0]), 1))))) == (((-(arr_8 [i_3] [i_3] [i_3] [i_3] [7]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_16 -= (min(731221189002781605, ((((((arr_2 [i_1 - 2] [i_1 - 2] [i_5]) ? 255 : 18)) >= (((!(arr_4 [i_4])))))))));
                            var_17 ^= (min(((((min(40, -5003))) ? 1 : 5)), ((min((arr_5 [i_1 - 3] [i_5] [i_5]), (arr_5 [i_1 + 3] [i_4] [i_5]))))));
                            var_18 -= (((((min(-28242, 4981))) ? (((arr_4 [i_4]) ? 3950601123666398073 : (arr_6 [2] [i_1 + 1] [i_4] [i_1]))) : (arr_6 [i_1 - 2] [i_5] [i_4] [18]))));
                            var_19 = (max(var_19, (((arr_3 [i_4]) * ((max((arr_3 [i_4]), (arr_7 [i_1 + 3] [i_4]))))))));
                        }
                    }
                }
            }
        }
    }
    var_20 -= (min((((((var_8 ? -1338657186 : var_5))) && (min(1, 1)))), var_5));
    var_21 = (min(var_21, var_1));
    #pragma endscop
}
