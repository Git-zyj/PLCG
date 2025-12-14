/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57285
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57285 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57285
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
    var_20 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 962072674304ULL)))) : (min((((/* implicit */unsigned long long int) (signed char)122)), (4282101996428931349ULL))))), (max((min((((/* implicit */unsigned long long int) var_3)), (var_13))), (((/* implicit */unsigned long long int) min((-585772393852511230LL), (((/* implicit */long long int) -1098737107)))))))));
    var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_18))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_14))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (((((/* implicit */_Bool) (signed char)-33)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5199)))))))) ? (((/* implicit */int) min((var_2), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) >= (var_8))))))) : (min(((-(((/* implicit */int) (unsigned short)46756)))), (var_12)))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                var_23 = ((/* implicit */signed char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) -2754028256093763477LL))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)33584)) + (((/* implicit */int) (short)248))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((var_16) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)3)))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) ((unsigned char) 1565653780U))) : (((/* implicit */int) arr_13 [i_0]))));
                                arr_15 [i_0] [9] [i_0] [i_4] = ((/* implicit */int) ((short) var_19));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_26 *= ((/* implicit */_Bool) var_8);
}
