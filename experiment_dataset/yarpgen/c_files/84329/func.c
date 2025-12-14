/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84329
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 ^= ((/* implicit */signed char) (_Bool)1);
        var_19 += ((/* implicit */unsigned long long int) ((arr_2 [i_0] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_4);
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_0])) || (((/* implicit */_Bool) (signed char)0))))) >> (((/* implicit */int) arr_4 [i_0] [i_1 - 1] [i_1 + 1])))))));
        }
        arr_7 [i_0] = ((/* implicit */signed char) ((short) (signed char)119));
    }
    var_22 *= ((/* implicit */signed char) (!((_Bool)1)));
    var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) 5612792338563821630ULL))));
}
