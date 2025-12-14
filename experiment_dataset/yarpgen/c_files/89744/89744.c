/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(0, var_12));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ? (arr_1 [i_0]) : (min(var_10, (~1)))));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_19 = (max(((min(var_2, var_7))), ((var_1 ? var_4 : var_8))));
            /* LoopNest 3 */
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((((var_8 ? 1 : (arr_9 [16])))) / (var_14 <= 1))))));
                            var_21 ^= ((max(1, (var_9 == 1098974756864))));
                        }
                    }
                }
            }
            var_22 = ((((((-9223372036854775807 - 1) ? (((arr_3 [i_1] [i_0] [i_0]) | 255)) : var_12))) && ((min(((var_13 ? var_16 : -4117861869698855008)), ((max(1, var_1))))))));
        }
        arr_14 [5] = ((((!((min(var_8, -912074945683075593))))) ? (max((arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), 1)) : var_12));
        var_23 = min((22517 && 2379126197), ((((247 ? var_6 : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [8] [i_0]))) == (~var_16))));
        var_24 = ((-((max(1, 201)))));
    }
    #pragma endscop
}
