/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83536
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
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_9)) + (2147483647))) << (((((/* implicit */int) (short)821)) >> (((var_4) - (300979280)))))))), (min((((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) 1384439626)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-112)))))))));
                /* LoopSeq 1 */
                for (unsigned short i_2 = 2; i_2 < 22; i_2 += 2) 
                {
                    var_11 = ((/* implicit */unsigned short) arr_2 [i_0]);
                    var_12 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) ((unsigned short) (signed char)-11))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)26523))))))));
                }
                var_13 -= ((/* implicit */unsigned char) min((min((((unsigned long long int) 0ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) (short)-670))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)16])) : (((/* implicit */int) (signed char)88)))), (((((/* implicit */int) (unsigned char)227)) >> (((((/* implicit */int) (short)32767)) - (32757))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) var_0);
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)45475)) : (((/* implicit */int) var_6)))), (max((var_4), (((/* implicit */int) var_2))))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((short) var_5)))));
    var_16 += var_0;
    var_17 = ((/* implicit */unsigned short) var_2);
}
