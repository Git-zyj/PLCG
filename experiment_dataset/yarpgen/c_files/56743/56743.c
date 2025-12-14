/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_19 = ((!(((0 ^ (0 && 0))))));
                    var_20 &= (1885898281090464588 >> ((((~(arr_8 [i_0 - 2]))) + 22)));
                    var_21 = ((arr_8 [i_0 - 2]) || ((((!var_7) ? (((arr_2 [10]) ? (arr_3 [i_0 + 2] [10]) : var_13)) : ((55 ? 45 : var_4))))));
                    arr_9 [13] = (((((arr_5 [i_1 - 3] [1] [14]) + (arr_2 [i_0 + 1]))) >> ((((-var_5 ? ((~(arr_6 [1] [13] [i_1 - 1]))) : ((((arr_4 [i_0 - 3] [0]) ? var_14 : var_14))))) - 6703334229865300343))));
                    var_22 = (min((1 + 4294967295), (max(4, -1))));
                }
            }
        }
    }
    var_23 = var_16;

    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_24 &= ((((((min(var_5, -4))) || ((max((arr_7 [3] [i_3 + 1] [i_3 + 1]), (arr_10 [i_3 + 1])))))) ? (((!(arr_3 [i_3 + 1] [i_3 + 1])))) : (((!((((arr_3 [i_3 + 1] [i_3 + 1]) ? (arr_5 [1] [i_3 + 1] [i_3 + 1]) : var_9))))))));
        var_25 = (arr_3 [1] [i_3 + 1]);
    }
    var_26 *= var_12;
    var_27 = var_8;
    #pragma endscop
}
