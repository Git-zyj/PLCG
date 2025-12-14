/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87953
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_1])) : (((((/* implicit */_Bool) 957610467795730408ULL)) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned char)255))))));
                arr_4 [i_1] [i_0] [i_1] = ((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) arr_2 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_7)))) & (((((/* implicit */int) var_3)) | (((/* implicit */int) arr_3 [i_1]))))))));
                var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((/* implicit */_Bool) -2477986764232149135LL)) && (((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_8))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) min((arr_0 [i_0] [i_1]), (((/* implicit */unsigned short) (signed char)114))))) : (((((/* implicit */int) arr_0 [i_1] [i_1])) + (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) var_7);
}
