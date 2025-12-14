/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56275
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
    var_15 = ((/* implicit */unsigned int) var_2);
    var_16 = ((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) ((((/* implicit */int) var_2)) | ((+(((/* implicit */int) var_12)))))))));
    var_17 += ((/* implicit */unsigned int) var_1);
    var_18 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_19 += ((/* implicit */unsigned char) (+(((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) arr_0 [i_0])))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((+(((/* implicit */int) arr_4 [i_1])))) : (((((arr_5 [i_1]) ^ (arr_5 [i_1]))) >> (((((((/* implicit */_Bool) var_12)) ? (var_0) : (var_0))) - (816618477U)))))));
        var_21 = (~(((/* implicit */int) ((_Bool) arr_5 [i_1]))));
        var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1])))))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned int) (unsigned char)90);
    }
}
