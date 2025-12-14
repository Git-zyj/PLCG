/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((-32761 ? ((((min(0, 315392671)) != (1 - 1)))) : ((2088960 ? 9241 : (!4292878336)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_13 = (~(min((arr_0 [i_0]), 120)));
                var_14 ^= (((min(4294967295, 1)) == 3812020377724004920));
                arr_5 [8] [8] &= ((var_1 ? (((((arr_4 [i_1] [i_1]) == ((~(arr_0 [10]))))))) : (max(1, 130023424))));
            }
        }
    }
    var_15 -= (max((min((12213 * 0), var_3)), var_3));
    var_16 = (((0 + -1079025339) * (((min(47, var_10)) * (((max(0, var_9))))))));
    #pragma endscop
}
