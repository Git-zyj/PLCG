/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93134
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_0 - 2] [i_1] = ((/* implicit */unsigned long long int) (short)-18938);
                arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((4294967295U), (((/* implicit */unsigned int) (_Bool)1))))) ? ((((~(((/* implicit */int) (unsigned char)189)))) / (((((/* implicit */int) (short)16279)) | (((/* implicit */int) (unsigned short)38911)))))) : (max((arr_2 [i_0 - 1] [i_0 + 3]), (((/* implicit */int) min((var_15), (var_13))))))));
                var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (((+(((/* implicit */int) var_13)))) >> (((min((((/* implicit */unsigned long long int) (short)3852)), (15081971370685205388ULL))) - (3830ULL))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))))))));
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2097151U) << (((/* implicit */int) ((((/* implicit */int) (short)511)) > (((/* implicit */int) (short)15127)))))))) ? (min((((/* implicit */unsigned long long int) (-(3649367821U)))), (max((((/* implicit */unsigned long long int) 3034213256U)), (var_4))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)249)) || (((/* implicit */_Bool) var_13))))), (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_12))))))));
    var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) (short)3331)) : (((/* implicit */int) (unsigned short)19984))))), (((var_9) >> (((((/* implicit */int) var_10)) - (12463))))))))));
    var_20 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (short)32758)) : (((/* implicit */int) (unsigned char)254))));
}
