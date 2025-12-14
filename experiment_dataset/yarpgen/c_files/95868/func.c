/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95868
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))) ? (7276083964492894986ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1])))))))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((min((arr_1 [i_0]), ((unsigned char)203))), (max((arr_1 [i_1]), (arr_1 [i_1]))))))));
                    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_6)))), ((((_Bool)0) ? (((/* implicit */int) arr_2 [i_0])) : (var_2))))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((var_8), (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) var_2)) : (var_10))))))));
}
