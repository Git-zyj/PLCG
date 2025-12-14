/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84015
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
    var_13 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) + (1073741824ULL)));
    var_15 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) min((var_3), (var_0))))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) 18446744073709551615ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28672)) - (((/* implicit */int) (unsigned char)255))))) : ((~(((8396354059570022090ULL) | (0ULL)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) max((((arr_3 [i_0] [i_0 + 3]) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (2147450880U)))))), (((max((arr_3 [i_0] [i_0]), (((/* implicit */unsigned long long int) (short)32767)))) >> (((((((/* implicit */_Bool) (unsigned char)1)) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) - (1795811141290590906ULL)))))));
    }
}
