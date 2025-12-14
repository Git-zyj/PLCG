/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_1;
    var_14 = ((((((((~1) + 2147483647)) << ((((2656336159 ? var_2 : 120)) - 6268))))) ? (((var_10 | (~1815733858)))) : (min(5, 2656336159))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 22;i_2 += 1)
                {
                    arr_7 [0] = -var_6;
                    arr_8 [i_0] [i_0] [i_0] [i_0] = ((((var_0 & 54) || ((62 > (arr_0 [i_0]))))));
                }
                for (int i_3 = 4; i_3 < 21;i_3 += 1)
                {
                    arr_11 [i_0] [i_1] [i_3] = (((arr_0 [i_0 - 1]) ? (((arr_0 [i_0 + 1]) ? (arr_0 [i_0 + 1]) : (arr_0 [i_0 + 1]))) : var_8));
                    var_15 = (min((arr_5 [i_1 - 1] [i_3 - 4]), (arr_5 [i_1 - 1] [i_3 - 2])));
                    arr_12 [i_0] [i_3] [i_3 + 1] = var_2;
                    arr_13 [i_3] [i_3] [i_3] = (((((-127 - 1) + 2147483647)) << (((((((((arr_1 [i_3]) || 1536))) > ((-(arr_1 [i_0])))))) - 1))));
                }
                arr_14 [i_0] [i_1] = (((((-((var_12 ? var_4 : var_9))))) ? (((((!(arr_10 [1] [1] [13]))) ? (!120) : (((arr_4 [0] [0]) << (((arr_10 [i_0] [i_0 + 1] [i_0]) - 42063))))))) : (((var_2 & (arr_5 [i_0] [i_0 - 1]))))));
            }
        }
    }
    var_16 = ((var_7 + (!432308501)));
    var_17 = ((var_9 ? var_9 : ((15590035071213051109 ? (((-127 - 1) ? var_10 : var_7)) : var_7))));
    #pragma endscop
}
