/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91219
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
    var_13 &= ((/* implicit */long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_4) : (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) var_9))))));
    var_14 = ((/* implicit */short) ((-4908777692052237714LL) / (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_10)), (var_11)))) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_7)) / (((/* implicit */int) var_2)))))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2293002475603291548LL)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) (signed char)-23))))) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) var_2))))), (((((/* implicit */_Bool) var_5)) ? (arr_0 [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))));
                var_16 = ((/* implicit */short) ((((((/* implicit */int) var_12)) != (287707451))) ? (((1537930318) | (((/* implicit */int) min(((short)-20977), (((/* implicit */short) (unsigned char)165))))))) : (((/* implicit */int) ((((/* implicit */long long int) -287707437)) != (((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (var_3) : (((/* implicit */long long int) var_8)))))))));
            }
        } 
    } 
}
