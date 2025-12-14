/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56492
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
    var_10 = ((/* implicit */_Bool) min((var_10), (var_9)));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */signed char) max((((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_3)))))), (((/* implicit */int) min((max((var_7), (((/* implicit */unsigned char) arr_5 [14] [(unsigned short)15])))), (var_2))))))) : (((/* implicit */signed char) max((((((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned short) (_Bool)1))))) << (((((((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) var_3)))) + (19))) - (9))))), (((/* implicit */int) min((max((var_7), (((/* implicit */unsigned char) arr_5 [14] [(unsigned short)15])))), (var_2)))))));
                arr_7 [i_1] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) -4864968116653066414LL)) ? (((/* implicit */unsigned long long int) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)20050)) : (((/* implicit */int) (_Bool)1))))))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) / (16121664135860969031ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) (_Bool)1)))))))));
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_5 [9ULL] [i_0])) : (((/* implicit */int) (unsigned short)65533))))) ? (((/* implicit */int) arr_4 [(_Bool)1])) : (((((/* implicit */int) var_3)) % (((/* implicit */int) arr_4 [(_Bool)1]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)3584)) : (((/* implicit */int) arr_4 [4LL]))))))))) : (max((((/* implicit */unsigned int) arr_5 [i_0] [i_0])), (((1142912819U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [(_Bool)1]))))))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned long long int) var_9);
}
