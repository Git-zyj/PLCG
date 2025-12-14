/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61057
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
    var_10 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) var_6)));
    var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */long long int) var_7)), (max((max((((/* implicit */long long int) var_3)), (var_4))), (((/* implicit */long long int) (!(((/* implicit */_Bool) 805306368U))))))))))));
    var_12 += ((/* implicit */long long int) var_2);
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        arr_2 [i_0] &= ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)7))))) ? (((/* implicit */int) max((arr_0 [i_0]), (arr_0 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))));
        var_13 = ((/* implicit */int) max((var_4), (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0])))))));
    }
    var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */int) (unsigned short)62571)) : (((/* implicit */int) (_Bool)1)))))))))));
}
