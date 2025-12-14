/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96703
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96703 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96703
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
    var_19 |= ((/* implicit */unsigned long long int) var_16);
    var_20 = ((/* implicit */_Bool) var_3);
    var_21 = ((/* implicit */unsigned int) 2054432751526045657ULL);
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((min((var_10), (((/* implicit */long long int) (unsigned short)24874)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))) & (((((unsigned int) -1)) << ((((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_7))) + (10385LL)))))));
        arr_3 [i_0] = ((/* implicit */_Bool) var_4);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) 4294967295U)), (-8171218805616259618LL)));
        arr_5 [i_0] = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))))));
        var_23 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((~(1048575ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-3930)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_6))))))))) ? ((-(((/* implicit */int) var_18)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [(short)10])))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 1) /* same iter space */
    {
        arr_8 [i_1 + 1] = ((/* implicit */unsigned short) (+(arr_7 [i_1])));
        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 963977233)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-5863))) : (2947447015U)))) ? (3244110989U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (-107435893) : (((/* implicit */int) (unsigned char)99)))))));
    }
    for (signed char i_2 = 2; i_2 < 21; i_2 += 1) 
    {
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)63680)) ? (((/* implicit */int) (signed char)-124)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) min((arr_9 [i_2]), (arr_9 [i_2 - 1]))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 3; i_3 < 22; i_3 += 4) 
        {
            for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
            {
                {
                    var_26 ^= (+(((/* implicit */int) (unsigned char)186)));
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (+(((596840781) << (((((/* implicit */int) arr_9 [i_2 - 2])) - (17950))))))))));
                    var_28 |= ((/* implicit */unsigned long long int) var_11);
                }
            } 
        } 
        var_29 &= ((/* implicit */int) (unsigned short)50804);
    }
    for (short i_5 = 2; i_5 < 9; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 12; i_6 += 1) 
        {
            for (unsigned char i_7 = 0; i_7 < 12; i_7 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) (+(85320760U)));
                    var_31 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)25238)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_14))))) : ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1)))) / (262143ULL)))))));
                }
            } 
        } 
        var_32 *= ((((/* implicit */_Bool) (unsigned short)34314)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (1685720971U));
    }
    var_33 = ((/* implicit */short) (-(var_11)));
}
