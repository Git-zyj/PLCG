/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77609
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0 - 1] [i_1] [i_1] = (arr_5 [i_0] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_18 [i_0] [i_1] [10] [i_3] [i_0] = ((~(((((~(arr_3 [i_3])))) ? ((-83 ? 29314 : 2077453837)) : ((~(arr_9 [i_0])))))));
                                arr_19 [i_4] [i_1] [i_2] [i_1] [i_0] = (~((((((arr_15 [i_4] [i_4] [i_4 + 4] [i_4 + 2] [10]) ? (arr_2 [i_0]) : (arr_16 [i_0] [i_0] [i_1] [i_2] [i_2] [i_3] [i_4])))) ? ((~(arr_1 [1] [i_3]))) : (((arr_11 [i_4] [i_3] [i_2] [i_1 + 3] [i_0]) ? (arr_17 [i_0] [i_1]) : (arr_15 [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                            }
                            arr_20 [i_0] [i_0] [i_0] [i_0 - 1] = ((((max((((arr_0 [i_0]) ? (arr_17 [i_0] [i_1]) : (arr_17 [i_0] [i_0]))), (arr_3 [i_1])))) ? (arr_8 [i_0] [i_0] [3] [i_0]) : (arr_0 [i_0 - 1])));
                        }
                    }
                }
                arr_21 [18] [i_0] = (arr_13 [19] [i_1] [i_1 + 2] [i_1 + 1]);
                arr_22 [i_1] [i_0 - 1] = (arr_10 [i_0] [i_1 + 3]);
            }
        }
    }
    var_14 = ((!((max(var_7, (~var_11))))));
    var_15 = ((((max((min(var_1, var_8)), var_5))) ? (((!var_4) ? (((max(var_13, var_9)))) : (max(var_6, var_3)))) : ((min(((-2147483632 ? 1 : 32762)), var_13)))));
    var_16 = -19892;
    #pragma endscop
}
