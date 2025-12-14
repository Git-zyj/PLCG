/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_3 ? var_8 : -626764007));
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [1] = arr_0 [i_0] [i_0];
        var_21 = (-(min(2755305313, 3983385934)));
        var_22 ^= (2755305313 ? 1863011085 : 68);
        var_23 &= (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 4; i_2 < 12;i_2 += 1)
        {
            var_24 = (1863011085 - 167);
            var_25 += ((((min(((min(1863011056, 119))), (1539661983 + 2831)))) <= ((1539661983 ? 6983736660055349682 : 166))));
            var_26 = ((-(arr_5 [i_2 + 1] [i_2 - 1])));
        }
        for (int i_3 = 1; i_3 < 14;i_3 += 1)
        {
            arr_9 [i_1] [1] = (arr_5 [i_3 - 1] [i_3 - 1]);
            var_27 = var_0;
        }
        var_28 = min((arr_7 [3]), ((((((arr_3 [i_1]) % 3032956681))) ? ((5888910241303010446 ? -1863011086 : var_12)) : (arr_3 [i_1]))));
    }
    #pragma endscop
}
