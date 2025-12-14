/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57029
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
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((min((arr_2 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1]))) > (min((min((((/* implicit */unsigned long long int) (unsigned short)8192)), (arr_3 [i_0] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1]))))));
                var_13 = ((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0]))));
                var_14 = ((/* implicit */int) ((((unsigned long long int) ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_3 [i_0] [i_0] [i_0])))) ^ (((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0] [i_1]))))) ? ((~(arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_2 [i_0] [i_0]) < (18446744073709551601ULL)))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(2669387979U)))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (18446744073709551597ULL)))))) ? ((((!(var_6))) ? (((int) var_8)) : (((((/* implicit */_Bool) -1083088600)) ? (var_0) : (((/* implicit */int) var_3)))))) : (((/* implicit */int) var_2))));
}
