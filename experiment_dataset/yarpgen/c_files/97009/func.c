/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97009
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((((/* implicit */_Bool) (unsigned short)255)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (-2449607144224439636LL))) : (((/* implicit */long long int) var_11))))) & (13723023558957764574ULL)));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (((!(arr_2 [i_0] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4723720514751787033ULL)))))) : (min(((-9223372036854775807LL - 1LL)), (2449607144224439626LL))))))));
        var_20 = ((/* implicit */unsigned char) ((arr_0 [11ULL]) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))));
    }
    var_21 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)57)) / (((/* implicit */int) var_2)))))))));
}
