/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_6 ? var_11 : (((37596 ? var_5 : var_6)))))) ? ((((((var_6 + 9223372036854775807) >> var_5))))) : -31481));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    var_15 *= 4294967295;
                    var_16 = ((((min(8606537547466767294, 4294967295))) ? var_7 : (~var_12)));
                    var_17 ^= (((((-(arr_5 [i_0] [i_1] [i_2])))) + ((31481 ? -91 : (arr_1 [i_0] [i_0])))));
                    var_18 = (max(var_18, (((((var_3 ? (arr_4 [i_2] [i_1]) : 81)) / var_1)))));
                    arr_9 [i_0] [i_0] [i_1] [i_0] = var_13;
                }
                var_19 *= (((((((arr_7 [i_0] [i_0] [i_1] [i_1]) + 2147483647)) >> (((arr_7 [i_0] [i_0] [i_0] [i_1]) + 2081316620)))) + ((var_6 ? 0 : 81))));
                var_20 = (max(var_20, (arr_3 [i_0] [i_1])));
            }
        }
    }
    #pragma endscop
}
