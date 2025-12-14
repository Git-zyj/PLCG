/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71210
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_8)) : (((var_12) ^ (((/* implicit */unsigned long long int) var_16))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_1 [2U]))));
        arr_3 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0 + 1] [i_0 + 1])) ? ((+(((/* implicit */int) arr_2 [i_0])))) : (((((/* implicit */int) arr_2 [i_0])) % (((/* implicit */int) (short)-12506)))));
        arr_4 [i_0 - 1] = ((((((/* implicit */_Bool) 9170352858711249404ULL)) ? (((/* implicit */int) (short)12505)) : (((/* implicit */int) var_18)))) ^ (((/* implicit */int) arr_2 [i_0 - 1])));
    }
}
