/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74734
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((min(((var_13 ? var_8 : var_7)), (88 | var_15)))), ((102 ? var_5 : var_5))));

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    {
                        var_19 = (min(var_19, ((max((((arr_8 [i_1] [i_1] [i_1] [i_1]) ? (arr_8 [4] [i_1] [i_1] [i_0 + 2]) : (arr_8 [i_0 + 3] [i_2] [18] [18]))), (arr_8 [i_3] [14] [i_1] [i_0]))))));
                        var_20 = (max(var_20, ((((arr_7 [i_0] [i_0 - 2] [i_0] [i_0 + 2]) == 64)))));
                        var_21 = (min(var_21, ((min(((min(((var_9 & (arr_4 [i_3] [i_3]))), ((min((arr_0 [i_3]), -82)))))), (max(72, (max(-7477848140781375176, 28)))))))));
                    }
                }
            }
        }
        var_22 -= (arr_2 [i_0]);
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 20;i_6 += 1)
                {
                    {
                        var_23 ^= (min(((35 ? 959940444 : (min(1, 8748647505144170284)))), ((((((arr_0 [12]) ? 576460752286646272 : 24576)) == (!354456412))))));
                        var_24 = (max(var_24, (((-23048 ? (((min(var_6, 23049)))) : 2564261746206102887)))));
                    }
                }
            }
        }
        var_25 = (min(var_25, (((((min((min((arr_0 [10]), 6433010487465339050)), ((max((arr_11 [i_0] [10] [i_0 + 3]), var_5)))))) ? 89 : ((2688573927 << (3940510883 - 3940510883))))))));
    }
    #pragma endscop
}
