/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= (((var_15 - 53) ? -var_4 : ((max(var_3, -121)))));
    var_17 *= (max((((((var_2 ? var_14 : 104)) <= ((min(var_1, var_8)))))), (((!82) ? (var_9 & var_5) : (8 == -489852988)))));
    var_18 -= (max(-var_0, -65527));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (max(8, 50192));

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    var_20 += (((arr_7 [12]) == ((~((~(arr_6 [i_0])))))));
                    arr_8 [i_1] = (min(-489852988, 101));
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    var_21 = ((((!(arr_4 [1] [i_1])))) ^ ((-(arr_0 [i_3]))));
                    arr_13 [i_0] [i_1] [i_1] [i_3 - 1] = 15;
                    arr_14 [i_0] [i_1] [i_1] [i_1] = ((var_0 ? var_12 : (((var_0 << (var_0 - 9298))))));
                    arr_15 [i_1] [i_1] [i_1] [i_0] = -1;
                }
                arr_16 [i_1] [i_1] [i_1] = (((((var_10 ^ 252) / (((var_2 ? var_6 : var_14))))) ^ ((((!(((var_10 | (arr_7 [i_0]))))))))));
                var_22 = ((((((-102 + 2147483647) << (((((arr_3 [i_0]) + 21652)) - 8))))) ? (~var_2) : -505210664));
            }
        }
    }
    #pragma endscop
}
