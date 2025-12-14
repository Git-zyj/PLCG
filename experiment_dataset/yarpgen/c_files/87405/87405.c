/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((2313788606 ? (~7894275206478966682) : 18619)) < 11102));
    var_21 ^= ((10143429778091468993 | (((7557178289416718492 | 7557178289416718497) - -46912))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_22 = (((18619 <= -526525253) >> (0 / 15)));
        var_23 += (((7894275206478966687 ? 77 : 10889565784292833118)));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] [i_1] [i_1] = (((10889565784292833128 + 55844) ? -7894275206478966687 : 1));
            var_24 = (--716793323);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_25 = (((-7894275206478966687 + 9223372036854775807) >> ((((41043 ? -35 : 32767)) + 46))));
            var_26 = (10889565784292833128 * 18446744073709551588);
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            var_27 ^= (((0 ? -7894275206478966683 : 15)));
            var_28 = (max(var_28, (((-((24481 ? -70 : -7894275206478966683)))))));
            arr_12 [i_0] [i_0] [4] = -41043;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            var_29 = (max(var_29, (0 | 39270)));
            var_30 = 3578173972;
            arr_15 [i_4] [10] [i_0] = (-4582 * 139);
        }
    }
    #pragma endscop
}
