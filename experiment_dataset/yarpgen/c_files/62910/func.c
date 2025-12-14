/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62910
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (-(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_6))))), (var_9)))))))));
    var_20 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
    /* LoopSeq 4 */
    for (unsigned char i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_22 = var_16;
    }
    for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_2 [i_1 - 1])))) ? ((-(((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) var_15))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_24 *= ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) + (var_8)));
                        var_25 = 2464142673U;
                        var_26 = ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 1]))) : (var_8))) : (((/* implicit */unsigned int) (+(4095)))));
                        var_27 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) var_9)))), (((((/* implicit */_Bool) arr_5 [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [(_Bool)1] [(_Bool)1])) : (((/* implicit */int) (short)-32760))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (int i_6 = 4; i_6 < 14; i_6 += 1) 
        {
            for (signed char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                {
                    var_28 = ((/* implicit */unsigned char) max((arr_20 [i_5] [i_5] [7U]), (((/* implicit */unsigned short) arr_0 [(_Bool)1]))));
                    var_29 *= ((/* implicit */_Bool) 4277051418U);
                }
            } 
        } 
        var_30 = ((/* implicit */_Bool) arr_11 [1U]);
    }
    for (unsigned short i_8 = 0; i_8 < 13; i_8 += 4) 
    {
        var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)48569)))), (((/* implicit */int) (unsigned short)58654))))) ? (((/* implicit */int) min(((signed char)-42), (((/* implicit */signed char) (_Bool)1))))) : (max((((/* implicit */int) (short)-32759)), (-2147483647)))));
        var_32 *= ((/* implicit */unsigned long long int) ((var_16) < (((((/* implicit */_Bool) -2147483647)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)6882))) : (1837767848U)))));
        var_33 = arr_23 [i_8];
    }
    var_34 = var_2;
    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_11))))) ? (((unsigned long long int) ((((/* implicit */_Bool) (signed char)69)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (2464142673U)))) : ((((-(8527724679030725225ULL))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))));
}
