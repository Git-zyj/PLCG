/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97485
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_1] [i_0]) : (arr_1 [i_0] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)16))) : (0ULL)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) >= (min((var_0), (((/* implicit */unsigned int) (short)315))))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (arr_5 [i_0] [i_1]) : (arr_1 [i_0] [i_0])))));
                var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned char)68)) >> (((((/* implicit */int) (short)-1)) + (16))))))) ? (max((arr_1 [i_0] [(short)15]), (((/* implicit */unsigned int) ((unsigned char) var_16))))) : (min((arr_4 [i_0]), (arr_4 [i_0]))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) var_14);
    var_23 = max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_19))) * (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)58))) / (var_12)))))), ((+(((((/* implicit */_Bool) 2512934741U)) ? (297221095634802705ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16384))))))));
    var_24 -= (~(((((/* implicit */_Bool) 5ULL)) ? (var_11) : (((((/* implicit */unsigned int) ((/* implicit */int) var_14))) ^ (var_9))))));
}
