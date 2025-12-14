/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69189
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_2 [i_0] = arr_1 [i_0];
        var_18 += ((/* implicit */short) ((((/* implicit */int) (unsigned short)0)) % (((/* implicit */int) (_Bool)1))));
    }
    for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */int) var_13);
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [17U] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2] [i_2] [i_1]))) : (arr_8 [i_1])))) ? (((/* implicit */int) arr_3 [13U])) : (((/* implicit */int) ((short) arr_4 [i_1]))))))))));
            arr_9 [(unsigned short)9] [i_2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)6))));
            arr_10 [i_1] [(short)4] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_3)), (arr_4 [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (arr_8 [i_1]))))));
        }
    }
    var_20 &= ((/* implicit */long long int) (-(((/* implicit */int) var_9))));
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_5))));
}
