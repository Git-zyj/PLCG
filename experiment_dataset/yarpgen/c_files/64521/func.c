/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64521
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
    var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (~(((/* implicit */int) (!((_Bool)0))))))), (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_13)) <= (var_4))))) * ((+(4204700707U)))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned short) ((((min((var_9), (((/* implicit */long long int) var_15)))) % (((/* implicit */long long int) max((arr_2 [i_0] [(unsigned char)11]), (var_5)))))) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)120)))))) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_1))))) : ((~(((/* implicit */int) arr_4 [i_0] [i_2])))))))));
                    arr_9 [i_1] [i_2] = max((((int) ((var_16) > (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))), (min(((-(((/* implicit */int) (unsigned short)8024)))), (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)21798)))))));
                    arr_10 [i_0] [i_1] [i_2] |= ((/* implicit */int) (~((((_Bool)1) ? (4204700724U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44568)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) (_Bool)0)), (var_3))) * (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)63), (((/* implicit */unsigned short) (signed char)-66)))))) / (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2))) * (90266607U))))))));
}
