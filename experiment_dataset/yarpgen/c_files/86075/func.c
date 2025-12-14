/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86075
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
    var_10 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_5))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)163))) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [(unsigned char)14]) : (arr_1 [i_0])))))) == (((min((1242277551283964231ULL), (((/* implicit */unsigned long long int) var_5)))) / (((/* implicit */unsigned long long int) arr_1 [i_0])))))))));
        var_12 *= ((/* implicit */short) min((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))), (((/* implicit */long long int) max((((/* implicit */unsigned char) var_7)), ((unsigned char)163)))))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 346988472351227712ULL)) ? (var_1) : (((/* implicit */int) arr_0 [i_0]))))), ((-(arr_1 [i_0]))))))));
        var_13 = var_1;
    }
}
