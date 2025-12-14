/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64430
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64430 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64430
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
    var_16 = ((/* implicit */unsigned short) var_13);
    var_17 = ((/* implicit */long long int) max((var_17), (((min((((/* implicit */long long int) (+(((/* implicit */int) (signed char)84))))), (((((/* implicit */_Bool) (signed char)-114)) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)255)))))));
    var_18 = ((/* implicit */unsigned long long int) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    var_19 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_2])))) ? (((/* implicit */int) (unsigned char)5)) : ((((+(((/* implicit */int) (unsigned char)22)))) >> (((((((/* implicit */int) (unsigned short)244)) ^ (arr_0 [(unsigned char)18]))) + (682089275)))))));
                    var_20 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) (+(arr_3 [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65273))) | (var_13)))));
                }
                arr_10 [20U] [i_0] [i_0] = ((/* implicit */signed char) var_15);
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (short)2048)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)259))) : (((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_8)))));
}
