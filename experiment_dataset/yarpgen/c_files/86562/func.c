/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86562
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
    var_12 = ((/* implicit */unsigned short) -1);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) 
        {
            {
                var_13 = ((/* implicit */unsigned int) ((var_0) ? (5613100611354391863LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) & (3418012994U)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) > (arr_1 [i_0])))) : (((/* implicit */int) arr_2 [i_0] [i_1])))))));
                var_14 ^= ((/* implicit */signed char) arr_0 [i_0]);
                arr_7 [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)0))))) <= (((var_2) | (((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1])))))))));
                var_15 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)112))));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) max((arr_1 [i_1]), ((-(((((/* implicit */_Bool) arr_5 [(unsigned char)4] [(unsigned char)4] [(unsigned char)4])) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(unsigned char)8] [i_1 + 4]))))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-117))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_4))))) : ((+(var_2)))))));
}
