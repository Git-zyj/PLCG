/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56766
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
    var_18 = ((/* implicit */unsigned short) (-(((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) / (((((/* implicit */_Bool) 4183344059U)) ? (var_1) : (8503695026799441117ULL)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_1] = ((/* implicit */short) min((((unsigned long long int) ((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58503)))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0]))) : (arr_1 [i_0]))))))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_8);
                var_19 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-29085)) | (((/* implicit */int) (short)32749)))) <= (((/* implicit */int) (_Bool)1))));
                arr_7 [i_0 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((unsigned short)7032), (((/* implicit */unsigned short) (_Bool)1))))) ? (min((4470459484789482325ULL), (2687214558893535161ULL))) : ((~((~(arr_0 [i_1])))))));
            }
        } 
    } 
}
