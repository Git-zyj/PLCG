/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88028
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
    var_14 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9586)) ? (848361301) : (((/* implicit */int) (unsigned short)48740))))) ? (var_10) : (((/* implicit */int) ((unsigned char) var_8))))) == (((/* implicit */int) var_5))));
    var_15 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((130023424) / (((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (((((/* implicit */_Bool) 130023424)) ? (var_13) : (((/* implicit */long long int) -397597295))))))));
    var_16 = ((/* implicit */_Bool) var_6);
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_7)) ^ (((((min((((/* implicit */long long int) var_1)), (var_2))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) var_10)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29586))))) - (4149660643U)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        for (signed char i_1 = 4; i_1 < 13; i_1 += 3) 
        {
            {
                var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)122))) : (var_3)))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_1 - 4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 + 1])) ? (((/* implicit */int) arr_0 [i_0] [i_1 - 1])) : (((/* implicit */int) var_1))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */long long int) var_10)) : (((((/* implicit */_Bool) (-(arr_3 [i_1] [i_0])))) ? (((long long int) var_10)) : (((/* implicit */long long int) arr_3 [i_0] [i_1]))))));
                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 - 2] [i_1 - 4])), (arr_3 [i_1 - 1] [i_1 - 1])))) ? (((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (8065461115766333664ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) > (arr_3 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) != (arr_1 [i_0])))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
                {
                    for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            arr_9 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */int) (signed char)14);
                            var_21 = ((/* implicit */long long int) var_5);
                            var_22 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 8065461115766333664ULL)) ? (((/* implicit */long long int) max((((unsigned int) var_3)), (((/* implicit */unsigned int) (~(arr_5 [i_0] [i_1] [i_3] [i_1]))))))) : (-3669216302739351317LL)));
                            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) max((((((/* implicit */_Bool) 5377221904070334746LL)) ? (3669216302739351303LL) : (((/* implicit */long long int) 1481651325U)))), (5377221904070334746LL)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
