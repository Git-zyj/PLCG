/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    var_18 = (max(((((!(arr_4 [i_0] [i_0 - 1] [i_0]))))), ((((min((arr_0 [i_1] [i_0]), (arr_5 [i_0 - 1] [i_2] [i_1] [i_0 - 1])))) ? (arr_6 [i_0]) : (max(var_14, 4294967283))))));

                    for (int i_3 = 3; i_3 < 17;i_3 += 1) /* same iter space */
                    {
                        var_19 += arr_4 [i_2] [i_2 + 1] [i_2];
                        arr_9 [1] [1] [i_0] [13] [1] = ((((((arr_6 [i_3]) ? (arr_3 [i_2 - 1] [i_1]) : (((1 ? var_16 : -1398975532)))))) ? (arr_1 [i_2 - 2]) : (arr_4 [i_1] [i_2 + 2] [i_0])));
                    }
                    for (int i_4 = 3; i_4 < 17;i_4 += 1) /* same iter space */
                    {
                        var_20 += 16;
                        var_21 = ((63 ? (((((1 - (arr_5 [i_0] [i_0] [6] [i_4])))) ? ((86 ? (arr_5 [17] [i_2] [i_0] [i_0]) : (arr_3 [i_0] [i_1]))) : ((((!(arr_5 [i_0] [2] [i_2 - 1] [i_4 + 2]))))))) : var_10));
                        var_22 = (arr_6 [i_1]);
                    }
                    arr_13 [i_0] = (((arr_1 [i_0 - 1]) | (((!(arr_2 [i_0] [i_0]))))));
                    var_23 = ((min(((1937846036 ? 0 : 65535)), 1)));
                }
            }
        }
    }
    var_24 += (min(3568435452, ((min(-17, 1398975528)))));
    var_25 += 536870911;
    #pragma endscop
}
