/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92916
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92916 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92916
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] = (arr_1 [i_1]);
                arr_8 [i_0] = ((((962545260 ? (arr_1 [i_0 + 2]) : (arr_1 [i_0 + 3]))) * (-2054301138 / 23645)));
                arr_9 [2] |= (arr_5 [i_0 - 1] [i_1] [i_1]);
                var_11 = (arr_0 [i_0 + 1]);
                var_12 &= ((-((-(arr_1 [i_0 + 1])))));
            }
        }
    }
    var_13 ^= (((((var_7 ? var_5 : var_5))) && var_7));
    var_14 *= var_3;
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            {
                arr_15 [i_2 + 3] [i_2 + 2] = -var_4;
                /* LoopNest 2 */
                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        {
                            arr_21 [i_2 + 2] [i_3 + 2] [i_5] [i_5] [i_3 - 1] = ((((min(1125899772624896, ((min((arr_0 [i_3 + 2]), var_10)))))) ? (((arr_14 [i_4 - 2] [i_5]) * 31)) : 18445618173936926720));
                            var_15 = ((((((arr_5 [i_2 + 1] [i_4 - 4] [i_5]) ? (arr_11 [i_2 + 3] [i_4 + 1]) : (arr_10 [i_3 - 2] [i_5])))) + ((((((arr_12 [i_5]) / var_6))) ? (arr_5 [i_4 + 1] [i_4 - 2] [i_4 - 4]) : 0))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 19;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 1;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                {
                    arr_32 [i_7 - 1] = (((((((-(arr_26 [i_7 - 1])))) * ((2557156662886505129 ? (arr_30 [i_6]) : (arr_23 [i_7 - 1] [i_7 - 1]))))) * (((2147483647 ? ((3252275312149557958 / (arr_24 [i_6] [i_7 - 1]))) : -19)))));
                    arr_33 [i_6] [i_6] [i_7 - 1] [i_8] = (var_5 / (((904839359 / (arr_27 [i_6])))));
                }
            }
        }
    }
    #pragma endscop
}
