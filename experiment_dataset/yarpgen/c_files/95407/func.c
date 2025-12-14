/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95407
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
    var_11 = ((/* implicit */_Bool) max((((/* implicit */long long int) var_10)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) | (var_0)))) ? (-6889707260050437513LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) > (17216807424416830524ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2669729891063113558ULL)) ? (-569009096) : (((/* implicit */int) (short)16383))));
        var_13 = ((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)0)) >= (((/* implicit */int) (short)(-32767 - 1))))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) arr_5 [i_1]);
        var_15 &= arr_3 [i_1];
        var_16 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) arr_3 [(unsigned short)0])) : (((/* implicit */int) (short)32754))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)64)) / (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned long long int) ((long long int) var_8))), (var_7)))));
        arr_6 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) min((arr_3 [i_1]), (arr_3 [i_1])))) / (((((/* implicit */int) (unsigned char)254)) ^ (((/* implicit */int) (short)-16407))))));
    }
    var_17 = ((/* implicit */_Bool) ((unsigned short) (_Bool)1));
}
