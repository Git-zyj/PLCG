/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9502
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
    var_20 = ((var_3) + (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_17)))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 12; i_1 += 4) 
        {
            {
                arr_4 [7LL] [7LL] &= ((/* implicit */unsigned short) arr_1 [i_0]);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 4) 
                    {
                        {
                            arr_11 [i_0] [i_1 + 1] [i_2] [i_3 - 2] = ((/* implicit */unsigned char) arr_9 [(_Bool)1] [i_1] [i_1] [(unsigned short)1] [i_1]);
                            var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((805222721815359493ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) ((short) var_14))) : (((/* implicit */int) max(((unsigned short)12194), ((unsigned short)12200))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (+(((/* implicit */int) (unsigned short)53355))))))) : (arr_9 [i_0] [i_1] [i_2] [i_2] [i_2]));
                            arr_12 [10ULL] [12] [i_0] [10ULL] [10ULL] [i_0] = ((/* implicit */long long int) arr_8 [(signed char)4] [8ULL] [i_1] [i_1] [i_0]);
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned char i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_5 = 3; i_5 < 12; i_5 += 4) /* same iter space */
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_5] [(unsigned short)12] = ((/* implicit */unsigned char) var_15);
                        arr_18 [i_1] [i_5] [i_5 - 3] = ((/* implicit */unsigned short) ((long long int) arr_13 [i_5 - 3] [i_4] [i_1] [i_0]));
                        var_22 = ((/* implicit */unsigned char) arr_10 [i_0] [i_4] [i_1] [i_0]);
                        var_23 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_2 [i_1 + 1])) : (((/* implicit */int) arr_16 [i_1 + 1] [i_1 - 1])))));
                    }
                    for (unsigned short i_6 = 3; i_6 < 12; i_6 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */long long int) var_14);
                        var_25 += ((unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_16 [i_0] [i_0])), (-5935642885180883117LL)))) ? (arr_10 [i_0] [i_1] [i_4] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [(unsigned short)4] [i_1] [i_4] [i_1 + 1])))));
                    }
                    arr_23 [i_0] [i_1 + 1] [(unsigned short)1] = ((/* implicit */unsigned char) ((short) ((short) var_15)));
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 11; i_7 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) (-(((((((/* implicit */int) arr_27 [i_7 - 1] [i_0] [i_0])) != (((/* implicit */int) var_6)))) ? (var_11) : (((unsigned long long int) arr_6 [3ULL]))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) arr_20 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7 + 2] [i_7 + 1]))) >> (((max((((/* implicit */unsigned long long int) arr_20 [i_7 + 2] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7])), (17641521351894192105ULL))) - (17641521351894192089ULL)))));
                        var_28 = ((/* implicit */unsigned short) 805222721815359479ULL);
                    }
                    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 4) 
                    {
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) arr_14 [i_1] [i_4] [i_4])) : (((/* implicit */int) arr_21 [i_0] [i_0] [(signed char)10] [i_0])))), (((/* implicit */int) ((short) arr_25 [i_0] [i_0] [(unsigned short)7] [(unsigned short)7] [i_0])))))) ? (((/* implicit */unsigned long long int) (+(arr_0 [i_1 - 1])))) : (((unsigned long long int) arr_16 [i_1 - 1] [i_1 + 1])))))));
                        var_30 += ((/* implicit */unsigned int) (_Bool)0);
                    }
                }
                for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 2; i_10 < 11; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 4; i_11 < 11; i_11 += 4) 
                        {
                            {
                                arr_37 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_11] = ((/* implicit */unsigned long long int) max((9223372036854775807LL), (((/* implicit */long long int) arr_27 [i_0] [i_9 + 2] [i_9 + 2]))));
                                var_31 = ((/* implicit */long long int) ((signed char) max((arr_13 [i_1 - 1] [i_9 - 1] [(short)5] [i_9]), (arr_13 [i_1 - 1] [i_9 + 2] [1ULL] [6U]))));
                                arr_38 [i_11 - 4] [i_10 - 2] [i_9] [i_1 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_13))))) ? (((/* implicit */int) (unsigned short)40434)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_18) : (var_15)))))));
                                arr_39 [i_0] [i_0] [i_0] [9ULL] [i_11] = ((/* implicit */unsigned short) ((unsigned char) arr_36 [i_0] [i_1] [(unsigned short)5] [i_1] [i_1]));
                            }
                        } 
                    } 
                    arr_40 [i_9 + 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_18))) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_9 + 1] [i_9 + 2] [i_1 + 1])))));
                }
                for (unsigned char i_12 = 0; i_12 < 13; i_12 += 4) 
                {
                    var_32 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */int) ((unsigned short) arr_31 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */int) ((unsigned short) 7161163601454100262ULL))))), ((+((((_Bool)1) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_12])) : (((/* implicit */int) (unsigned char)216))))))));
                    var_33 = ((/* implicit */int) arr_25 [i_0] [i_0] [i_1 + 1] [i_1 - 1] [i_1 - 1]);
                }
            }
        } 
    } 
}
