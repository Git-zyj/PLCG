/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65043
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_15 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */unsigned short) var_10)), (var_14))))))) ? ((+(arr_3 [i_0]))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) ? (((((arr_3 [(short)0]) + (9223372036854775807LL))) << (((/* implicit */int) var_9)))) : (arr_3 [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_0 [i_0] [i_1]), (((/* implicit */int) arr_2 [i_1]))))) ? (((/* implicit */unsigned long long int) (((~(3899695826U))) | ((-(var_8)))))) : (max((((/* implicit */unsigned long long int) ((signed char) var_9))), (((18446744073709551587ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))))))));
            var_16 = ((/* implicit */int) (unsigned char)0);
            arr_7 [(short)15] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_7), (((/* implicit */signed char) arr_2 [i_0]))))) ? (min((((unsigned long long int) arr_4 [i_0])), (((/* implicit */unsigned long long int) 930447413881345173LL)))) : (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (unsigned char)205)))), (((((/* implicit */int) (_Bool)0)) << (((var_0) - (10731824961807976861ULL))))))))));
        }
        for (short i_2 = 1; i_2 < 24; i_2 += 2) 
        {
            arr_11 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((((/* implicit */int) (_Bool)1)), (arr_8 [i_2] [i_0]))), (((/* implicit */int) ((_Bool) 18446744073709551569ULL)))))) ? (min(((+(((/* implicit */int) (_Bool)1)))), (arr_8 [i_2] [i_2 + 1]))) : (((/* implicit */int) (_Bool)0))));
            var_17 = ((/* implicit */_Bool) (+(0U)));
            var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_10))));
            var_19 &= ((((/* implicit */_Bool) min((var_1), (((/* implicit */int) arr_2 [(unsigned char)9]))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((int) var_11))) : (max((((/* implicit */long long int) var_4)), (arr_3 [i_0]))))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_2 [i_0]))))));
        }
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(arr_10 [i_0])))) ? ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_8 [23LL] [i_0])) : (28ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_10 [i_0]))))));
    }
    var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-7361)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)170)))), (((((/* implicit */_Bool) -2025510770)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1))))));
}
