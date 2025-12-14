/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_3;
    var_14 = var_3;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        var_15 = (arr_0 [i_0]);
        arr_2 [i_0 - 1] [i_0] = var_3;
        arr_3 [i_0] [i_0] = 4294967295;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 = (min(var_16, ((((arr_5 [i_1]) ? ((-(-27505 - 22250))) : -4)))));
        /* LoopNest 2 */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_1] = (max(-1549281259, -22250));

                    for (int i_4 = 1; i_4 < 17;i_4 += 1)
                    {

                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_17 *= (min(var_12, (-22250 < 22249)));
                            var_18 -= 1339347191;
                            var_19 ^= ((-((((((arr_17 [i_5] [i_4] [7] [i_3] [i_3] [i_2] [i_1]) ? var_11 : var_7))) ? (((10810304731418486631 ? -22250 : -8014))) : (var_5 & 32762)))));
                            arr_19 [i_5] = (var_11 % 32761);
                        }
                        var_20 *= (((max(1741995210, var_4)) * ((min(-1549281258, var_3)))));
                        var_21 = (-40 / -32762);
                    }
                }
            }
        }

        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                for (int i_8 = 1; i_8 < 18;i_8 += 1)
                {
                    {
                        var_22 = ((min((arr_24 [14] [14] [i_8 - 1] [i_8 + 1] [0] [17]), var_11)));
                        var_23 ^= min((!-4456999417073333673), (min(var_1, (arr_23 [i_7] [i_7] [i_8 + 1] [i_7]))));
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, (((((((arr_23 [i_1] [i_6] [i_9] [i_10]) == (arr_23 [i_1] [i_1] [i_1] [i_1])))) >> ((((22247 ? 22250 : -35)) - 22238)))))));
                            var_25 ^= ((((min((((arr_21 [0] [i_6]) ^ 521950089342846422)), (arr_4 [i_1])))) ? (((((max(var_9, (arr_4 [i_1])))) ? -32754 : (arr_17 [i_1] [i_6] [i_6] [i_10] [i_11] [i_9] [i_9])))) : ((((((arr_10 [i_9] [7]) | -4))) ^ ((39 & (arr_25 [i_1] [i_6] [i_9])))))));
                        }
                    }
                }
            }
            var_26 = (((((((arr_25 [i_1] [i_1] [i_6]) < 3511459521)))) - ((-(arr_25 [i_1] [i_6] [i_6])))));
        }
    }
    #pragma endscop
}
