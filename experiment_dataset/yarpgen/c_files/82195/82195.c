/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_2 + 1] [i_0] = var_1;

                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        arr_12 [i_0] [i_1] [i_1] [i_3] [i_1] [i_1] = ((!((max(32, (arr_4 [i_1] [i_2] [i_2]))))));
                        arr_13 [i_3] [i_1] [i_1] = (-2147483647 - 1);
                        var_13 = (min((max(var_10, 3775534607210317328)), (max((arr_6 [i_0] [i_1] [i_2] [i_3]), var_4))));
                        var_14 = (min(var_14, ((((((arr_5 [i_3 - 2] [7] [i_2] [7]) ? var_6 : (arr_5 [i_3 - 2] [i_3 - 2] [i_3 - 2] [i_3]))) * ((((((min(78, 12288))) >= ((var_6 ? -593551844602860632 : var_6)))))))))));
                    }
                    arr_14 [i_0] = (min((var_0 <= var_8), var_7));
                    var_15 = (min(var_15, (((min((arr_3 [i_1] [i_2 + 2] [i_2 + 2]), (74 % var_10))) > 2147483647))));
                }
            }
        }
    }
    var_16 = var_8;
    var_17 = (max(var_1, var_5));
    var_18 = ((var_3 ? 137170518016 : (((min((var_9 || var_12), 0))))));
    var_19 = var_2;
    #pragma endscop
}
