/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64187
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (min(0, (+-1)));
    var_18 ^= ((+(((-29961 + 2147483647) << (1 - 1)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_19 = arr_0 [i_0];

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = (min(var_20, ((min(-0, 4721740944947319634)))));
                        arr_13 [i_0] = 1;
                        var_21 = (((arr_11 [i_2 + 1] [i_2 + 1] [i_0]) == ((((((-19201 + 2147483647) >> 0)) == ((max(-29949, 23518))))))));
                    }
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        var_22 += ((32745 & (!1)));
                        arr_17 [i_0] [i_0] = (!33538048);
                        var_23 -= (min(23518, (3267112632727622680 / 43250)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
