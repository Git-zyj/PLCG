/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80718
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)165))))), (((((/* implicit */_Bool) (unsigned char)193)) ? (((/* implicit */int) (unsigned char)153)) : (((/* implicit */int) (unsigned char)91))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_15)) % (((/* implicit */int) (unsigned char)165))))) ? (min((((/* implicit */long long int) (unsigned char)255)), (var_2))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (var_17)))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)175))) % (var_3))), (((/* implicit */unsigned long long int) ((123647534560403404LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
    var_21 = min((((/* implicit */int) var_13)), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)165)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (unsigned char)237)))))));
    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) max((((((_Bool) var_2)) ? (var_16) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (min((((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_1))))))))))));
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((max((var_3), (((/* implicit */unsigned long long int) ((7U) > (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_24 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_2 [i_0])), (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) << (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) - (9223372036854775807LL))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) arr_2 [i_0])))))))) : (((/* implicit */int) (signed char)-21))));
        var_25 |= ((/* implicit */unsigned int) var_18);
    }
    for (int i_1 = 4; i_1 < 12; i_1 += 1) 
    {
        var_26 += ((/* implicit */int) min(((unsigned short)11), (((/* implicit */unsigned short) ((_Bool) (unsigned char)92)))));
        arr_7 [i_1 - 2] = ((/* implicit */unsigned long long int) arr_4 [i_1] [(unsigned char)10]);
        var_27 -= ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((arr_6 [i_1 - 4]), (arr_6 [i_1]))))) < (min((arr_4 [i_1 + 3] [i_1]), (arr_5 [i_1] [i_1])))))), (var_3)));
    }
}
