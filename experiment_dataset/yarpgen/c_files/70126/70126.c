/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((-(min(1280021371, 593866999)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    arr_7 [14] = (((arr_6 [i_0] [i_1] [i_2] [4]) & 1280021371));
                    var_11 = (((((((arr_0 [18]) ? var_5 : (arr_2 [i_1] [i_1]))) > (arr_2 [16] [5]))) ? (max((((arr_0 [1]) ? 4268302885 : (arr_1 [4] [4]))), ((min(-46, var_2))))) : (arr_3 [1])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 0;i_4 += 1)
                        {
                            {
                                arr_14 [5] [5] [i_2] [i_3] [i_4] = (arr_11 [i_0] [i_1] [14] [19] [10]);
                                arr_15 [14] [14] [i_2] [i_3] [i_4] = (min((min(var_2, (min(0, 805306368)))), ((((((arr_13 [7] [i_1] [0] [11] [i_4] [i_3] [i_4]) ? 3014945915 : 521671478)) == (-32767 - 1))))));
                            }
                        }
                    }
                    arr_16 [14] [i_1] [12] = min(((max((arr_13 [i_0] [1] [5] [i_1] [18] [i_0] [i_2]), (arr_6 [19] [15] [13] [1])))), ((var_8 ? (arr_6 [i_0] [15] [i_1] [15]) : (arr_8 [i_0] [2] [17] [10]))));
                }
            }
        }
    }
    #pragma endscop
}
