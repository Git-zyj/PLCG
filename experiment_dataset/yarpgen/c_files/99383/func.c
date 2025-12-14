/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99383
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
    var_18 *= ((/* implicit */unsigned int) max((((((((/* implicit */int) var_17)) > (((/* implicit */int) var_10)))) ? (var_16) : (3968503812841711014ULL))), (((((/* implicit */_Bool) var_6)) ? ((-(3968503812841711021ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3968503812841711021ULL)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (short)19928)))))))));
    var_19 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            {
                var_20 = ((long long int) (-(((/* implicit */int) arr_3 [i_0 - 3]))));
                arr_7 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_0 [i_0 - 2])))) ? (((((/* implicit */_Bool) (-(3968503812841711013ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned short)14])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_3 [i_0]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) * (var_16))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))))), ((unsigned short)4)))))));
                arr_8 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) (-(min((14478240260867840621ULL), (((/* implicit */unsigned long long int) max((var_2), (var_12))))))));
            }
        } 
    } 
}
