/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74026
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
    var_18 *= ((/* implicit */unsigned long long int) (((!((_Bool)1))) ? ((~(536870911LL))) : (((((long long int) 17381383829343247014ULL)) / (((long long int) (signed char)59))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (unsigned short)62407)), ((-((+(7982536962911641148ULL)))))));
        var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)3129)) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_2 [i_0 - 1])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
    }
    for (unsigned short i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        arr_5 [i_1] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_4 [i_1])))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1])))) ? (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (((/* implicit */long long int) ((max((2194098408U), (((/* implicit */unsigned int) (unsigned short)48563)))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))))))));
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-(((((((/* implicit */_Bool) (unsigned short)384)) ? (((/* implicit */unsigned long long int) 0LL)) : (10464207110797910479ULL))) + (((/* implicit */unsigned long long int) arr_4 [i_1])))))))));
        var_22 = ((/* implicit */unsigned short) (-(((((_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (7901554267780397713ULL)))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_23 = ((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_7 [i_2]))), (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) ((signed char) arr_6 [i_2]))) : (((/* implicit */int) arr_7 [i_2]))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((_Bool) ((arr_6 [i_2]) <= (arr_6 [i_2])))))));
    }
}
