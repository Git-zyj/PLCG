/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71535
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
    var_18 &= ((/* implicit */int) var_5);
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)17413)), ((unsigned short)61517)))), (max((((/* implicit */unsigned int) var_5)), (var_6))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 4; i_0 < 23; i_0 += 2) 
    {
        arr_2 [i_0] [(_Bool)1] = ((/* implicit */long long int) arr_1 [i_0]);
        var_20 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        var_21 = ((/* implicit */unsigned int) ((int) min((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)49018))))), (arr_5 [i_1 - 1]))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_1 [i_1 + 1]), (arr_1 [i_1 - 2])))) ? (((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (((/* implicit */int) arr_3 [i_1 - 2])) : (((/* implicit */int) arr_1 [i_1 - 1])))) : (((/* implicit */int) max((arr_1 [i_1 - 1]), (arr_1 [i_1 - 2])))))))));
    }
    var_23 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) var_11)), (var_13))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))))));
}
