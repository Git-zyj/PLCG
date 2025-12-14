/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (((~-465122959) ? (min((min(2121102628, 2382632029)), var_7)) : (((min((var_8 || var_3), (26 || -13435)))))));
    var_13 = (min((min((4 & 31), (~-3571921298516695788))), ((min((min(-1193791877, 0)), (~var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = (((arr_0 [i_0]) ? ((((126 >= (var_6 << 1))))) : (((arr_1 [i_0 + 1] [i_0 + 1]) >> (((-32767 - 1) + 32793))))));
                var_15 = (((((min((((872583077 || (arr_1 [i_0] [5])))), (arr_3 [i_0]))))) > ((min(var_3, (arr_1 [i_0 + 1] [i_0 + 1]))))));
            }
        }
    }
    var_16 = var_5;
    #pragma endscop
}
