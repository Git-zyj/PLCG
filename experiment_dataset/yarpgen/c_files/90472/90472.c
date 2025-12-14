/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90472
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90472 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90472
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((min((((var_14 ? 15 : -1796519112))), var_12)) - var_3));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] = ((((min((var_14 && 8191), (arr_8 [i_0] [i_2] [10])))) ? (!0) : (((!(arr_7 [i_0] [i_2 + 4]))))));
                                var_16 &= (((((0 ? (arr_11 [10] [12] [i_1] [i_3] [i_4] [12]) : (((60003 ? (-32767 - 1) : 19)))))) ? 5532 : (min(((19 ? 2278337225728089415 : 18446744073709551615)), 18446744073709551615))));
                            }
                        }
                    }
                    var_17 = (arr_6 [i_0] [i_1] [i_2 + 1] [i_2]);
                }
            }
        }
    }
    var_18 = (((max((min(var_6, var_9)), (((3669258683 ? var_4 : var_1))))) == var_2));
    var_19 *= -var_8;
    #pragma endscop
}
