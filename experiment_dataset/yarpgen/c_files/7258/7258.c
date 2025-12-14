/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_17 = (arr_1 [i_0] [i_0]);
                    arr_7 [i_1] [i_1] [i_2] [i_1] = (((((var_3 - 1) ? 1 : (((arr_2 [12]) ? var_13 : 214)))) - 48277));
                    var_18 = ((-var_2 == ((((max(0, var_15))) ? -127 : (arr_5 [i_1] [1] [i_2] [i_2])))));

                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_1] = ((((((-2018577865 && -641244165) != (arr_5 [i_0] [i_1] [i_1] [i_3])))) + (((-641244154 / var_5) ? -var_5 : (((var_6 || (arr_10 [i_1] [i_1]))))))));
                        var_19 = 0;
                        arr_12 [i_0] [i_0] [i_1] [i_3] = ((((641244168 % (arr_6 [i_3 - 1] [i_3 - 1] [i_1]))) + ((-1204237687 ? -16 : 219))));
                    }
                }
            }
        }
    }
    var_20 ^= ((-(0 != 1)));
    #pragma endscop
}
