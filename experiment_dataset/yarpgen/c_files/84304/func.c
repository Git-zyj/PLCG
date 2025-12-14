/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84304
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
    var_18 -= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (signed char)-65))))) ? (((/* implicit */int) (!((_Bool)1)))) : (max((((/* implicit */int) var_2)), (-130346089))))), ((-(((/* implicit */int) (short)(-32767 - 1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (-((-(arr_2 [i_0])))));
        var_19 -= ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 0; i_1 < 15; i_1 += 4) 
    {
        var_20 -= ((/* implicit */_Bool) ((min(((!(((/* implicit */_Bool) 0)))), ((!(((/* implicit */_Bool) var_15)))))) ? (((/* implicit */unsigned long long int) max((min((arr_0 [i_1] [i_1]), (((/* implicit */int) arr_5 [i_1])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))))) : (max((((/* implicit */unsigned long long int) min((-130346103), (arr_2 [i_1])))), (min((((/* implicit */unsigned long long int) (signed char)8)), (arr_1 [i_1])))))));
        arr_7 [i_1] = (+(10388693081139551163ULL));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(2080941049843107211ULL))), (min((var_1), (((/* implicit */unsigned long long int) -130346089))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) (signed char)66)), ((-2147483647 - 1))))) : (max((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_3))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)19)))))))));
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */short) arr_4 [i_1] [i_1])), ((short)3)))), (min((-2356533036815857640LL), (((/* implicit */long long int) (short)(-32767 - 1)))))))))))));
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? ((+((+(0LL))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) (signed char)0)) ? (130346099) : (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))))));
}
