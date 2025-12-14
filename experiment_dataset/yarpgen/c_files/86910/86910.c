/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (var_14 < var_13);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_16 += (((!6562421749245856879) && ((6562421749245856874 >= (max(1339275088, var_3))))));
                            var_17 += (((arr_7 [i_1 + 1] [i_1 - 2] [i_1 + 1]) / (max(133, -6562421749245856862))));
                            arr_11 [i_1] [i_1] = (((((min(var_13, (arr_2 [i_0] [i_1])))) ? 6103078327455172793 : (arr_5 [i_0]))) ^ ((((!(arr_3 [i_0] [i_1 + 1] [i_1 - 2]))))));
                            var_18 = 1;
                            arr_12 [i_1] [19] [i_1] [i_1] = -1;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 23;i_5 += 1)
                    {
                        {
                            arr_18 [i_4] [1] [i_4] [12] |= ((((((max(var_0, var_9)) - (-35579199 ^ 114)))) ? (((((arr_10 [i_0] [4] [i_4] [i_0] [i_5] [1]) ? 0 : 1255288416)) | (1339275081 == var_4))) : ((min((arr_14 [i_4]), 9)))));
                            var_19 = ((-10166 ? -5328986218836759146 : -1614509462));
                            arr_19 [i_1] = ((max((arr_6 [i_1 - 2]), var_7)));
                        }
                    }
                }
            }
        }
    }
    var_20 = (min(var_20, var_9));
    #pragma endscop
}
