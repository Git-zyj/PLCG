/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_10 = var_7;
        var_11 = ((!(((arr_0 [i_0]) >= 30720))));
        var_12 = (min(var_12, var_3));
        var_13 = 30720;
    }
    for (int i_1 = 4; i_1 < 21;i_1 += 1)
    {
        var_14 = 4;

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_15 = (!2885467576);
            var_16 = ((~((((arr_4 [5]) ? 1 : 118)))));
            var_17 = ((32686 * ((+(((arr_6 [i_1]) * 0))))));
            var_18 = ((((((min(4398046511072, var_6))) ? (arr_3 [i_1] [i_1]) : (((!(arr_6 [i_1])))))) - 23182));
        }
        var_19 = ((+(((arr_4 [i_1 + 1]) + (-30720 == 31)))));
        var_20 = ((((((arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]) >= 2238280619484030235))) ^ 4));
    }
    for (int i_3 = 2; i_3 < 16;i_3 += 1)
    {
        var_21 = 33554431;
        var_22 = (-127 - 1);

        /* vectorizable */
        for (int i_4 = 3; i_4 < 14;i_4 += 1)
        {
            var_23 = 0;
            var_24 = (~150);
            arr_13 [i_3] [i_3 - 2] = (((arr_11 [i_4 - 1] [i_3 - 2]) ^ (60798 - 4252006706340680409)));
        }
        /* vectorizable */
        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 3; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 13;i_7 += 1)
                {
                    {
                        var_25 = arr_10 [i_7];
                        var_26 = 1;
                    }
                }
            }
            var_27 = ((15276 ? var_1 : (arr_18 [i_3] [i_5] [i_5])));
        }
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            var_28 = (arr_16 [i_3] [i_3] [i_8]);
            arr_23 [i_3] [i_3] [i_3] = ((-(arr_3 [i_8] [i_8 + 1])));

            for (int i_9 = 3; i_9 < 15;i_9 += 1)
            {
                var_29 &= (((arr_3 [i_3 - 2] [i_8]) | (((arr_1 [i_3 + 1] [i_8 - 3]) >> (((arr_1 [i_3 - 1] [i_8 - 3]) - 1791053755))))));
                var_30 -= ((-(((139 >= -30) >> (-4398046511072 + 4398046511076)))));
            }
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            arr_29 [2] [2] = (arr_12 [i_3] [i_3] [i_3 - 2]);
            var_31 = (+-15276);
        }
    }
    var_32 = 17722569521102000521;
    var_33 = (min(var_33, var_7));
    #pragma endscop
}
