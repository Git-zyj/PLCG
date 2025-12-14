/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62567
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
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */short) ((((8658654068736ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) arr_2 [i_1] [i_0])) : (-9181687380694330655LL))))));
                var_20 = max((max((((/* implicit */int) max(((signed char)-55), (var_8)))), (((((/* implicit */int) var_5)) / (var_14))))), (((((/* implicit */_Bool) var_6)) ? ((~(((/* implicit */int) var_5)))) : (arr_1 [i_0] [i_1 + 1]))));
                arr_5 [i_0] [i_0] = ((/* implicit */signed char) (+(var_10)));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */unsigned long long int) var_10)) : (var_4)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1071074627U)) ? (9888050436175401944ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))))) : ((-(((((/* implicit */_Bool) (signed char)55)) ? (((/* implicit */int) (short)6144)) : (((/* implicit */int) (unsigned char)183))))))));
}
