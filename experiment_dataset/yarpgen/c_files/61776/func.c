/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61776
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39436)) ? (((/* implicit */int) (unsigned short)26099)) : (((/* implicit */int) (unsigned short)39436))))) ? ((+((-2147483647 - 1)))) : (((/* implicit */int) (unsigned short)26116)))) < (((/* implicit */int) (unsigned short)26099))));
    var_13 = ((/* implicit */unsigned int) (signed char)34);
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_8 [i_0] [i_1] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), ((short)11355)))) ? (((/* implicit */unsigned long long int) ((-1952247085) % (((/* implicit */int) (unsigned short)48177))))) : (((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) << (((((/* implicit */int) (unsigned char)96)) - (88)))))))) || (((/* implicit */_Bool) ((((var_1) << (((var_3) - (3217129521U))))) >> (((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_5 [i_0]))))) - (16))))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_9), ((short)11355)))) ? (((/* implicit */unsigned long long int) ((-1952247085) % (((/* implicit */int) (unsigned short)48177))))) : (((arr_4 [i_0 + 1] [i_0 + 1] [i_0]) << (((((/* implicit */int) (unsigned char)96)) - (88)))))))) || (((/* implicit */_Bool) ((((var_1) << (((var_3) - (3217129521U))))) >> (((((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) arr_5 [i_0]))))) - (16))) - (12107)))))))));
                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)192))))) : (((var_2) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        var_15 = ((/* implicit */signed char) min((((((/* implicit */_Bool) min((7239954991843003010ULL), (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) arr_10 [i_2])) : (((((/* implicit */_Bool) (unsigned char)64)) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (short)-1)))))), (((arr_10 [i_2]) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) 5880366058296435345LL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)127)) / (((/* implicit */int) var_8))))) ? (29360128U) : (max((arr_9 [i_2] [i_2]), (arr_9 [i_2] [i_2])))))) ? (((/* implicit */int) var_0)) : ((+(((((/* implicit */int) var_0)) * (((/* implicit */int) var_4))))))));
        arr_12 [i_2] = ((/* implicit */unsigned char) var_4);
    }
}
