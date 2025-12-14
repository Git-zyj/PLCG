/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7863
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
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) var_16))));
    var_19 = ((/* implicit */short) var_9);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (451676123U)));
    var_21 ^= ((/* implicit */_Bool) ((max((((/* implicit */int) var_6)), (((((/* implicit */int) (short)23234)) & (((/* implicit */int) var_12)))))) >> (((((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) - (1732734752U)))));
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)22725)))) + ((-(((/* implicit */int) arr_1 [i_0] [i_0]))))))));
        var_23 = ((/* implicit */unsigned char) max((min((((((/* implicit */_Bool) arr_3 [i_0])) ? (var_16) : (((/* implicit */long long int) 1109467079)))), (((/* implicit */long long int) ((_Bool) (unsigned short)22724))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)237))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))))))));
        var_24 = arr_1 [i_0] [i_0];
    }
    for (long long int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_1]))))) || (((/* implicit */_Bool) arr_5 [i_1] [i_1]))));
        var_26 = ((((/* implicit */_Bool) arr_3 [i_1])) ? (min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 451676121U))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_1))) + (arr_2 [i_1]))))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) 3290441220U))))), (arr_1 [i_1] [i_1]))))));
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((int) arr_2 [i_1]))) != (min((max((arr_5 [i_1] [i_1]), (((/* implicit */unsigned int) arr_3 [i_1])))), (((/* implicit */unsigned int) ((int) var_13))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 13; i_2 += 2) 
    {
        var_28 = ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_3 [i_2]))))) << (((((/* implicit */int) arr_0 [i_2] [i_2])) + (130))))) - ((-(((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) (_Bool)1))))))));
        var_29 = ((/* implicit */short) max((arr_2 [i_2]), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (arr_2 [i_2]))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_2] [i_2])) & (327904254))))))));
    }
    for (int i_3 = 4; i_3 < 9; i_3 += 2) 
    {
        var_30 ^= var_8;
        /* LoopNest 2 */
        for (signed char i_4 = 0; i_4 < 10; i_4 += 2) 
        {
            for (signed char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_19 [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) arr_8 [i_3] [i_3]);
                    var_31 = ((/* implicit */signed char) (unsigned short)34275);
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                    {
                        for (signed char i_7 = 1; i_7 < 9; i_7 += 4) 
                        {
                            {
                                arr_24 [i_3] [i_4] [i_3] [i_5] [i_4] [i_3] [i_7] &= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_3] [i_7] [i_3] [i_7] [i_7])) || (((/* implicit */_Bool) (~(arr_23 [i_7] [i_7] [i_4] [i_6] [i_6]))))));
                                var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_7] [i_5])) && (((/* implicit */_Bool) arr_3 [i_5]))))), ((+(((/* implicit */int) arr_10 [i_5]))))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) var_17)) >= (((/* implicit */int) var_15)))))) : (((/* implicit */int) arr_17 [i_3] [i_3] [i_5]))));
                                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) 327904279))));
                                arr_25 [i_6] [i_7] [i_7] [i_6] [i_7] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)244)) >> (((((/* implicit */int) var_6)) - (182)))))) == (min((arr_21 [i_7] [i_6] [i_6] [i_6] [i_3] [i_3]), (((/* implicit */unsigned int) arr_20 [i_4] [i_5] [i_4] [i_3]))))))) >> (((/* implicit */int) ((((/* implicit */int) (short)13745)) < (-110941343))))));
                                arr_26 [i_7] [i_6] [i_5] [i_6] [i_3] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((arr_5 [i_5] [i_7]) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_7] [i_4])) : (arr_9 [i_7]))))))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) (signed char)-92)) : (((/* implicit */int) var_1))))) + (((5530990360483243044LL) + (((/* implicit */long long int) 327904279))))))));
                            }
                        } 
                    } 
                    arr_27 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((-(arr_23 [i_3] [i_4] [i_3] [i_4] [i_5]))) + (((arr_8 [i_3] [i_3]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)-81)))))))) ? (arr_14 [i_3] [i_3]) : (((((arr_5 [i_3] [i_3]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_3]))))) + (arr_5 [i_3 - 3] [i_3 - 4])))));
                    var_34 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) ? (arr_22 [i_3] [i_3]) : (((/* implicit */int) (unsigned char)216)))) + (2147483647))) << ((((((-(((/* implicit */int) var_1)))) + (213))) - (20)))))) * ((-(((14U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                }
            } 
        } 
    }
}
