/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62087
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = ((((min(var_2, var_10)) - var_9)));
                var_18 |= (arr_3 [i_0]);
                arr_6 [i_0] [i_1 - 1] = min(151, var_12);

                for (int i_2 = 4; i_2 < 10;i_2 += 1)
                {
                    var_19 += 110;

                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        var_20 = (max(var_20, -27));
                        arr_13 [i_3 - 2] = 5;
                    }

                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_21 = ((-7466296630575408326 ? (arr_14 [i_0] [4] [i_1 + 1] [i_2] [i_1 + 1] [i_4]) : ((var_4 ? 4294967271 : ((var_17 ? var_4 : 7466296630575408328))))));
                        var_22 = 15578;
                        var_23 += (arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 - 2] [i_1 - 1]);

                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            var_24 = (max(var_24, 31));
                            var_25 |= (((arr_3 [i_0]) ? 215 : ((-4158 ^ (arr_14 [i_5] [5] [i_4] [3] [i_4] [i_1 + 1])))));
                            arr_19 [9] [9] [i_2 - 3] [3] [i_5] = ((var_13 >= ((max((!7136), 48983)))));
                            arr_20 [i_0] [i_1] [1] = 14;
                        }
                    }
                }
            }
        }
    }
    var_26 = var_1;
    #pragma endscop
}
