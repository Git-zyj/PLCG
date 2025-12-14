/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55780
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
    var_10 ^= ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)229))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned char)112)) >> (((((/* implicit */int) var_3)) - (65))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) -7242199824497859882LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) / (((arr_2 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7242199824497859882LL))))) : (((/* implicit */long long int) (-((~(((/* implicit */int) (_Bool)1))))))))))));
                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) max((((((/* implicit */_Bool) (-(-6287603507786570302LL)))) ? ((-(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) (unsigned short)6982)))), ((((!(((/* implicit */_Bool) (unsigned char)112)))) ? (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (unsigned char)44))))) : (2096871905))))))));
            }
        } 
    } 
}
