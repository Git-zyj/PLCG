/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_13 = var_4;
                            arr_11 [i_1] = (max((((~((max(82, 85)))))), (max((min(var_3, var_7)), ((min(var_8, var_0)))))));
                            var_14 = (max(79, 17628493536058659874));
                        }
                    }
                }
                var_15 = (min(var_15, ((max(var_4, ((min(1, 1))))))));
                arr_12 [4] [i_1] = (min(var_2, (min((var_8 <= var_3), -var_9))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_4] [i_4] = (var_7 && ((((min(var_1, var_9)) ^ var_1))));
                    var_16 &= (max(((min(1, 57591))), (min(var_3, var_5))));
                    arr_21 [i_6] [i_4] [i_4] = (min(var_3, (min(var_9, var_5))));
                    arr_22 [i_4] [i_5] [i_5] [i_4] = (((min((min(var_3, var_5)), (!var_10))) < var_5));
                    var_17 = var_6;
                }
            }
        }
    }
    #pragma endscop
}
