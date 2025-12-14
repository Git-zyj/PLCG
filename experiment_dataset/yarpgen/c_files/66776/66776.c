/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66776
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        var_10 = ((((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : 16))) ? (arr_0 [i_0]) : (((((arr_1 [i_0]) > (arr_1 [11])))))));
        var_11 -= var_9;
        var_12 *= (((arr_1 [i_0]) ? (((arr_0 [i_0]) ? (arr_0 [i_0]) : var_4)) : (arr_1 [i_0 - 1])));
        arr_2 [i_0 - 1] = (((arr_1 [i_0 + 2]) ? (arr_1 [i_0 + 2]) : 28507));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_13 = ((2684822613297642514 << (37028 - 37028)));
        var_14 = (max(var_14, (((arr_3 [i_1] [i_1]) + -8349915129122951432))));
        var_15 = ((((arr_3 [i_1] [i_1]) << (((arr_4 [i_1] [i_1]) - 262444853)))) != (((arr_3 [i_1] [i_1]) >> (((arr_4 [i_1] [i_1]) - 262444856)))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    {
                        var_16 = (5313099221294867586 % 4294967274);
                        var_17 = (max(((max(((-(arr_8 [i_3] [i_4]))), (((7 >= (arr_11 [i_2] [i_3] [i_4] [i_5]))))))), ((((((arr_10 [i_2] [i_2]) ? (arr_8 [i_3] [i_3]) : 2147483623))) ? (~var_2) : var_0))));
                    }
                }
            }
        }
        var_18 = ((~(arr_7 [i_2] [i_2])));
        arr_15 [i_2] [3] = ((30 % 13264) / (((((arr_10 [i_2] [i_2]) && (arr_12 [i_2] [i_2] [i_2]))) ? (arr_14 [i_2] [i_2] [i_2] [i_2]) : ((52154 ? 2147483647 : 18446744073709551615)))));
        var_19 = (max(((((arr_5 [i_2]) ? -4123 : (arr_5 [i_2])))), ((15678873193280563976 ? 4194303 : 4294967281))));
    }
    var_20 ^= var_4;
    var_21 ^= min(var_1, ((var_4 / (-1392640685 % var_5))));
    #pragma endscop
}
