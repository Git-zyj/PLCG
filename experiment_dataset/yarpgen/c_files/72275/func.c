/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72275
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
    for (short i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) ((short) (signed char)0));
                var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_3 [i_0])), (arr_2 [i_1] [i_1] [i_0 + 1])))))))))));
                arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-11)), (max((((/* implicit */unsigned long long int) (signed char)18)), (6839332357954814533ULL)))))) ? (((/* implicit */int) ((max((((/* implicit */unsigned long long int) -2231661286982462719LL)), (0ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17)))))) : ((+(((/* implicit */int) (signed char)18))))));
                arr_5 [i_0] = ((/* implicit */signed char) max((arr_3 [i_0]), (arr_3 [(unsigned char)3])));
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) ((unsigned short) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (0LL)))));
}
