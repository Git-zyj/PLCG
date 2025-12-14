/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((min((var_9 ^ var_16), var_11))) ? var_14 : (((var_2 + 2147483647) << 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_20 = (min(var_6, var_13));
                    var_21 = (arr_0 [5]);
                    arr_6 [i_0] [i_1] [i_2] = ((~((((((arr_5 [i_0] [i_1] [i_0]) ? var_4 : 131))) ? (max(var_2, var_6)) : (((1 | (arr_1 [i_0] [18]))))))));
                    arr_7 [i_0] [i_1] &= ((-123 ? (((min((arr_5 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_1] [i_2]))))) : (((arr_2 [i_0]) ? var_9 : (arr_5 [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
