/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [18] [i_1] [i_0] = (arr_8 [i_3] [1] [i_1] [15] [i_0 - 1]);
                            var_20 += (((min(1088141360, (min(4857379499879041478, 12838)))) % 1));
                            arr_11 [i_0] = ((0 ? ((((54884 && 0) ? (12091 != -11650) : 1))) : var_14));
                        }
                    }
                }
                arr_12 [i_0] = ((var_7 != ((max(((var_12 ? 14 : 54886)), var_13)))));
                arr_13 [i_0] [i_0] [i_0] = ((~(((4073647868 != -76) % 5934848686982154089))));
            }
        }
    }
    var_21 -= (max(var_9, (((var_15 ? var_14 : 3859158965301277728)))));
    #pragma endscop
}
