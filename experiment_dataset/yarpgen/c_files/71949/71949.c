/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71949
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
                    var_13 = (((((~(arr_3 [i_0] [i_0])))) ? (((((var_12 ? 0 : 18177119958207367545)) <= (((269624115502184070 ? (arr_3 [i_0] [i_2]) : 5842618421786481372)))))) : (((arr_0 [i_0]) ? (arr_2 [i_2] [i_1] [i_0]) : 0))));
                    var_14 = (max((((max(var_8, var_10)) < ((max(-5842618421786481373, var_5))))), (arr_4 [i_0] [i_0] [i_0] [i_0])));
                    arr_6 [i_1] [i_1] = (((((arr_3 [i_0] [i_2]) ? 0 : (arr_3 [i_2] [17])))) && ((((((269624115502184070 ? 127 : 408468812765121424))) ? 127 : ((~(arr_0 [i_1])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_15 = -1310228550;
                                var_16 += (((min(0, (arr_16 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_6] [i_6])))) && (((((18177119958207367545 || (arr_15 [i_3] [i_4] [i_5]))) ? 1 : (((!(arr_17 [i_3] [i_4] [i_4] [i_4] [i_7] [i_7]))))))));
                                arr_21 [i_3] [10] [i_5] [i_6] [i_4] |= ((((arr_20 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6] [i_7 - 1]) ? var_7 : (arr_20 [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] [i_7 - 1]))));
                                arr_22 [i_3] [i_3] = ((-1 / ((0 ? 5842618421786481372 : (((arr_13 [i_5] [i_6]) ? 255 : 0))))));
                            }
                        }
                    }
                }
                var_17 = (min(var_17, (arr_15 [i_3] [i_3] [i_4])));
                var_18 = (max(var_18, (((var_9 * ((((((arr_14 [i_3] [i_3] [i_4] [i_4]) || var_12)) ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : (arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))))));
            }
        }
    }
    var_19 = (-(max((0 * 0), var_2)));
    var_20 = 86;
    #pragma endscop
}
