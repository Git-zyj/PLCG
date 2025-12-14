/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90557
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
    var_12 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) var_8))));
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (+(6140284440834127164ULL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3909063446U)));
                arr_7 [i_0] [i_1] = ((/* implicit */_Bool) ((min((((/* implicit */long long int) ((var_10) / (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) : (var_11))))) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)149)))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_4))))))) ^ (var_10)));
    var_15 = ((/* implicit */signed char) (-(min((((/* implicit */int) (signed char)123)), ((+(((/* implicit */int) (_Bool)1))))))));
    var_16 = ((/* implicit */signed char) ((int) min((((/* implicit */unsigned int) var_4)), (min((((/* implicit */unsigned int) (_Bool)1)), (var_5))))));
}
