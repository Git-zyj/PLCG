/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78326
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
    var_13 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */int) arr_1 [(signed char)12])) : (((/* implicit */int) arr_1 [12U])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-87))) : (arr_0 [i_0]))))));
                var_15 = ((/* implicit */long long int) 3979609276U);
                var_16 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (27ULL)))) ? (((/* implicit */int) ((arr_2 [i_1] [i_1 + 1] [i_1]) && (((/* implicit */_Bool) -960544050694951731LL))))) : (((/* implicit */int) var_10))))) ? (((((((/* implicit */_Bool) (signed char)-83)) && (((/* implicit */_Bool) (unsigned char)80)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 825048263U)) ? (((/* implicit */int) var_10)) : (arr_3 [i_0] [3LL] [i_1 + 1])))) : (arr_0 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 10U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))) : (arr_0 [i_1 + 1]))) > (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 1] [i_0]))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)6144)) ? (-3106543012011580245LL) : (((/* implicit */long long int) 3979609276U)))) > (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1 + 1] [i_1 + 1])) * (arr_3 [i_1 + 1] [i_1 + 1] [i_1 + 1]))))));
            }
        } 
    } 
}
