/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62971
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
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)235)), (0ULL)))) && (((/* implicit */_Bool) var_13))))), (((((/* implicit */_Bool) 15258139471209627491ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))) : (min((((/* implicit */unsigned long long int) var_8)), (0ULL)))))));
    var_19 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
    var_20 = ((/* implicit */unsigned char) ((unsigned long long int) min((((unsigned long long int) 5383684881584033450ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((16100946208134168201ULL) - (16100946208134168183ULL)))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
        var_22 += ((/* implicit */short) (unsigned char)75);
        var_23 -= ((/* implicit */unsigned long long int) min((min((((/* implicit */short) arr_2 [i_0] [i_0])), (var_4))), ((short)-1497)));
        var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) arr_1 [i_0])))))))));
    }
}
