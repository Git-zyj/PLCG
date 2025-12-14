/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (-32767 - 1)));
                                arr_12 [i_0] [i_3] [1] = (((arr_4 [i_4 - 1] [i_0 + 1] [7]) * (((-32753 ? (arr_7 [i_0 + 4] [i_0 + 3] [i_4 - 1] [i_4 + 2]) : (~4064))))));
                                var_15 ^= 205;
                            }
                        }
                    }
                    var_16 = (min(var_16, ((((32767 - 5771861653099201029) >= (min((max(var_10, (arr_2 [5] [i_1]))), (arr_0 [i_0 + 2]))))))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_20 [9] [6] [6] [i_0] [4] [1] [0] = ((((((arr_14 [6] [i_6] [3] [7]) ? (arr_14 [1] [0] [8] [i_5]) : (arr_14 [i_0] [1] [i_5] [i_6])))) == (~var_4)));
                                var_17 = var_11;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
