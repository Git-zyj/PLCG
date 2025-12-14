/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85610
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (min(var_12, (arr_0 [i_0])));
        var_13 = ((((max((arr_0 [i_0]), (arr_0 [i_0])))) - (((arr_0 [i_0]) + (arr_0 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {
        arr_5 [i_1] [i_1] = ((!((min((min(24, 12638)), (((var_7 && (arr_1 [i_1] [i_1])))))))));
        arr_6 [i_1] [i_1] = (((((~(1 * -1011824853)))) ? (arr_0 [i_1]) : 1));
    }
    var_14 = 8875658362024848518;
    var_15 = var_9;

    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_16 = (max(((((arr_7 [i_2]) - var_8))), (arr_7 [i_2])));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    var_17 = ((968394469744999113 ? (((-32767 - 1) ? 24039 : -93)) : (-32767 - 1)));
                    var_18 = (min(var_18, ((((((+(((arr_0 [i_2]) * (arr_9 [i_2] [i_4])))))) ? (((arr_7 [i_4]) ? ((((arr_11 [i_4] [i_3] [i_2]) < (arr_13 [i_2] [i_2])))) : 41)) : ((4639 ? 1047559285 : 1)))))));
                }
            }
        }
        arr_16 [i_2] = (((((((((-2147483647 - 1) ? 59274 : (arr_7 [i_2])))) * (-5472 / 2)))) ? 5335419063424702544 : (16642998272 >= 41464)));
        arr_17 [i_2] = (max(1516717243, ((-17924 * (arr_7 [i_2])))));
        arr_18 [i_2] [i_2] = (((arr_13 [i_2] [i_2]) ? -5469 : (min(((97 ? 1 : -32752)), (arr_8 [i_2])))));
    }
    #pragma endscop
}
