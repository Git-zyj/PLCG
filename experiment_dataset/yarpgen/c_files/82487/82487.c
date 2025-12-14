/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((var_7 | ((min(65535, 25195)))))), ((var_4 | (min(var_0, 127))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_1] = ((~(max(((~(arr_7 [i_4] [i_2] [i_2] [i_3] [i_2] [i_0]))), (((-1116173707 >= (arr_0 [i_0]))))))));
                                var_19 = (-var_17 && 3293644851);
                                arr_12 [i_0] [i_1] [i_2] [i_3] [i_1] = (arr_8 [i_4]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 25195;
                                var_20 ^= (max(((min(var_12, 1))), 10456));
                            }
                        }
                    }
                    var_21 = 40340;
                    var_22 *= var_3;
                }
            }
        }
    }
    #pragma endscop
}
