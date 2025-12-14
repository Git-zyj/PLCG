/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99893
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
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) arr_3 [i_0] [i_0]);
                arr_7 [i_1] = ((/* implicit */signed char) ((_Bool) (+(((var_0) ^ (arr_3 [i_0] [i_1]))))));
                arr_8 [i_0] = ((/* implicit */unsigned char) min((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) var_8))));
                var_17 = (((!(((/* implicit */_Bool) arr_3 [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (~(((/* implicit */int) arr_0 [i_0]))))))) : (((((/* implicit */_Bool) 1014188739)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_6 [i_0]))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)1))))) & (max((((/* implicit */unsigned long long int) var_11)), (((var_10) >> (((var_15) + (784734154)))))))));
    var_19 = (!(((/* implicit */_Bool) var_5)));
    var_20 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_7)), (var_10)));
}
