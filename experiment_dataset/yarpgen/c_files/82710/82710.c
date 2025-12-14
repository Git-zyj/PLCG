/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((min(-7787485765530241332, var_1))) ? ((((max(var_2, 7787485765530241327))))) : (var_6 - 110)));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] = var_3;
        arr_4 [i_0] = var_5;
        arr_5 [i_0 + 1] [i_0] = (((arr_1 [i_0 - 1] [i_0]) || var_2));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_9 [4] = ((1 ? (min(var_1, (arr_8 [i_1]))) : 7787485765530241357));
        arr_10 [i_1] = (min((3177939971 & var_6), (2955955225725260512 && 3098096634)));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_11 = var_7;
                        arr_19 [i_3] [i_3] [i_3] [i_3] [i_2] = (max(((var_4 / (arr_0 [i_2 + 1]))), (max((var_1 > 0), (arr_1 [i_1] [i_4])))));
                        var_12 = (max(13309142916883807157, 3072319506713890672));
                        var_13 = ((((((var_0 * (arr_7 [3]))))) && ((max((max((arr_2 [i_3]), var_4)), ((max(-30990, 31014))))))));
                    }
                }
            }
        }
        arr_20 [7] = ((16985777307593066935 + ((((((3418043800 ? 6206356636378308431 : 36))) ? -27952 : 284741447)))));
        var_14 ^= (((30990 && 3418043800) * (!var_0)));
    }

    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_15 = (min(var_15, -1112569320));
        arr_23 [i_5] = var_2;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 19;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 18;i_7 += 1)
            {
                for (int i_8 = 4; i_8 < 18;i_8 += 1)
                {
                    {
                        arr_32 [i_5] [i_7] [i_6] [i_5] [i_5] = (((arr_30 [i_8] [i_6] [i_7 - 1] [i_6] [i_5]) ? (((((arr_30 [4] [i_6] [4] [10] [i_8]) || 17084729003036971467)))) : (((arr_30 [i_5] [i_5] [i_5] [i_5] [i_5]) ? (arr_30 [i_5] [i_5] [i_6] [i_7] [i_8]) : (arr_30 [18] [18] [i_7] [i_7 - 1] [i_7 - 1])))));
                        arr_33 [i_5] [i_5] [i_7] [i_8] = (13459 != 18446744073709551615);
                    }
                }
            }
        }
        var_16 = var_4;
    }
    var_17 = var_9;
    #pragma endscop
}
