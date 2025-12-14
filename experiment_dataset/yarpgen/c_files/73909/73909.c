/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [18] [i_1] &= (min(3970730497433936261, ((((var_0 ^ (arr_0 [i_0])))))));
                    arr_8 [i_0] = (min((((0 & 255) ? 231 : (max(var_13, (arr_6 [i_2] [i_1]))))), (arr_0 [i_2])));
                    arr_9 [i_0] [16] [i_2] = max((((arr_6 [i_0] [i_2]) + (min(var_13, (arr_5 [i_2] [i_1]))))), var_12);
                    arr_10 [16] [i_1] [i_1] = ((~(min((arr_3 [10] [i_1] [i_2]), (arr_1 [i_0] [i_1])))));
                }
            }
        }
    }
    var_18 = -3970730497433936262;
    #pragma endscop
}
