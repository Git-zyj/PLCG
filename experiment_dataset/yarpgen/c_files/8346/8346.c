/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((994621142 ? ((var_18 & (var_12 == var_17))) : (((var_16 >= ((max(var_19, 19036))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (((127 ^ 2042719380833747398) ? (((arr_3 [i_1] [i_1] [i_0]) ? (arr_2 [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_1]))) : ((-(((!(arr_2 [i_1] [i_0]))))))));
                var_22 = (min(var_22, (arr_3 [i_1] [i_1] [i_0])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            {
                var_23 = (((~((2905709491 & (arr_0 [i_2] [i_3]))))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            arr_14 [i_2] = ((+(((arr_2 [i_4] [i_5]) ? (arr_2 [i_3 - 1] [i_5]) : var_4))));
                            var_24 = (arr_11 [i_2]);
                            var_25 = (min(var_25, ((min(((3768143199 ? (arr_0 [i_2] [i_3 + 2]) : 16322897983311446217)), (arr_1 [i_2 - 1]))))));
                            var_26 = 18022;
                        }
                    }
                }
            }
        }
    }
    var_27 = (max(var_7, (((var_15 <= ((min(var_6, var_9))))))));
    #pragma endscop
}
