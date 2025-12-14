/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_11 = (max((max((((arr_0 [i_0 - 1] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0]))), (arr_0 [2] [i_0]))), (arr_0 [i_0] [i_0 + 1])));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_12 = (max(-2919338095347140510, 5232565903920961497));
                                var_13 = (arr_0 [14] [i_4]);
                                var_14 = (((!((max((arr_11 [i_0] [i_0] [i_0 + 3] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))))));
                                var_15 -= (arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_2 - 1]);
                                var_16 = (arr_3 [i_0]);
                            }
                        }
                    }
                    arr_12 [i_0] [i_0] = (arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_17 = (max(var_17, ((max((arr_5 [i_1] [i_1] [i_1] [i_1]), ((((arr_8 [i_1]) >> (arr_8 [i_1])))))))));
                                var_18 = (max(var_18, (~7511611725859864641)));
                                var_19 = (max(var_19, (arr_6 [i_2] [i_1])));
                            }
                        }
                    }
                    var_20 = max((arr_11 [i_1 + 1] [i_0] [i_1] [i_0] [i_0 + 3]), (max((arr_11 [i_1 + 1] [i_0] [i_0] [i_0] [i_0 + 3]), (arr_11 [i_1 - 2] [i_0] [i_1] [i_0] [i_0 + 2]))));
                }
            }
        }
    }
    for (int i_7 = 3; i_7 < 10;i_7 += 1)
    {
        var_21 -= ((-(((arr_2 [i_7] [i_7]) & (arr_20 [6])))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 9;i_9 += 1)
            {
                {
                    var_22 = ((((max(23252, -3193618104578962098))) ? (((max((!2143815871), (8 <= 31583))))) : ((+(((arr_25 [i_7] [i_8]) ? (arr_19 [i_7]) : (arr_9 [i_9] [i_8] [11] [i_7 + 1] [i_7] [i_7])))))));
                    var_23 = (((((((arr_9 [i_7 + 2] [i_7 + 2] [i_8] [i_8] [i_8] [i_9]) - (arr_16 [i_7 + 1] [i_8])))) ? (arr_2 [i_7] [i_7]) : (arr_13 [i_7] [i_9 + 1] [i_9] [i_7 + 1]))));
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 23;i_10 += 1)
    {
        arr_29 [i_10] [i_10] = ((((max((max((arr_28 [i_10]), (arr_27 [i_10] [i_10]))), (((!(arr_28 [i_10]))))))) ? (32758 ^ -5) : (arr_28 [i_10])));
        var_24 = (max(var_24, (((70351564308480 ? 8388607 : -23)))));
        var_25 -= ((((max((arr_28 [i_10]), (arr_28 [i_10])))) / (arr_28 [i_10])));
    }
    var_26 = (((var_9 ? var_5 : (var_0 * var_8))));
    var_27 += (var_1 && var_10);
    #pragma endscop
}
