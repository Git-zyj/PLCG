/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 = ((((((!(arr_4 [i_0] [i_1] [i_1]))) ? (var_3 / -27061) : (var_9 < var_13))) >= (min(2275620193, (~var_2)))));
                var_16 = (((min((min((arr_3 [i_0] [4]), -27061)), ((((arr_0 [i_0] [i_1]) && var_5))))) | -27061));
                var_17 = ((((((arr_2 [i_0] [i_0 + 1] [i_0]) ? (arr_4 [3] [3] [i_0]) : ((((!(arr_4 [i_0] [i_0] [3])))))))) ? (((((!-27066) && ((((arr_3 [i_0] [i_1]) >> (var_3 - 3938162550)))))))) : ((~(arr_4 [i_0] [i_0 + 1] [i_1])))));
                var_18 = (min((arr_2 [i_1] [i_1] [i_0]), (min(688319164603500950, (!28)))));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] = (((((min(var_10, -34)))) ? ((~(((!(arr_4 [i_0] [i_0] [i_0])))))) : (arr_0 [i_0] [i_0])));
                    var_19 = ((((((min((arr_2 [11] [i_1] [i_0]), (arr_6 [i_0] [i_0] [i_0] [i_0])))) && ((min(var_6, 39162))))) && ((!(((17758424909106050666 ? -1 : 688319164603500956)))))));
                    var_20 = ((~(((!688319164603500945) | (min(7754649898850762329, var_9))))));
                    arr_8 [i_1] [i_1] [i_1] [i_1] = ((!(arr_2 [i_0] [4] [i_0 + 1])));
                }
            }
        }
    }
    var_21 = (~-27048);
    var_22 = (min(var_22, var_11));
    var_23 = (min(127, -3400193255));
    #pragma endscop
}
