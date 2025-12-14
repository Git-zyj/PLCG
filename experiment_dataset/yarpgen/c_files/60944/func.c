/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60944
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60944 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60944
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)40837)) >> (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) (unsigned char)244)))))) % (var_1)))));
    var_12 = ((/* implicit */unsigned char) min((var_12), (((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) var_0)), (var_8)))), (min((min((var_9), (8822894669832671441ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_4))))))))))));
    var_13 = ((/* implicit */int) var_5);
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_8 [i_2] [i_2] [i_2] = ((/* implicit */signed char) min((var_3), (((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)-32758)), ((unsigned short)13039))))));
                    var_14 = ((/* implicit */signed char) (~(((/* implicit */int) min(((unsigned short)13054), (((/* implicit */unsigned short) (signed char)-109)))))));
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */unsigned long long int) (-(var_10)));
}
