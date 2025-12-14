/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97839
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97839 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97839
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_1;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_12 = (-((-(arr_1 [i_0 + 1]))));
                        var_13 = (((((((arr_8 [i_3] [i_2] [i_1] [i_0 - 1]) && 3522893840)) ? (!221642414) : ((3965050984 | (arr_3 [i_1 - 1])))))) ? var_4 : (min((arr_6 [i_0] [i_0] [i_2] [i_3]), (max((arr_9 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0]), var_3)))));
                    }
                    arr_10 [i_0] [i_1] [1] = (((((((((arr_3 [i_2]) ^ 221642414))) ? ((-(arr_9 [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1] [i_2] [i_1 - 1]))) : (min(4077638115, 221642422))))) || (((-((1943727756 ? (arr_2 [i_0] [i_1] [i_1]) : 4294967293)))))));
                }
            }
        }
    }
    #pragma endscop
}
