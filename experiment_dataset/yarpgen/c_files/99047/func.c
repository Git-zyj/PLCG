/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99047
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
    var_11 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (signed char)9)) ? (-9223372036854775799LL) : (((/* implicit */long long int) var_4))))))));
    var_12 = ((signed char) ((unsigned char) ((((/* implicit */_Bool) var_2)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12811))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) -9223372036854775799LL)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775798LL))))))))), (((unsigned long long int) ((((/* implicit */_Bool) -9223372036854775799LL)) ? (3741526807543104832LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))));
        var_13 = ((min((arr_0 [i_0]), (arr_0 [i_0]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)52725)), (3889586151363642619ULL)))) ? (((/* implicit */long long int) max((-1), (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned short)0)) ? (3741526807543104847LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9514)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) arr_1 [i_0]))))) ? (arr_0 [i_0]) : (((arr_1 [i_0]) ? (18446744073709551610ULL) : (arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((signed char) ((min((arr_1 [i_0]), ((_Bool)1))) ? (((((/* implicit */_Bool) -1081628803)) ? (1) : (((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0]))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)51534))))) ? (((/* implicit */int) arr_1 [7])) : (((/* implicit */int) ((unsigned short) (signed char)34)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */int) ((_Bool) arr_1 [i_1]));
        arr_10 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1])) || (((/* implicit */_Bool) 374177460427023500LL))));
    }
}
