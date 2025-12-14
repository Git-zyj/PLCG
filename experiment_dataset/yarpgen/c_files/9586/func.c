/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9586
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) max((((((/* implicit */int) var_5)) >> (((arr_1 [i_0]) - (1468382148U))))), (((/* implicit */int) (short)14358))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0] [i_0]))))), (arr_1 [i_0])))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) var_5))))), (((unsigned long long int) min((arr_1 [11]), (((/* implicit */unsigned int) (unsigned short)60981))))))))));
                    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (!(((/* implicit */_Bool) max((4165583060274447354LL), (((/* implicit */long long int) 122880))))))))));
                }
            } 
        } 
    }
    var_19 = ((/* implicit */unsigned long long int) min(((-(((int) var_0)))), (((((/* implicit */int) ((9946327501630082042ULL) <= (((/* implicit */unsigned long long int) -4165583060274447354LL))))) + (((/* implicit */int) var_10))))));
}
