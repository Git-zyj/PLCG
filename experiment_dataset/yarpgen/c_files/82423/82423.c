/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((min((((-119 + 2147483647) << (1 - 1))), (!-116))))));
    var_20 = ((!((min(var_11, var_10)))));
    var_21 = (~var_1);

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_22 = ((min(5, 9738)));
                        arr_10 [10] [i_1] [i_3 + 2] &= (((~0) > (~4501008620565133699)));
                        var_23 = ((~((-((max(0, 65522)))))));
                    }
                }
            }
            var_24 = (min(var_24, ((min((~-25560), (8 && 0))))));

            for (int i_4 = 2; i_4 < 13;i_4 += 1)
            {
                var_25 -= (max(18, ((~(min(8307174188818061207, 38566))))));
                var_26 -= (~65530);
                arr_14 [i_0] [i_1] [i_0] = (-(max(((min(65500, 65526))), -24)));
                arr_15 [i_0] [i_1] [i_0] [i_0] = ((((14499222504210331998 ? 2153617394 : 4))) ? ((-(max(17, 2802126327)))) : 93);
                arr_16 [i_0] [6] [i_0] = (-65507 != 1);
            }
            arr_17 [i_0] [i_0] [i_0] = ((~(~-1459228958)));
        }
        var_27 |= (((0 + 23) || (251 * -4)));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        arr_21 [18] [16] &= (134217727 / 65535);
        arr_22 [i_5] = 27774;
    }
    #pragma endscop
}
