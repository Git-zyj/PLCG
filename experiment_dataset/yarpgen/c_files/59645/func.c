/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59645
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
    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) ((int) var_12)))));
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)116)), ((unsigned short)76)))) ? (((/* implicit */int) ((var_0) || (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) var_2)))) < (max((((int) var_7)), (((var_2) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)0)))))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_9) ? (-3595432414115694868LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))) ? (((/* implicit */int) var_6)) : ((-(((/* implicit */int) (short)-26326))))));
        arr_2 [i_0] = ((/* implicit */_Bool) (((-((((_Bool)1) ? (arr_1 [i_0]) : (((/* implicit */int) (_Bool)0)))))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-10261))) >= (((((/* implicit */long long int) ((/* implicit */int) var_6))) ^ (5419645530785807135LL))))))));
        arr_3 [i_0] = ((/* implicit */int) min((4503599627369472ULL), (((/* implicit */unsigned long long int) 0U))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (unsigned short)76)) : (((/* implicit */int) (unsigned char)55))))), (min((((/* implicit */long long int) -1482358803)), (min((arr_4 [i_1]), (arr_4 [i_1])))))));
        var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1] [i_1]))), (((var_5) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
        var_18 = ((/* implicit */unsigned int) ((long long int) max((((/* implicit */unsigned long long int) (short)12333)), (15589330334937290767ULL))));
    }
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((+(((/* implicit */int) (unsigned short)76)))) / (((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (max((-7163207439355857809LL), (var_3))) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)65116)) * (((/* implicit */int) (_Bool)1)))))))));
}
