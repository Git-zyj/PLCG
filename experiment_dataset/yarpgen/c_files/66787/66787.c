/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66787
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_12));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [0] = (((var_4 || var_1) && (4163882282079396278 || 4163882282079396278)));
                    arr_10 [i_0] [i_1] [i_2] = (((var_4 < 120) >= (var_14 ^ 14282861791630155345)));
                    var_19 = (((var_7 < var_1) - ((((arr_2 [i_0]) || (arr_2 [i_2]))))));
                }
            }
        }
    }
    var_20 = ((((var_9 % -4) & var_2)) * var_15);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                var_21 = (((((var_7 && (arr_11 [i_3])))) + (var_16 <= var_11)));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 23;i_6 += 1)
                    {
                        {
                            arr_22 [i_3] [i_3] = (((((var_14 + 2147483647) >> (((arr_16 [i_5] [i_5 - 1] [i_5 - 1]) - 2929937299)))) <= ((((arr_16 [i_5] [i_5 - 1] [i_5 - 1]) == -16)))));
                            arr_23 [i_3] [i_5 - 1] [i_6] = (i_3 % 2 == zero) ? (((((var_15 - (arr_18 [i_3]))) ^ ((256 >> (((arr_18 [i_3]) - 7731))))))) : (((((var_15 - (arr_18 [i_3]))) ^ ((256 >> (((((arr_18 [i_3]) - 7731)) - 18696)))))));
                        }
                    }
                }
                var_22 = (max(var_22, ((((18446744073709551615 ^ 38875) % (-3256 * 39208))))));
            }
        }
    }
    #pragma endscop
}
