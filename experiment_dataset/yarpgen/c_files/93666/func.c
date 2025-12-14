/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93666
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93666 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93666
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
    var_15 = ((/* implicit */long long int) var_13);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_16 *= ((/* implicit */signed char) ((unsigned long long int) 6059627394141479277ULL));
        arr_2 [i_0] [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) (+(-9223372036854775806LL)))) ? (var_4) : (arr_1 [i_0] [18ULL]))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_8))), (((/* implicit */long long int) max((-1291097571), (1291097571)))))))));
        var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))), (var_13)));
    }
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1291097571)), ((((!(((/* implicit */_Bool) (signed char)(-127 - 1))))) ? (((/* implicit */unsigned long long int) (-(-1575194489)))) : (var_1)))));
    var_19 = ((/* implicit */long long int) ((unsigned short) -1291097571));
}
