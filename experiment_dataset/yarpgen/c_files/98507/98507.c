/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((max(var_3, var_5))), -111));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [10] [4] = var_8;
        arr_5 [i_0] = 131;
        var_11 = (var_5 ? var_7 : var_9);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_12 = (max((arr_6 [i_1]), (((!(62614 < 9654777413970334391))))));
        var_13 = (min(var_13, ((((62614 ? 110 : (arr_6 [i_1])))))));
        arr_8 [i_1] [3] = (((((138 ? 117 : -124))) ? ((3541907910 << (var_4 - 98))) : (((1 ? var_4 : var_4)))));
        var_14 *= (-2114521448 / var_7);
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 4; i_4 < 21;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        var_15 = ((+(((arr_11 [i_5] [0] [i_3 - 1]) ? 62075 : (arr_11 [i_2] [i_2] [i_2])))));
                        var_16 += -2114521430;
                    }
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        var_17 += ((((min(-124, (arr_18 [i_3 - 1] [i_4 - 3] [i_4] [i_6])))) ? ((62614 ? (var_2 + var_8) : var_4)) : (min(var_7, ((2406466555 ? var_2 : 70))))));
                        var_18 = (arr_17 [17] [1] [i_4] [i_2]);
                    }
                    var_19 *= (max((var_7 / 67), var_9));
                    arr_20 [i_2] [17] [i_2] = (var_0 && (((((arr_14 [i_2] [1] [i_2] [i_2]) ? -127 : -2114521448)) != var_0)));
                    var_20 += var_5;
                }
            }
        }
        var_21 *= (min(((var_4 / ((min(209, 2922))))), 117));
        arr_21 [i_2] = ((((-((13577 ? var_0 : var_6)))) >> (255 - 246)));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        arr_25 [i_7] [i_7] = ((~(((arr_6 [i_7]) ? 1 : var_7))));
        arr_26 [i_7] [i_7] = (arr_12 [i_7]);
    }
    #pragma endscop
}
