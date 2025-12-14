/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83761
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
    var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) / (var_4)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_2))))) : (((((/* implicit */int) var_6)) << (((var_5) - (3918625096861690770ULL)))))))) * (((((/* implicit */_Bool) var_13)) ? (var_2) : (((/* implicit */unsigned long long int) ((var_15) * (((/* implicit */long long int) ((/* implicit */int) var_14))))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned long long int) -1131674062)), (15858370164316191172ULL))))) < (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))));
                arr_9 [i_0] [i_0] = ((/* implicit */signed char) ((max((((((/* implicit */_Bool) var_13)) ? (var_4) : (arr_7 [i_0]))), (((/* implicit */int) var_1)))) % ((~(((/* implicit */int) ((signed char) arr_2 [i_0 + 2])))))));
                arr_10 [i_0] = ((/* implicit */int) ((unsigned int) (~((+(((/* implicit */int) arr_1 [i_1])))))));
                arr_11 [i_0] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1]))) : (10264421070067957602ULL))), (((/* implicit */unsigned long long int) (+(arr_5 [i_0 - 2]))))));
            }
        } 
    } 
}
