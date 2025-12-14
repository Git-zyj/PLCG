/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = ((((-(999793847 > var_2)))) == (min((~120), (arr_4 [i_0] [i_1]))));
                    var_13 = (!3295173435);
                    arr_8 [i_2] [i_1 + 1] [i_1] [3] = (min((min(((15210391090014746045 % (arr_7 [i_0] [i_0] [i_2]))), (arr_7 [i_0] [i_1 + 1] [i_2]))), -27266));
                }
            }
        }
    }
    var_14 = (29 < -30);
    var_15 = ((((-var_7 + (min(var_1, var_4)))) * (var_0 < -var_0)));
    #pragma endscop
}
