/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96750
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max((!var_4), var_8));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = (arr_4 [i_2 - 2] [i_1] [i_0]);
                    arr_9 [i_0] [i_0] [i_2] = (max(((((arr_3 [i_1] [7]) - (min((arr_0 [i_0]), var_1))))), (-1867731916 + -10626850435024958212)));
                    arr_10 [13] [0] |= ((((min((arr_2 [i_0] [i_0]), (((arr_0 [i_0]) ? 788018860 : var_8))))) ? -10626850435024958208 : (max(var_3, (!7819893638684593403)))));
                    var_11 = (min((min(2427235379, -1323)), (arr_1 [i_0])));
                }
            }
        }
        arr_11 [i_0] = (arr_1 [i_0]);
        var_12 = (max(var_12, ((max((~67108863), (arr_3 [i_0] [i_0]))))));
        arr_12 [9] [i_0] = -108;
    }
    #pragma endscop
}
