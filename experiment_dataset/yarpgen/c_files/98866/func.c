/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98866
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
    var_18 = ((/* implicit */short) min((((((var_4) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_17))))) % (((/* implicit */long long int) var_13)))), (((/* implicit */long long int) (+(((/* implicit */int) (short)-14295)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_19 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (-(15268166358035295214ULL)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))));
        var_20 = var_7;
        arr_2 [0ULL] &= ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) (short)-14295)), ((unsigned short)2))), ((unsigned short)47424)));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-14308)), (((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0]))))) * (max((((/* implicit */unsigned int) arr_1 [i_0])), (arr_0 [i_0])))))));
        var_21 = ((/* implicit */short) min((14680327171054042423ULL), (((/* implicit */unsigned long long int) (_Bool)0))));
    }
    var_22 = ((/* implicit */_Bool) min((max((min((var_0), (((/* implicit */unsigned long long int) (short)14295)))), (((/* implicit */unsigned long long int) (+(var_10)))))), (((/* implicit */unsigned long long int) var_10))));
    var_23 = (+(var_14));
}
