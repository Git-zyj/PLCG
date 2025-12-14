/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88900
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_19 -= var_17;
                    arr_9 [i_0] [i_2] |= (min((min(15847047526710653199, 15847047526710653208)), (40273 && 15847047526710653230)));
                }
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    var_20 *= 15847047526710653194;
                    var_21 -= (((min(((9019825932192762335 ? 8186673312535494689 : 8186673312535494685)), (!var_0))) >> (((((arr_11 [i_0] [i_1] [i_3]) <= (arr_10 [1] [1] [i_3])))))));
                }
                var_22 = ((~(max(var_8, (arr_11 [i_1 + 1] [i_1] [i_1])))));
                arr_12 [i_0] [i_1] = ((var_15 >= (((((7603334412635043121 ? var_9 : var_13))) ? ((max((arr_11 [i_0] [i_1] [i_0]), (arr_6 [i_1] [i_0])))) : (arr_8 [i_0 - 1] [i_0] [1] [i_1 + 1])))));
            }
        }
    }
    var_23 = var_11;
    #pragma endscop
}
