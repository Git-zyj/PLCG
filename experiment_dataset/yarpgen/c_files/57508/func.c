/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57508
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
    var_18 *= ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51806))))) : (((/* implicit */long long int) ((-2) * (((/* implicit */int) (unsigned char)228))))))) : (((/* implicit */long long int) ((/* implicit */int) var_7)))));
    var_19 = ((/* implicit */unsigned int) var_1);
    var_20 ^= min((var_2), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2626262604770362117ULL)) ? (((/* implicit */int) var_7)) : (var_16)))) != (((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) : (var_0)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 10; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) var_1);
                    var_21 = ((/* implicit */int) min((var_21), ((~(((((/* implicit */_Bool) min((arr_5 [i_0] [(short)5] [i_2] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0]))))) ? (((/* implicit */int) var_15)) : (((int) arr_1 [10ULL]))))))));
                    arr_8 [i_2 - 1] [i_1] [i_0] = ((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) (short)-8165)), (arr_5 [i_0] [i_0] [i_2 - 2] [i_2]))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_13 [i_0] [i_3] [i_4] = ((/* implicit */signed char) var_8);
                    /* LoopNest 2 */
                    for (signed char i_5 = 1; i_5 < 10; i_5 += 3) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_3] [i_5] [i_0] [i_3] = ((/* implicit */int) arr_17 [(short)8] [i_3] [i_3] [i_3] [i_3] [i_3]);
                                var_22 |= ((/* implicit */short) ((((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])) && (((/* implicit */_Bool) arr_17 [i_5 - 1] [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1])))) ? (((/* implicit */unsigned long long int) ((int) arr_11 [i_5 + 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]))) : (((((/* implicit */_Bool) arr_6 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 1])) ? (arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 + 1]) : (arr_11 [i_5 - 1] [i_5 - 1] [i_5 + 1] [i_5 - 1])))));
                                arr_20 [i_6] [i_3] [i_4] [i_4] [i_0] [i_3] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)28941)) && (((/* implicit */_Bool) (unsigned char)44)))), ((!(((/* implicit */_Bool) arr_6 [i_0] [i_5 + 1] [i_5 + 1] [i_6]))))));
                                var_23 ^= ((/* implicit */short) max((((/* implicit */long long int) (-(var_16)))), (((((/* implicit */_Bool) arr_3 [(unsigned short)6])) ? (arr_14 [2U]) : (arr_14 [(unsigned short)4])))));
                                var_24 = ((/* implicit */short) (unsigned short)1023);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_25 += var_1;
        arr_21 [i_0] &= ((/* implicit */unsigned long long int) max((min((arr_10 [(_Bool)1]), ((-(((/* implicit */int) arr_1 [i_0])))))), (((/* implicit */int) ((short) ((((/* implicit */_Bool) (signed char)-10)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))))));
    }
}
