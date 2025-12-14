/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80356
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80356 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80356
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] = var_0;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_7 [i_0] [14] [i_1] = (var_15 % (arr_1 [i_1] [22]));
            arr_8 [i_0] [24] [13] &= ((var_4 && (!13127366862536143877)));
            var_19 &= var_13;
            var_20 = (max(var_20, (arr_6 [13] [i_1])));
        }
    }
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        arr_12 [i_2] = (max(var_0, ((((-58855 + 2147483647) >> (var_17 - 14952201542024496188))))));
        arr_13 [i_2] [i_2] = (((((((var_12 ? var_8 : 43706))) != -5319377211173407738)) ? (((!((min(var_10, 10440559909480779976)))))) : (((23766 != (max((arr_9 [i_2]), (arr_11 [i_2] [i_2]))))))));
        var_21 = 10405;
        var_22 += ((37339 ? (((max(8448687506871710455, var_11)) + (max(6230484131061391461, 0)))) : (min((arr_9 [i_2 - 1]), ((32767 ? 5319377211173407737 : 3294212530360879432))))));
    }
    var_23 = ((var_6 << (var_0 - 1028054785338932001)));
    var_24 = (((((((12216259942648160155 ? var_2 : 22439)) >= ((50676 ? var_4 : 47441)))))));
    #pragma endscop
}
