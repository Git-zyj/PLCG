/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55478
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
    var_17 ^= ((/* implicit */unsigned long long int) var_10);
    var_18 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-5761087762961915621LL))) >= (min((var_13), (((/* implicit */long long int) var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    arr_9 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)237)) ? (var_2) : (((/* implicit */int) var_10))))) / (9223372036854775792LL)));
                    arr_10 [i_0] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_2]))));
                    arr_11 [i_0] [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)32151)) ? (((/* implicit */unsigned long long int) -5761087762961915620LL)) : (0ULL)))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned long long int) ((short) (~(((/* implicit */int) (short)7256)))));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 10; i_4 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) var_8);
                arr_16 [i_0] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)92)) >> (((((/* implicit */int) arr_0 [i_3])) - (47565)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0] [i_3] [i_3] [i_4]))))) : (((/* implicit */int) arr_7 [i_4] [i_3] [i_0] [i_0]))));
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    for (int i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        {
                            var_21 -= ((/* implicit */_Bool) var_10);
                            arr_23 [i_0] [i_0] [i_4] [i_5] [i_5] [i_0] [i_6] = ((/* implicit */_Bool) ((short) 1044553782U));
                            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) arr_7 [i_6] [i_4] [i_4] [i_0])) : (((/* implicit */int) (unsigned char)243))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */unsigned char) (_Bool)0);
            arr_24 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (arr_15 [i_0] [i_0] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))));
            arr_25 [i_0] [i_0] [i_0] = -90980571;
        }
        arr_26 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))));
    }
    for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
        {
            for (signed char i_9 = 3; i_9 < 20; i_9 += 2) 
            {
                {
                    var_24 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((var_2) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)8278)))) - (112)))))), (max((((/* implicit */unsigned long long int) max((arr_33 [i_9] [i_9] [i_9] [i_7]), (((/* implicit */unsigned char) var_6))))), (((unsigned long long int) (unsigned short)6161))))));
                    arr_34 [i_9] [i_9] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_4), (var_7)))))))) * (((var_11) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3250413513U)))));
                    var_25 += ((/* implicit */unsigned char) (~(((((((/* implicit */_Bool) (short)9447)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)237))) : (2175241811U))) + (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)156))))))));
                    arr_35 [i_7] [i_9] [i_8] [i_9] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 1] [i_9 + 2])) : (((/* implicit */int) arr_30 [i_9 + 1] [i_9 + 1] [i_9 - 2])))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_9 - 1] [i_9 - 1] [i_9 - 1])))))));
                }
            } 
        } 
        arr_36 [i_7] [i_7] = ((/* implicit */_Bool) var_14);
    }
    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
    {
        var_26 += ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) max((arr_39 [i_10]), (arr_39 [i_10]))))) ^ ((+(var_12)))));
        arr_41 [i_10] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_38 [i_10])) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) min((var_11), (var_3)))))), ((~(max((var_4), (((/* implicit */int) var_14))))))));
    }
    var_27 = var_9;
}
