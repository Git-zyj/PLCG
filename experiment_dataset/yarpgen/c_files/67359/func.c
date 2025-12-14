/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67359
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
    var_13 = ((/* implicit */long long int) (short)14822);
    var_14 = ((/* implicit */long long int) (-(((/* implicit */int) min((min((var_7), (var_0))), (var_10))))));
    var_15 = ((/* implicit */long long int) var_7);
    var_16 = ((((/* implicit */_Bool) (((!(var_2))) ? (((/* implicit */int) ((274341036032LL) == (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (min((((/* implicit */int) var_6)), (var_4)))))) ? (((((((/* implicit */int) (unsigned short)16815)) << (((((/* implicit */int) (unsigned char)255)) - (255))))) & (((/* implicit */int) (signed char)14)))) : (((/* implicit */int) var_9)));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 6; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 3]))))));
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((~(arr_1 [i_0]))), (((/* implicit */long long int) var_6))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)5776))))) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_1 [i_0 + 1])))))))));
        var_19 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (arr_0 [i_0] [i_0])))) ? (min((-8419544547822240363LL), (((/* implicit */long long int) -449350300)))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_6))))))) & (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        arr_4 [i_1] = ((/* implicit */unsigned char) arr_2 [i_1]);
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2048)) ? (-8983065818847349274LL) : (((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (4008455572U))))));
    }
}
