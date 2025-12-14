/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!2265555142643611812) != (max((-1 / var_2), var_6))));
    var_13 = (max(((-(min(var_2, 1208744653)))), ((((65535 >> 0) ? 8436 : -10)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= 1;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_15 &= (max(((~(arr_9 [i_0] [i_3] [i_3]))), (arr_7 [i_3] [i_3] [i_3])));
                            var_16 = max(((min((max(1, 1568942210)), 1568942210))), ((~(max((arr_6 [i_3] [i_3]), var_0)))));
                            var_17 = (((var_0 <= 1568942210) <= -1073741823));
                        }
                    }
                }
            }
        }
    }

    for (int i_4 = 4; i_4 < 16;i_4 += 1)
    {
        var_18 = (min(var_18, ((max(((65535 ? (arr_13 [i_4 - 4]) : var_5)), ((max(65535, 764533553))))))));
        var_19 = (((((86124289 ? 64466 : ((1698174308 >> (64226 - 64196)))))) ? (((var_6 > (arr_13 [i_4 - 2])))) : (max(1568942210, -65))));
    }
    var_20 = 0;
    #pragma endscop
}
