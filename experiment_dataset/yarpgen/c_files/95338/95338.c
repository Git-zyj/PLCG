/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    var_13 = (+((var_10 << (((((((-2147483647 - 1) - -2147483627)) + 50)) - 18)))));
    var_14 = ((((~(~1)))) ? (min(-28197, (~-1290357512))) : (~-54525121));
    var_15 = 4193792;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                var_16 = ((-(arr_4 [i_1])));
                arr_6 [i_0] [15] [i_2] = ((!(arr_0 [i_0])));
                var_17 = ((~((-(arr_5 [i_0] [i_1] [9])))));
            }
            var_18 = (2147483647 ? (arr_4 [i_0]) : var_10);
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_19 = (max(var_19, (((!((!(-2147483647 - 1))))))));

            for (int i_4 = 1; i_4 < 16;i_4 += 1)
            {
                var_20 ^= (!4);
                var_21 = (-0 && 491979566);
            }
            var_22 = (((~-17) ? (~57907) : (arr_7 [i_0] [i_0] [i_0])));
        }
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            var_23 *= 0;
            var_24 = 905401681;
            var_25 = ((8458917141147267511 == var_1) ? (arr_1 [i_0]) : (arr_9 [15] [i_0] [i_5] [i_0]));
            arr_14 [1] = var_7;
        }
        var_26 = (~(!14921828910790207670));
        arr_15 [i_0] [i_0] = (~((-1804233666 ? 692002930 : 5)));
    }
    #pragma endscop
}
