/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = ((((0 >> (2021879043 - 2021879001))) + (((((max(2516751282, 12)) == (((min(39, 37382))))))))));
                    var_17 = (min((((21 ^ 32) ? 12 : ((19 ? 4 : 1)))), ((~(max(14, 4))))));
                }
            }
        }
        arr_8 [i_0] = (max((((~((28156 << (253 - 250)))))), (((((253 ? 14402387493227530016 : 4044356580482021597))) ? (((-9223372036854775807 - 1) ? 3599 : 14402387493227530016)) : (((1 >> (83 - 67))))))));
    }
    /* vectorizable */
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_18 |= (234 != 6307027438874601970);
        var_19 -= ((5066 ? 59773 : 14402387493227530016));
        var_20 = ((~((5066 ? 1 : 62408))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_21 = 5080;
        var_22 = 1;
        var_23 = (-6891514334836429509 && (((6839923131428686451 << (2122795959145490963 - 2122795959145490931)))));
        arr_15 [1] = (-6307027438874601964 - 1);
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 24;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 1;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_5] [i_5] = 1;
                    arr_25 [i_5] [i_6] [i_6] [i_7] = ((4044356580482021615 % ((3163077820 ? 18039596615858481967 : 31860))));
                    var_24 = ((max((min(6486936914166623792, 556669461075468845)), 6307027438874601961)));
                }
            }
        }
    }
    #pragma endscop
}
