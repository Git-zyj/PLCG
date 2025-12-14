/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88464
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_16 += ((/* implicit */unsigned char) ((((arr_1 [(signed char)12] [(signed char)12]) / (arr_1 [8ULL] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_1 [14U] [14U]) >> (((arr_1 [10LL] [10LL]) - (3597557221117753465LL)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (var_6)))) : (min((133798900U), (4161168369U))))))));
        arr_2 [i_0] = (+(4161168401U));
        arr_3 [i_0] = ((/* implicit */int) ((unsigned int) var_13));
        var_17 = ((/* implicit */_Bool) min((((arr_0 [i_0]) >> (((arr_0 [i_0]) - (5193474651070493396ULL))))), (((/* implicit */unsigned long long int) (~(max((((/* implicit */unsigned int) var_11)), (597094859U))))))));
    }
    for (short i_1 = 4; i_1 < 20; i_1 += 4) 
    {
        arr_6 [i_1] = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 2]))))));
        arr_7 [i_1] = ((/* implicit */signed char) ((unsigned long long int) max((2958405192U), (133798900U))));
        arr_8 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
    }
    var_18 = ((/* implicit */signed char) (~(((var_9) ? ((+(18140204737805820148ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))));
}
