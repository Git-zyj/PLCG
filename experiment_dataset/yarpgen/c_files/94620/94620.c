/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((15 ? 7764528185593691647 : -6740207636095841159))) ? (var_0 == 84) : var_12))) + ((var_11 ? var_5 : (3247992083 % 77)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_20 = max((1125625028935680 | -4358110890255685388), ((max(-4358110890255685388, (arr_3 [i_0 + 1])))));
                arr_4 [i_1] [i_1] = (((min(-1027046154863518020, (min(var_3, var_1)))) % (((max(var_0, (arr_3 [i_0])))))));
            }
        }
    }
    var_21 = (min(var_21, (var_12 && var_6)));
    var_22 = ((var_17 || ((((var_4 ? var_15 : var_3))))));
    var_23 = ((((((min(var_11, var_12))) ? var_14 : var_18))) || (0 <= var_9));
    #pragma endscop
}
