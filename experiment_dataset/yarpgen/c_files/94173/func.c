/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94173
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
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        var_17 = ((((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)63))) & (4765035067339509131ULL)))))) || (((/* implicit */_Bool) arr_0 [i_0])));
        arr_2 [(signed char)11] [(signed char)2] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)133))));
    }
    var_18 = ((/* implicit */long long int) var_11);
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_3)))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (unsigned char)51))));
    var_21 = ((/* implicit */unsigned char) min((18446744073709551612ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9094695451786206537LL)) || ((_Bool)1))) || (((/* implicit */_Bool) var_8)))))));
}
