/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71461
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((((/* implicit */_Bool) ((unsigned short) var_11))) ? (((/* implicit */int) ((unsigned short) 1787805337U))) : (((/* implicit */int) var_3))))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_17 += ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((-779605080), (((/* implicit */int) arr_1 [4LL]))))) ? (((/* implicit */int) var_3)) : (779605080)))) & (((long long int) ((unsigned long long int) var_14)))));
        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 779605094)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (3390877788690588595LL)))) : ((~(var_12)))))) ? (((/* implicit */int) ((short) ((short) 779605118)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) -779605107)) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) arr_1 [i_0]))))));
    }
    var_19 ^= ((/* implicit */_Bool) var_6);
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 779605118)) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_3)))))))))));
}
