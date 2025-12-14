/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_2;
    var_21 = (min(var_21, ((((((min(1, 75)))) != ((1 ? (var_5 - var_14) : (~0))))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 8;i_2 += 1)
            {
                {
                    var_22 ^= 16;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2 + 2] [i_3] [i_2] = ((255 >= ((((arr_8 [i_3]) < (arr_4 [i_0 + 1] [i_2 - 2] [i_4 + 1] [i_4 + 1]))))));
                                var_23 |= (arr_4 [i_0] [i_1] [2] [2]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
