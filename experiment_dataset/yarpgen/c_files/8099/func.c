/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8099
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) 317356619317953565LL))))), (((var_11) ? (3839570513U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)254)))))))) ? ((((~(((/* implicit */int) (unsigned short)261)))) | ((-(var_0))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4))))))))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65288))) + (var_15)))))) ? (((((/* implicit */long long int) (~(var_0)))) + (317356619317953564LL))) : (min(((+(var_12))), (((/* implicit */long long int) var_2))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) ((arr_3 [i_0] [i_1 + 2] [i_1]) ? (((/* implicit */int) arr_0 [i_0] [i_1 + 4])) : (((((/* implicit */int) arr_3 [i_0] [i_1 + 3] [8U])) ^ (((/* implicit */int) arr_0 [i_0] [i_1 - 1]))))));
                var_20 = arr_3 [10U] [10U] [i_1 - 1];
                var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65275)) ? (((((((/* implicit */long long int) 536868864U)) + (arr_1 [i_0]))) % ((~(-3233249298725194295LL))))) : (((((/* implicit */_Bool) min((arr_1 [(_Bool)1]), (((/* implicit */long long int) arr_2 [2U]))))) ? ((-(9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_1])) / (((/* implicit */int) (short)4088)))))))));
                var_22 ^= ((/* implicit */unsigned int) arr_1 [(_Bool)1]);
                var_23 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) ((((/* implicit */_Bool) 2060342763)) ? (-2933279693470304830LL) : (317356619317953565LL))))) % (((/* implicit */int) min((var_4), ((short)4088))))));
            }
        } 
    } 
}
