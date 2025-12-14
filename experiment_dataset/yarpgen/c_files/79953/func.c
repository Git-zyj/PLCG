/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79953
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
    var_19 = ((/* implicit */short) min((((/* implicit */long long int) var_6)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) -1562507693)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    var_20 = ((/* implicit */unsigned long long int) (signed char)96);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((((/* implicit */int) var_9)) | (92807290)))))) / (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) - (var_11)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)0))))) : (min((arr_3 [i_0]), (((/* implicit */long long int) -1)))))))))));
                arr_4 [i_1] &= ((/* implicit */unsigned short) (~(arr_3 [i_0])));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max(((-(arr_3 [i_0 + 1]))), (((/* implicit */long long int) (~(4286578688U)))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) ((short) var_18)))) ? (((var_12) ? ((~(13416603616103529511ULL))) : (((((/* implicit */unsigned long long int) 22U)) ^ (var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_3))));
}
