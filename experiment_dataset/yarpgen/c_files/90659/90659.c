/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90659
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90659 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90659
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_12;
    var_20 += ((-(var_12 * var_8)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_1] [i_0] = (((arr_6 [i_0] [i_0] [12] [i_0]) ^ (((((((arr_2 [i_0] [i_1 + 2] [i_2]) ? (arr_0 [20] [i_1 + 1]) : (arr_6 [1] [i_1 - 1] [i_1] [i_1])))) ? (arr_1 [i_0]) : ((((13874417334744253439 >= (arr_4 [i_0] [i_0] [i_0]))))))))));
                    arr_8 [i_0] [i_0] [i_0] [i_0] |= 22995;
                    arr_9 [8] [i_1] [i_2] = (((arr_2 [i_0] [i_1] [i_2]) || ((((arr_2 [i_0] [i_1] [i_2]) ? ((3243742179660420005 ? 2335623376362001721 : 140737488355327)) : (!-140737488355327))))));
                    var_21 = (min(var_21, ((((~1) ? (arr_4 [i_0] [i_1 - 1] [i_2]) : (arr_2 [i_0] [i_1 - 1] [i_2]))))));
                    arr_10 [i_0] [i_0] &= 112;
                }
            }
        }
        var_22 = (max(var_22, (((((max((((arr_3 [i_0]) ? 18979 : (arr_0 [i_0] [20]))), (arr_5 [i_0] [i_0])))) ? (arr_1 [i_0]) : (((-(arr_4 [i_0] [20] [i_0])))))))));
        var_23 *= 4572326738965298177;
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 23;i_5 += 1)
                {
                    {
                        arr_19 [i_0] [i_4] [i_3] [i_4] [i_4] [i_5] = (((arr_17 [i_0] [i_4] [i_0] [i_0] [i_0] [i_0]) ? ((((min(2335623376362001721, (arr_0 [i_0] [i_0])))) ? (arr_6 [i_0] [i_3] [i_4] [18]) : (arr_2 [i_0] [13] [13]))) : (arr_15 [i_0] [i_4] [i_5])));
                        var_24 *= (!21);
                        var_25 = (((((~(((arr_0 [i_0] [i_3]) / (arr_15 [i_3] [i_4] [i_4])))))) ? ((~((((arr_3 [i_0]) != (arr_3 [i_4])))))) : (arr_15 [i_0] [i_4] [i_3])));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 4; i_7 < 11;i_7 += 1)
        {
            {
                var_26 = (arr_5 [i_7] [i_7 - 3]);
                var_27 ^= (((((4859 ? (arr_21 [i_6] [i_7]) : 200436676462895657)) << (4087504698 - 4087504658))));
                arr_24 [i_6] = -1058396704;
                var_28 = ((max(((((arr_11 [i_7] [i_6] [i_6]) ? (arr_20 [i_6] [i_6]) : 1))), 12942914702111544507)));
                arr_25 [i_6] [i_7] [i_7] = (arr_3 [i_6]);
            }
        }
    }
    #pragma endscop
}
