/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58082
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58082 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58082
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
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        arr_4 [3] [3] = ((/* implicit */_Bool) (unsigned char)76);
        var_12 *= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (signed char)80)))));
        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) min(((+(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_1)))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (_Bool)1)) : (var_8))))))));
        arr_10 [23] [23] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 1730221439)) ? (((/* implicit */int) arr_9 [i_1] [i_1])) : (((/* implicit */int) var_10)))), (((/* implicit */int) var_2))))) ? (arr_8 [i_1]) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)1))))))));
        arr_11 [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */int) min((var_5), (((/* implicit */signed char) (_Bool)1))))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_0)) : (130541186))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (min((arr_8 [i_1]), (((/* implicit */int) (_Bool)1)))) : (var_4)))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */short) ((((var_10) ? (385578214) : (((/* implicit */int) (unsigned char)69)))) + ((+(((/* implicit */int) var_5))))));
        var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_2))));
    }
    for (int i_3 = 4; i_3 < 15; i_3 += 2) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned short) (+(((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_15 [i_3])))) ^ (((/* implicit */int) min((var_3), (((/* implicit */unsigned short) (unsigned char)68)))))))));
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_3] [(_Bool)1])), (((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((int) (~(arr_8 [i_3 - 4]))))) : (min(((~(arr_2 [i_3]))), (((/* implicit */long long int) arr_1 [6ULL]))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) max((((/* implicit */int) min((((/* implicit */unsigned short) min((var_1), (((/* implicit */short) var_10))))), (arr_13 [i_3] [i_3])))), ((-(((((/* implicit */_Bool) arr_2 [i_3])) ? (-130388004) : (((/* implicit */int) var_10)))))))))));
        arr_18 [i_3 - 4] [i_3] = ((/* implicit */unsigned short) (~(var_8)));
    }
    var_18 = ((/* implicit */unsigned char) ((var_10) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */int) var_1))))))));
}
