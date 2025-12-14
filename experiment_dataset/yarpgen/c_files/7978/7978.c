/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_12 -= ((4294967295 ? (min(var_11, ((216 ? 1 : 216)))) : var_1));
                arr_5 [i_0] [i_0] = ((((~(max((arr_1 [i_1]), var_1))))) ? ((-((4294967283 ? var_6 : var_3)))) : ((((var_10 != (arr_0 [i_0]))))));

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_13 = (max(-51, var_0));
                    arr_10 [i_0] [i_0] [i_2] [i_2] = ((((~(arr_4 [i_1]))) % var_8));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_14 += 4294967295;
                                var_15 = (min(var_15, ((max(var_6, (max(var_0, (arr_12 [i_4] [i_4 - 1] [i_4] [i_4] [21] [i_1]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 |= var_1;
    #pragma endscop
}
