/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9929
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 |= (arr_1 [i_0]);
        arr_3 [i_0] = ((~(max(((((arr_1 [5]) ? (arr_2 [14]) : (arr_2 [i_0])))), (arr_1 [i_0])))));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                {
                    arr_13 [i_3] [i_3] [i_2] [i_1] = arr_7 [4];
                    var_11 = (((((-var_4 ? (~60424) : (((arr_8 [4] [1] [4]) ? (arr_5 [i_2] [i_2]) : (arr_11 [3])))))) ? (~60424) : (max(((min((arr_7 [i_2]), (arr_11 [i_3])))), (arr_8 [14] [i_2] [1])))));
                    var_12 = ((-(!-1)));
                    var_13 = (((((((var_4 ? var_2 : (arr_11 [16])))) ? (((arr_6 [i_1]) ? (arr_11 [i_3]) : (arr_6 [18]))) : 1)) % (var_3 & var_4)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            {
                                var_14 = ((+((41672 ? (arr_9 [i_5 - 1]) : var_9))));
                                arr_26 [i_1] [18] [i_5] [i_6] [i_7] = arr_18 [i_6];
                                var_15 = (~((5112 ? 35966 : 0)));
                                var_16 = ((-(arr_8 [i_6] [9] [9])));
                                var_17 = (min(var_17, ((((((0 ? (arr_18 [i_6]) : var_6))) ? (max(var_4, (arr_12 [i_5 - 1] [i_5 - 1] [2]))) : ((((arr_14 [i_5 - 1]) ? (arr_12 [i_7] [i_5 - 1] [2]) : (arr_12 [8] [i_5 - 1] [i_5 - 1])))))))));
                            }
                        }
                    }
                    var_18 = ((((-((-25066 ? (arr_24 [i_4] [i_4]) : (arr_9 [i_5]))))) == ((min(var_1, var_0)))));
                }
            }
        }
    }
    var_19 += (min(1, ((max(var_1, -619418667316564243)))));
    #pragma endscop
}
