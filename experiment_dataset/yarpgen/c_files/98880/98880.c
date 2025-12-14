/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-(((var_0 <= var_4) ? var_2 : var_0))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] = ((!((((((~(arr_5 [i_0])))) ? (((!(arr_0 [i_0])))) : (arr_6 [i_0] [i_1] [i_0] [i_0]))))));
                                arr_12 [i_0] [i_3 + 1] [0] [0] [i_1] [i_0] |= (arr_2 [i_2]);
                                arr_13 [i_4] [i_1] [i_1] [i_0] = ((+(((!var_5) >> (((arr_9 [7] [7] [i_3 - 2] [i_3] [10]) - 25587))))));
                            }
                        }
                    }
                }
                arr_14 [i_0] [i_1] = (((((arr_4 [i_0] [i_1] [i_1]) ^ (((arr_5 [i_0]) ^ var_2)))) ^ ((((((~(arr_2 [i_0])))) ? var_5 : (arr_3 [i_1]))))));
                var_11 = (arr_1 [i_1] [i_0]);
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_12 = (arr_9 [i_7] [0] [0] [0] [i_0]);
                                var_13 = ((-(((22008120 > 13886513406798336575) ? 13886513406798336575 : (5644971225283133884 >= var_3)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_14 = var_5;
    var_15 = var_8;
    #pragma endscop
}
