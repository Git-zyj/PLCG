/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61974
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!(var_10 % 6))) ? ((min((var_12 <= 78), 43317))) : (!var_12));
    var_21 = ((!((min(((11287 ? 1408032902119570769 : 43317)), var_8)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_22 = (max(((-(arr_3 [i_1] [i_1]))), ((max(65529, (arr_2 [i_0]))))));

                for (int i_2 = 3; i_2 < 8;i_2 += 1)
                {
                    var_23 = (max(var_23, ((((((-241188332236510676 / ((~(arr_3 [5] [i_0])))))) ? (5314 != 1524841797) : ((6 | (arr_6 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2]))))))));
                    arr_8 [i_0] [i_1] [i_2] [i_2] = (+-241188332236510680);
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            {
                                var_24 = (arr_2 [i_3]);
                                arr_17 [i_3] = (arr_16 [i_0] [3] [i_3] [i_3] [i_5]);
                                var_25 += (max((min((arr_6 [i_0] [i_1] [i_3] [i_4 - 1]), 29745)), (((!(arr_10 [i_0] [i_0] [i_0] [i_0]))))));
                            }
                        }
                    }
                    var_26 -= 1524841797;
                }
                var_27 = (~-1);
            }
        }
    }
    var_28 = (min(var_28, 1802109192));
    #pragma endscop
}
