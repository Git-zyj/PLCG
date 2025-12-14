/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93452
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [1] [i_1] [i_2] [i_3] = 89;
                            var_13 = 22;
                            var_14 = (max(((max((max(89, 2145068020)), (arr_8 [1] [i_0] [i_2] [i_3])))), (((arr_6 [i_0] [i_2] [i_3]) ? (min((arr_5 [10]), 1)) : (((min(-96, -27))))))));
                        }
                    }
                }
                arr_13 [0] [0] = 10397226363983176324;
                arr_14 [i_0] [i_1] = (max(((((((2116080757622348753 ? 1684647596 : -27))) ? 26 : (arr_2 [i_0] [i_1])))), 18446744073709551615));
            }
        }
    }
    var_15 = (max(var_15, (~var_5)));
    #pragma endscop
}
