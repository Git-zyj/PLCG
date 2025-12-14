/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_4 == var_0);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        var_13 |= (min(((((-(arr_0 [12]))) <= var_11)), (-29879 == -104)));
                        var_14 -= (((4924 != (arr_5 [3] [3]))));
                        arr_10 [i_0] [i_0] [i_0] = -4294967295;
                        var_15 |= ((((((!-42) * 131))) == (((arr_6 [i_2] [8] [i_0]) ^ (arr_8 [i_0] [10] [i_2] [i_3])))));
                    }
                    var_16 |= max(((~(((arr_9 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2]) ? var_10 : 1970324836974592)))), ((max((min(var_4, -3)), 128))));
                }
            }
        }
    }
    #pragma endscop
}
