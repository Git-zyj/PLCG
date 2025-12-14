/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8870
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
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((var_5) < (((/* implicit */int) var_10)))) ? (max((717922798U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */int) (unsigned char)214)) : (((/* implicit */int) (unsigned char)214)))))))) : (var_9)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 1; i_0 < 18; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) max(((unsigned char)214), (max((arr_1 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned char) (signed char)-85))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((var_1) * (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_6)) / (arr_0 [i_0 - 1]))) / (((/* implicit */int) (unsigned char)214)))))));
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned char)236))))))) / (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_6))))) ? ((~(var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)214)))))));
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_1] [i_1])), (-1076205603)))) ? (14903354885168002611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) != (11044014450144433866ULL))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_5 [i_1 + 1]), (var_6)))))))));
        var_14 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)41))));
        /* LoopSeq 1 */
        for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_2]);
            var_16 *= ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)4725))))) < (((/* implicit */int) arr_9 [i_1 - 1] [14ULL] [i_1])))));
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_5 [i_2]), (arr_5 [i_2])))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)149)))))))) ? ((-(((((/* implicit */_Bool) (unsigned char)41)) ? (arr_3 [i_1]) : (arr_0 [i_1]))))) : ((+(arr_3 [i_1 + 1])))));
            arr_11 [i_1] [i_2] [i_1] = ((/* implicit */long long int) var_5);
        }
    }
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)235)) ? (var_5) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)41)) : (((/* implicit */int) var_7))))))))));
}
