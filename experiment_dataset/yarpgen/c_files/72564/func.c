/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72564
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-18)))))) / ((-(((unsigned int) 17532664503065729284ULL))))));
                arr_7 [i_0] = ((/* implicit */unsigned short) ((arr_5 [i_0]) | (((/* implicit */long long int) ((/* implicit */int) max((var_7), (((/* implicit */short) arr_1 [i_0] [i_0]))))))));
                var_19 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((int) (short)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) : (((/* implicit */int) ((unsigned char) var_3))))) >= (((int) (+(arr_5 [(unsigned short)2]))))));
                var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) ((unsigned char) var_18)))) < (((int) (~(((/* implicit */int) (short)20602))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (signed char)124))))))));
}
