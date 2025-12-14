/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70872
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70872 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70872
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        var_18 = ((/* implicit */int) ((((1382541325438859157LL) << (((((/* implicit */int) var_13)) - (47028))))) << (((arr_3 [i_0]) - (6027153876318933727LL)))));
                        arr_9 [i_0] [i_0] [(short)7] [(unsigned char)5] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (arr_1 [i_0]))) % (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (arr_7 [i_3] [(unsigned short)6] [i_3]))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 4) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */int) (unsigned short)9496)) : (2147483647)));
                            var_20 = ((/* implicit */unsigned short) (((_Bool)1) ? (((/* implicit */long long int) 2147483647)) : (-2882437166501576923LL)));
                            var_21 |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [1LL]))) < (var_5));
                            arr_12 [i_4] = ((/* implicit */int) ((0U) + (((/* implicit */unsigned int) 1073741823))));
                        }
                        var_22 += ((/* implicit */signed char) ((arr_7 [i_1] [i_2] [i_2]) | (((/* implicit */int) var_9))));
                        arr_13 [i_2] [i_3] = ((((/* implicit */_Bool) arr_2 [i_1])) ? (var_8) : (((/* implicit */int) (_Bool)1)));
                    }
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2514533902U)) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) / (var_6))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)32640)) : (((/* implicit */int) arr_8 [2] [i_1] [i_0]))))))))) : ((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) 1390118763U))))));
                }
            } 
        } 
    } 
    var_24 ^= ((/* implicit */unsigned long long int) (-(min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)138)) ? (((/* implicit */int) var_10)) : (65408)))), (((var_16) << (((-8751574525310978349LL) + (8751574525310978361LL)))))))));
    var_25 = ((/* implicit */unsigned int) var_14);
    /* LoopNest 2 */
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 2) 
    {
        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 4) 
        {
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (((~(((-2882437166501576923LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60294))))))) != (((/* implicit */long long int) (+(((unsigned int) 1683498442U))))))))));
                var_27 ^= ((/* implicit */signed char) ((max((2882437166501576923LL), (((/* implicit */long long int) (unsigned char)191)))) / (arr_6 [(_Bool)1] [1U] [(unsigned char)3] [i_6 - 2])));
            }
        } 
    } 
}
