/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97580
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    var_11 = (-448706643 | var_4);
    var_12 = (((max(0, ((var_4 ? var_2 : 4294967279)))) != (((((var_6 >> var_4) && (4294967279 | -448706643)))))));

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 1] = ((var_9 == (0 & var_2)));
        arr_4 [i_0] [i_0 - 1] = ((((max(((var_6 ? -1 : var_8)), var_8))) > 17));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_13 = -40173618;
        var_14 = ((((4134795811 ? (arr_7 [i_1]) : var_9)) ^ (0 <= var_6)));
        var_15 = (max((arr_8 [i_1]), (((64 && 1) ? ((1 ? var_1 : 4294967271)) : (arr_1 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 9;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_16 = (max(((max((arr_1 [i_5]), (arr_1 [i_2])))), (((arr_1 [i_2]) - (arr_1 [i_2])))));
                                var_17 = (max((((var_4 ? (arr_10 [i_2]) : (arr_10 [i_2])))), (((((var_4 >> (var_3 - 191)))) ? (max(2724807724812131211, (arr_1 [6]))) : (((19931 ? 11 : var_2)))))));
                                var_18 = ((~(((arr_6 [i_2] [i_2]) * ((min(var_5, 52)))))));
                            }
                        }
                    }
                    arr_20 [i_2] [i_2] [i_4] [i_2] = var_2;
                    arr_21 [i_2] [i_3 - 1] [i_4 + 2] [i_4] = (min(var_7, ((1 ? 1537607361 : 244))));
                }
            }
        }
        var_19 = 1574022934198906705;
    }
    var_20 |= var_4;
    #pragma endscop
}
