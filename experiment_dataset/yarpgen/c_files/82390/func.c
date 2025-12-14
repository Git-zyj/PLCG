/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82390
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
    var_10 = ((/* implicit */unsigned char) (short)7552);
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned char i_1 = 4; i_1 < 11; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_11 |= ((/* implicit */unsigned int) max((max((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_5 [(unsigned short)6] [0ULL]))))), (((((/* implicit */int) arr_5 [i_1] [i_0])) / (((/* implicit */int) var_8)))))), (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_5))))) ^ (((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_3))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                var_12 -= ((/* implicit */unsigned short) max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)202)) & (var_4)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) min((((/* implicit */unsigned short) (short)-7543)), (var_6))))))));
                                var_13 = ((/* implicit */short) min((var_13), (arr_3 [i_1 + 1])));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_7)) : (var_0)))) ? (((/* implicit */int) arr_1 [i_0] [i_1])) : (((/* implicit */int) var_7))))) && (((/* implicit */_Bool) (short)-7553)))))));
                    var_15 = (((((~(((/* implicit */int) min((((/* implicit */unsigned short) var_5)), (var_7)))))) + (2147483647))) << (((((/* implicit */int) var_3)) - (16374))));
                }
            } 
        } 
    } 
    var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_0), (((/* implicit */int) var_3))))) ? (((/* implicit */int) var_6)) : ((~(var_9)))))) ? (((/* implicit */int) ((unsigned char) max((var_8), (((/* implicit */signed char) (_Bool)1)))))) : (var_1)));
    /* LoopNest 3 */
    for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (unsigned long long int i_6 = 4; i_6 < 9; i_6 += 1) 
        {
            for (short i_7 = 2; i_7 < 9; i_7 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned int) arr_0 [i_5]);
                    var_18 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (~(((/* implicit */int) (short)7552))))) ? (((int) var_8)) : (((/* implicit */int) ((unsigned short) var_0)))))));
                    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)44)) || (((/* implicit */_Bool) var_5))));
                    arr_20 [i_5] [i_7 + 2] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((short) max((((/* implicit */int) (unsigned short)36149)), (var_4))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4115115792U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (var_0) : (((/* implicit */int) ((var_4) <= (((/* implicit */int) var_8)))))))));
                    /* LoopNest 2 */
                    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        for (short i_9 = 1; i_9 < 9; i_9 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) max((((signed char) (short)-5217)), (var_8)))) ? (((/* implicit */int) ((var_4) > (arr_23 [i_9 + 1])))) : (((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_7)) >> (((((/* implicit */int) (short)7552)) - (7528))))) : (((/* implicit */int) var_2))))));
                                var_21 = ((/* implicit */unsigned int) ((unsigned short) var_4));
                                arr_27 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_8);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
