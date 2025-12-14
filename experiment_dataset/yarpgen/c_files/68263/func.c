/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68263
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
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned short)48461)) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))));
                var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1] [i_0 + 1])))) >> ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1]))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((min((var_4), (((/* implicit */long long int) arr_3 [i_0 - 1] [i_0] [i_1])))) / (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)82)) ? (arr_3 [(_Bool)1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32762)) - (((/* implicit */int) (unsigned short)33825))))) ? (((/* implicit */int) (short)-32763)) : (((/* implicit */int) arr_2 [i_0] [i_0] [i_1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) 584076837);
}
