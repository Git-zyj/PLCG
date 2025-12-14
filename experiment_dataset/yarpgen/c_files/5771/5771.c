/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((min(-var_6, var_10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_16 -= (min(((((arr_3 [i_0]) == (arr_0 [i_1])))), (~2311752900324688622)));
                                var_17 = (arr_5 [i_0] [i_0]);
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_18 *= -8;
                            arr_19 [5] [1] [1] [1] [i_5] [1] = (arr_5 [i_5] [i_6]);
                            arr_20 [i_0] [i_1] [i_6] &= 24396;
                        }
                    }
                }
                var_19 = (((((max((arr_15 [i_1] [4] [i_0] [9] [9]), 10))) ? ((~(arr_7 [i_1] [i_0] [i_0]))) : (((~(arr_8 [i_0] [6] [1])))))));
                var_20 += (!var_6);
                arr_21 [i_0] [i_0] = (((((~((min((arr_11 [i_0] [i_0] [i_1] [i_1] [i_0]), 191)))))) || ((((~(arr_6 [6] [i_1])))))));
            }
        }
    }
    var_21 = 11235538926227714519;
    #pragma endscop
}
