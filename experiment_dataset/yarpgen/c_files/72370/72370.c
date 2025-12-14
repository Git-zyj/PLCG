/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72370
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = ((!(((var_11 << (var_4 - 72))))));
        arr_3 [i_0] |= (max(((((-32755 <= -5818702611028575367) <= ((-128 * (arr_0 [13])))))), (max(-32749, (max(0, var_1))))));
        var_16 = 236;
    }
    var_17 *= (min((max((~-5818702611028575378), var_15)), (min((min(var_12, -7420042076157276458)), (4294967272 && 3103250706)))));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_6 [i_1] = (max((0 + 201), ((min((25556 || 9), (max((-127 - 1), 32742)))))));
        arr_7 [i_1] = (min(-8927644224711290786, (arr_1 [i_1])));
        var_18 ^= (--29289);
        var_19 = (arr_1 [i_1]);

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_10 [8] [8] |= (~(arr_8 [0]));
            var_20 += (0 & 36);
            var_21 = (arr_5 [i_1]);
            var_22 = (~4294967295);
        }
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_23 *= ((-((-(arr_1 [i_3])))));
        var_24 = -14698;
    }

    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        var_25 = (min(var_25, ((((157 != 1492950393) == 10925)))));
        var_26 *= (min(((((min(0, -12275))) ? (2338967110409566548 - 32754) : (~3103250706))), (!3103250706)));
    }
    #pragma endscop
}
