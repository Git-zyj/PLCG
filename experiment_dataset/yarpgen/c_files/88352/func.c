/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88352
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
    var_19 ^= ((/* implicit */signed char) min(((+(((/* implicit */int) (signed char)-38)))), (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */signed char) min((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), (max((((/* implicit */signed char) var_15)), (arr_0 [i_1])))))), (max((max((((/* implicit */unsigned short) arr_3 [i_1] [i_0])), (arr_1 [7ULL] [(_Bool)1]))), (((/* implicit */unsigned short) ((4294967295U) != (8U))))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (-(35184372088768LL)));
                arr_7 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) >= (max((278089778687059690ULL), (((/* implicit */unsigned long long int) (unsigned short)18660)))))))) != (4294967288U)));
            }
        } 
    } 
}
