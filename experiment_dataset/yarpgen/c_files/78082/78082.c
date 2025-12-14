/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78082
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            var_20 = (~38148);
            var_21 *= ((((((var_18 || ((min((arr_0 [i_0 + 1]), (arr_0 [12])))))))) % (min(((4020674064120314449 ? -429740891383459833 : 3252441816623469961)), (min(9223372036854775807, -29447))))));
            arr_7 [i_0] [i_1 + 1] = (min((min(var_0, var_1)), ((((min(0, 1)))))));
            arr_8 [i_0] [i_1] |= ((1 % ((min((arr_1 [i_0 - 2]), var_0)))));
        }
        var_22 |= ((((((arr_2 [i_0 - 3]) ^ 65525))) ? 37180 : (-699323943 && 1)));
        var_23 = ((+((((arr_5 [i_0] [15] [i_0]) | (arr_2 [i_0]))))));
        var_24 = var_18;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = (arr_9 [i_2] [i_2]);
        var_25 = ((((var_18 + 2147483647) << (((var_10 + 26707) - 6)))));
    }
    for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
    {
        var_26 -= var_11;
        var_27 = (min(var_27, (32767 / -373730993)));
        arr_17 [6] &= (min((arr_15 [16]), ((((arr_16 [i_3] [i_3]) ? (arr_16 [i_3] [i_3]) : (arr_16 [i_3] [i_3]))))));
    }
    var_28 = -123;
    var_29 = ((-76 ? 1 : 32767));
    #pragma endscop
}
