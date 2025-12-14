/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_16, var_4));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 -= ((!(arr_2 [i_0] [i_0])));
        arr_3 [i_0] = (((arr_2 [i_0] [i_0]) ? (((!(arr_2 [i_0] [i_0])))) : (~65535)));
        var_19 = ((((arr_1 [i_0]) | (arr_0 [i_0]))));
    }
    for (int i_1 = 2; i_1 < 12;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((((var_3 < (arr_5 [i_1] [i_1]))) ? (arr_2 [i_1] [i_1]) : var_12));
        var_20 = (min(((1356759939937191643 ? 3207027063 : 3207027063)), 33552384));
        arr_9 [i_1] &= min(var_1, ((((arr_1 [i_1 - 1]) != (arr_1 [i_1 - 2])))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((max((((((arr_4 [i_1 - 2]) + 2147483647)) >> (((arr_4 [i_1 - 2]) + 125)))), (((((arr_4 [i_1 - 2]) + 2147483647)) >> (((arr_2 [i_1 - 2] [i_2]) - 1890530520358422972)))))))));
                    var_22 = (arr_10 [i_1 - 2]);
                }
            }
        }
    }
    var_23 = (min(var_23, var_0));
    var_24 = var_8;
    var_25 = (max(3207027045, 0));
    #pragma endscop
}
