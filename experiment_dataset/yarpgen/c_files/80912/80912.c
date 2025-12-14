/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min((((~2548370223) ? var_3 : var_12)), var_11));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_18 &= ((((((var_13 > (((arr_0 [i_0] [i_0]) ^ 2548370210)))))) != var_0));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_19 = ((~(max((arr_14 [i_3] [i_3 - 2] [i_3]), var_1))));
                                var_20 += (min((min((137438953471 & -1777909419), var_3)), 1746597102));
                                arr_15 [0] [i_0] [4] [i_0] [i_0] [i_0] = ((((max(32761, var_0)) | (~814200077445231521))) ^ ((((32763 >= ((((arr_6 [i_0] [15] [i_2 - 1] [i_4]) != 2548370221))))))));
                            }
                        }
                    }
                    var_21 = (1 > 1);
                }
            }
        }
    }
    var_22 = (min(var_22, 1746597093));
    var_23 |= var_9;
    var_24 &= (min((((var_16 || 22907) || ((min(var_13, var_2))))), ((!(((var_13 ? var_13 : -814200077445231535)))))));
    #pragma endscop
}
