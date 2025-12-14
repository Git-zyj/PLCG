/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63029
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
    var_11 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((var_5), (25)))) ? (((((/* implicit */unsigned long long int) var_10)) * (11350169187491192008ULL))) : (((/* implicit */unsigned long long int) ((var_6) & (var_6)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) ? (min((((/* implicit */unsigned long long int) var_5)), (var_7))) : (((/* implicit */unsigned long long int) (+(var_6))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 16; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(8589934591ULL)));
                arr_6 [i_0 + 1] [i_1 - 2] [i_0] = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-1)) * (-46)))), (((((/* implicit */_Bool) arr_2 [i_0])) ? (11280066087080011088ULL) : (((/* implicit */unsigned long long int) arr_0 [i_0])))))) != (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) arr_4 [i_1] [i_1 - 3])))), (((((/* implicit */_Bool) (short)-24744)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-10413)))))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned int i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        var_12 += ((/* implicit */unsigned int) (-(((/* implicit */int) (short)22423))));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_8 [i_2] [i_2 - 2])) <= (((/* implicit */int) arr_7 [i_2] [(_Bool)1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_7 [i_2] [12U])), ((short)-20814))))) : (((((/* implicit */_Bool) 198897881U)) ? (var_4) : (((/* implicit */unsigned int) var_5))))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_10 [i_2 - 2] [i_2])) >= (((/* implicit */int) (_Bool)1)))))) + (max((((/* implicit */unsigned long long int) var_1)), (13138161361115382466ULL)))))));
    }
    var_14 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (short)-10409)) : (((/* implicit */int) (_Bool)1))));
}
