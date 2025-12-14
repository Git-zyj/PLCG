/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88620
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88620 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88620
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] [i_0] = ((~(((!((max((arr_0 [i_0]), 15492))))))));
                var_11 = max((!29936), (arr_4 [i_1 + 3] [i_1] [i_0]));
                arr_6 [i_0] [9] = (max((((arr_2 [i_1 + 3] [i_1 - 1]) & ((((!(arr_1 [i_0] [i_1]))))))), (((((max((arr_0 [i_1]), 32767))) ? (((!(arr_2 [i_0] [i_1])))) : (arr_4 [i_0] [i_0] [i_1 + 1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                var_12 = (arr_7 [i_2] [i_3 + 2]);
                var_13 = (max(var_13, (arr_7 [i_2] [i_2])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 2; i_4 < 7;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 9;i_6 += 1)
            {
                {
                    arr_19 [i_4 - 2] [i_4 - 2] [i_5] [i_6] = (!520093696);

                    for (int i_7 = 1; i_7 < 7;i_7 += 1)
                    {
                        arr_24 [9] = (arr_16 [i_4 - 1]);
                        var_14 = (arr_2 [i_6] [i_4]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        arr_28 [i_4] [i_5] [i_6] [1] = (((arr_11 [i_4 - 2] [i_4 + 2]) & (arr_11 [i_4 + 3] [i_4 - 2])));
                        arr_29 [i_5] [i_6 - 1] = (arr_13 [i_8]);
                    }
                    var_15 = ((!((!(arr_8 [i_5] [i_4 + 2])))));
                }
            }
        }
    }
    #pragma endscop
}
