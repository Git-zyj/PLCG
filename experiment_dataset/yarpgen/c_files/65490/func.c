/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65490
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
    var_17 = ((/* implicit */short) var_3);
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 12; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
                    {
                        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) == (arr_0 [i_0 + 1]))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_19 = ((/* implicit */unsigned int) (unsigned char)28);
                            var_20 = ((/* implicit */int) ((arr_7 [i_3] [i_2 + 3] [i_0 - 1] [i_0 - 1]) <= (((/* implicit */unsigned int) arr_1 [i_0 - 1] [i_2 + 3]))));
                        }
                        for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                        {
                            var_21 = ((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (arr_0 [i_0 - 2]) : (arr_0 [i_0 - 2]));
                            arr_13 [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_0 - 2])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [i_3] [13] [i_3])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)42558)))))));
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) ((4127660643U) | (167306629U)))) || (((/* implicit */_Bool) 4127660643U)))))));
                        }
                        arr_14 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */_Bool) arr_0 [i_0]);
                        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2 + 2] [i_2] [(unsigned short)5] [i_2])) ? (((/* implicit */int) arr_2 [i_0 - 2] [i_2 + 2])) : (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) (unsigned short)19470)))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) arr_3 [i_6] [i_1])) ? (var_5) : (((/* implicit */unsigned int) arr_1 [i_0] [i_6])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) 839291965)) : (4U))))));
                        var_25 = ((/* implicit */_Bool) 4294967270U);
                    }
                    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        arr_21 [i_0] [(_Bool)1] [i_2] [i_2] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_19 [i_1] [i_2] [i_7])) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_7] [5ULL] [i_1] [i_0]))))), (((/* implicit */unsigned int) arr_16 [i_0 + 1]))))) <= (((((var_1) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7] [i_7] [i_7]))))) ? (((/* implicit */unsigned long long int) arr_10 [i_2 + 3] [i_0 - 2] [5ULL])) : (var_8)))));
                        var_26 = ((/* implicit */signed char) arr_20 [(_Bool)1] [i_0] [(signed char)0] [i_0 - 1] [i_0 - 1] [i_0 - 1]);
                    }
                    arr_22 [(short)12] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_16 [i_1])) ? (((-33554432) & (((/* implicit */int) arr_15 [i_0] [i_2])))) : (((/* implicit */int) arr_5 [i_2] [i_1] [i_2] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 15; i_9 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_12 [14U] [(short)9] [14U] [i_8])) < (13776460373435729287ULL))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) arr_7 [i_8] [i_0] [i_1] [i_0]))))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0 + 1] [i_0 - 2] [i_2 + 1])))))) : (((arr_10 [i_0] [i_2] [i_9]) & (arr_9 [i_0] [3ULL] [i_0] [10] [i_0] [i_0] [i_0])))));
                                arr_27 [i_0] [i_1] [i_2] [i_1] [i_9] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2 + 3] [i_0 + 1])) ? (((/* implicit */int) arr_15 [i_2 + 3] [i_0 + 1])) : (((/* implicit */int) arr_2 [i_2 + 3] [i_0 + 1])))))));
                                var_28 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_9] [i_9])) << (((((/* implicit */int) (short)32767)) - (32766)))))) ? (var_9) : (((/* implicit */unsigned long long int) 33554431)))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_2 [i_2 + 3] [i_0 - 1])))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) (_Bool)1))));
                }
            } 
        } 
    } 
}
