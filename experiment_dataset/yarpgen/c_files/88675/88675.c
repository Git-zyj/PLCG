/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88675
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88675 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88675
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 13;i_4 += 1)
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (arr_11 [i_0] [i_0] [i_0] [i_2] [1] [i_4] [i_4]);
                                var_14 = ((min(((~(arr_2 [i_1] [i_3] [i_1]))), ((((arr_6 [i_0] [i_4]) == var_12))))));
                            }
                            var_15 &= (((((-(arr_3 [i_2] [i_2] [i_2])))) ? (((arr_10 [i_2] [i_1] [i_1] [i_2] [i_1]) ? (var_7 | var_3) : (((max((arr_3 [i_0] [i_1] [i_2]), (arr_12 [i_0] [i_0] [i_2] [i_0] [6]))))))) : (((arr_7 [i_3] [i_3]) ? ((max(var_4, var_6))) : var_12))));
                        }
                    }
                }
                var_16 = (((arr_7 [i_0] [i_1]) * ((-(max((arr_6 [i_0] [i_0]), var_8))))));
                var_17 &= (arr_6 [i_0] [i_1]);
            }
        }
    }
    var_18 ^= ((-var_9 ? ((-((var_11 ? var_11 : var_11)))) : (max(-var_5, ((var_12 ? var_10 : var_10))))));
    var_19 = (var_13 ? (!var_9) : ((min((max(var_3, var_3)), var_10))));
    var_20 = (max(var_20, var_13));
    #pragma endscop
}
