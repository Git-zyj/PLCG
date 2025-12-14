/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77353
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
    var_20 = ((/* implicit */short) (unsigned short)43381);
    var_21 &= ((/* implicit */_Bool) 622290061);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_0] [i_2] [i_0] = ((/* implicit */int) (unsigned short)22155);
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        var_22 = ((((/* implicit */int) var_12)) >> (((((/* implicit */int) min((var_6), (((/* implicit */short) (unsigned char)41))))) + (2619))));
                        arr_12 [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)43374))))))));
                    }
                    for (int i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) 2097151LL))));
                        var_24 = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) -381705716)) >= (1458549738U)))), (arr_15 [i_4] [i_2] [i_1] [i_0 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_2 - 1] [i_2 + 1] [i_2] [i_2 - 1])))));
                        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */long long int) 3842315030U)) : (arr_4 [i_0 + 1]))), (((/* implicit */long long int) (~(((/* implicit */int) var_10)))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_17))))) ? (3842315030U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17)))))) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) min(((unsigned char)41), (((/* implicit */unsigned char) var_8))))) << (((((((/* implicit */_Bool) var_15)) ? (-5929891402454596918LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) + (5929891402454596942LL)))))));
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                {
                    var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((max((((/* implicit */short) var_8)), (var_7))), (((/* implicit */short) (unsigned char)109)))))) : (((452652266U) << (((((/* implicit */int) (unsigned char)255)) - (234)))))));
                    arr_25 [(unsigned char)18] [i_7] [i_5] = max((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) (short)16383)), ((unsigned short)43374))))), (max((((/* implicit */int) ((var_5) || (((/* implicit */_Bool) arr_15 [i_5] [i_6] [i_7] [i_5]))))), (min((((/* implicit */int) var_8)), (-622290064))))));
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) var_12))));
                    arr_26 [(unsigned short)16] [i_7] [i_7] [i_5] = ((/* implicit */unsigned char) ((unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 167815689463954643LL)) ? (var_4) : (((/* implicit */unsigned int) arr_22 [i_5]))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 19; i_8 += 2) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_6 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_0 [i_6 - 1]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) var_11)), (arr_0 [i_6 - 1])))) : (((/* implicit */int) ((((/* implicit */int) var_6)) != (((/* implicit */int) var_13)))))));
                                var_29 -= ((/* implicit */unsigned int) arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]);
                                var_30 &= min((((/* implicit */int) (unsigned char)203)), (max((((arr_28 [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_18)))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) >= (var_4)))))));
                                var_31 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8 - 1] [i_6 - 1]))) + (4294967292U))) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_31 [i_7] [i_8 - 2] [i_8] [i_8] [i_7]), (((/* implicit */unsigned char) var_11))))))));
                                arr_32 [i_5] [i_7] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) var_9)), (107423336950914239LL))) / (((arr_29 [i_5] [i_6] [i_6 - 1] [(short)12] [i_8 + 1] [i_8]) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_33 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_18))) ? (2126144466U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-2378)) ? (((/* implicit */int) arr_6 [i_5] [i_5])) : (((/* implicit */int) var_17)))))));
    }
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
    {
        var_32 -= ((/* implicit */short) arr_20 [i_10] [i_10] [i_10]);
        arr_36 [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((long long int) max((((/* implicit */unsigned int) (unsigned char)52)), (2126144466U))))));
    }
    for (signed char i_11 = 2; i_11 < 21; i_11 += 3) /* same iter space */
    {
        arr_41 [i_11 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5))))) ? (((var_1) >> (0))) : (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_7)) : (var_1))))) + (((/* implicit */int) ((short) var_19)))));
        var_33 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_13))));
    }
    for (signed char i_12 = 2; i_12 < 21; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) 
        {
            var_34 -= ((/* implicit */long long int) arr_11 [i_13] [i_13] [i_13] [i_12 + 1] [i_12] [i_12]);
            arr_48 [12U] &= ((/* implicit */int) ((long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_9))))) != ((~(var_15))))));
        }
        var_35 = ((/* implicit */int) 3794342396U);
    }
}
