/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89827
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
    var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (-1787083344)))))) : (3172299925U))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) max((var_12), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (~(((/* implicit */int) (unsigned short)14101))))))) + (min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (short)5554)), ((unsigned short)14101)))))))))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] [i_1] |= ((/* implicit */unsigned int) ((_Bool) (~(max((var_2), (((/* implicit */int) (unsigned short)51435)))))));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) min((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) arr_4 [i_1])) % (((/* implicit */int) ((signed char) (short)11303)))))));
            var_13 = ((/* implicit */signed char) min((((/* implicit */long long int) ((unsigned int) arr_2 [i_0] [i_1]))), (-1284864430424553349LL)));
            var_14 = ((unsigned short) (_Bool)0);
        }
    }
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_3 = 3; i_3 < 19; i_3 += 2) 
        {
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 3; i_5 < 18; i_5 += 4) 
                    {
                        var_15 &= ((/* implicit */short) 0);
                        arr_20 [i_2] [i_3] [i_4] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)14100))));
                        arr_21 [i_4] [i_3] [i_4] [i_5 - 2] [i_3 + 1] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_0 [i_4]))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)-11277)))))));
                        var_17 *= ((/* implicit */int) (+(((((/* implicit */_Bool) arr_8 [i_4])) ? (((/* implicit */unsigned int) var_2)) : (var_10)))));
                        var_18 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_2 [i_2] [i_2])))) ? ((((_Bool)1) ? (((/* implicit */int) arr_14 [i_2] [i_4 - 1] [i_3] [i_2])) : (((/* implicit */int) arr_14 [i_2] [i_6] [i_4] [i_6])))) : (((/* implicit */int) arr_9 [i_3] [i_2]))));
                    }
                    for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 0; i_8 < 21; i_8 += 4) 
                        {
                            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (arr_1 [i_2] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)107))) != (((((/* implicit */_Bool) arr_1 [i_3] [i_7])) ? (((/* implicit */unsigned long long int) -253943754)) : (arr_1 [i_3] [i_2])))))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_1))));
                        }
                        arr_28 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 3] [i_3 + 2] = ((/* implicit */unsigned char) (((-((-(((/* implicit */int) arr_26 [i_2] [i_3] [i_7])))))) <= (min((((((/* implicit */_Bool) arr_22 [i_2] [i_3] [i_3] [i_2] [i_3 - 1] [i_3])) ? (((/* implicit */int) arr_19 [i_3] [i_4] [i_3 - 3] [i_3])) : (((/* implicit */int) arr_25 [i_2] [i_3 + 2])))), (((/* implicit */int) (_Bool)1))))));
                        arr_29 [i_2] [i_3] [i_4] [i_7] = var_6;
                        var_21 &= ((/* implicit */_Bool) (+(var_10)));
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) | (var_10)))) || (arr_27 [i_3] [i_4 - 1] [i_7] [i_7] [i_7]))))) ^ (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) arr_23 [i_2] [i_2] [i_4] [i_7])) : (arr_24 [i_7] [i_4 - 1] [i_3 - 3] [i_2])))), (var_3)))));
                    }
                    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) max((arr_15 [i_2] [i_3 - 1] [i_2]), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)51434)) <= (1042282971)))))))));
                    var_24 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) arr_1 [i_2] [i_4])) ? (((/* implicit */int) arr_22 [i_2] [i_2] [i_2] [i_3 + 2] [i_4] [i_4])) : (((/* implicit */int) arr_3 [i_2] [i_2]))))))));
                }
            } 
        } 
        arr_30 [i_2] = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63036))) + (((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_2]))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((short)-11304), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */int) (unsigned short)52150)) : (((/* implicit */int) var_1)))))));
    }
    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 2) /* same iter space */
    {
        var_25 &= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) -1042282968)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) | (((((/* implicit */_Bool) arr_15 [i_9] [i_9] [i_9])) ? (arr_15 [i_9] [i_9] [i_9]) : (((/* implicit */long long int) var_7))))));
        arr_33 [i_9] [i_9] = ((((/* implicit */_Bool) var_3)) ? (max((((/* implicit */unsigned int) var_6)), ((((_Bool)1) ? (4294967295U) : (581327993U))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)2491)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)36561))))), (((((/* implicit */_Bool) -1439192152)) ? (((/* implicit */unsigned int) arr_23 [i_9] [i_9] [i_9] [i_9])) : (var_10))))));
        arr_34 [i_9] = min((((var_9) + (((/* implicit */unsigned long long int) var_10)))), (((/* implicit */unsigned long long int) arr_16 [i_9] [i_9] [i_9] [i_9])));
    }
    for (unsigned int i_10 = 0; i_10 < 21; i_10 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((var_3) % (((/* implicit */unsigned long long int) 1042282971)))))));
        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_37 [i_10]))), (((((/* implicit */int) (signed char)112)) / (((/* implicit */int) (unsigned short)28975)))))))));
    }
    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) min((var_4), (((/* implicit */short) var_1)))))))) ? (min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) -432766184)) : (var_9))), (((/* implicit */unsigned long long int) -1042282972)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) var_0))) ? (((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (var_2)))) : ((-(var_10))))))));
}
