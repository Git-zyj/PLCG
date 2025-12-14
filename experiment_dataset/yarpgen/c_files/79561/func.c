/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79561
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
    var_17 = ((/* implicit */unsigned short) (((~((~(-5847488790380997908LL))))) - (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) min((var_1), (var_14)))) ? (var_1) : (((var_14) / (((/* implicit */unsigned int) var_3))))))));
    var_19 = ((/* implicit */unsigned short) ((var_1) - (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [(unsigned short)7] = ((/* implicit */int) arr_2 [i_0 + 3] [i_0 + 3] [i_0]);
                arr_5 [i_0 + 3] [(unsigned short)1] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) < (min((arr_2 [i_1] [i_0] [i_0]), (((/* implicit */long long int) 2045538695)))))) ? (((((((/* implicit */_Bool) 134217472U)) ? (-6397803325119291396LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (((/* implicit */long long int) var_14)))) : (max((((/* implicit */long long int) arr_1 [i_0 + 3])), (8509811588583657720LL)))));
                var_20 = ((/* implicit */long long int) max((arr_0 [i_1]), ((-(max((var_14), (((/* implicit */unsigned int) (short)-32119))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (((_Bool)1) ? (var_12) : (((/* implicit */long long int) (+(var_3)))))))));
}
