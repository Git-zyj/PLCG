/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63505
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(123219318263999592, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [i_0] = (min(((max(9223372036854775807, -1225559555))), (max(663243283, (arr_4 [i_0] [i_0] [i_0 + 2])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_20 = (((-50 + 2147483647) << (!-50)));
                            var_21 += ((min(((min(11531, var_14)), (max((arr_0 [i_0] [i_0]), var_5))))));
                            var_22 = -14419;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
