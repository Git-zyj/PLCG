/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93592
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93592 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93592
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
    var_12 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 930838407059426238LL)), (var_11)))) ? (max((max((3493669373U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)0))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 = ((((/* implicit */int) var_6)) ^ (((/* implicit */int) max(((unsigned short)34076), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3034514643U)))))))));
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) (+((+(((/* implicit */int) max(((unsigned short)65532), (((/* implicit */unsigned short) arr_1 [i_0]))))))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22760))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((((/* implicit */_Bool) arr_0 [i_0] [10])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [(unsigned short)5] [i_0]))))));
    }
}
