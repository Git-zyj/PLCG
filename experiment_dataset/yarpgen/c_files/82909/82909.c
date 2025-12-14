/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (-1 <= 19762375);
                arr_7 [i_1] [i_1] = ((!((min((max(var_2, var_11)), ((min(27496, var_1))))))));
                var_13 = ((~((~(arr_1 [i_1])))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        arr_11 [i_2] = (max((arr_10 [i_2] [i_2]), ((min(82, 82)))));
        arr_12 [i_2] = (arr_8 [3]);
    }

    for (int i_3 = 1; i_3 < 19;i_3 += 1)
    {
        arr_15 [i_3] [i_3] = var_9;
        arr_16 [i_3] = ((((((!17256562199499068808) % (arr_13 [i_3] [i_3 - 1])))) ? (min(-12502, (arr_14 [i_3 + 1]))) : ((((!((min(var_1, var_10)))))))));
        arr_17 [i_3] = (((((min(var_12, var_6)))) ? (((~var_2) ? -109 : 632229754)) : 127));
    }
    var_14 = ((4115224549 ? (((~0) + (max(var_3, 4115224548)))) : (((min(73, var_6))))));
    #pragma endscop
}
