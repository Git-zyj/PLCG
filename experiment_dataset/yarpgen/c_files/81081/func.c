/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81081
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
    var_10 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 435215463U)) && (((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) 3859751833U)))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_8))))), (min((((/* implicit */unsigned long long int) var_4)), (var_8)))))));
    var_11 *= ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_1))))), (((435215463U) & (435215472U))))), (((/* implicit */unsigned int) ((unsigned char) ((435215451U) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_12 += (~(((((/* implicit */int) arr_4 [i_0 - 3])) - (((/* implicit */int) arr_4 [i_0 - 3])))));
                var_13 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 435215436U)) ? (((/* implicit */int) arr_3 [(short)10] [i_1])) : (((/* implicit */int) arr_4 [i_0]))))) || (((((/* implicit */long long int) 3859751824U)) <= (arr_1 [i_1])))))), (3859751844U)));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_7);
}
