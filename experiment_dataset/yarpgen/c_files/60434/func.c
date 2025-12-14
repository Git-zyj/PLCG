/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60434
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
    var_18 = ((/* implicit */unsigned char) var_1);
    var_19 = var_11;
    var_20 = var_8;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        arr_2 [1] = ((/* implicit */long long int) arr_0 [3ULL]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((_Bool) (short)0))), (((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_10))))))))));
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                var_22 |= ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_0])))));
                var_23 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)171)))))));
            }
        }
        var_24 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */long long int) var_16)), (arr_4 [3] [3] [i_0]))) > (((((/* implicit */_Bool) (signed char)11)) ? (arr_4 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))))) - (min((((/* implicit */unsigned long long int) ((3585159546U) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))), (arr_5 [i_0]))));
    }
    var_25 -= ((/* implicit */unsigned int) var_6);
}
