/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0 - 2] [i_1] = -18938;
                arr_6 [i_1] = ((((min(4294967295, 1))) ? (((~189) / (16279 | 38911))) : (max((arr_2 [i_0 - 1] [i_0 + 3]), ((min(var_15, var_13)))))));
                var_16 = (min(var_16, (((var_13 >> (((min(3852, 15081971370685205388)) - 3830)))))));
            }
        }
    }
    var_17 = ((!((!(var_0 || var_7)))));
    var_18 = (((((2097151 << (511 > 15127)))) ? (min(-3649367821, (max(3034213256, var_4)))) : ((min((249 || var_13), (var_10 ^ var_12))))));
    var_19 = ((!((min((((32767 ? 3331 : 19984))), ((var_9 >> (var_10 - 12463))))))));
    var_20 = ((1 ? 32758 : 254));
    #pragma endscop
}
