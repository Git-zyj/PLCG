/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55023
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
    var_10 = (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)69)))) : (((/* implicit */int) ((((/* implicit */int) var_4)) == (((/* implicit */int) var_7))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 += ((/* implicit */int) ((short) min((605374283), (((/* implicit */int) arr_1 [i_0] [i_1])))));
                var_12 = ((/* implicit */int) arr_2 [i_0]);
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2111794308786034373ULL)))) ? (((/* implicit */int) arr_2 [(short)10])) : ((+(((((/* implicit */_Bool) (unsigned short)21802)) ? (-1938314643) : (((/* implicit */int) (unsigned short)43747)))))))))));
            }
        } 
    } 
}
