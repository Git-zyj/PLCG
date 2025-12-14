/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_1] [0] [i_1] |= ((((arr_1 [6] [i_1]) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_1 [1] [i_1]))));
                var_12 -= ((((!(((1 ? 1546630175 : 3535585210))))) ? (arr_2 [i_0] [i_0] [i_1]) : ((~(arr_3 [i_0] [12])))));
                arr_5 [i_0] = ((((5811752338052509006 ? (arr_1 [i_0] [i_0]) : 14148)) | var_5));

                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    var_13 -= var_6;
                    var_14 = (min((((((var_0 / (arr_7 [i_0] [i_0])))) ? 10459 : -1417595523)), (((!(arr_2 [i_2] [i_2 + 1] [i_2 + 1]))))));
                }
            }
        }
    }
    var_15 = 3289687854;
    var_16 *= ((((min((0 ^ 10459), ((var_9 ? var_4 : var_9))))) ? (~-561839815) : (max(var_11, (min(var_1, 1005279441))))));

    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_17 = var_4;
        arr_12 [i_3] [i_3] = (((((9424 ? -126 : (arr_8 [i_3]))))) ? (((arr_8 [i_3]) ? ((0 ? (arr_10 [i_3]) : -5811752338052509007)) : -5811752338052509007)) : (min((arr_8 [i_3]), ((((arr_10 [i_3]) ? (arr_10 [i_3]) : (arr_10 [i_3])))))));
        arr_13 [i_3] = ((-(max(-1307807971, (arr_11 [i_3])))));
        arr_14 [i_3] = (min(0, (((arr_10 [i_3]) ? var_5 : ((-1307807971 ? (arr_9 [i_3]) : (arr_11 [21])))))));
        arr_15 [i_3] = (max((((((arr_10 [i_3]) ? 1 : var_10)))), (arr_8 [i_3])));
    }
    #pragma endscop
}
