/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((~((9223372036854775807 ? (~9223372036854775807) : ((432293452 ? (-9223372036854775807 - 1) : 9223372036854775803))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            var_16 = (!3244924015336852729);
            var_17 = (~9223372036854775807);
            arr_8 [i_1 + 3] [i_1 + 3] [i_0] = (((((102 ? 5669290528319294623 : 8191))) ? 3761106918 : ((-4398046511104 ? 4398046511101 : (-9223372036854775807 - 1)))));
            arr_9 [i_0] [i_1] [i_1 - 2] = -9223372036854775807;
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            var_18 *= ((3923776290081841714 ? 100 : 1));
            var_19 -= -3923776290081841714;
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            var_20 = (min(var_20, 3923776290081841702));
            var_21 = 62;
            arr_15 [i_3] [i_0] = (192 - -1);
            arr_16 [i_0] [i_0] |= 84;
        }

        for (int i_4 = 2; i_4 < 16;i_4 += 1)
        {

            for (int i_5 = 4; i_5 < 16;i_5 += 1)
            {
                var_22 |= (-3304964151 ? ((-266143092 ? (-9223372036854775807 - 1) : 560377834)) : (-1 * -1133043469681931692));
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        {
                            var_23 = 990003131;
                            var_24 |= (!1);
                        }
                    }
                }
                var_25 = 103;
                arr_28 [i_0] [i_4] [i_5] = -7;
            }
            var_26 -= ((9223372036854775803 ? 8194 : 5612835365566545132));
        }
        var_27 = ((103 ? 631314998 : 105));
        arr_29 [i_0] [i_0] = -84;
    }
    #pragma endscop
}
