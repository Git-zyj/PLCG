/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70957
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
    var_18 = ((/* implicit */unsigned short) 898360862U);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned int) (unsigned char)15);
                var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) (signed char)-94)) ? ((-(((((/* implicit */_Bool) (short)-24776)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (short)-16)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)88)) & (((/* implicit */int) (unsigned short)19523))))) ? ((~(((/* implicit */int) (signed char)79)))) : (((/* implicit */int) (unsigned char)185)))))))));
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((898360849U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)240)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60011))) : (((((/* implicit */long long int) 3396606444U)) & (1090715534753792LL)))))) ? (((((((/* implicit */_Bool) (unsigned short)60001)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (signed char)-59)))) * (((/* implicit */int) ((short) 7871967143102973903LL))))) : (((/* implicit */int) ((short) ((((/* implicit */int) (short)7)) * (((/* implicit */int) (unsigned short)19493))))))));
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)21967)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-122))))) : (((((/* implicit */_Bool) (unsigned char)4)) ? (((/* implicit */int) (unsigned char)1)) : (((/* implicit */int) (signed char)60)))))), (((((/* implicit */_Bool) ((int) (unsigned short)59998))) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) (short)-25179))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (~(-209186242)))))))));
            }
        } 
    } 
    var_22 |= ((/* implicit */short) var_1);
}
