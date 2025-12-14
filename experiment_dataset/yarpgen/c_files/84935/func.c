/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84935
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
    var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))) : (((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
    var_16 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) (signed char)-48)) ? (((/* implicit */unsigned long long int) 5423772631264800018LL)) : (16911433728ULL))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)63881)), (-5423772631264800019LL)))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
    var_17 = ((/* implicit */int) var_10);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) ((arr_1 [i_0]) != (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [(unsigned char)5]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [(signed char)16])))))) && (((((/* implicit */_Bool) arr_1 [(unsigned short)13])) || (((/* implicit */_Bool) arr_0 [6ULL])))))))));
    }
}
