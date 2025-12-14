/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(((!((max(var_9, var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            {
                var_21 = (max(var_21, (((arr_2 [12] [12]) ? (min(580256959413268528, 113)) : (((((1397548005 ? 2179544698734362999 : 65535)))))))));
                arr_4 [i_0] [i_1] = 33554431;

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    var_22 = (((arr_5 [i_1 + 1] [i_1 - 4]) ? (arr_2 [15] [i_0]) : (arr_6 [i_1] [i_1 - 4] [i_2] [i_2])));
                    var_23 ^= (((arr_0 [10]) ? (arr_5 [i_1 + 1] [i_1 + 1]) : (arr_1 [i_1 - 2] [i_1 - 3])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_24 = ((((max(33554431, (arr_3 [24] [i_1] [i_0]))) ? (((arr_8 [i_0] [i_1] [i_0]) ? (arr_7 [i_0] [i_1] [i_1] [i_3]) : (arr_0 [i_0]))) : ((((!(arr_7 [i_0] [i_1 + 2] [i_1 + 2] [i_3]))))))));
                    var_25 = ((!(((((~(arr_7 [i_3] [i_3] [i_1] [8]))) ^ (((min(var_1, var_17)))))))));
                    var_26 = (!((((~(arr_2 [i_0] [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
