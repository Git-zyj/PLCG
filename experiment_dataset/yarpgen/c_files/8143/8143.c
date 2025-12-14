/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8143
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = min(-1205710058, 6341746732766913679);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_8 [i_1 + 2] = ((((((-50 + 19555) ? -1 : (6341746732766913679 > 13)))) || ((max((((!(arr_7 [i_0] [i_0] [i_1] [i_2])))), (arr_6 [i_2 - 2]))))));
                    arr_9 [i_0] = ((-(((arr_3 [i_0]) ? (arr_1 [i_0]) : (arr_5 [i_1 + 3] [i_2])))));

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_13 = ((11522 ? (!var_2) : (12304 ^ -13)));
                        var_14 = (max(var_14, ((((arr_10 [i_1 - 1] [i_1] [i_2 + 2] [i_1] [i_1] [i_2 + 1]) && ((min((arr_7 [i_1 - 1] [i_1] [i_2 + 1] [i_3]), (arr_10 [i_1 + 3] [i_1 + 3] [i_2 - 2] [i_3] [i_0] [i_3])))))))));
                    }
                    for (int i_4 = 3; i_4 < 18;i_4 += 1)
                    {
                        arr_16 [i_0] [i_1] [i_0] [i_1] [i_1 - 1] [i_2] = var_3;
                        arr_17 [i_0] [3] [7] = ((((((((var_1 ? 1205710045 : var_0))) % 123))) ? (arr_6 [i_0]) : (max((max(16174951268241898986, 8268048151417456589)), (((-589182122 - (arr_7 [i_4] [i_2] [i_0] [i_0]))))))));
                        arr_18 [17] [i_1] [i_1] [i_2 + 2] [i_2] [i_1] = (min(((~(arr_11 [i_2 + 2] [i_4 - 3] [i_2] [i_4] [i_2]))), 65535));
                        arr_19 [i_4] [i_2 + 2] [i_1] [i_1] [13] [i_0] = (((min(-11553, (arr_6 [i_1 - 1]))) <= ((~(arr_6 [i_1 + 2])))));
                    }
                    for (int i_5 = 2; i_5 < 18;i_5 += 1) /* same iter space */
                    {
                        var_15 = ((((-65544 == (arr_7 [i_5] [i_5] [i_5] [i_5 + 1]))) ? (arr_7 [i_5] [i_5] [i_5 - 2] [i_5 - 1]) : ((~(arr_7 [i_5 - 1] [i_5] [i_5] [i_5 + 1])))));
                        var_16 = ((((((arr_14 [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) ? ((~(arr_4 [i_1]))) : (~0)))) ? (24 > 0) : var_0));
                        var_17 &= var_4;
                    }
                    /* vectorizable */
                    for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] = 255;
                        arr_26 [i_6] [i_2 + 2] [i_1] [i_0] = (arr_12 [i_0] [14] [14] [i_6 - 2]);
                    }
                    arr_27 [i_0] [i_1] [i_1 + 2] [i_1 + 3] = (((((arr_15 [i_1 + 2] [i_1 + 3]) % -var_11))) ? (arr_14 [i_0] [i_1] [18] [i_2] [i_2]) : (((-13 + 2147483647) << (((arr_23 [i_0] [i_1]) - 14819544643222597372)))));
                    var_18 = (!0);
                }
            }
        }
    }
    #pragma endscop
}
