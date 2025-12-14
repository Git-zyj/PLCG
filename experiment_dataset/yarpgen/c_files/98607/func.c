/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98607
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_5), (((var_5) >> (((8507740973577388275LL) - (8507740973577388260LL)))))))) && (((/* implicit */_Bool) (unsigned char)88))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (unsigned char i_2 = 3; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_7 [(unsigned short)14] [i_2] [i_1 + 1] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((502492357U), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49494)) | (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) : (arr_0 [i_0 - 3]))) >> (((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_0 + 2])))) - (40173)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((502492357U), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)49494)) | (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) : (arr_0 [i_0 - 3]))) >> (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_6 [i_0] [i_2] [i_0 + 2])) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_0 + 2])))) - (40173))) + (26659))))));
                    var_15 = ((/* implicit */unsigned long long int) ((max((min((((/* implicit */long long int) var_3)), (arr_0 [(short)0]))), (((/* implicit */long long int) ((short) var_10))))) + (((/* implicit */long long int) max((((/* implicit */int) arr_6 [i_1 - 2] [i_2] [i_1 - 1])), (max((arr_4 [i_0] [i_0] [i_2]), (((/* implicit */int) arr_1 [i_0])))))))));
                    arr_8 [i_0] [i_2] = ((/* implicit */unsigned long long int) var_0);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */unsigned long long int) min((((var_12) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)44))) : (511LL))), (((/* implicit */long long int) (short)-20776))));
    var_17 = ((/* implicit */long long int) var_6);
}
