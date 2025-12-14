/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += ((var_1 ? -0 : var_9));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = 6712245656379611546;

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_17 = (max(var_17, (((533992259 ? 1020870045 : -2132638232)))));
                    var_18 = (min(var_18, (arr_5 [6])));
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    var_19 |= (((max(3274097236, (arr_1 [i_0 - 1]))) ^ 3274097261));
                    arr_9 [10] [16] [i_3] &= arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 1];
                    var_20 = (arr_5 [i_0]);
                }
                var_21 = (max(var_21, ((((((2067959057 < (arr_8 [i_0] [i_1] [i_0 + 2])))) ^ (((arr_8 [i_0] [7] [i_0 + 3]) ? (arr_8 [1] [i_1] [i_0 + 2]) : (arr_8 [i_1] [i_1] [i_0 + 3]))))))));
                var_22 = (max(var_22, ((((33554416 | 13169495862064051224) ? ((73235853744419791 ? 1647293804 : 17)) : ((((arr_6 [18]) ? (arr_6 [0]) : (arr_6 [18])))))))));
            }
        }
    }
    var_23 = var_7;
    var_24 = ((-2508334200 ? var_15 : (((((7390074732670569276 ? 122 : 217))) * ((1 ? 1306677024218855266 : 6342545574342496931))))));
    #pragma endscop
}
