/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9817
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (unsigned short)65535);
                arr_7 [i_0] [i_0] = ((/* implicit */_Bool) ((9057476932615550240LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65511)))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) -3280004033223025965LL);
    var_20 = ((/* implicit */unsigned char) ((var_2) ? ((+(max((((/* implicit */long long int) var_4)), (3280004033223025965LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((var_1) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)38)))))))))));
}
