/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83292
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = (((((min(44854, (arr_4 [i_1 + 1] [i_0]))))) <= var_12));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        {
                            var_14 -= (min(((((((arr_8 [5] [i_2] [i_1] [i_0]) * (arr_7 [i_1 + 1]))) == ((var_7 ? (arr_0 [i_3 + 3]) : var_10))))), (min((min(var_1, var_8)), (((var_11 <= (arr_2 [i_2] [i_3 + 2]))))))));
                            arr_12 [i_0] [i_0] [i_1 + 1] [i_3] [i_2] = ((((min(38645, (arr_10 [i_1 + 3] [i_3 + 2] [i_3] [i_3] [i_1 + 3] [i_1 + 3])))) % ((~(((arr_6 [i_3] [i_2] [i_0] [i_0]) ? (arr_3 [i_0] [i_0] [i_0]) : 8243))))));
                        }
                    }
                }
            }
        }
    }
    var_15 = (min((!var_9), ((var_8 ? ((min(var_2, var_4))) : ((var_12 ? var_11 : var_0))))));
    var_16 = (min(var_16, (var_3 | var_4)));
    var_17 = ((var_10 ? (min(var_0, ((29223 ? 8238 : 252)))) : 8243));
    var_18 += (((((57299 - 29229) % var_8)) % (((var_7 + 2147483647) << (var_8 - 39600)))));
    #pragma endscop
}
