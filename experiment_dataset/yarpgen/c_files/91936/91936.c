/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91936
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91936 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91936
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_11;
        var_13 = (min(var_13, (((var_9 ? (((-5735 && (arr_0 [i_0 - 1])))) : ((255 ? 2047 : 125)))))));
        arr_3 [i_0 + 2] [i_0] = (((arr_0 [i_0]) == (((max(-4, 65535))))));

        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            arr_7 [i_0] [i_1] = ((arr_4 [i_0] [i_0]) < (arr_1 [i_0 + 2]));
            arr_8 [i_0] = (-1570784620 | 103);
            var_14 = ((-25921 ? (((arr_0 [i_0 + 2]) ? -1 : (arr_0 [i_0 + 1]))) : (((max((arr_1 [i_0 + 1]), (arr_6 [i_0 + 2] [i_1 + 1])))))));
            arr_9 [i_1] [i_0 + 1] = (arr_1 [i_0 + 1]);
        }
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                {
                    arr_16 [i_0] [i_2] [i_3] = (arr_10 [i_3] [i_3] [i_3]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                arr_22 [i_5] [i_2] [i_2] [i_2] [i_0] = 63488;
                                arr_23 [i_0] [i_2] [i_3] [i_0] [i_5] = (arr_4 [i_4] [i_5]);
                                arr_24 [i_0] [i_2] [i_5] = ((((max(-19983, (arr_14 [i_5] [i_0 + 1] [i_0] [i_0])))) && ((((arr_14 [i_0 + 2] [i_0 + 2] [i_0] [i_0 + 2]) | (arr_14 [i_0] [i_0 - 1] [i_0] [i_0]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        var_15 = ((20890 ? -1064918596 : -1064918596));
        arr_27 [i_6] = var_12;
        arr_28 [i_6] [i_6] = (max((arr_5 [i_6] [i_6]), (arr_5 [i_6] [i_6])));
        arr_29 [i_6] = ((((max(var_4, (arr_0 [i_6])))) ? ((0 ? 18285407285489196231 : 59742)) : 1));
    }
    var_16 = -16;
    var_17 = min(var_6, -5741163298523845079);
    #pragma endscop
}
