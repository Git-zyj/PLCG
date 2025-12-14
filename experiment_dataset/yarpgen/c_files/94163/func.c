/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94163
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
    var_17 = ((/* implicit */unsigned int) ((unsigned char) var_9));
    var_18 = ((/* implicit */long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            var_19 = ((/* implicit */unsigned short) ((unsigned long long int) arr_1 [(_Bool)1] [(_Bool)1]));
            var_20 += ((/* implicit */short) (((~(((/* implicit */int) arr_0 [i_0 + 4] [i_0 + 2])))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-126)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) (unsigned short)39830)) ? (((/* implicit */int) (unsigned short)52384)) : (((/* implicit */int) (unsigned short)31155))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_5 [i_0] [i_2]) >= (((/* implicit */int) (short)32256)))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_0])) && (((/* implicit */_Bool) arr_1 [i_0 - 2] [i_2])))))))) ? (((/* implicit */int) (unsigned short)42945)) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (-5115102214908981822LL)))) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1])) : (((((((/* implicit */int) var_4)) + (2147483647))) >> (((2347358593U) - (2347358590U))))))))))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (short)24163))));
            var_23 = arr_5 [i_0] [i_0];
        }
        var_24 = ((/* implicit */long long int) ((((arr_6 [i_0] [i_0]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) ((unsigned char) var_8))))) : (((/* implicit */int) (signed char)83))));
    }
    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 1) 
    {
        var_25 -= ((/* implicit */unsigned int) ((signed char) arr_6 [i_3] [i_3]));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3])) << (((/* implicit */int) (_Bool)1))));
        var_27 = ((/* implicit */unsigned short) max((var_27), (var_13)));
        var_28 = ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_3] [i_3])) / (var_9)))) ? (((/* implicit */int) arr_9 [i_3] [i_3])) : (((((/* implicit */int) arr_9 [i_3] [i_3])) + (((/* implicit */int) arr_9 [i_3] [i_3])))));
    }
}
