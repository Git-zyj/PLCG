/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73931
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
    var_15 = ((/* implicit */signed char) (-(((/* implicit */int) max((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_0)))), (min(((unsigned char)6), (var_3))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) 441887409940586994LL);
        var_17 = ((/* implicit */short) (-(var_11)));
    }
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 1) 
    {
        var_18 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1 + 2]))), (((/* implicit */unsigned int) 667283090))));
        arr_4 [i_1 + 3] [i_1 - 2] = ((unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (-441887409940586994LL))) ^ ((-(-441887409940586995LL)))));
        var_19 -= ((/* implicit */signed char) min(((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (-430237738))), (((/* implicit */int) arr_2 [i_1 + 3] [i_1]))));
        arr_5 [i_1] = ((/* implicit */int) min((-441887409940587002LL), (((/* implicit */long long int) (unsigned char)153))));
        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_3 [i_1 + 2]), (((/* implicit */unsigned int) ((arr_3 [i_1]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_2 [i_1 + 3] [i_1 - 2]), (((/* implicit */signed char) var_1)))))) : (((((/* implicit */_Bool) max((((/* implicit */long long int) var_0)), (-441887409940587003LL)))) ? (((/* implicit */unsigned int) ((int) 441887409940587015LL))) : (arr_3 [i_1])))));
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_21 -= ((/* implicit */unsigned long long int) ((signed char) 441887409940586994LL));
        arr_8 [i_2] [(unsigned char)7] = ((/* implicit */unsigned int) max(((+(((/* implicit */int) ((signed char) arr_2 [i_2] [i_2]))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */_Bool) 441887409940587017LL)) && (((/* implicit */_Bool) -441887409940587001LL))))) : (((/* implicit */int) (_Bool)0))))));
        var_22 = ((/* implicit */signed char) ((((((/* implicit */_Bool) max((-441887409940587019LL), (((/* implicit */long long int) var_3))))) ? (arr_1 [i_2]) : ((+(441887409940587000LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (short)14750)))))));
    }
    var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) var_5))));
    var_24 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((var_5) + (((/* implicit */int) var_6)))) : (((/* implicit */int) var_13))))) ? (((/* implicit */long long int) (+(1291200962)))) : (((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) + (((((/* implicit */long long int) 1291200966)) + (-441887409940587008LL)))))));
    var_25 = ((var_9) >> (2ULL));
}
