/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = ((min(var_15, (arr_5 [i_2 - 3] [0] [i_1 + 3]))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_21 = -var_3;
                                arr_12 [i_0] [i_2] [i_2] [i_0] [i_4] [i_0] [i_2] = ((min(((arr_7 [i_0] [6] [i_0]), -98))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, ((((((((min(var_8, -99))) ? (((min(var_18, -98)))) : ((98 ? var_15 : 99))))) ? ((-(max(-103, var_8)))) : (((((max(1, -99))) && (((var_3 >> (var_13 - 36435))))))))))));
    var_23 = (min(var_23, (((+((((-1420135393 == var_15) == (var_6 >= var_6)))))))));
    var_24 = (min(var_24, 255));
    #pragma endscop
}
