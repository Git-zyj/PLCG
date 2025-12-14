/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71985
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */long long int) ((834130938) + (((/* implicit */int) (signed char)54))))) : (var_9)));
                var_11 = ((/* implicit */unsigned long long int) ((((min((((/* implicit */long long int) var_6)), ((-(var_9))))) + (9223372036854775807LL))) << (((((/* implicit */int) arr_5 [i_0] [i_0])) - (31341)))));
                arr_6 [i_0] = ((/* implicit */signed char) min((((/* implicit */int) var_6)), (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 1864382027U)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (short)(-32767 - 1)))))))));
                var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) min((arr_2 [i_1] [(unsigned short)17] [i_0]), (((/* implicit */short) arr_1 [i_1] [i_0]))))) ^ (((/* implicit */int) ((unsigned short) var_1)))))), (((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65523))) : (3552633250U))))))));
                var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (var_9)))) ? (((/* implicit */long long int) max((0U), (((/* implicit */unsigned int) (short)-32762))))) : (arr_4 [i_1] [i_0])));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) ((((/* implicit */long long int) ((var_8) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)))) > (((((/* implicit */_Bool) (unsigned short)65532)) ? (-7634828002052523582LL) : (((/* implicit */long long int) 4294967286U))))));
    var_15 = ((/* implicit */short) var_4);
}
