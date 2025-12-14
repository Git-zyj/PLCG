/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84267
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84267 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84267
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
    var_17 = ((/* implicit */unsigned char) var_11);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) arr_4 [i_0]))))), (min((13964432183532918099ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))), (((/* implicit */unsigned long long int) min((max((3072), (((/* implicit */int) arr_1 [i_1])))), (((/* implicit */int) max(((unsigned char)0), ((unsigned char)39)))))))));
                arr_6 [3ULL] = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1]);
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_1])) > (((/* implicit */int) arr_4 [i_1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : (((/* implicit */int) ((_Bool) arr_4 [i_1]))))))));
            }
        } 
    } 
    var_20 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) ((4294967283U) <= (702494658U)))) : ((~(((/* implicit */int) (unsigned short)0))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) ^ (((/* implicit */int) (unsigned char)2))))) ? (var_14) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_12))))))));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) 3592472637U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (signed char)74))))), (((var_15) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_3)))))));
    var_22 = ((/* implicit */unsigned long long int) (unsigned char)12);
}
