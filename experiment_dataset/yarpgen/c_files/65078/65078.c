/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65078
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65078 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65078
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_19 = (((arr_0 [i_0]) ? ((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))) : (0 + var_13)));
        arr_2 [i_0] = (((arr_1 [3] [i_0]) / ((((arr_1 [i_0] [i_0]) != 327514847)))));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1] = ((((((arr_4 [i_1]) ? (arr_0 [i_1]) : -327514848))) ? ((((arr_4 [i_1]) && (arr_4 [i_1])))) : (((15943087339370110004 || (arr_4 [i_1]))))));
        arr_6 [i_1] [i_1] = (max((var_5 * 0), ((max(var_13, 5)))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 = (max(var_20, (((-1456183143594359343 ? 2709016789909961090 : 9468984088144990556)))));
                    arr_11 [i_3] [0] = (-1456183143594359343 ? -1456183143594359343 : (arr_1 [i_1] [i_1]));
                }
            }
        }
    }
    for (int i_4 = 3; i_4 < 17;i_4 += 1)
    {
        var_21 = ((-((((((arr_12 [i_4 + 1]) != (arr_13 [i_4])))) << ((1622278836 ? 0 : 2709016789909961086))))));
        var_22 = 2073971513;
        var_23 = 12020032551960396186;
    }
    #pragma endscop
}
