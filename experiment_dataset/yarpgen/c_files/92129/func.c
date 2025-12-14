/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92129
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) > (var_9)))), (var_18)))) ? (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) << (((((/* implicit */int) arr_2 [i_0])) - (4782))))) : ((-(((/* implicit */int) arr_2 [i_0]))))))) : (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_11)) > (var_9)))), (var_18)))) ? (((((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2])) << (((((((/* implicit */int) arr_2 [i_0])) - (4782))) + (19311))))) : ((-(((/* implicit */int) arr_2 [i_0])))))));
        arr_4 [6ULL] = ((/* implicit */int) (-(var_15)));
        arr_5 [i_0] = ((/* implicit */long long int) var_2);
    }
    for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) arr_7 [(unsigned char)18])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_18)))))));
        arr_9 [i_1] = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) min((((unsigned long long int) arr_7 [i_2])), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((var_10), (var_16)))), ((-(28U))))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_2])))))));
    }
    var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_2)) ? (var_13) : (var_17))) : (((/* implicit */long long int) ((/* implicit */int) ((var_0) > (var_17))))))), (((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), (var_11))))));
    var_20 = ((/* implicit */short) min((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) > (3737969522U)))) : (((/* implicit */int) ((short) var_5))))), ((+(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        arr_17 [i_3] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) var_9)) ? (arr_16 [(signed char)9]) : (((var_15) / (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))))))));
        arr_18 [i_3] = ((/* implicit */unsigned int) max((((((var_5) | (((/* implicit */unsigned long long int) var_12)))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_10)))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65516))))) || ((!(((/* implicit */_Bool) arr_16 [3ULL]))))))));
        arr_19 [11LL] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) arr_7 [(short)20])) ? ((~(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))));
    }
    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
    {
        arr_23 [i_4] = ((/* implicit */signed char) min((min((var_12), (((/* implicit */long long int) min(((_Bool)1), (arr_21 [(short)15])))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)2047))))))))));
        arr_24 [i_4] &= ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_6 [i_4 + 1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
        arr_25 [i_4] [i_4] = ((/* implicit */unsigned long long int) var_1);
        arr_26 [i_4 - 1] &= ((/* implicit */int) (+(max((18393682686828483386ULL), (((/* implicit */unsigned long long int) arr_22 [i_4]))))));
    }
    var_21 = ((/* implicit */_Bool) max((min(((-(var_9))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)32767))))))), (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) ((unsigned char) 3737969537U))))))));
}
