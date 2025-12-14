/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94151
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94151 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94151
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (-7803407263598825416LL)))))));
        var_16 += ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0 + 1] [i_0])))) + ((+(((/* implicit */int) arr_0 [i_0 - 2] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 3) /* same iter space */
    {
        var_17 = (+((-(arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned char)210), ((unsigned char)46)))) ? (((long long int) arr_4 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_1]))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 16; i_2 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_18 = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned char)210));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 16; i_4 += 1) 
            {
                var_19 = ((int) arr_7 [i_4] [i_4]);
                var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_3] [i_3] [i_4])) | (((/* implicit */int) arr_10 [i_3] [i_3] [i_3]))));
                var_21 = ((/* implicit */_Bool) ((signed char) (+(((/* implicit */int) (unsigned short)65535)))));
            }
            arr_13 [i_2] [i_3] = ((/* implicit */unsigned char) ((unsigned int) 0));
        }
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_2])))))));
        arr_14 [i_2] [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65535))));
    }
    var_23 = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 777728428U)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_8) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)91))))))));
}
