/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81684
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
    var_11 = ((/* implicit */unsigned short) max((var_5), (((/* implicit */unsigned long long int) var_9))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & ((+(((/* implicit */int) (signed char)123))))))), (((((/* implicit */_Bool) -6124411739947597075LL)) ? (6124411739947597074LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0] [i_0])), (arr_1 [i_0])))), (max((var_6), (((/* implicit */int) (_Bool)1))))))), (max((max((((/* implicit */long long int) (_Bool)1)), (6124411739947597076LL))), (((/* implicit */long long int) var_8))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) (unsigned char)158)), (9223372036854775781LL)))));
        arr_6 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((((4294967274U) << (((((/* implicit */int) (unsigned char)115)) - (89))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)141)))))))));
    }
}
