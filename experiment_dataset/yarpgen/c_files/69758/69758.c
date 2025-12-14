/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                arr_13 [17] [17] [i_2] [i_2] [i_2] [i_0] [i_2] = ((112 & (arr_4 [i_0] [i_0])));
                                arr_14 [i_0] [i_0] [i_2] [i_3] [i_4] = (~(max(((~(arr_1 [i_0]))), ((16746611051660606303 ? -32 : var_5)))));
                                var_19 = (min((~-var_9), var_12));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            arr_20 [i_1 - 1] [i_1] [i_0] = (arr_9 [i_0] [i_1 + 1] [i_5] [i_6] [i_1] [i_1]);
                            arr_21 [i_6] [i_0] [i_0] [i_0] = var_11;
                        }
                    }
                }
                var_20 = (max(var_20, (min(12209789712802423507, ((((max(-19623, 8)) >= -19622)))))));
                var_21 = ((((min(64, 8068533714581225934))) ? (((((min(var_7, 8166125246546081736))) || ((min((arr_7 [i_0] [i_1] [i_1]), var_3)))))) : -19619));
            }
        }
    }
    #pragma endscop
}
