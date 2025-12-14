/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89603
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
    var_17 &= min((((/* implicit */int) var_16)), (max((var_0), (var_4))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)43538)), (3307409993735607031ULL))))))) >> (((1358183426307594060LL) - (1358183426307594033LL)))));
                arr_6 [i_1] [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) min((3307409993735607031ULL), (var_15))))), (min((((((/* implicit */_Bool) 9223372036854775807LL)) ? (3307409993735607009ULL) : (var_15))), (((/* implicit */unsigned long long int) min((0), (((/* implicit */int) var_16)))))))));
                arr_7 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) min((1358183426307594075LL), (((/* implicit */long long int) -1601719768))))) * (min((var_7), (((/* implicit */unsigned long long int) -1))))))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) (short)32767))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) 
                {
                    arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(var_8))), (((/* implicit */unsigned long long int) var_1))))) ? (15139334079973944591ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1 - 1])))));
                    var_19 = ((/* implicit */int) (unsigned char)139);
                }
                arr_13 [i_1] = ((/* implicit */long long int) ((var_11) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) 766981443)) ? (2064587291303082547ULL) : (var_15)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)139))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))))));
            }
        } 
    } 
}
