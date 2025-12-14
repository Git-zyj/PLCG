/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80715
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80715 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80715
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
    var_13 = ((/* implicit */short) (signed char)63);
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        var_14 = max((((/* implicit */int) var_8)), ((~(((((/* implicit */_Bool) 3842270648339489476LL)) ? (((/* implicit */int) var_7)) : (-955416882))))));
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) -1LL)) ? (arr_0 [i_0]) : (arr_0 [i_0]))))))));
        var_15 = ((/* implicit */short) (-((-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_1)))))));
        var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) arr_1 [i_0 + 1])), (((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_6)), ((unsigned short)39035))))) : (((var_10) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
    }
    var_17 = ((/* implicit */long long int) (signed char)127);
    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (!(((_Bool) (!(var_6)))))))));
}
