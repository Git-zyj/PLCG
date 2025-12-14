/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61848
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((((!(!1))))) >= 15453979945301532001));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, var_2));
        arr_2 [i_0] = ((~(((~-1) ^ (~var_4)))));
        var_12 = ((((max((max(3277, 3270)), (var_1 && var_8)))) < ((~(var_9 != var_6)))));
        arr_3 [i_0] = ((((((((max(-30440, 0)))) <= (var_3 * var_6)))) | ((-(var_2 != var_9)))));
        arr_4 [1] = (((((var_9 + var_0) - var_4)) < ((max((~3758302896), 1684699511)))));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_13 = (~45);
                        var_14 = (min(var_14, (((var_7 ^ ((((var_3 <= (var_2 || var_0))))))))));
                        var_15 ^= var_9;
                        var_16 ^= var_2;
                    }
                }
            }
        }
        var_17 = (min(((((var_4 + var_1) >= (((max(var_5, var_9))))))), ((~(max(1324700207, var_9))))));
    }
    #pragma endscop
}
