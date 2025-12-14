/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67779
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(649, 1620431854));
    var_12 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    var_13 += (((arr_2 [i_0] [i_0]) ? (((arr_4 [i_0] [i_0]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]))) : ((((arr_5 [i_2 - 1]) ? (arr_1 [i_0]) : (arr_3 [i_0] [8] [i_0]))))));
                    var_14 = (arr_3 [i_0] [i_0] [i_1]);
                    var_15 ^= (min(((168308825 ? 2404452440086975352 : -2404452440086975347)), ((-37 ? -2404452440086975347 : 2404452440086975339))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (max((arr_3 [i_0] [i_0] [i_1]), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0])));
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] &= ((((((arr_7 [i_0] [0] [i_2] [i_2] [i_4]) ? (arr_7 [i_0] [i_1] [i_2] [i_0] [i_4]) : (arr_8 [i_0] [i_0] [10] [0] [i_0] [i_3 + 1])))) ? (arr_8 [i_0] [i_1] [i_4] [i_2 + 3] [i_0] [i_3 + 2]) : (max((arr_7 [i_0] [14] [16] [14] [14]), (arr_7 [i_0] [i_1] [i_2] [10] [i_4])))));
                                var_17 = (min(var_17, ((min((((arr_4 [i_0] [i_0]) ? (arr_11 [i_0] [i_3 + 2] [i_0]) : (((arr_7 [i_0] [i_1] [i_1] [i_1] [6]) ? (arr_3 [i_0] [i_1] [i_0]) : (arr_9 [i_0] [i_1]))))), (arr_2 [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
