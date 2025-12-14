/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55295
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55295 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55295
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)55367)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((14LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (min((((/* implicit */long long int) 14)), (-3435497247472643794LL)))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_1])) / (((/* implicit */int) (short)19129))))) ? (((/* implicit */int) ((2147483623) < (((/* implicit */int) var_2))))) : (((((/* implicit */int) var_0)) >> (((arr_2 [i_0] [i_0] [i_0]) - (3466103409U)))))))) ? ((+(((((/* implicit */_Bool) 2147483623)) ? (((/* implicit */int) var_1)) : (1))))) : (((/* implicit */int) (short)20669))));
                var_14 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (unsigned short)4)), (min((var_12), (((/* implicit */unsigned long long int) (short)8994)))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) ((unsigned char) arr_0 [i_0]))) != (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_8)))))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) | (3758645588U)))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) - (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : ((-(var_12))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
            }
        } 
    } 
}
