/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76153
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (var_7))))))) : (((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)12288))))) ? (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (8670201925051279243ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))), (((/* implicit */unsigned long long int) max(((short)-9877), (((/* implicit */short) (unsigned char)224))))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_3 [i_0])), (-808834865761366953LL))) * (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                arr_5 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((int) (-(((/* implicit */int) var_5))))) : ((-(((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11))))), (((var_4) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_14)))))));
    var_18 = ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) (short)-31628)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (min((var_3), (((/* implicit */long long int) (_Bool)1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-18293)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (2147483641)))));
}
