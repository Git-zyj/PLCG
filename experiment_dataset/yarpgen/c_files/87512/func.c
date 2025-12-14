/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87512
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87512 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87512
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [0ULL])) ? (((/* implicit */int) arr_1 [i_0] [4])) : (((/* implicit */int) arr_1 [i_0] [6]))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [(unsigned char)6]))) | (3944387351141026100ULL)))));
        arr_3 [i_0] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((+(arr_2 [i_0]))) & (((/* implicit */int) ((3944387351141026111ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)124))))))))), ((+(min((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])), (3944387351141026109ULL)))))));
    }
    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) min((((/* implicit */int) var_12)), (-2056785592))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
}
