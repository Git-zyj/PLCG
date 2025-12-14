/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_14 = ((((((arr_4 [i_1]) << (((arr_4 [i_1]) - 19663))))) ? ((((arr_4 [i_0]) || 1))) : (arr_4 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_15 = (~(arr_8 [i_0] [i_0] [i_2] [i_3]));
                            var_16 ^= (arr_5 [i_0] [i_2] [i_3]);
                            var_17 = ((1 ? 1 : 171));
                            var_18 = (((((1 < ((((arr_2 [i_0]) >= (arr_7 [i_3] [i_0]))))))) >> ((((0 ? 32767 : (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1]))) - 226))));
                        }
                    }
                }
                arr_12 [i_0] = (max((((((((arr_2 [i_0]) ? var_0 : 18446744073709551615))) ? ((min((arr_0 [i_1]), (arr_2 [i_0])))) : (!14352478776068668811)))), (min((arr_6 [i_0] [i_0] [i_0]), var_1))));
                arr_13 [i_0] [i_0] = (((((arr_6 [i_1] [i_1] [i_0]) && (arr_11 [i_0] [i_1]))) ? ((~(arr_11 [i_0] [i_0]))) : ((((var_8 >= (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                arr_14 [i_0] [i_0] = ((((11840709724130291798 ? 2341522685 : 1)) >= 35069));
            }
        }
    }
    var_19 = var_12;
    var_20 = (max(var_20, (((var_9 * (((((var_6 ? var_11 : var_9))) ? var_4 : ((var_1 ? var_3 : 1)))))))));
    #pragma endscop
}
