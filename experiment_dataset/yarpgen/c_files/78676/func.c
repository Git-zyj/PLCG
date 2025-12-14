/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78676
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
    var_13 = ((/* implicit */_Bool) min((var_2), (var_2)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((signed char) ((arr_4 [i_0 + 1] [i_2] [i_2] [i_2]) ? (((/* implicit */int) arr_4 [i_0 - 1] [i_2] [i_0 - 1] [i_2])) : (((/* implicit */int) arr_5 [i_0 + 1] [i_0] [i_2] [i_2])))));
                    arr_7 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((signed char) arr_3 [i_2] [i_0] [i_0]))) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_1 [i_0]))))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), ((((!(((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11))))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_2 [i_0])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (arr_3 [i_0 - 2] [i_0 - 2] [i_0 - 2]))))))));
    }
}
