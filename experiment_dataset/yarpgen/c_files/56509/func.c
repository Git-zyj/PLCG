/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56509
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56509 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56509
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
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_19 = ((short) ((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */int) arr_1 [(short)12] [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (signed char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_7 [i_2 + 2] [i_1])), (arr_3 [i_0 - 2])))) ? (min((((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (signed char)83)))), (((((/* implicit */_Bool) (signed char)-2)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)1)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1] [(short)16])) ? (11875402048392489816ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (var_11) : (arr_7 [i_0] [i_1]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)69)) : (((/* implicit */int) (signed char)-10))))))));
                            var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2905553443152601374LL)) ? (-5743554449865998945LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [(unsigned char)9] [i_3])))))) ? (max((var_8), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_2 - 1] [i_1] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_18), (((/* implicit */unsigned short) arr_1 [i_3 + 2] [2U]))))))))) ? ((+(arr_3 [i_0 + 3]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_10 [4ULL])) != (arr_7 [(_Bool)1] [(short)16])))) : (((((/* implicit */int) (signed char)9)) & (((/* implicit */int) arr_1 [i_3] [i_3])))))))));
                            var_22 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(arr_4 [i_0])))) ? (((((/* implicit */_Bool) (unsigned char)242)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned char)5] [i_2]))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))))) ? (min((11875402048392489821ULL), (((((/* implicit */_Bool) -4223961461433152225LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-25154))) : (15118535649336223416ULL))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_1)), (((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [7LL]))))))))));
                            var_23 = ((/* implicit */short) max((0LL), (((long long int) 6486037306576741548ULL))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_4 = 3; i_4 < 19; i_4 += 4) 
                {
                    for (signed char i_5 = 1; i_5 < 20; i_5 += 1) 
                    {
                        for (short i_6 = 3; i_6 < 18; i_6 += 2) 
                        {
                            {
                                var_24 = ((/* implicit */int) max((((signed char) ((signed char) arr_19 [i_1] [i_1] [i_6]))), (((/* implicit */signed char) ((arr_18 [i_6 - 2] [i_6 - 2] [i_6] [12LL] [i_6]) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)46))) < (arr_17 [i_1] [i_1] [19ULL]))))))))));
                                var_25 = (-(max((((((/* implicit */_Bool) arr_14 [i_0] [i_1] [i_4] [i_1])) ? (arr_8 [i_0] [i_1] [i_5] [i_6 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))), (((/* implicit */unsigned int) arr_6 [i_0 + 3] [i_4 - 3])))));
                                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_13 [i_0 - 1]))))) ? (min((arr_11 [i_0 - 1] [i_5 + 1] [i_6 + 1]), (max((15540911210444269294ULL), (((/* implicit */unsigned long long int) var_16)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13))))));
                                var_27 |= ((/* implicit */unsigned int) 9223372036854775807LL);
                                var_28 = ((/* implicit */signed char) max((arr_18 [i_1] [i_1] [i_1] [(unsigned char)3] [i_1]), (((/* implicit */long long int) (signed char)47))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_29 = ((/* implicit */long long int) ((unsigned int) ((((((/* implicit */int) (signed char)-24)) + (2147483647))) << ((((((-(((/* implicit */int) (unsigned short)48399)))) + (48405))) - (6))))));
}
