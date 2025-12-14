/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6977
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
    var_16 = ((/* implicit */int) (_Bool)1);
    var_17 -= ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                arr_8 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(arr_6 [i_1] [i_1] [i_0])))) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)-86)), (arr_3 [(unsigned short)4])))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) | (((/* implicit */int) arr_1 [i_1] [i_0]))))) ? (((/* implicit */int) arr_5 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 1])))) : (((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned char) var_15)), ((unsigned char)169)))))));
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36797)) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned long long int) var_12))))) ? (min((((var_6) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((arr_2 [i_0]), (((/* implicit */unsigned long long int) var_11)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1134)))));
            }
        } 
    } 
    var_19 |= ((unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (var_6) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (var_9) : (((/* implicit */unsigned int) 1956888979)))))));
    var_20 += ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (unsigned char)192)) < (((/* implicit */int) var_1))))), ((+(((/* implicit */int) (short)-7595))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4957))) : (4294967295U)))) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1))))))));
}
