/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = min((((!(arr_5 [i_1] [i_0])))), (((arr_5 [i_0] [i_1]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_1] [i_1]))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_18 += (~var_16);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = 262143;
                            var_19 = (min(((min((arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 2]), 311799928))), ((var_0 ? (arr_9 [i_2] [i_2 - 1] [i_2 + 1] [i_2 + 2] [i_2 + 1] [17]) : var_2))));
                            arr_14 [i_2 - 1] &= (min(-262161, 1));
                            var_20 = (max(var_20, (min(var_1, 4294705126))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                {
                    arr_22 [16] [i_6] [i_5] [16] |= ((((((arr_17 [18]) ? 4294705135 : (arr_17 [0])))) ? (((arr_17 [20]) ? (arr_17 [6]) : (arr_17 [10]))) : ((var_16 ? (arr_17 [8]) : (arr_17 [0])))));
                    var_21 = (min(var_21, ((((((arr_19 [i_4] [i_6]) ^ (min(var_14, 262143))))) ? (((((max((arr_21 [i_4] [i_4] [i_4] [i_4]), 16777215)) != ((~(arr_20 [i_4] [i_4] [i_4]))))))) : var_7))));
                    var_22 = (max(var_22, ((((arr_19 [i_5] [i_6]) == 281474842492928)))));
                }
            }
        }
    }
    #pragma endscop
}
