/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78574
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (+((+(((/* implicit */int) arr_4 [i_0] [i_0] [i_1])))))))));
                var_15 = ((/* implicit */_Bool) 2322126547U);
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) min((2322126547U), (((/* implicit */unsigned int) min((var_2), ((-(((/* implicit */int) var_12))))))))))));
                            var_17 = ((/* implicit */unsigned int) (unsigned short)16);
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned int) (+((+(((/* implicit */int) (unsigned short)33724))))))), (1972840729U)));
    /* LoopSeq 2 */
    for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_12 [i_4] = ((/* implicit */unsigned long long int) ((min((1972840713U), (((/* implicit */unsigned int) var_0)))) << (((((((/* implicit */int) var_0)) & (((/* implicit */int) arr_2 [i_4])))) - (20488)))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 13; i_5 += 3) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_19 [i_4] &= ((/* implicit */short) ((long long int) 2322126567U));
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((unsigned short) ((4294967295U) * (arr_8 [i_4] [i_4] [i_4] [i_4])))))));
                    /* LoopNest 2 */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned short) (unsigned char)255);
                                arr_24 [i_5] [i_8] [i_6] = ((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))), (min((((/* implicit */unsigned int) var_6)), (2322126553U))))) | (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_8] [12U])))));
                                var_21 &= (unsigned short)22959;
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */short) (signed char)74);
                    var_23 = ((/* implicit */unsigned char) (((-(min((((/* implicit */unsigned int) arr_6 [i_4] [i_5] [i_5] [i_6])), (var_10))))) >> (((((unsigned int) (+(1972840731U)))) - (1972840729U)))));
                }
            } 
        } 
        var_24 = var_0;
    }
    for (unsigned int i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 13; i_10 += 4) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) var_4)) & (((/* implicit */int) (unsigned short)26781)))), (((/* implicit */int) arr_5 [i_10] [i_11]))))) ? (((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (2322126548U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-31823)) != (((/* implicit */int) (unsigned char)176))))))));
                    var_26 = ((/* implicit */long long int) var_0);
                    arr_32 [i_11] [i_9] = ((/* implicit */unsigned short) arr_21 [(_Bool)1] [i_10] [(short)2] [i_11]);
                }
            } 
        } 
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((arr_17 [i_9] [i_9] [i_9] [i_9]) >= (min((((/* implicit */int) var_1)), (arr_17 [i_9] [i_9] [i_9] [i_9]))))))));
        arr_33 [i_9] [i_9] = ((/* implicit */long long int) ((min((arr_25 [i_9]), (((/* implicit */unsigned int) arr_4 [i_9] [i_9] [i_9])))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_9])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_12 = 0; i_12 < 21; i_12 += 2) 
    {
        for (unsigned short i_13 = 1; i_13 < 20; i_13 += 3) 
        {
            {
                var_28 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_34 [i_13])), (min((((/* implicit */unsigned int) (unsigned char)182)), (arr_37 [i_13] [i_13])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_11)))) : ((+(min((((/* implicit */long long int) (signed char)-103)), (arr_38 [i_12] [(short)3]))))));
                arr_39 [i_12] [i_13] [i_13] = max((min((546291875U), (((/* implicit */unsigned int) ((int) arr_34 [i_12]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_36 [i_13]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)69)))))))));
                var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_35 [(short)8] [i_13 - 1]) : (((/* implicit */unsigned int) 47871435))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2322126553U)) ? (((/* implicit */int) ((short) arr_36 [i_12]))) : ((+(((/* implicit */int) var_6))))))) : (2322126567U))))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) (+((-(((/* implicit */int) arr_34 [i_12]))))))) ? (min((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_42 [i_12] [i_12] [i_12])))) : ((+((+(((/* implicit */int) (_Bool)1))))))));
                    /* LoopNest 2 */
                    for (short i_15 = 0; i_15 < 21; i_15 += 2) 
                    {
                        for (int i_16 = 1; i_16 < 20; i_16 += 4) 
                        {
                            {
                                var_31 = min((((/* implicit */short) (signed char)-103)), ((short)511));
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_12] [i_12] [i_15])) || (((/* implicit */_Bool) var_2))));
                                var_33 = ((/* implicit */unsigned short) arr_43 [i_15] [i_15] [i_13] [i_13] [i_12]);
                                var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_48 [i_12] [i_12] [i_15]), (((/* implicit */short) (signed char)103))))) >= (min((((((/* implicit */_Bool) 1972840729U)) ? (((/* implicit */int) arr_49 [i_16 + 1] [i_15] [i_14] [(unsigned char)8] [i_12] [i_12])) : (((/* implicit */int) var_9)))), (((/* implicit */int) arr_43 [i_13 - 1] [i_16 + 1] [i_15] [i_16 - 1] [i_16 + 1])))))))));
                            }
                        } 
                    } 
                    arr_51 [i_13] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) min((((/* implicit */short) var_5)), (arr_41 [i_12] [(short)16] [i_13 + 1] [i_12])))) ? (((/* implicit */unsigned long long int) (~(var_10)))) : (((((/* implicit */_Bool) (short)-4)) ? (14504500949999394422ULL) : (3942243123710157194ULL)))))));
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                        {
                            {
                                var_35 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_49 [(short)0] [i_13 - 1] [i_14] [i_14] [(_Bool)0] [i_18])) | (((/* implicit */int) arr_50 [i_12] [10LL] [i_14] [i_17] [i_18])))))))), (((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (2106392334)))) ? (min((((/* implicit */unsigned long long int) var_7)), (14504500949999394436ULL))) : (((/* implicit */unsigned long long int) var_2))))));
                                var_36 |= ((/* implicit */unsigned short) (+(((unsigned int) ((long long int) var_1)))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
