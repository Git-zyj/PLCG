/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70990
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
    var_14 -= ((/* implicit */signed char) 8177845967591768922ULL);
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 13; i_0 += 2) 
    {
        arr_3 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) min((var_9), (var_7)))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)16)), ((unsigned char)72))))))) ? (((((/* implicit */_Bool) (unsigned char)62)) ? (13428827135955015733ULL) : (((2845064257976411868ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)211))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_7), (var_13)))) + (((/* implicit */int) var_9))))));
        arr_4 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) var_11)), (((-4867937591060266214LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)53)))))));
        var_15 ^= ((/* implicit */unsigned long long int) var_9);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned char)172);
    }
}
