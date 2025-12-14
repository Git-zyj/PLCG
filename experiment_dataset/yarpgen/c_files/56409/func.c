/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56409
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
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) ^ (var_0))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (var_18))))));
        var_20 = ((/* implicit */int) ((unsigned char) arr_0 [6LL] [i_0]));
        var_21 ^= ((/* implicit */short) ((var_14) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)112)) ? (((/* implicit */unsigned long long int) arr_0 [i_0] [(unsigned short)8])) : (18446744073709551613ULL))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_12);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((-3253687080018593268LL) <= (((/* implicit */long long int) ((/* implicit */int) (signed char)43))))))));
    }
    var_22 = ((/* implicit */unsigned int) min((var_11), (((((/* implicit */_Bool) var_0)) ? ((-(5815218448588724220LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_12)) == (((/* implicit */int) var_4))))))))));
}
