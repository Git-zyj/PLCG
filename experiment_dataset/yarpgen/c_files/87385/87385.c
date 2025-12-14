/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= ((((!(!114))) ? ((var_10 ? var_3 : ((max(-114, -20033))))) : ((-var_8 ? var_7 : var_3))));
    var_12 = (min(var_12, (((~(min(((114 ? 268435455 : 122)), var_4)))))));

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_4 [i_0] = (arr_1 [i_0]);
        var_13 = (arr_2 [i_0] [i_0]);
        var_14 = (((max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 1])))) ? (max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))) : ((((!(arr_1 [i_0 - 1]))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = ((max((arr_6 [i_0] [i_1]), -var_0)));
                        arr_12 [i_1] [i_2 + 1] &= (((((var_10 ? ((((!(arr_6 [i_0] [i_0]))))) : (min((arr_5 [i_0]), (arr_8 [i_3] [i_0] [i_3])))))) && ((min((min((arr_10 [i_0 + 1] [i_0 + 1] [i_3] [i_3]), (arr_1 [i_0]))), (arr_9 [i_0] [i_2 - 1] [i_2] [i_0 + 1] [i_1] [i_1]))))));
                        var_16 ^= ((+((~(min((arr_3 [10]), var_6))))));
                        var_17 = (min(((((arr_6 [i_0 + 1] [17]) == (arr_6 [i_0 + 1] [i_3])))), (((arr_6 [i_0 - 1] [0]) ? (arr_6 [i_0 + 1] [i_0]) : (arr_6 [i_0 + 1] [i_0 + 1])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
