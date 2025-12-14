/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75180
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
    var_11 = ((/* implicit */unsigned int) min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 134215680U)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_7))), (((/* implicit */long long int) ((short) var_3)))))) ? (max((((/* implicit */unsigned long long int) var_7)), (min((var_5), (((/* implicit */unsigned long long int) 1704090886U)))))) : (var_5))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_9))) || ((((-(2781545828U))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-66)))))))));
                var_13 = ((/* implicit */unsigned int) min((((/* implicit */int) max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))), (((((/* implicit */int) arr_3 [i_0 + 2])) - (((/* implicit */int) arr_3 [i_0 + 1]))))));
                var_14 &= ((/* implicit */int) ((short) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)79))))));
                var_15 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_4 [3LL] [i_1]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)125)) * (((/* implicit */int) (_Bool)0))))))), (((/* implicit */long long int) ((((/* implicit */int) var_10)) * (((/* implicit */int) arr_3 [i_0 + 1])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) ((signed char) var_0)))) || (((/* implicit */_Bool) ((11063265441101432325ULL) * (((/* implicit */unsigned long long int) 0U)))))));
}
