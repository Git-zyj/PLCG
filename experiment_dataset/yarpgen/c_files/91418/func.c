/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91418
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
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)8)) % (((/* implicit */int) var_4))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 9; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((9569292767312747182ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 2])) < (((/* implicit */int) var_11)))))));
        var_19 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (~(arr_1 [i_0 - 4]))))))) ? (min((((/* implicit */int) var_11)), (((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_0 [9LL])))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))));
    }
}
