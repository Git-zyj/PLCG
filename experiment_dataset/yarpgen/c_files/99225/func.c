/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99225
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
    /* LoopNest 3 */
    for (long long int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 11; i_2 += 1) 
            {
                {
                    var_15 ^= ((/* implicit */int) (-(454763558U)));
                    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) max((max((54333815U), (((/* implicit */unsigned int) (signed char)-41)))), (max((((/* implicit */unsigned int) var_7)), (arr_6 [i_0 - 1]))))))));
                    var_17 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)43622))));
                    var_18 = ((/* implicit */unsigned short) (signed char)-41);
                    arr_8 [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) var_6)) * (((/* implicit */int) var_3))))), (max((((/* implicit */unsigned int) (signed char)-44)), (var_12))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) (signed char)-41))) ? ((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_0 - 1])))) : (((/* implicit */int) (signed char)-41)))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) 4240633482U)), (10ULL))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
}
