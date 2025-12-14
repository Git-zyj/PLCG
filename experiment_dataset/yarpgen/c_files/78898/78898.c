/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_2;
    var_15 |= ((var_2 <= (~var_5)));
    var_16 = (var_11 - var_1);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_17 = (~58907);
                            var_18 += var_1;
                            var_19 += 1;
                            arr_10 [i_1] = (((((min(18446744073709551606, 1)) % ((min(206, 3493084765))))) <= (~3493084765)));
                        }
                    }
                }
                arr_11 [i_1] = (((~(arr_7 [i_0] [i_0] [i_0] [i_0]))));
                arr_12 [i_1] = (((!65520) / (((((1022806047 ? var_12 : 9))) ? (max(33554431, -5062757377618251551)) : (var_2 != 18446744073709551607)))));
                arr_13 [i_1] = min(4177920, var_9);
                arr_14 [i_1] [i_1] [i_1] = ((-((~(arr_6 [i_0] [i_0] [i_0])))));
            }
        }
    }
    var_20 *= var_7;
    #pragma endscop
}
