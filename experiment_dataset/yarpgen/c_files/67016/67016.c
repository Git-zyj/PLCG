/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_8;
    var_15 -= var_12;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_16 -= (-238 + 2);
                                var_17 = (max(var_17, ((((((!var_12) < -65535)) ? -62 : (!-15716))))));
                                arr_12 [i_1] = ((-1259767899 ? 4485702463298412967 : ((552808570682656885 ? 5073530225270991833 : var_12))));
                            }
                        }
                    }
                    arr_13 [2] [i_2] = ((!((((!114) ? (!var_1) : ((65519 << (var_4 + 2433135206227309605))))))));
                }
            }
        }
    }
    var_18 = var_2;
    #pragma endscop
}
