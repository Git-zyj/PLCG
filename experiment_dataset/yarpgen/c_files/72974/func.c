/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72974
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
    var_18 = ((/* implicit */unsigned short) var_15);
    var_19 = ((((/* implicit */int) var_8)) % (-2147483626));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */signed char) var_12);
        var_21 = ((/* implicit */long long int) -1934587244);
        var_22 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0])) | (arr_2 [i_0] [i_0])));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */signed char) min((((unsigned int) (unsigned short)38464)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483626)) ? (((/* implicit */int) (unsigned short)38480)) : (-2147483626))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_7 [i_1 - 1]))))));
    }
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 3) /* same iter space */
    {
        var_24 -= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_9 [i_2])) ? (arr_10 [(unsigned short)14]) : (arr_10 [(signed char)4])))));
        var_25 &= ((/* implicit */int) -6080404781561815048LL);
    }
    /* vectorizable */
    for (unsigned char i_3 = 0; i_3 < 24; i_3 += 3) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) arr_12 [i_3]);
        var_27 = ((/* implicit */short) (((_Bool)1) ? (((long long int) var_11)) : (((/* implicit */long long int) arr_13 [i_3]))));
    }
    var_28 &= ((/* implicit */long long int) ((max((((/* implicit */int) ((var_9) >= (((/* implicit */unsigned int) ((/* implicit */int) (short)-32742)))))), ((+(((/* implicit */int) var_11)))))) - (((int) (+(1391775549U))))));
}
