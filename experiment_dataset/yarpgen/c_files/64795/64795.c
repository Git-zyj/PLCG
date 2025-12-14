/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 ^= (max(((max((arr_3 [i_1 - 1]), var_10))), (min(var_2, 20474))));

                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        var_19 -= (-(min(var_2, 117440512)));
                        var_20 += (988399784 ? -1 : 4294967275);
                    }
                    for (int i_4 = 2; i_4 < 8;i_4 += 1) /* same iter space */
                    {
                        var_21 = ((!((min((((3306567519 ? 4088 : -4088))), (max(1053456753, 4106)))))));
                        var_22 ^= (((((2289077865 ? 3468388418 : -4106))) ? (((arr_10 [i_4 - 2] [i_1] [i_1 - 1] [i_4]) ? var_11 : var_17)) : (max((arr_2 [i_4 + 1]), var_11))));
                        arr_12 [i_0] = (((min((min(var_0, (arr_6 [i_0] [i_1]))), (arr_2 [i_1 - 1])))) ? (((~(!-47)))) : -4294967295);
                    }
                    for (int i_5 = 2; i_5 < 8;i_5 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_0] [i_2] [i_0] = (((((-(arr_8 [i_2] [i_1 - 1] [i_1 - 1])))) ? ((-(arr_3 [i_0]))) : ((~(arr_13 [i_0] [i_1 - 1] [i_1 - 1] [i_5 + 1])))));
                        arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] [i_5] = 411525178;
                    }
                    var_23 = ((-(min(3442395706, 49790))));
                    var_24 = (~(min(-12965, (arr_14 [i_1 - 1] [i_1 - 1]))));
                    var_25 = (((((var_0 ? (((arr_5 [i_2] [i_0] [i_0] [4]) ? var_8 : 20845)) : var_5))) ? 14 : ((~(~var_4)))));
                }
            }
        }
    }
    var_26 = ((~((var_0 ? (((min(var_14, -32753)))) : (min(0, 1792748356))))));
    #pragma endscop
}
