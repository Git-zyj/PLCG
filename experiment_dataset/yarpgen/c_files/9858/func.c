/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9858
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
    var_20 = ((/* implicit */long long int) var_19);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 9; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */unsigned long long int) ((_Bool) min((var_12), (((/* implicit */unsigned short) arr_3 [i_0])))));
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((int) (-(((/* implicit */int) arr_3 [i_0])))))) > (((((/* implicit */_Bool) ((long long int) var_12))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61188))) | (var_2))) : (((/* implicit */long long int) (-(((/* implicit */int) var_4)))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-10)) ? (2147483647) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)61188)) != (((/* implicit */int) (short)19968)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61212))) : (((long long int) max((((/* implicit */unsigned int) (unsigned short)61188)), (arr_0 [i_0]))))));
                var_23 -= ((/* implicit */short) min(((-(var_11))), (((14ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)5705)))))));
            }
        } 
    } 
}
