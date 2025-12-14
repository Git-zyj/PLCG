/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_16 = (!var_4);
                            var_17 ^= var_14;
                            var_18 = (max(var_18, (!1395247809)));
                        }
                    }
                }
                arr_11 [24] &= (((3760822304 / 70) ? -1801 : var_3));
            }
        }
    }
    var_19 = (((((var_6 ^ var_3) ? var_14 : 1)) != ((((12306739177807318815 > -80) == 4)))));
    #pragma endscop
}
