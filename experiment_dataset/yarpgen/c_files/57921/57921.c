/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_15 = var_7;
                var_16 = (((-33 + 2147483647) << (11912 - 11912)));
                var_17 = var_2;
                var_18 = (arr_0 [6]);
            }
        }
    }
    var_19 = (((((((32764 | var_2) == (~var_6))))) ^ ((30 ? (var_8 & var_4) : var_4))));
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            {
                var_20 = ((-11892 + 2147483647) << 0);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_21 = ((((((((255 ? 4943231762859833437 : 5986))) ? var_14 : -var_10))) ? var_12 : (((arr_3 [i_3] [i_3] [11]) ? (!225) : (arr_4 [i_2 + 2] [i_4] [i_3])))));
                            var_22 *= ((127 ? 103 : -62));
                            var_23 = (max(var_23, (((-(--41459))))));
                            var_24 = (((((-((min(1, 122)))))) ? ((~(arr_2 [i_3] [i_5]))) : (-32767 - 1)));
                        }
                    }
                }
                var_25 = (min(var_25, (arr_16 [i_2] [4] [i_3] [i_3])));
                var_26 += (61 + 0);
                var_27 = (max(var_27, var_11));
            }
        }
    }
    #pragma endscop
}
