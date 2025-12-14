/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71390
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
    var_20 = ((/* implicit */short) (+(((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)5))) ^ (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (3855634642575133299LL))))), (((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_0 [i_0])) - (4148)))))) > (max((((/* implicit */long long int) arr_0 [i_0])), (0LL))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            arr_5 [i_0] = ((-694704441) - (arr_2 [i_1 + 1] [i_1 - 3] [i_1 - 2]));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0] [i_1]);
        }
    }
    var_22 = ((/* implicit */unsigned int) max((((int) ((((/* implicit */_Bool) 3855634642575133299LL)) || (((/* implicit */_Bool) var_2))))), (((int) var_5))));
}
