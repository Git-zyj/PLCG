/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81513
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81513 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81513
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((var_11 ? (((min(var_4, 8724192542073224658)) % var_4)) : 4031666427));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_14 = (max(var_14, (arr_5 [i_2])));
                    var_15 = ((((arr_7 [i_0] [4] [i_2 - 1]) != 6284)));
                }
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 18;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_16 = ((-(arr_7 [1] [i_1] [1])));
                            var_17 = (min(var_17, (((((min((arr_11 [i_0] [i_3 + 2] [i_4] [i_4 - 2]), (arr_8 [i_0] [i_3 + 2] [1])))) || (((arr_10 [i_0] [i_3 + 2] [4]) || 4360259755358864612)))))));
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    var_18 = ((658431429 << (((((arr_13 [1] [1]) + 59)) - 11))));
                    var_19 = var_2;
                    var_20 = 9223372036854775807;
                }
                arr_17 [i_0] = ((((((((((arr_13 [i_0] [i_0]) + 2147483647)) << (((-658431431 + 658431441) - 10))))) & (max(var_10, (arr_4 [i_1]))))) * (((((9223372036854775807 ? -658431443 : var_1)) - ((-(arr_5 [i_0]))))))));
            }
        }
    }
    var_21 |= (min(((-9223372036854775807 ? var_8 : var_8)), -658431438));
    var_22 &= (min(((var_6 ? ((var_2 << (((-9223372036854775807 - -9223372036854775790) + 31)))) : var_4)), ((((var_11 != var_7) != (~var_2))))));
    #pragma endscop
}
