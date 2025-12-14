/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85997
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))), (var_3))) < (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_1 [(signed char)0])))))))));
                var_13 += ((/* implicit */short) ((((((/* implicit */_Bool) max(((unsigned short)29467), (((/* implicit */unsigned short) (short)0))))) ? (((/* implicit */int) max(((short)0), ((short)-1)))) : (((((arr_0 [(unsigned char)1]) + (2147483647))) << (((((((/* implicit */int) var_11)) + (63))) - (27))))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-18)) : (((/* implicit */int) (short)-1))))) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-64))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (4154736081927191072ULL)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) var_7))))), ((-(var_2))))) : (((/* implicit */unsigned long long int) ((max((((/* implicit */int) var_6)), (var_4))) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))))))));
}
