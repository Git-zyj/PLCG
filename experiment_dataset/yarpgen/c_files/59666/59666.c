/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59666
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 &= ((~((((((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_0]) : var_15))) ? -1 : (~var_0)))));
                var_21 = (min(-639664, ((max((arr_1 [i_1]), (arr_1 [i_0]))))));

                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    var_22 = (min(var_22, (arr_3 [i_0] [i_1] [1])));
                    var_23 = (max(((-((max((arr_4 [i_1] [i_2]), 1))))), ((min((var_14 < var_13), (arr_3 [i_2] [i_2] [i_2 + 1]))))));
                    var_24 = ((((1087099320 & ((var_19 ? 2192640309 : (arr_4 [i_1] [i_2]))))) != (arr_1 [i_1])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 2; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_25 = ((((max((min((arr_12 [9] [i_4]), 17552941613223689938)), 80))) && var_8));
                    var_26 &= (max(28146, 17552941613223689929));
                    var_27 += (min(39, 893802460485861669));
                    var_28 = (max(var_28, ((4027162138 ? (arr_0 [i_3]) : (arr_10 [i_4] [i_3])))));
                    arr_17 [i_4] = (min((17552941613223689919 >= var_5), ((+((var_9 ? (arr_7 [i_3]) : (arr_10 [i_4] [5])))))));
                }
            }
        }
    }
    #pragma endscop
}
