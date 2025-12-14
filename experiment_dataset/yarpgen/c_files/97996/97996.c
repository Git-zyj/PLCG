/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, -var_13));
    var_15 = (max(var_8, (((var_6 + 2147483647) >> (((~var_10) - 3804560993))))));
    var_16 = (min(((~(min(var_0, var_1)))), ((((~var_10) ^ (min(var_10, var_10)))))));
    var_17 = (~var_12);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((!((((((arr_2 [1] [i_0 - 3]) == (arr_3 [i_0]))) ? ((~(arr_0 [11]))) : (arr_2 [i_0 - 4] [i_1 - 3]))))));

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    arr_9 [11] [i_1 + 1] [i_2] = ((255 <= (((7529204096844944847 / 847812033) ? (arr_8 [i_0] [4] [i_0 + 1] [i_0 - 1]) : ((4294967295 ? -13 : 1))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (min(((min((arr_11 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3 + 1]), ((-(arr_12 [i_0] [i_1] [i_2 + 1] [i_0])))))), ((-(min((arr_0 [4]), (arr_3 [i_0 + 1])))))));
                                arr_15 [i_2] [i_2] = max((arr_7 [3] [i_2]), (arr_14 [i_0 - 1] [i_1 - 3] [i_2] [i_3] [3]));
                                arr_16 [i_2] [i_2] [i_2] = 857553283;
                            }
                        }
                    }
                    var_19 = ((-((((((arr_11 [i_0] [i_0 - 4] [5] [i_1] [i_2] [i_2]) ^ (arr_3 [i_1 - 2]))) <= ((((arr_1 [i_2 + 1]) ? (arr_10 [10] [i_1 - 2] [2] [i_2 + 1]) : (arr_4 [8] [8] [i_2])))))))));
                }
            }
        }
    }
    #pragma endscop
}
