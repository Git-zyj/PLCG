/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64708
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 2; i_2 < 21; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) min((var_11), (((((/* implicit */int) ((((/* implicit */_Bool) min((arr_7 [i_1] [i_1] [i_0]), (((/* implicit */long long int) var_7))))) || (((/* implicit */_Bool) max((var_3), (arr_0 [(short)20] [i_1]))))))) - (((/* implicit */int) ((var_0) != (((((/* implicit */_Bool) 5745223108104829942LL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)4095))))))))))));
                    var_12 = ((/* implicit */int) arr_6 [i_2] [i_0] [i_0] [i_0]);
                    arr_8 [i_0] [12] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) arr_2 [i_0] [(unsigned short)21])), ((~(arr_5 [i_0] [i_1])))));
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) min((((/* implicit */unsigned short) (short)-30231)), (var_2))))));
                        var_13 -= ((/* implicit */unsigned short) arr_9 [i_3]);
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)15375)))))));
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] [i_3] = ((/* implicit */short) var_8);
                    }
                    arr_13 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_4))));
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
    }
    var_15 |= ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) var_8))) / (var_6))), (((/* implicit */long long int) var_5))))) ? (((long long int) var_8)) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
}
