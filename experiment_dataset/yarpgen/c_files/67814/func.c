/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67814
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_8 [i_0] [i_0] &= ((/* implicit */unsigned int) max((((/* implicit */long long int) (-(3112891284U)))), (((((/* implicit */_Bool) 13614717832191718114ULL)) ? (((/* implicit */long long int) ((/* implicit */int) ((3112891303U) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))))))) : (4380866641920LL)))));
                arr_9 [i_1] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((unsigned int) (unsigned short)57506))), (max((((((/* implicit */_Bool) arr_7 [i_0] [i_1])) ? (var_6) : (((/* implicit */long long int) 1182076011U)))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (2146189309))))))));
                var_11 = ((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */int) var_2))))) - (((3112891284U) - (3788789404U))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0 - 1]))))) == (((((/* implicit */_Bool) 3112891301U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
            }
        } 
    } 
    var_12 |= ((/* implicit */unsigned int) (unsigned short)0);
}
