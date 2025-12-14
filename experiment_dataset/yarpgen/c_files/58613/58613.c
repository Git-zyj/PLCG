/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (581305748 / 18446744073709551612);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_7 [12] [i_1] [i_1] = 7925384977979302536;
                arr_8 [i_0] [i_1] [i_1] = (18446744073709551612 >= 35);
                arr_9 [i_0] = ((32767 ? ((17376 ? (arr_4 [i_0] [i_1]) : ((1 ? 97 : (arr_0 [1] [i_1]))))) : ((((arr_2 [i_0]) ? (arr_2 [1]) : (arr_2 [i_0]))))));
                var_16 = (min(var_16, ((((((arr_1 [i_1]) >= (arr_3 [i_0]))) ? ((((arr_6 [i_0] [i_1]) ^ (arr_6 [i_1] [i_0])))) : (~-2305807824841605120))))));
                var_17 = (((((arr_6 [i_0] [i_0]) ? (((arr_1 [i_1]) ? (arr_0 [i_1] [i_0]) : 43)) : (((arr_3 [i_1]) ? 993383556 : 456819264493288219)))) / ((((arr_3 [i_0]) | (arr_6 [i_0] [i_1]))))));
            }
        }
    }
    #pragma endscop
}
