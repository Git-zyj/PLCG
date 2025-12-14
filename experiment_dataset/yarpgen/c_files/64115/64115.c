/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = (max(75, -7423));
                arr_4 [i_1] = 18092203666738370618;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_17 ^= var_4;
                                var_18 = ((min(88, ((var_10 ? -51 : 171)))));
                            }
                        }
                    }
                }
                var_19 ^= (((((((min(var_1, var_13))) ? (((max(147, -87)))) : (((arr_2 [i_0] [i_1]) ^ 8646911284551352320))))) ? ((var_11 ? var_15 : 106)) : ((-12 ? 1 : 241))));
            }
        }
    }
    var_20 = ((((((((max(65531, var_13)))) ^ var_3))) ? var_8 : var_2));
    #pragma endscop
}
