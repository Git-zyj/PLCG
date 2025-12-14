/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5804
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | ((~(((unsigned long long int) var_0))))));
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) % (var_3)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)27624)))))) : ((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (3844426068589238097ULL))) % (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_11)) + (2147483647))) >> (((((/* implicit */int) var_10)) - (30))))))))));
    var_18 = ((/* implicit */unsigned short) ((var_15) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)58356))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_9))) : (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                {
                    arr_6 [i_0] [i_2] [i_2] = ((/* implicit */unsigned short) (((~((((_Bool)1) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))))) % ((~(((((/* implicit */int) var_0)) >> (((((/* implicit */int) var_13)) - (13896)))))))));
                    arr_7 [i_2] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                    arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (short)-29913))))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | ((~(2197491171U))))) : (min((max((((/* implicit */unsigned int) 436864325)), (var_6))), (((/* implicit */unsigned int) (_Bool)1))))));
                    arr_9 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)30806))))))) ? (max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_8))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0))))))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((((((((/* implicit */int) var_7)) <= (((/* implicit */int) var_7)))) ? (var_4) : (((/* implicit */long long int) (+(((/* implicit */int) (short)22907))))))) > (((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_2))) - (var_3))) << ((((-(142047288))) + (142047301))))))));
}
