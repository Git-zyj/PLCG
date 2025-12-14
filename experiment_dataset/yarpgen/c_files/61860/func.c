/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61860
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((signed char) arr_1 [i_0] [i_0])));
        var_15 = ((/* implicit */signed char) var_12);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) != (((/* implicit */int) arr_2 [i_0]))))), ((-(((/* implicit */int) var_0))))));
    }
    for (long long int i_1 = 3; i_1 < 14; i_1 += 3) 
    {
        var_16 = ((/* implicit */int) var_11);
        arr_8 [i_1] = ((/* implicit */signed char) min((((((/* implicit */int) var_1)) + (((/* implicit */int) (signed char)-22)))), (((/* implicit */int) (((-(((/* implicit */int) (signed char)21)))) != (((/* implicit */int) ((short) var_7))))))));
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (signed char)-16)) ? (2147483647) : (((/* implicit */int) var_4))))));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 20; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8287544238121861185LL)) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (((-9223372036854775807LL - 1LL)) <= (((/* implicit */long long int) var_6))))))));
        var_19 = ((/* implicit */int) arr_10 [i_2] [i_2]);
    }
    for (short i_3 = 0; i_3 < 20; i_3 += 4) /* same iter space */
    {
        arr_13 [i_3] = ((/* implicit */signed char) (-(min((((((/* implicit */int) var_14)) << (((((/* implicit */int) var_14)) - (28742))))), (((/* implicit */int) max((((/* implicit */short) (signed char)-115)), ((short)11847))))))));
        var_20 = ((/* implicit */long long int) (!((!((_Bool)0)))));
    }
    var_21 = ((/* implicit */_Bool) var_0);
}
