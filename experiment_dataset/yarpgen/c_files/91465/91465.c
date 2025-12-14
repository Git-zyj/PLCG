/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = (max(0, (((arr_2 [i_0 - 1]) || (arr_3 [i_0 + 1])))));
                var_20 &= ((((max((arr_4 [i_0 + 1] [i_0 - 1]), (arr_4 [i_0 + 1] [i_0 + 1])))) ? (arr_4 [i_0 - 1] [i_0 + 1]) : (((arr_4 [i_0 - 1] [i_0 - 1]) ? (arr_4 [i_0 - 1] [i_0 + 1]) : (arr_4 [i_0 - 1] [i_0 + 1])))));
                var_21 = (arr_5 [i_0] [i_0] [i_1]);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_22 ^= (((((+(((arr_10 [9] [9] [16] [i_3] [1]) * 0))))) ? (arr_12 [i_0] [i_0] [i_0]) : ((0 ? (max(1, 2073917041614199206)) : 102))));
                                arr_16 [i_2] [i_1] [i_0] [17] [i_3] [i_2] = ((!(arr_15 [i_0 + 1])));
                                var_23 ^= ((((max(((((arr_9 [i_4] [i_2] [i_2] [i_2]) && 7))), (arr_12 [1] [i_3] [i_4])))) ? 163 : (max((~-1589982303), (arr_14 [i_0] [i_0] [i_2] [i_2] [i_3] [i_1] [i_4])))));
                            }
                        }
                    }
                }
                var_24 = ((!((((arr_5 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_15 [i_0 - 1]) : (arr_8 [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
