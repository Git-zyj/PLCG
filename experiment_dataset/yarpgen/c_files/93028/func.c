/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93028
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
    var_11 = ((/* implicit */unsigned int) var_4);
    var_12 = ((/* implicit */unsigned int) var_3);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_1 [(unsigned char)15] [i_0])))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16)))))))) : (((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) ((int) (signed char)78))) : (arr_1 [i_0] [i_0]))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)23113))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)241))) * ((~(11840873872154026309ULL)))));
        }
        for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            arr_9 [i_2] [i_0] [(unsigned char)11] = ((/* implicit */unsigned short) -640144319283867290LL);
            arr_10 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((int) -640144319283867314LL))))) ? (((/* implicit */unsigned long long int) min((arr_4 [i_0]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_0])))))))) : (((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0]))) : (((((/* implicit */_Bool) 640144319283867305LL)) ? (((/* implicit */unsigned long long int) var_2)) : (18446744073709551612ULL)))))));
            var_15 = ((/* implicit */unsigned char) (+((+(3358490366U)))));
        }
        var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 640144319283867290LL)), (((((/* implicit */_Bool) arr_6 [(unsigned char)15] [i_0])) ? (arr_8 [i_0]) : (((/* implicit */unsigned long long int) 3358490366U)))))))));
    }
}
