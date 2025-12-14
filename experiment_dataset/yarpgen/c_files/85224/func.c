/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85224
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85224 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85224
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) -1LL)))));
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 15761213346540406317ULL)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1534285715114165057ULL)) || (((/* implicit */_Bool) arr_6 [i_1] [i_1]))))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))));
                        }
                    } 
                } 
                var_22 ^= ((/* implicit */short) ((18446744073709551590ULL) ^ (((/* implicit */unsigned long long int) 9223372036854775793LL))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_6 = 0; i_6 < 17; i_6 += 2) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        for (unsigned char i_8 = 2; i_8 < 15; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) min(((+(((/* implicit */int) arr_18 [(unsigned char)11] [i_7] [i_5] [i_4])))), ((-(((/* implicit */int) (short)1269))))));
                                var_24 += ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((9223372036854775800LL) << (((9223372036854775780LL) - (9223372036854775780LL)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_19)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (9223372036854775800LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((2126239046U) != (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))) : (max((var_15), (((/* implicit */unsigned long long int) var_13))))))));
                                var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (9223372036854775798LL) : (8486338691003285967LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-16)))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)127))) / (-9223372036854775784LL)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : ((-(2168728250U)))));
                                var_26 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30880))) / (var_4)))) && (((/* implicit */_Bool) var_12)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 2) 
                {
                    for (short i_10 = 4; i_10 < 14; i_10 += 3) 
                    {
                        for (short i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */_Bool) var_17);
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_10 [i_11]))))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_12 = 0; i_12 < 20; i_12 += 2) 
    {
        for (short i_13 = 0; i_13 < 20; i_13 += 1) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    var_29 = (short)-20557;
                    /* LoopNest 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */unsigned char) max((var_30), (((/* implicit */unsigned char) max(((((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 3104498985U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1))))))))));
                                var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) var_3))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_17 = 4; i_17 < 17; i_17 += 1) 
    {
        for (long long int i_18 = 3; i_18 < 19; i_18 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_19 = 1; i_19 < 18; i_19 += 2) 
                {
                    for (unsigned short i_20 = 0; i_20 < 20; i_20 += 3) 
                    {
                        {
                            arr_50 [i_19] [i_19] [i_19 + 2] [i_20] = ((/* implicit */_Bool) min(((-(arr_48 [i_17 - 1] [i_19] [i_19 - 1] [i_19]))), ((+(((/* implicit */int) (_Bool)1))))));
                            var_32 += ((/* implicit */unsigned char) ((unsigned long long int) (~((+(-1LL))))));
                            var_33 = ((/* implicit */long long int) ((short) 9223372036854775804LL));
                        }
                    } 
                } 
                var_34 = ((/* implicit */long long int) ((((((/* implicit */int) var_1)) > (((/* implicit */int) arr_32 [i_17] [i_17] [i_17])))) ? (((var_6) ? (2585259774U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_18 + 1] [i_18 + 1] [i_18]))))) : (min((((/* implicit */unsigned int) arr_32 [1] [i_17] [i_18 + 1])), (1190468314U)))));
            }
        } 
    } 
}
