/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84896
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84896 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84896
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
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (short i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_7 [(signed char)0] &= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)2] [i_2 - 2])) ? (((/* implicit */int) (unsigned short)58241)) : (((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)16380))))))), (((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 - 3])) ? (((/* implicit */unsigned long long int) var_8)) : (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_16))))))));
                    var_17 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) - ((-((-(arr_1 [i_0] [i_0])))))));
                    arr_8 [(signed char)20] [i_1] [i_2 - 2] = ((/* implicit */short) max((var_8), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)5641)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((short) (signed char)80))) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)65)) || (((/* implicit */_Bool) (short)2016))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        for (int i_4 = 2; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_18 ^= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (var_8) : (4800804260100796870LL)))));
                                arr_13 [i_1] [i_1] [i_1] [17ULL] [17ULL] [i_1] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (short)-29836)), (9223372036854775808ULL)));
                                var_19 *= ((/* implicit */unsigned char) ((long long int) (unsigned char)0));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 0; i_5 < 17; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            for (unsigned short i_7 = 1; i_7 < 15; i_7 += 3) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) max((max((var_15), (((/* implicit */unsigned long long int) -70514397)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_5] [i_5] [i_7 + 1] [i_6])))))));
                    var_21 *= ((/* implicit */short) ((signed char) max((-4800804260100796858LL), (((/* implicit */long long int) arr_12 [i_7] [(short)0] [(unsigned char)21] [i_7 - 1] [i_7] [i_7 - 1])))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        for (int i_9 = 0; i_9 < 17; i_9 += 3) 
                        {
                            {
                                var_22 = (_Bool)1;
                                arr_28 [i_5] [i_7] [(signed char)7] [i_8] [i_8] [i_6] [i_8] = (-(((((/* implicit */unsigned int) var_9)) + (arr_10 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 1]))));
                                arr_29 [(short)5] [i_5] [i_7] [i_7] [i_7] [i_5] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-119)) + (2147483647))) << (((((/* implicit */int) arr_5 [20LL] [i_7 + 2] [20LL] [i_9])) - (1)))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) > (((/* implicit */int) (signed char)80))))) : ((-(((/* implicit */int) (unsigned char)255))))));
                                var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)2016))) * (7081987605219632497ULL)))) ? ((-(-766036066744848803LL))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-29836)) * (((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        arr_33 [i_5] [i_5] [i_7] [i_7] [i_7] = arr_25 [i_5] [i_6] [i_7] [i_10];
                        arr_34 [12LL] [i_7] [12LL] [i_10] = ((/* implicit */signed char) min(((~(8470363747026685843ULL))), (((/* implicit */unsigned long long int) ((int) arr_15 [i_7 - 1])))));
                    }
                    for (unsigned short i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        arr_37 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */int) min((((unsigned long long int) 4992429081847589577ULL)), (((/* implicit */unsigned long long int) (+(1374298417004938209LL))))));
                        var_24 = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */int) ((41499653862201024ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */int) ((unsigned char) var_5)))));
                    }
                    var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16796))) + (41499653862201027ULL)));
                }
            } 
        } 
        arr_38 [i_5] = ((/* implicit */int) ((((/* implicit */int) arr_23 [i_5] [i_5] [i_5] [i_5])) != (((/* implicit */int) (_Bool)1))));
    }
    var_26 = ((/* implicit */unsigned long long int) min((var_26), (var_14)));
    var_27 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((((/* implicit */int) (short)16384)) * (((/* implicit */int) (signed char)-80)))) : (((/* implicit */int) max((((/* implicit */short) var_13)), (var_7)))))));
    var_28 = ((/* implicit */unsigned long long int) var_11);
}
