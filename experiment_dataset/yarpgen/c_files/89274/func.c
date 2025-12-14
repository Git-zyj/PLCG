/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89274
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
    var_19 = ((max((var_10), ((!(((/* implicit */_Bool) var_18)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) max((((/* implicit */int) (unsigned short)65535)), (var_12)));
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((short) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */long long int) min((min((((/* implicit */unsigned short) arr_1 [i_0])), (arr_0 [i_0]))), (((/* implicit */unsigned short) var_2))));
        var_21 = ((/* implicit */_Bool) (+(((((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_0])))) * (((/* implicit */int) max((((/* implicit */signed char) arr_1 [1LL])), ((signed char)93))))))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) != (((/* implicit */int) (unsigned char)251))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [12LL])) ? (((/* implicit */int) var_4)) : (var_0)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_10)))) : (((/* implicit */int) var_6))))));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) arr_0 [i_1]);
    }
    var_23 = ((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_14)), ((~(((/* implicit */int) var_3)))))) & (((/* implicit */int) var_14))));
    var_24 = ((/* implicit */long long int) var_7);
    var_25 = ((/* implicit */unsigned char) var_7);
}
