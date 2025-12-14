/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97655
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) var_11))) != (((/* implicit */int) ((((/* implicit */int) var_1)) < (((/* implicit */int) max(((unsigned char)19), (((/* implicit */unsigned char) var_11))))))))));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) var_4);
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */unsigned char) (signed char)4)), ((unsigned char)19)))) / (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1)))))));
                    arr_9 [i_1] = ((/* implicit */unsigned long long int) ((signed char) ((short) ((5379942363220449251LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-5)))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */signed char) (~(((((((/* implicit */int) (signed char)-18)) + (2147483647))) >> (((((/* implicit */int) (signed char)2)) ^ (((/* implicit */int) (signed char)15))))))));
}
