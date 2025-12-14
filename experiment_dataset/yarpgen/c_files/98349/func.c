/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98349
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
    var_12 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) var_9)))))) - (var_2))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (-4552921352503679944LL) : (min((var_10), (((/* implicit */long long int) -1821744633)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 3; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) 268433408)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)248))) : (var_4))) + (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_1 [i_0] [i_0]))))))) - (((/* implicit */long long int) ((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((arr_2 [i_0] [(_Bool)1]), ((_Bool)1)))) * ((+(((/* implicit */int) arr_0 [i_0 - 3]))))))) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_0 [i_0 - 3]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_2 [i_0 - 3] [2LL])) : (((/* implicit */int) var_3)))))))));
    }
    var_14 = ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
}
