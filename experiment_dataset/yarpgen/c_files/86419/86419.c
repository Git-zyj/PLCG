/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((((min(664960790, -1))) ? (((min(1, 36350)))) : (max(36359, var_9))))) ? 29182 : var_1));
    var_12 = (min(var_12, (((!(((((min(664960790, 29186))) ? (((min(var_5, 0)))) : (min(var_1, var_9))))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [7] [i_1] = (var_3 ? (arr_2 [i_1] [i_1]) : (arr_3 [i_0] [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_10 [18] [i_3] &= (((!((min((arr_5 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_0])))))));
                            arr_11 [i_1] [i_2] [i_1] = ((var_6 == (((!((min(85, var_1))))))));
                            var_13 = (max(var_13, ((((min((36364 || var_3), (~var_3))) / (((min(4, var_3)))))))));
                        }
                    }
                }
                arr_12 [i_0] [i_1] [i_1] = ((((max((min(71, var_8)), ((0 ? var_6 : 29171))))) ? ((min((arr_3 [i_1] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_0])))) : ((-(arr_8 [i_1] [i_1] [i_1] [i_1])))));
            }
        }
    }
    #pragma endscop
}
