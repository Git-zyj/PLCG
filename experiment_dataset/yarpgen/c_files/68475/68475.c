/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68475
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = 1233317516506120902;
                var_17 &= (!17213426557203430714);
                arr_6 [9] [12] [i_1] = ((~(((-1233317516506120901 || (!-9461))))));
                var_18 *= 5721829709807206980;
                var_19 = (((~241708541024133230) >= (1 + -9461)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            {
                arr_14 [i_2 + 2] [9] [i_3] = (((90 << 1) * 84));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 = 7625694259218581557;
                            var_21 *= 1;
                        }
                    }
                }
            }
        }
    }
    var_22 = 41228;
    var_23 = -79;
    #pragma endscop
}
