/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-74 ? 2587261362 : 1));
                arr_6 [i_0] [i_0] [i_1] = max(((((((arr_1 [i_0]) - (arr_4 [i_1]))) >= var_9))), (max((max((arr_4 [i_1]), 65510)), 65510)));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 21;i_4 += 1)
            {
                {
                    arr_14 [i_2 - 1] [i_2] = (((~(((!(arr_7 [i_2] [i_4 + 2])))))));
                    var_10 = ((((((-2 ? 35495814 : 0)))) ? (((arr_12 [i_2 - 1] [i_2 - 1]) ^ (~64675679))) : 26));
                    var_11 -= ((((min(242, (arr_7 [i_3] [i_3])))) ? (((((1 ? var_3 : (arr_9 [i_3] [i_3])))) ? (-1 + 3415635465) : ((((arr_11 [i_3] [20] [i_4]) ^ var_3))))) : -13791));

                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        arr_17 [i_2] = (((((arr_8 [i_2 - 1] [i_2]) >= (arr_8 [i_2 - 1] [i_2]))) ? (arr_10 [i_2 - 1]) : (max(11777075234758058064, (arr_15 [i_2 - 1] [i_3] [i_4] [i_5])))));
                        arr_18 [i_2] [2] [i_2] [18] = ((((((~102) != (min(32750, var_2))))) ^ (((arr_13 [i_2 - 1] [i_4 + 1] [i_2]) ^ (arr_10 [i_2 - 1])))));
                        var_12 = (102 ? 25724 : 4259471482);
                    }
                    var_13 = (min(var_13, (arr_16 [1] [i_3] [16] [i_3] [i_3])));
                }
            }
        }
    }
    #pragma endscop
}
