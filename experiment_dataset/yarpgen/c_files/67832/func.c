/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67832
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [0U] = ((/* implicit */unsigned int) ((unsigned long long int) var_8));
        var_13 = ((/* implicit */signed char) ((arr_1 [i_0] [1U]) - (arr_1 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((unsigned short) 1956494671U));
    }
    for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) max((max((((/* implicit */long long int) arr_5 [i_1])), (-2246013669373285764LL))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_5))))), (-6462262566183283390LL)))));
        var_14 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) & (arr_4 [i_1]))))));
        var_15 += ((/* implicit */unsigned long long int) var_11);
    }
    for (long long int i_2 = 0; i_2 < 18; i_2 += 4) 
    {
        var_16 *= ((((/* implicit */long long int) arr_8 [i_2])) / (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2]))) ^ (((-2246013669373285770LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
        var_17 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_8 [i_2]), (((/* implicit */int) arr_7 [i_2]))))) && (((/* implicit */_Bool) arr_7 [i_2]))))), (515186978U));
    }
    /* LoopSeq 1 */
    for (unsigned short i_3 = 1; i_3 < 21; i_3 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_4 = 4; i_4 < 22; i_4 += 4) 
        {
            var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) ((_Bool) min((arr_12 [(unsigned short)7]), (((/* implicit */unsigned short) var_1))))))));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) arr_10 [i_3])))), (((/* implicit */int) arr_12 [i_3 + 2]))))) ? (((/* implicit */unsigned long long int) -2246013669373285764LL)) : (((unsigned long long int) var_3))));
            var_20 = ((/* implicit */unsigned int) arr_13 [i_4 + 1]);
        }
        var_21 |= ((/* implicit */unsigned int) ((short) ((((((/* implicit */_Bool) arr_13 [i_3])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_11)))) ^ (((/* implicit */int) arr_12 [i_3 + 1])))));
        var_22 = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_3])) ? (((unsigned long long int) ((unsigned long long int) 2246013669373285745LL))) : (((/* implicit */unsigned long long int) (+(max((var_6), (((/* implicit */int) arr_10 [i_3])))))))));
    }
    var_23 = ((/* implicit */unsigned int) (~((~(((((/* implicit */int) var_3)) ^ (var_0)))))));
    var_24 *= ((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned int) var_3)), (3730639573U))), (((/* implicit */unsigned int) var_10)))) >> (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_9) >= (((/* implicit */unsigned long long int) var_0))))) : (((/* implicit */int) var_8))))));
}
