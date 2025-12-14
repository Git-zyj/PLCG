/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9286
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
    var_15 = ((/* implicit */_Bool) var_7);
    var_16 = ((/* implicit */_Bool) min((((var_11) << (((((/* implicit */int) (_Bool)1)) - (1))))), (((/* implicit */long long int) ((var_13) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((var_13) ? (8191U) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (_Bool)1)));
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_18 = (signed char)103;
            arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) var_4);
        }
        for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
        {
            var_19 -= ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2 + 1] [i_2 + 1])) ^ (((/* implicit */int) var_12))));
            var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-1052471284188664191LL)))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94)))));
            var_21 = ((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_8 [i_2] [i_0]))))));
            arr_9 [i_2] = (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_8 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_2 + 1]))))));
        }
        for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
        {
            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [11LL] [i_3]))) - (var_3))))));
            arr_13 [i_3] = var_12;
        }
    }
    for (unsigned short i_4 = 3; i_4 < 16; i_4 += 2) 
    {
        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_12 [i_4] [i_4] [i_4])), (var_7)))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_3))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4])))))) ? ((((-(4294959104U))) / (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) / (((/* implicit */int) var_10))))))) : (((/* implicit */unsigned int) (+((+(((/* implicit */int) (_Bool)0)))))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((long long int) (signed char)-4))));
        arr_16 [i_4] [i_4] = min((min((max((var_9), (((/* implicit */long long int) arr_10 [i_4] [i_4] [i_4])))), (((/* implicit */long long int) ((signed char) var_4))))), (max((((/* implicit */long long int) (~(((/* implicit */int) var_1))))), ((~(var_11))))));
    }
    var_25 = ((/* implicit */unsigned short) min((var_6), (((((((/* implicit */int) (_Bool)1)) >> (((4294959104U) - (4294959076U))))) >= (((/* implicit */int) max(((signed char)52), (var_12))))))));
    var_26 |= ((/* implicit */_Bool) ((var_14) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) (-(((/* implicit */int) var_5))))) : (((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) + (-4128487392074064433LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
}
