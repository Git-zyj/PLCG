/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9243
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
    var_17 = ((/* implicit */unsigned char) max(((unsigned short)47294), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)254)) >= (((/* implicit */int) var_16)))))));
    var_18 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-29633)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8))))) ? (-653027442) : (((/* implicit */int) (unsigned char)228)))) | (((/* implicit */int) (signed char)24))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) min((var_19), ((_Bool)1)));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)13761)) ? ((((_Bool)0) ? (18446744073709551606ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [(signed char)13]))))) : (((/* implicit */unsigned long long int) (((((_Bool)0) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) ^ (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) arr_2 [(unsigned short)14] [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 = (+((+(((((/* implicit */_Bool) (unsigned short)34862)) ? (-6098210696709214373LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51775))))))));
        var_21 = arr_6 [i_1] [i_1];
        arr_7 [i_1] = max((((/* implicit */int) max((((/* implicit */unsigned char) (!((_Bool)1)))), (max((((/* implicit */unsigned char) arr_5 [i_1])), (var_13)))))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) min((arr_5 [i_1]), (arr_5 [i_1])))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (_Bool)1)))))));
    }
}
