/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63825
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63825 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63825
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 += var_3;
    var_15 &= ((1415232678 ? 15720 : 18446744073709551615));
    var_16 -= 1692956107;
    var_17 *= (-82308131 ? 1 : ((((~1415232678) < (((max(3697, 25642))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_18 = (min(((((arr_4 [i_0] [0] [i_1]) <= (arr_3 [i_0] [i_1])))), -1631564742));
                var_19 = ((((min((max((arr_5 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_1]))), (!2834918148)))) ? ((min(var_10, (arr_1 [i_1] [i_0])))) : (max((!-1146023179), -6870))));
            }
        }
    }
    #pragma endscop
}
