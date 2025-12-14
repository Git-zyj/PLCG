/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58946
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
    var_20 = ((/* implicit */int) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */long long int) ((unsigned long long int) ((((((/* implicit */_Bool) var_14)) ? (1039681701528478318ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9986))))) == (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))));
                arr_6 [i_1] [i_1] = ((/* implicit */short) 524292611U);
                var_22 = ((/* implicit */int) max((((((/* implicit */_Bool) arr_4 [i_0])) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */unsigned long long int) var_18))));
                var_23 = ((/* implicit */signed char) (((+(((/* implicit */int) ((signed char) var_5))))) | (((/* implicit */int) var_9))));
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned short)55550), (((/* implicit */unsigned short) (_Bool)0))))) || (((/* implicit */_Bool) min((-2147483618), (((/* implicit */int) var_2)))))))) - ((-(min((-2147483619), (((/* implicit */int) arr_1 [i_1]))))))));
            }
        } 
    } 
}
