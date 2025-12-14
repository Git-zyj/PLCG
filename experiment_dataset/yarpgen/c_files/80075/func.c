/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80075
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
    var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (var_16))))) ? (((unsigned long long int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (signed char)21))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)19))))))))));
    var_18 = ((/* implicit */short) (-(((/* implicit */int) min(((unsigned short)0), (var_5))))));
    var_19 = ((/* implicit */short) var_14);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1856286866U)) - ((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1 + 4]))) : (var_16)))));
                    arr_7 [i_0] = ((/* implicit */_Bool) ((unsigned char) ((arr_4 [i_0] [i_1] [i_1 + 4]) & (arr_4 [i_0] [i_0] [i_1 + 2]))));
                }
            } 
        } 
    } 
}
