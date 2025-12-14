/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87384
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
    var_12 = ((/* implicit */signed char) max(((~(((/* implicit */int) var_0)))), (((/* implicit */int) min((max((((/* implicit */short) var_7)), (var_8))), (((/* implicit */short) (unsigned char)159)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] = ((/* implicit */long long int) (((+(((/* implicit */int) var_2)))) != (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) (unsigned short)11522)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_3))))));
                var_13 = ((/* implicit */unsigned char) ((var_10) ^ (arr_2 [i_0] [i_1])));
                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) (signed char)-40)) : (((/* implicit */int) var_6))))) ? ((-(((/* implicit */int) arr_4 [i_0] [(short)8])))) : (arr_2 [i_0] [i_1])))) ? (((min((((/* implicit */long long int) -142758664)), (398091784919031688LL))) * (((/* implicit */long long int) ((((/* implicit */int) (signed char)11)) / (((/* implicit */int) (short)-17440))))))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), (arr_4 [i_0] [i_1]))))))))));
                arr_7 [i_0] [i_1] = ((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)5)) ? (arr_2 [i_0] [i_1]) : (((/* implicit */int) var_7)))), (((/* implicit */int) max((var_3), (var_3))))));
            }
        } 
    } 
}
