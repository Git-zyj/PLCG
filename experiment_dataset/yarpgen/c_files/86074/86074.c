/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86074
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_19 = ((max(((105 ? 68719476735 : 9223372036854775807), ((16872334175803585084 << (2147483647 - 2147483611)))))));
                var_20 = (((((-(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 2])))) ? (~4278190080) : (max(13601928408079279626, (arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2])))));

                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    var_21 = (((arr_7 [i_2]) ? ((var_2 ? (arr_7 [i_2]) : (arr_7 [i_2]))) : (arr_7 [i_2])));
                    var_22 = (min(var_22, (((((-104 ? (arr_6 [i_0] [i_1]) : (arr_0 [i_1 + 2]))) / (arr_7 [i_0]))))));
                }
                var_23 = ((-(arr_6 [i_1 + 2] [i_1 + 2])));
            }
        }
    }
    var_24 = ((-(max((var_8 > var_11), ((2147483647 ? 4294967295 : 22))))));
    var_25 = 14562484275542984331;
    #pragma endscop
}
