/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 &= 4058211807;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 = (arr_10 [i_0]);
                        var_20 = (319129801 & -91);
                    }
                }
            }
        }
        var_21 = (max(var_21, (!2951869357)));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 += (min((arr_5 [i_4]), var_2));
        arr_13 [i_4] = (min((min((arr_1 [i_4] [i_4]), (arr_1 [i_4] [i_4]))), ((2994703226 ? (arr_1 [i_4] [i_4]) : -16374))));
    }
    var_23 = var_5;
    var_24 |= var_6;
    #pragma endscop
}
