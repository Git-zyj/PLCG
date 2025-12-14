/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77758
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_15 ^= (((~(arr_11 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] [i_4]))));
                            var_16 = (arr_11 [i_0] [i_0] [i_2] [i_0] [i_4] [i_0] [i_3]);
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_0] = (((((2473578498 && (arr_7 [i_4]))) || (~63596))));
                        }
                        var_17 = (1821388797 | 111);
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_18 = ((~(max(var_3, ((2047 ? 2043 : 25988))))));
                        var_19 = (min(var_19, -91));
                        arr_16 [i_0] [i_0] [i_2] = (((min(((-(arr_15 [i_5] [i_2] [i_0]))), ((var_3 ? 63612 : (arr_1 [i_0] [i_1]))))) - 99));
                    }
                    var_20 = (min(var_20, 64916));
                    var_21 = (max(var_21, (((~((max((!3107445963), 63492))))))));
                }
            }
        }
    }
    #pragma endscop
}
