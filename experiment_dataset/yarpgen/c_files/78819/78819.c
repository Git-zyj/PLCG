/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78819
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_16 = (arr_0 [i_0]);
        var_17 = ((((((2470099925 % 4294967295) ? ((var_5 ? var_9 : 4294967295)) : (arr_1 [i_0])))) ? (var_4 && var_10) : 1839805958202456));
        var_18 = ((var_5 | (((8128 && (8128 + 5655389296704471849))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            var_19 = ((var_11 ? var_6 : var_12));
            var_20 = (min(var_20, (((arr_4 [0] [i_1 + 2]) ? (arr_4 [2] [i_2]) : (arr_4 [2] [i_1 + 2])))));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_21 = ((((arr_8 [i_3]) + var_12)));
            var_22 = (((arr_9 [i_1] [i_3]) * ((var_7 ? var_6 : (arr_10 [i_3] [i_3] [i_3])))));
            var_23 = var_1;
        }
        var_24 = (var_4 || var_8);
        var_25 = ((((18 ? (arr_7 [i_1] [i_1] [i_1]) : -439546865)) / (10 * 6606)));
    }
    /* LoopNest 2 */
    for (int i_4 = 3; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            {
                var_26 -= (-7061466169279874050 | 1150);
                var_27 = var_2;
            }
        }
    }
    var_28 = var_10;
    #pragma endscop
}
