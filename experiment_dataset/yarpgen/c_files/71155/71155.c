/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71155
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_14 << var_2);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1 - 2] = ((((((var_9 / var_10) >= (arr_7 [i_0])))) == (((!(((var_15 >> (-8702137592225116490 + 8702137592225116519)))))))));
                                var_18 = var_7;
                                var_19 = (((((var_10 ? var_15 : var_15))) ? (((((arr_5 [i_1 - 2] [i_2 - 2]) >= (arr_0 [i_1 - 3]))))) : 8702137592225116510));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            {
                                var_20 = (min(var_20, 255));
                                arr_20 [i_6] [i_1] [i_2] [i_1] [i_0] = 26787914;
                            }
                        }
                    }
                    var_21 = (7349728357037005644 / 5859);
                }
            }
        }
    }
    var_22 &= var_7;
    #pragma endscop
}
