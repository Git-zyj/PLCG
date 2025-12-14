/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99032
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max(((signed char)-12), ((signed char)63)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)11))) != (18446744073709551615ULL)))) : (((/* implicit */int) arr_6 [i_0] [i_1]))))) ? (((((/* implicit */int) (signed char)-11)) ^ (((/* implicit */int) arr_1 [(unsigned char)14])))) : (((((/* implicit */int) max(((unsigned char)14), (((/* implicit */unsigned char) arr_7 [i_0] [(unsigned char)5] [i_2]))))) / (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_7 [i_2] [i_1] [i_0])) : (((/* implicit */int) var_6))))))));
                    var_12 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_0])) ? (((/* implicit */int) var_6)) : ((~(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)40)), ((unsigned char)255))))))));
                    var_13 = ((/* implicit */signed char) ((((/* implicit */int) max((arr_9 [i_0] [i_1] [i_0] [i_0]), (((/* implicit */short) arr_7 [i_2] [(short)13] [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)48)))))));
                }
            } 
        } 
    } 
    var_14 = (+(var_1));
    var_15 = var_8;
    var_16 = ((/* implicit */unsigned char) min(((signed char)-69), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)7))))) && (((/* implicit */_Bool) max(((unsigned char)165), (((/* implicit */unsigned char) (signed char)-11))))))))));
}
