/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= (var_8 || (((65534 << (17983081579618869002 - 17983081579618869000)))));
    var_13 = (min(var_13, var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = ((3427316986 ? (max((6943314708273955731 > -8), (arr_4 [i_0] [i_0]))) : (max((max(867650307, var_6)), (arr_1 [i_0 + 1])))));
                arr_6 [i_1] = (((((-(arr_5 [i_1])))) ? ((max(var_2, 867650320))) : (arr_2 [i_1 + 1])));
            }
        }
    }
    #pragma endscop
}
