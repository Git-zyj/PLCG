/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9462
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
    for (long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 24; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [4])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_2))))), ((+(var_5))))), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [16])))))))));
                arr_4 [i_1] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_2 [i_1] [i_0] [i_1])) : (((/* implicit */int) (_Bool)1))))) : (var_1)))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? ((-(-640401932076575495LL))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_1] [i_0] [i_1 - 1]))))))) : (((/* implicit */long long int) (-(((/* implicit */int) max((arr_2 [i_1] [i_0] [i_1 - 1]), (arr_2 [i_1] [i_0 + 3] [i_1 + 1]))))))));
                var_13 += ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), (arr_0 [i_1])))), (arr_1 [i_1]))))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_3)), (((max((((/* implicit */unsigned long long int) var_8)), (var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))))));
}
