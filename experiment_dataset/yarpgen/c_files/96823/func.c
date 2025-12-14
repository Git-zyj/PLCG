/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96823
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
    var_14 = var_4;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        var_15 -= ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */long long int) ((((/* implicit */_Bool) 8400064592031187281ULL)) ? (var_4) : (((/* implicit */int) arr_0 [(unsigned short)4]))))))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((arr_1 [i_0 - 1]) + (9223372036854775807LL))) >> (((arr_1 [i_0 - 1]) + (1532418810895347018LL)))))) ? ((~((((_Bool)1) ? (-242431284006835570LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [10U]))))))) : (max((((/* implicit */long long int) max((1482790816U), (((/* implicit */unsigned int) var_2))))), (var_12))))))));
        arr_2 [i_0] = ((/* implicit */int) (~(((2812176462U) ^ (((1482790816U) | (2812176479U)))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((8172923040409220641ULL) - (max((((/* implicit */unsigned long long int) 1482790816U)), (10273821033300330996ULL))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (2812176471U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1482790816U)) < (10273821033300330975ULL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1]))) : (((((/* implicit */_Bool) 8172923040409220641ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : ((-(arr_4 [i_1]))))))))));
    }
    var_19 = var_10;
}
