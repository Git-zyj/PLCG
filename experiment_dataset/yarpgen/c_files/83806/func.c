/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83806
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7940875685091803642LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        arr_4 [i_0] &= ((_Bool) ((((/* implicit */int) var_15)) <= (((/* implicit */int) (unsigned short)17))));
    }
    /* LoopSeq 3 */
    for (unsigned short i_1 = 1; i_1 < 20; i_1 += 2) 
    {
        var_17 ^= ((/* implicit */unsigned long long int) arr_6 [(unsigned char)21]);
        arr_7 [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) min((3810439238085184996ULL), (((/* implicit */unsigned long long int) var_6))))))));
        var_18 = ((/* implicit */short) (-((-(((/* implicit */int) arr_0 [i_1 + 1]))))));
    }
    for (int i_2 = 0; i_2 < 11; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (2024533472U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1116892707587883008LL)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) (unsigned short)24788)))))))) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) min((var_6), (((/* implicit */unsigned char) (_Bool)1)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */short) arr_0 [i_2]);
        var_19 = var_9;
    }
    for (int i_3 = 0; i_3 < 11; i_3 += 3) /* same iter space */
    {
        var_20 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? ((~(max((((/* implicit */long long int) arr_5 [i_3])), (var_9))))) : (((/* implicit */long long int) (~(2270433822U))))));
        arr_14 [i_3] [i_3] = ((/* implicit */short) arr_1 [i_3]);
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2418160523U)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_9)))) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-60))))) : (var_14)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (15311879900177214759ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1476825160))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (var_14)));
    var_22 = (((~(((/* implicit */int) var_7)))) - (((/* implicit */int) var_16)));
}
