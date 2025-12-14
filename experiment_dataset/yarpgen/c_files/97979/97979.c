/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += (min(-2147483640, (max(-133151901, var_11))));
    var_17 = (max(var_17, var_12));

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        var_18 = (min((((var_5 ? var_8 : 1))), -133151901));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        arr_9 [1] [6] [i_3] [i_3] &= ((-(-18 && 12453337546308172604)));
                        arr_10 [i_0] [i_1] [i_2] [i_2] = (((arr_3 [i_0] [5]) ? -2048 : (max(var_6, -var_2))));
                    }
                    var_19 *= ((((max((((var_12 ? (arr_4 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))), -892986069))) ? (((min(-2016, 842005656233825020)) & -133151901)) : var_14));
                    arr_11 [i_0] [i_0] [i_2] &= 86;
                    var_20 *= 3;
                }
            }
        }
        var_21 &= var_11;
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 = ((-(arr_0 [i_4])));
        arr_14 [i_4] = var_1;
    }
    /* vectorizable */
    for (int i_5 = 3; i_5 < 13;i_5 += 1)
    {
        arr_17 [i_5] [9] |= 9573119113931498638;
        var_23 = (var_0 / var_13);
        var_24 = 9573119113931498639;
        arr_18 [i_5] [i_5] = (arr_2 [i_5] [1]);
    }
    var_25 = ((-(737227926 + var_15)));
    #pragma endscop
}
