/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((~(((var_6 ^ var_8) ? (var_8 > var_7) : (arr_3 [i_0] [i_1] [i_1])))));
                arr_5 [i_0] [i_1] = (max(((var_18 % (arr_2 [i_1] [i_1] [i_1]))), (((arr_1 [i_1]) - -32757))));
                var_20 = (((((var_7 ? var_11 : var_4))) / ((~(~var_1)))));
                var_21 = ((var_19 ? ((-(var_2 | var_5))) : (((max((arr_3 [i_0] [i_0] [i_1]), (((var_3 >= (arr_1 [0]))))))))));
            }
        }
    }
    var_22 = ((((7155397399568753280 ? (((min((-32767 - 1), 23678)))) : (min(var_19, var_4)))) & (var_14 + -72)));
    var_23 = (5944106987072876560 == -28072);
    #pragma endscop
}
