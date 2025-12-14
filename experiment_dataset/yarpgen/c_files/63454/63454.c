/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            {
                arr_4 [i_1] |= ((((-11647 <= (min(13729051287400370028, 569120404)))) || ((((arr_3 [i_1 - 2] [i_0]) ^ -1197288572)))));
                var_19 = (max(var_19, (((-(min((((arr_2 [12] [i_0] [i_1 - 2]) | -583075711)), (max((arr_3 [i_0] [i_1 - 4]), (arr_0 [i_0]))))))))));
                arr_5 [i_1] [i_1] = (min((max((arr_2 [10] [13] [10]), (((arr_3 [i_0] [i_0]) ? (arr_3 [i_0] [i_0]) : (arr_0 [i_1]))))), ((((max(23670, 11649))) >> (((min(1328805621, -11662)) - 1328805611))))));
            }
        }
    }
    var_20 |= ((var_17 ? ((min(-11623, 1))) : ((~(~var_5)))));
    #pragma endscop
}
