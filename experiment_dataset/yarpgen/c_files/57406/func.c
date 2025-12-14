/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57406
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
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_15 = (unsigned char)13;
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            var_16 = ((short) ((((/* implicit */_Bool) var_13)) ? (18446744073709551615ULL) : (11151310895473004832ULL)));
            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)-31843))));
        }
        var_18 = ((/* implicit */int) 11072411748888284309ULL);
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
    {
        var_19 = ((((/* implicit */_Bool) arr_6 [14] [i_2])) ? (arr_8 [i_2] [i_2 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2] [i_2 + 1]))));
        var_20 = ((/* implicit */_Bool) ((short) (unsigned char)242));
        var_21 = ((/* implicit */short) (-(arr_3 [i_2])));
        var_22 = ((/* implicit */short) ((_Bool) arr_7 [i_2 + 1] [i_2 + 1]));
        arr_9 [i_2] = ((/* implicit */signed char) ((unsigned long long int) arr_8 [i_2] [i_2]));
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) >= (((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))));
    var_24 = ((/* implicit */short) var_0);
}
