/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_13;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_15 = (max(var_15, (((min(76, 18446744073709551615))))));
        var_16 = -12708;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_17 -= ((min(var_8, var_4)));

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            arr_7 [i_1] [i_1] = var_12;
            var_18 = ((-29361 ? 18860 : -43));
            var_19 = ((max((((31782 ? 25433 : 16355))), (474083054599047442 & var_10))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_20 = (min(var_20, ((min((var_10 <= -16372), ((255 ? 474083054599047430 : 4309)))))));
            arr_12 [i_1] [i_3] [i_1] = (((((((max(55644, var_3))) ? 4294967295 : ((255 ? 6564214886707623439 : 18446744073709551615))))) ? ((0 ? -31782 : 127)) : ((max(var_6, var_4)))));
            var_21 = (min((max(((65 ? var_10 : var_5)), 35412)), ((max(4, -8572)))));
        }
    }
    #pragma endscop
}
