/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_11 = (((((0 ? var_7 : (arr_2 [i_1])))) ? (arr_7 [i_0] [i_1 - 3] [i_2]) : (arr_6 [i_0] [i_1 - 1])));
                var_12 = (~3529557667240706018);
                var_13 = (((((arr_5 [i_0] [i_1] [i_2]) ? -3529557667240706019 : 36)) != ((((arr_2 [i_0]) ? 4294967295 : var_0)))));
                var_14 = 0;
                var_15 += (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1]);
            }
            var_16 = (min(var_16, 1111));
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1) /* same iter space */
        {
            var_17 = 32767;
            var_18 = (1907795820 ? (arr_2 [i_3 - 1]) : (arr_9 [i_3] [i_3 - 1]));
            var_19 = -var_5;
        }
        for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
        {
            var_20 = (min(var_20, 7298878382530179963));
            arr_14 [i_4] = ((1111 ? 1 : (((4849 <= (arr_13 [i_0] [i_4] [i_4]))))));
            var_21 = (min(var_21, 81));
        }
        var_22 -= (((1 & 65535) ? ((var_1 ? var_3 : (arr_10 [i_0] [i_0]))) : ((-(arr_7 [i_0] [i_0] [i_0])))));
        var_23 = (min(var_23, 1));
        var_24 *= var_3;
    }
    var_25 = (((max(((0 ? 1 : var_4)), -72)) * ((((65535 || var_10) ? var_8 : ((max(var_2, 1))))))));
    #pragma endscop
}
