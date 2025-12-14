/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69251
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(((((63983 ? var_11 : var_3)))), ((-((var_6 ? -8387400403042049978 : -433))))));
    var_19 -= (max(((max(3544310062013301933, 61440))), ((var_3 ? var_2 : (var_7 ^ -25139)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_20 = 821040511;
                    var_21 = ((6455572737518475378 ? ((var_1 ^ (max(11991171336191076217, var_16)))) : -25118));
                    var_22 -= ((121 ^ (25120 < 25120)));
                    var_23 = (((-25139 | var_3) ? ((((var_16 != var_10) ? (-2196111251679689671 - var_8) : (((max(var_4, 121))))))) : ((((max(12239666494662770289, 6396614216185300910))) ? var_17 : (!25099)))));
                }
            }
        }
    }
    #pragma endscop
}
