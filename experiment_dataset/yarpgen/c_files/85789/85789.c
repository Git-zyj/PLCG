/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85789
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((max((9980 * var_10), 5694194738628584704))) ? 24811 : (arr_2 [i_0])));
        arr_4 [i_0] [i_0] = 15505;
        arr_5 [i_0] = (arr_0 [i_0]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 2; i_2 < 12;i_2 += 1)
        {
            arr_12 [i_2] [i_2] = (min(-3517368078737391613, (max(var_4, ((131 ? 1 : 33554428))))));
            var_15 = (max(-4299012542924019592, 3150472024714971271));
            arr_13 [i_1] [i_2] |= (max((((3150472024714971271 ? var_0 : 9978))), 14910186879451490168));
        }

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            var_16 = (max((~var_10), (((((110 ? 274743689216 : 52097))) ? ((18446744073709551615 ? 3599871388 : var_12)) : var_12))));
            arr_16 [i_1] = 65534;
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
    {
        var_17 = (max(var_17, var_9));
        arr_20 [i_4] [i_4] = 236;
        arr_21 [i_4] = (((min(23204, 6177488382932323284))));
        var_18 |= ((((((((42332 ? var_4 : var_1))) ? var_2 : var_5))) ? (arr_9 [2]) : var_7));
        arr_22 [i_4] [i_4] = ((var_7 ? ((((var_1 > (arr_10 [i_4] [0]))) ? 1 : ((var_10 ? 4294967295 : 232)))) : ((((min(1, 1)) ? 0 : ((var_13 ? 244 : 0)))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
    {
        var_19 = ((~((var_7 ? 3536557194258061448 : 11794186959531984251))));
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 10;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 8;i_8 += 1)
                {
                    {
                        arr_33 [i_6] [i_6] [i_7] = ((2147483647 ? var_10 : 128));

                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            var_20 = 3517368078737391613;
                            arr_37 [i_6] [i_8] [i_7] [i_6] [i_6] = ((2147483647 ? (var_4 | 49048) : 65535));
                        }
                        for (int i_10 = 3; i_10 < 8;i_10 += 1)
                        {
                            var_21 = 18446744073709551615;
                            arr_41 [i_5] [i_6] [i_7] [i_8] [i_6] = (2147483647 % var_5);
                            var_22 = (min(var_22, -1));
                        }

                        for (int i_11 = 0; i_11 < 10;i_11 += 1)
                        {
                            arr_45 [3] [i_6] [i_6] [4] = (var_6 && 56811);
                            arr_46 [i_5] [6] [8] [i_8] [8] |= var_2;
                        }
                        var_23 -= (!var_4);
                    }
                }
            }
        }
        var_24 = (max(var_24, var_2));
        arr_47 [i_5] = 6952573252429809612;
    }
    var_25 = ((max(((max(138, 2147483647))), var_1)));
    var_26 = (max(((1709569291285727082 ? ((var_2 ? 4974 : var_3)) : ((-107 ? var_0 : var_7)))), ((26535 ? var_8 : (!64379)))));
    #pragma endscop
}
