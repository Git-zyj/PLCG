/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73897
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (0U))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_5)) + (min((((/* implicit */int) var_6)), (-867298799)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) - (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)61801))) : (var_4)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))) == (min((((/* implicit */unsigned int) var_13)), (0U)))))) * (((/* implicit */int) ((arr_0 [i_0]) == (((/* implicit */long long int) (~(4294967295U))))))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((var_1) << (((((/* implicit */int) arr_2 [i_0] [4LL])) - (83))))) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [(unsigned short)14]))))))));
    }
}
