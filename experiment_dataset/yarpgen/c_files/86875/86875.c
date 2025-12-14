/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86875
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_10 = max((max((arr_6 [i_0] [i_1] [i_1 - 1] [i_1]), 51049)), -13);
                    var_11 += ((((!(((255 ? (arr_4 [i_1]) : 49152))))) ? ((((!(((arr_4 [i_0]) && (arr_1 [i_0]))))))) : (min((arr_4 [i_2]), (arr_4 [i_0])))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_12 = (min((max((((arr_10 [i_3] [i_4]) ? 44679 : 157)), ((min((arr_9 [i_3] [i_4] [i_5]), (arr_11 [i_3] [i_5] [i_5])))))), (arr_9 [i_3] [14] [i_5])));
                    var_13 = ((((((~(arr_12 [i_3] [11] [11])))) ? ((((arr_12 [i_3] [2] [i_5]) ? -696972480 : 100))) : (arr_7 [i_3]))));
                }
            }
        }
    }
    #pragma endscop
}
