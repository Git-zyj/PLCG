/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86074
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 19; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) (unsigned char)105)) ? (68719476735ULL) : (((/* implicit */unsigned long long int) 9223372036854775807LL)))), (((16872334175803585084ULL) << (((2147483647LL) - (2147483611LL)))))))));
                var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_5 [i_1 + 1] [i_1 + 1] [i_1 - 2])))) ? (((/* implicit */unsigned long long int) (~(4278190080U)))) : (max((13601928408079279626ULL), (((/* implicit */unsigned long long int) arr_5 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 2) 
                {
                    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_2]))))) ? (((var_2) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))) : (((/* implicit */int) arr_7 [i_2]))));
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)-104)) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [i_1]))) : (arr_0 [i_1 + 2]))) / (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))));
                }
                var_23 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2]))))));
            }
        } 
    } 
    var_24 = ((/* implicit */int) (-(max((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((/* implicit */int) var_11))))), (((((/* implicit */_Bool) 2147483647)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)22)))))))));
    var_25 = ((/* implicit */signed char) 14562484275542984331ULL);
}
