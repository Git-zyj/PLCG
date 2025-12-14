/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_1] = ((~((+((((arr_4 [i_1 + 1] [i_1 + 4] [14]) <= (arr_5 [5]))))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_14 [i_2] [i_1] = ((0 > (max((((arr_2 [i_1]) ? var_4 : 30960)), ((min((arr_11 [i_0] [i_1 + 4] [i_1 + 4] [i_1 + 4]), (arr_3 [i_0] [13]))))))));
                                var_13 = (max(var_13, ((((((((~(arr_11 [i_0] [0] [i_1] [0])))) ? ((min(1, -74))) : var_9)) == 13)))));
                                var_14 = 240;
                                var_15 -= (((((8592 ? 79 : (~2949915719)))) ? ((-11 ? (arr_0 [i_0]) : 32)) : (((2469536188 ? 3847776591 : -32766)))));
                            }
                        }
                    }
                }
                var_16 = ((-(min((((arr_0 [1]) % (arr_9 [i_0] [i_1] [1]))), (((12 ? 178 : 235)))))));
            }
        }
    }
    var_17 = ((-79 > (((min(185, var_9))))));
    var_18 &= 64381;
    /* LoopNest 3 */
    for (int i_5 = 1; i_5 < 20;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 3; i_7 < 21;i_7 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 22;i_9 += 1)
                        {
                            {
                                var_19 = (arr_16 [i_5] [9]);
                                var_20 = -32523;
                            }
                        }
                    }
                    arr_29 [i_6] = (max((min((arr_21 [i_7] [i_6] [i_5]), ((max(4, 34232))))), 28));
                }
            }
        }
    }
    #pragma endscop
}
