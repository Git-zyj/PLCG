/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89766
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)65525)));
        var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) var_16)), (min((((/* implicit */unsigned long long int) var_12)), (var_6))))), (6450019969238649514ULL))))));
        var_22 ^= ((/* implicit */long long int) 11996724104470902109ULL);
    }
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 3) 
    {
        var_23 |= ((/* implicit */unsigned long long int) ((var_4) < (max((((/* implicit */long long int) var_2)), (var_15)))));
        var_24 = ((/* implicit */unsigned short) 12163799221029691779ULL);
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_25 = ((/* implicit */int) var_6);
        var_26 += ((/* implicit */unsigned int) var_5);
    }
    /* LoopNest 3 */
    for (unsigned int i_3 = 3; i_3 < 20; i_3 += 2) 
    {
        for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            for (unsigned int i_5 = 2; i_5 < 23; i_5 += 1) 
            {
                {
                    var_27 -= ((/* implicit */_Bool) var_16);
                    var_28 = (!(((/* implicit */_Bool) min((-638630636388461547LL), (((/* implicit */long long int) (-(var_1))))))));
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (+(((/* implicit */int) var_10))))) : (max((((/* implicit */long long int) (_Bool)1)), (var_4)))))) ? (((int) (-(-638630636388461547LL)))) : (((/* implicit */int) var_9))));
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        for (unsigned short i_7 = 2; i_7 < 23; i_7 += 2) 
                        {
                            {
                                var_30 = ((/* implicit */int) 638630636388461546LL);
                                var_31 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((unsigned int) 6450019969238649503ULL))), (((((6282944852679859841ULL) ^ (12163799221029691779ULL))) % (((/* implicit */unsigned long long int) var_4))))));
                                var_32 = ((/* implicit */unsigned int) var_14);
                                var_33 += ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) min((var_16), (var_16)))) ? (min((-304423228), (((/* implicit */int) (unsigned short)55819)))) : (((/* implicit */int) ((unsigned short) (unsigned short)19865)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
