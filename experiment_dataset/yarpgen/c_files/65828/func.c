/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65828
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
    var_15 = ((/* implicit */_Bool) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * (((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_6)))))))));
    var_16 = ((/* implicit */short) max(((-(((((/* implicit */int) var_6)) / (((/* implicit */int) var_4)))))), (((/* implicit */int) (!(((/* implicit */_Bool) min(((short)21816), ((short)-18644)))))))));
    var_17 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)172)))) & (((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (signed char)-110)) > (((/* implicit */int) (short)12568))))) >= ((~(((/* implicit */int) var_6)))))))));
    var_18 = ((/* implicit */unsigned char) ((min((((/* implicit */int) min((var_11), ((unsigned char)239)))), ((-(((/* implicit */int) (unsigned char)84)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)13)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_7 [6U] [i_1] = ((/* implicit */unsigned char) (-(4294967295U)));
                arr_8 [i_0] = ((/* implicit */unsigned int) ((((((min((((/* implicit */int) (signed char)-62)), (var_0))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_3 [i_0]))))))) - (((/* implicit */int) ((max((((/* implicit */unsigned long long int) (short)12568)), (16765511304055804037ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_0] [i_1])) ^ (((/* implicit */int) (short)10865))))))))));
            }
        } 
    } 
}
