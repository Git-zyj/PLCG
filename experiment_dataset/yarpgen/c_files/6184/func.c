/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6184
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
    var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_8))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_1] &= ((/* implicit */signed char) arr_1 [i_0]);
                arr_6 [i_0] [i_1 - 1] [i_1 - 1] &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2065314891681624557LL)) - (((arr_2 [i_0] [i_0] [i_1 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_12), (var_5))))) : (max((246163805744006141ULL), (((/* implicit */unsigned long long int) var_5))))))));
                var_14 += max((min((((/* implicit */int) arr_2 [i_1 - 1] [i_1 - 1] [i_1 - 1])), ((~(((/* implicit */int) var_12)))))), (max((((/* implicit */int) ((387174111U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_1])))))), (((((/* implicit */_Bool) arr_4 [i_1] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))))));
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (arr_4 [i_1 - 1] [i_1 - 1])))) || (((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) arr_0 [i_1 - 1]))))))))));
            }
        } 
    } 
    var_16 &= ((/* implicit */short) ((((/* implicit */_Bool) max((var_7), (((var_4) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))))) ? (min((((((/* implicit */_Bool) var_9)) ? (246163805744006137ULL) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_7))));
    var_17 &= ((/* implicit */unsigned long long int) var_7);
    var_18 &= ((((/* implicit */_Bool) ((var_8) ? (((/* implicit */long long int) (-(((/* implicit */int) var_2))))) : ((~(var_11)))))) ? (((((((/* implicit */_Bool) 18200580267965545454ULL)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))) : (((/* implicit */long long int) ((/* implicit */int) var_8))));
}
