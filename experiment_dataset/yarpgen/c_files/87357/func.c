/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87357
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
    var_16 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((unsigned char) var_3))), ((-(var_11))))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)31)) ? (((/* implicit */int) (short)20410)) : (((/* implicit */int) (unsigned char)242)))))));
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) var_0)), (var_4))) << (((((((/* implicit */_Bool) var_12)) ? ((~(var_8))) : (var_2))) - (2290107085793933868LL))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 2) /* same iter space */
    {
        var_18 = (+(((max((13548498539537960469ULL), (((/* implicit */unsigned long long int) -38555585)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [3] [i_0 - 1])) ? (arr_1 [i_0] [i_0]) : (((/* implicit */long long int) var_0))))))));
        arr_2 [i_0] = min((((unsigned int) ((((/* implicit */int) var_1)) & (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned int) 130023424)));
        arr_3 [i_0] = ((/* implicit */short) ((unsigned short) arr_1 [i_0] [i_0]));
        arr_4 [i_0] = max((max((((((/* implicit */unsigned long long int) var_2)) * (var_13))), (((/* implicit */unsigned long long int) max((arr_0 [3ULL] [3ULL]), (arr_0 [0LL] [i_0 + 1])))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_1)), (var_12)))));
        arr_5 [i_0] = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((long long int) (signed char)49))) | (max((15839051196909170368ULL), (((/* implicit */unsigned long long int) 130023435)))))), (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_1)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 11; i_1 += 2) /* same iter space */
    {
        var_19 = -38555585;
        var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)-1)), (1U)))) ? (max((((/* implicit */unsigned long long int) (unsigned char)255)), (2607692876800381248ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))))));
        var_21 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_6 [i_1 - 1])), (var_13)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)76)), (arr_6 [i_1]))))) % (((((/* implicit */_Bool) arr_7 [i_1])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_1])))))))) : (min((var_2), (((/* implicit */long long int) arr_7 [i_1 + 1]))))));
    }
    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((max((min((((/* implicit */unsigned long long int) var_14)), (9333031353617672476ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -130023425)), (var_12)))))) | (((/* implicit */unsigned long long int) var_0)))))));
}
