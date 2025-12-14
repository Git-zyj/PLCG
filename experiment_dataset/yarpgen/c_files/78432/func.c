/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78432
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
    var_12 ^= ((/* implicit */unsigned int) (!(((_Bool) ((((/* implicit */_Bool) (short)-20591)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))));
    var_13 = ((/* implicit */unsigned char) ((int) var_9));
    var_14 = ((/* implicit */unsigned short) min((min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned char)245))))))), (((/* implicit */long long int) ((int) min((-1472529295), (((/* implicit */int) var_8))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-22)) | (((arr_0 [i_0 + 1]) << (((23ULL) - (22ULL)))))));
        var_15 = ((/* implicit */int) ((_Bool) (-(arr_0 [7LL]))));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((_Bool) ((var_11) << (23ULL)))))));
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) min((arr_5 [i_1 - 1] [i_1]), (arr_5 [i_1 + 2] [i_1])))), (arr_4 [i_1] [i_1])));
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) min((min((arr_8 [i_2] [i_2]), (((/* implicit */signed char) var_4)))), (((signed char) arr_8 [i_2] [i_2]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 18446744073709551592ULL)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) (short)-12648)))))));
        var_19 = ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)76))))) & (min((18446744073709551592ULL), (18446744073709551592ULL))));
    }
}
