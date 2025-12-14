/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= var_0;
    var_16 = (((min((var_8 & var_14), 36)) << (min(((var_2 ? var_9 : var_6)), var_13))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_17 ^= (((((!((min(var_7, (arr_1 [i_0]))))))) >= ((min(1082588535, (138 >= 162))))));
                var_18 = (!var_3);
                arr_6 [i_1] [i_1] [i_0] = (((~194) >= 11674730900169413325));
                arr_7 [i_1] [i_1] = (((max(((max(1795004895, (arr_1 [16])))), var_2)) >= ((((104 ? (arr_3 [i_1]) : var_7)) >> var_14))));
            }
        }
    }
    var_19 = ((1795004895 ? 1925886775 : 2137636782));
    #pragma endscop
}
