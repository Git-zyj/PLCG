/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86053
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
    var_12 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) == (((/* implicit */int) (short)-8521))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 += ((/* implicit */short) (+(((int) arr_3 [i_0] [i_0]))));
        arr_4 [i_0] |= ((/* implicit */long long int) ((29ULL) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-121)) <= (((/* implicit */int) var_2)))))));
        var_14 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (+((((_Bool)1) ? (var_5) : (((/* implicit */int) (_Bool)1)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-7862)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))));
    }
    var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned char)14)))))) : (min((((/* implicit */unsigned int) (signed char)-37)), (var_1))))))));
    var_17 = ((/* implicit */unsigned char) (signed char)37);
    var_18 &= ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (_Bool)0))), (((int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_6)))))));
}
