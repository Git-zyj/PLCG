/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56727
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
    var_13 = ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) var_6))) & (-4475976581048831451LL))) < (var_1))))) : (((((/* implicit */_Bool) 12717620061964336969ULL)) ? (12717620061964336969ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (-(((((/* implicit */int) ((arr_2 [i_0] [i_1]) != (((/* implicit */long long int) ((/* implicit */int) (signed char)-113)))))) ^ ((~(((/* implicit */int) (_Bool)1)))))))))));
                var_15 = ((/* implicit */short) arr_4 [i_0] [i_1]);
                arr_6 [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((((/* implicit */_Bool) -357520724)) ? (((/* implicit */int) (unsigned short)7405)) : (((arr_5 [i_0] [i_1] [i_1]) ^ (((/* implicit */int) (signed char)67)))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)1)) ? (var_10) : (((/* implicit */int) var_6))))))));
                arr_7 [i_1] [i_0] = ((/* implicit */long long int) (_Bool)0);
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(min((var_10), (((/* implicit */int) var_6)))))))));
    var_17 += ((/* implicit */long long int) var_8);
    var_18 = ((((((var_2) & (((/* implicit */unsigned long long int) var_10)))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_1)))))) != (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_8)), ((~(var_1)))))));
}
