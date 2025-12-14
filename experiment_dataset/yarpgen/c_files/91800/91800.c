/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91800
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, 8965547369895760280));
    var_16 = ((-var_2 ? (~7437373785831085593) : var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_17 = (min(var_17, -10796));

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            var_18 = 11009370287878465997;
            var_19 = (max(var_19, var_2));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
        {
            var_20 = (!-109);
            arr_9 [i_2] = (!var_14);
            var_21 = (((arr_5 [i_0] [i_2]) ? 7437373785831085589 : var_7));
        }
        for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] [i_3] [i_0] = (((var_4 ? 11009370287878466023 : var_1)));
            var_22 = (~11009370287878466001);
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 7;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {
                        var_23 = (((arr_0 [6]) ? (((var_4 ? (arr_5 [i_0] [i_3]) : (arr_17 [i_0] [i_3] [i_4 + 1] [i_4 + 3] [i_5])))) : -var_10));
                        var_24 = -var_14;
                        var_25 = (!7437373785831085596);
                        var_26 = (~var_3);
                    }
                }
            }
            var_27 = (min(var_27, (((var_9 ? var_4 : -8301)))));
        }
        var_28 = (max(var_28, (arr_12 [i_0] [i_0])));
    }
    #pragma endscop
}
