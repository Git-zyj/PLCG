/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59128
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (long long int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_1)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)20366)) : (((/* implicit */int) (unsigned char)170)))) : (((2147483624) >> (((5033520524904652703LL) - (5033520524904652685LL)))))))) : (max((var_5), (((/* implicit */long long int) 3185527055U))))));
                    arr_7 [i_0 - 1] [i_0 - 1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) 3128779104U)), (4191795847546642267LL)));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 2374508914U)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_4))), (((/* implicit */long long int) var_0))))) ? (max((1109440225U), (((/* implicit */unsigned int) (short)-10942)))) : (((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (1890729326U)))));
}
