/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61061
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
    var_15 = ((/* implicit */_Bool) max(((+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)102))) == (4294967295U)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)57275)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))) ? (((((/* implicit */int) var_1)) - (var_9))) : (((/* implicit */int) (unsigned char)127))))));
    var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (0)))) ? (((/* implicit */int) var_12)) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)0)))))) : (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_0] [i_0] [0LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-28479)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_6 [i_2] [i_2 + 1] [i_2 - 1] [i_2 + 2])) : (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_2)))))) & (((/* implicit */int) (((~(4294967273U))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)65534))))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65520)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-43))) | (4294967295U))))))));
                    arr_10 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_8)) << (((33554368) - (33554362))))) : (((/* implicit */int) (unsigned char)15))))) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_1] [i_2])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-11478))) <= (3325239586830543950LL)))) : (((/* implicit */int) (unsigned char)142)))))));
                }
            } 
        } 
    } 
}
