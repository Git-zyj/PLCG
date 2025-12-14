/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77556
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77556 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77556
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_10 / ((-7823 ? 7544783859556947493 : -7544783859556947484))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_15 = (min(var_15, ((((12010686820689574177 ? ((5878 ? -7544783859556947497 : -4541243921312943344) : 59660)))))));
                    var_16 = (min(var_16, ((((59680 ? 59638 : 176))))));
                }
            }
        }
    }
    var_17 = var_3;
    var_18 = 7544783859556947483;
    #pragma endscop
}
