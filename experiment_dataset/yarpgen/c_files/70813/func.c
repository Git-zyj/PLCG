/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70813
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 2])), (var_8)))), (((((/* implicit */int) var_11)) * (((/* implicit */int) var_2))))));
                arr_7 [i_0] [i_0] = ((((((2147483647) ^ (((/* implicit */int) (unsigned char)24)))) << (((((arr_1 [i_1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) - (2871327103U))))) >> (((((/* implicit */int) (unsigned short)55947)) - (55934))));
                arr_8 [(signed char)2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 703320170U))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) || ((!(((/* implicit */_Bool) (unsigned short)42788))))))) : (((/* implicit */int) ((min((3728552491U), (((/* implicit */unsigned int) arr_5 [i_0] [i_0])))) < (((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [9ULL] [15]))))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_1)))))))), (((int) var_11))));
}
