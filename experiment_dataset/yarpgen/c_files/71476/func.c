/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71476
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
    var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) -13LL))))))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 13; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (var_2) : (((/* implicit */int) arr_0 [i_0]))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) -2)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (_Bool)1)))) < (-2)))) : ((-(((/* implicit */int) ((signed char) var_5)))))));
                    arr_10 [i_0] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2 - 3] [i_0] [i_2 + 1] [i_2])) | (((/* implicit */int) arr_6 [i_2 - 1] [i_0] [i_2 + 2] [i_2])))) & (((((/* implicit */_Bool) arr_4 [i_0] [(short)2])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)118)) >= (((/* implicit */int) (unsigned char)255))))) : ((~(((/* implicit */int) (short)-16550))))))));
                }
            } 
        } 
    } 
    var_12 += ((/* implicit */unsigned char) min((((((4363843514712977836LL) ^ (((/* implicit */long long int) -13)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)249)) ? (var_2) : (((/* implicit */int) var_7)))) < ((~(((/* implicit */int) (unsigned short)0)))))))));
}
