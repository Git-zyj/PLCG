/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-105 ? 43 : 32767));
    var_17 = (((var_6 == var_14) * var_11));
    var_18 = ((((var_4 < (var_15 * 10500)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [14] [i_1] [i_2] [i_1] [i_1] [i_0] = (((min(4, 215)) > var_9));
                                var_19 |= (var_3 * ((((!(((var_5 ? var_8 : 255))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_20 = 326986036640206603;
                                var_21 -= (~41);
                                arr_17 [i_0] [10] |= ((+((-((var_3 ? (arr_12 [i_0] [i_1] [i_5] [i_0]) : var_0))))));
                                var_22 = (max((-32767 - 1), 66));
                                var_23 = ((--15150) ? ((((var_4 - var_12) ? (arr_4 [i_0] [i_1 + 1] [i_2]) : 4))) : var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
