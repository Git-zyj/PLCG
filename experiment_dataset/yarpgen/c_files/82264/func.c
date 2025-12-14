/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82264
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82264 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82264
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_17))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_21 ^= ((/* implicit */long long int) ((arr_1 [6] [i_0]) > (((/* implicit */int) var_7))));
        var_22 += ((/* implicit */unsigned char) ((signed char) arr_1 [(unsigned char)14] [(unsigned char)14]));
        var_23 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_24 = ((/* implicit */signed char) (~(arr_2 [i_1] [i_1])));
        arr_4 [i_1] [(_Bool)1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        var_25 = ((/* implicit */signed char) (+(var_8)));
        arr_5 [i_1] &= var_2;
    }
}
