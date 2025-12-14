/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (((-127 - 1) ? -1075732509 : -1));

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_8;
        var_20 = -1075732494;

        for (int i_1 = 2; i_1 < 19;i_1 += 1) /* same iter space */
        {
            var_21 = var_14;

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                var_22 *= (((-1075732489 + 2147483647) << (((-8225837369434046104 + 8225837369434046120) - 15))));
                var_23 = (min(var_23, (((((((((arr_8 [i_0] [i_0] [i_1] [i_0]) > (arr_1 [i_0 - 2])))) * ((((arr_3 [11] [i_1] [11]) < -8))))) - ((3221225472 ? 62 : 65535)))))));
            }
            var_24 = (~((-(arr_6 [i_0 - 1] [i_0] [i_0 - 1]))));
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 19;i_3 += 1) /* same iter space */
        {
            arr_12 [i_3] = -1623414380;
            arr_13 [17] [17] = (arr_0 [i_3] [i_0 - 1]);
        }
        arr_14 [i_0] |= (arr_8 [i_0 + 1] [i_0] [6] [i_0 - 3]);
        var_25 |= (+(((arr_0 [i_0 - 3] [i_0]) - (arr_0 [i_0 - 2] [11]))));
    }
    #pragma endscop
}
