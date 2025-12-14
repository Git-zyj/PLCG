/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87481
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87481 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87481
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 1] [i_0 - 1] = min(((((((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1]))) && ((max(1694905777, (arr_1 [i_0] [i_0]))))))), ((((1 >> (-6390262259241173743 + 6390262259241173797))) & (918094555 != -7))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 = 4182480096;
                    var_12 = (arr_1 [2] [i_0]);
                    var_13 = (i_1 % 2 == 0) ? ((((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - 45409)) + 2147483647)) << (((min((max(5860690858681825513, (arr_5 [i_0] [i_0] [i_0]))), ((max((arr_7 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_0 + 1] [i_0 + 1])))))) - 5516))))) : ((((((((arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]) - 45409)) + 2147483647)) << (((((min((max(5860690858681825513, (arr_5 [i_0] [i_0] [i_0]))), ((max((arr_7 [i_0] [i_1] [i_2]), (arr_5 [i_0] [i_0 + 1] [i_0 + 1])))))) - 5516)) - 34048)))));
                }
            }
        }
        arr_8 [i_0] = (((((((arr_5 [i_0] [i_0] [i_0]) + 4294967284)))) >> (((arr_6 [i_0] [i_0] [i_0] [i_0 + 1]) - 115))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 = (max(var_14, ((min((arr_9 [i_3]), (arr_10 [i_3]))))));
        var_15 = -17416;
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                {
                    var_16 = (arr_10 [i_5 + 1]);
                    var_17 = (max((max((arr_16 [i_4] [9] [i_5] [9]), ((max(2250, -31518))))), ((((((arr_16 [i_5] [i_5] [i_5] [i_3]) ^ (arr_10 [i_4]))) >= (arr_14 [i_5] [i_5] [i_4] [i_4]))))));
                }
            }
        }
        var_18 = (((max((arr_16 [i_3] [i_3] [i_3] [i_3]), (arr_16 [i_3] [i_3] [i_3] [i_3])))));
    }
    for (int i_6 = 4; i_6 < 18;i_6 += 1)
    {
        var_19 = (max(var_19, 121));
        arr_20 [i_6] [i_6 - 2] = -106;
    }
    var_20 = ((((((min(-5290237603452319862, 0)) + 9223372036854775807)) << (((min(4294967295, 34)) - 33)))));
    #pragma endscop
}
