/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92173
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_20 += (~37);
        var_21 = ((((((var_0 && 8822546894829716949) ? (!3086) : ((2757269378 ? var_2 : (arr_0 [i_0])))))) ? var_3 : ((((var_5 || (!-9)))))));
        var_22 = ((arr_1 [6]) ? (arr_1 [i_0]) : (min(-39, (arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 3; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 19;i_4 += 1)
                {
                    {
                        var_23 = (min(225, ((1488498825 ? (arr_11 [i_3]) : (arr_2 [i_2 + 1] [i_4 + 1])))));
                        var_24 += (min(((((((~1) + 2147483647)) << (3378833669 - 3378833669)))), (((73 ? 916133626 : 3779153552)))));
                        var_25 = ((~((min((!32586), (arr_8 [i_3] [i_2 - 1] [3] [i_2 - 3]))))));
                    }
                }
            }
        }
        var_26 = arr_9 [i_1] [i_1] [i_1] [i_1];
    }
    var_27 = ((var_16 ? var_6 : (((min(23895, 121))))));
    var_28 += ((~(!var_12)));
    #pragma endscop
}
