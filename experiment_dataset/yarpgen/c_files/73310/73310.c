/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_16 = (~var_15);
                    var_17 = (max(var_17, (((-(((var_15 == ((((!(arr_2 [i_0])))))))))))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        var_18 = 254;
        var_19 = (((((-4663191670773090659 ? (var_8 > 173) : -1783))) - ((202 ? (max(var_7, -1784)) : var_1))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_20 = (min((max((1 * 35), (min(17511535688704542707, 1)))), (((-1037192952 + ((221 + (arr_12 [i_4]))))))));
        var_21 = ((~((-((min((arr_11 [i_4] [i_4]), (arr_13 [i_4] [i_4]))))))));
    }
    var_22 = 221;

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_23 = (max(var_23, (((!(arr_16 [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    var_24 *= arr_14 [i_5];
                    var_25 &= (arr_15 [i_6 - 2]);
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_24 [i_8] [i_8] |= (((-(!32))) > (((arr_12 [i_8]) ? (arr_23 [i_8]) : 4095)));
        var_26 = ((!(255 || var_15)));
        arr_25 [i_8] [i_8] = (!(var_6 == -95));
    }
    var_27 = (min((((min(-6676552070235289316, var_3)) / -1575185081)), var_14));
    #pragma endscop
}
