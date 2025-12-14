/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74555
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
    for (long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) (-(3275759155U)));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)9])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0]))))) : (arr_0 [i_0])))) ? (min((arr_2 [i_0] [i_0]), (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) ^ (arr_2 [i_0] [i_0]))))) : (((/* implicit */unsigned int) var_0))));
        var_17 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (1019208129U)))) < (max((((/* implicit */unsigned long long int) ((signed char) (unsigned char)21))), ((~(var_6)))))));
    }
    var_18 = ((/* implicit */unsigned short) var_14);
    var_19 = ((((((/* implicit */int) ((unsigned short) (_Bool)1))) + (-1043417037))) == (((/* implicit */int) var_13)));
}
