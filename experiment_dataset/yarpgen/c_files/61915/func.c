/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61915
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            for (unsigned char i_2 = 2; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_7 [(short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((((-(var_17))) + (9223372036854775807LL))) << (((((/* implicit */int) max((var_11), ((signed char)16)))) - (16)))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (unsigned short)7524)) : (((/* implicit */int) (_Bool)1))))) + (var_14)))) : (max((((/* implicit */long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_13))))), (var_17)))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_12 [6LL] [i_1] [i_1] [15ULL] [i_3] [i_4] [i_4 + 2] = ((/* implicit */long long int) ((((/* implicit */int) var_13)) ^ (((int) min((131260108U), (((/* implicit */unsigned int) 2147483629)))))));
                                arr_13 [i_2] [i_4] = var_11;
                                arr_14 [2ULL] [i_4] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) ((((/* implicit */_Bool) 8237920462384388512ULL)) && (((/* implicit */_Bool) var_5))))), (1023)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 2; i_5 < 13; i_5 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 2) 
        {
            for (int i_7 = 1; i_7 < 12; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_24 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) (~(((((((/* implicit */_Bool) 935001530)) ? (((/* implicit */int) (short)31703)) : (((/* implicit */int) (unsigned short)36483)))) & (((/* implicit */int) (short)-25390))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_17 [i_5 - 2] [i_5] [i_8]))))) && (((((/* implicit */_Bool) arr_17 [i_5 - 2] [i_5] [i_7])) && (((/* implicit */_Bool) arr_3 [i_5 + 1] [i_7 + 2]))))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */short) var_7);
        var_20 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) var_12)) ? (arr_6 [i_5] [i_5] [i_5] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))));
        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)11259)) || (((/* implicit */_Bool) 12371736828662983585ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-71))) : (max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) 3886702395U)) ? (((/* implicit */int) var_0)) : (1878297845))))))));
    }
    for (unsigned short i_9 = 4; i_9 < 21; i_9 += 4) 
    {
        arr_27 [i_9] = ((/* implicit */signed char) max((((-5326470872240982995LL) / (((/* implicit */long long int) ((/* implicit */int) var_10))))), (((/* implicit */long long int) ((var_14) + (var_1))))));
        var_22 = ((/* implicit */short) max((2663049367U), (((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)43))))))))));
    }
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 18; i_10 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_30 [i_10] [i_10])))))));
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((var_14) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_11]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_10] [i_10])) == (((/* implicit */int) var_9)))))) : (((((/* implicit */_Bool) var_7)) ? (532676608U) : (((/* implicit */unsigned int) arr_25 [i_10])))))))));
        }
        var_25 *= ((/* implicit */short) ((int) (signed char)34));
        arr_35 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)15)) ? (8406419902108739846ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))) ? (((((/* implicit */_Bool) arr_2 [i_10])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_16)))) : ((-(((/* implicit */int) var_9))))));
    }
    var_26 = ((/* implicit */signed char) ((unsigned short) (~(min((9725267036916889103ULL), (((/* implicit */unsigned long long int) var_16)))))));
}
