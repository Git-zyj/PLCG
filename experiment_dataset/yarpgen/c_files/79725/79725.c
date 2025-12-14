/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((53200 == (53200 - 214412544858785899)));
    var_17 = (12335 < 30411);
    var_18 = ((var_6 ? (((53200 - (175 + 53200)))) : var_4));
    var_19 = (((((-50 ? var_9 : 1) % (((var_2 ? 91 : var_5)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_20 = ((0 == 104) ? (var_1 >= 12327) : (arr_2 [i_0] [i_0 + 1]));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2 + 2] = -1396910946;
                    var_21 = 152;
                }
            }
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_22 = 144;
        var_23 = ((max(((min((-9223372036854775807 - 1), var_11))), ((var_13 % (arr_2 [i_3] [i_3]))))));
        arr_14 [i_3] [i_3] = 255;
        var_24 = 255;
    }
    #pragma endscop
}
