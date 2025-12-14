/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80971
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_3 [i_1 - 1] [i_1 + 2]))) ? (((int) var_1)) : (((/* implicit */int) arr_2 [i_2]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                var_13 += ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_3]))) : (arr_12 [i_4] [i_1] [i_0]))) : ((~(arr_3 [i_0] [i_0])))))));
                                arr_14 [i_0] [i_3] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 2])) ? (((((/* implicit */_Bool) arr_10 [i_1 + 3] [i_1] [i_1 - 2] [i_1 + 3])) ? (arr_10 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]) : (arr_10 [i_1 - 1] [i_1 - 1] [17LL] [i_1 - 1]))) : (((((/* implicit */_Bool) var_10)) ? ((~(((/* implicit */int) (unsigned char)120)))) : (((/* implicit */int) (unsigned char)127))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_0)), (var_5)))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) (signed char)-44)) ? (4154021889193471886LL) : (4154021889193471886LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */_Bool) (signed char)44)) ? (((/* implicit */long long int) 0U)) : (-7230263425059825261LL)))));
        var_16 = ((/* implicit */unsigned char) ((((_Bool) var_8)) ? (((((/* implicit */_Bool) (-(-4154021889193471886LL)))) ? (((/* implicit */int) arr_5 [i_5] [i_5] [i_5])) : (((/* implicit */int) min((((/* implicit */short) var_0)), (arr_5 [i_5] [i_5] [i_5])))))) : (((/* implicit */int) ((_Bool) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5])))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_8 [i_6])) ? (((/* implicit */int) (unsigned short)3833)) : (((/* implicit */int) (signed char)44))))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_6])) ? (((((/* implicit */_Bool) ((short) var_6))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_6] [i_6] [i_6] [i_6] [i_6])))) : (var_2))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 19; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 22; i_9 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_10 = 2; i_10 < 21; i_10 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_7 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_7 - 2]))) : (arr_16 [i_7 - 2])))) ? ((-(var_2))) : (((/* implicit */unsigned long long int) (~(arr_16 [i_7 - 1]))))));
                            var_20 = ((/* implicit */unsigned short) (-(0LL)));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_12 [i_10 - 2] [i_9] [i_9]), (((/* implicit */long long int) arr_18 [i_10 + 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9])) ? (arr_18 [i_10 - 2]) : (((/* implicit */unsigned int) arr_27 [i_6] [i_6] [i_8] [i_9] [i_6] [i_6] [i_8]))))) : (min((var_5), (((/* implicit */unsigned long long int) arr_18 [i_6]))))));
                            var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_9)))) ? (min((arr_27 [i_6] [i_7] [i_7] [i_8] [i_9] [i_10 - 1] [i_10]), (arr_27 [i_9] [i_8] [i_9] [i_9] [i_9] [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_27 [i_10] [i_9] [i_9] [i_9] [i_8] [i_7 + 2] [i_6])) ? (arr_27 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10 - 1] [i_10]) : (arr_27 [i_10 + 1] [i_6] [i_9] [i_8] [i_7 + 1] [i_6] [i_6])))));
                            arr_30 [i_6] [i_9] = ((((/* implicit */_Bool) (+(555943334U)))) ? ((-(arr_12 [i_8] [i_9] [i_9]))) : (((((/* implicit */_Bool) arr_12 [i_10 + 1] [i_9] [i_7 - 2])) ? (arr_12 [i_9] [i_9] [i_8]) : (arr_12 [i_6] [i_9] [i_6]))));
                        }
                        /* vectorizable */
                        for (long long int i_11 = 2; i_11 < 19; i_11 += 4) 
                        {
                            arr_34 [i_9] [i_6] [i_6] [i_7 + 3] [i_8] [i_9] [i_11] = ((/* implicit */_Bool) ((signed char) arr_18 [i_11 - 1]));
                            var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) (-(arr_3 [i_7 - 1] [i_8]))))));
                            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) (+(((/* implicit */int) (short)32767)))))));
                            arr_35 [i_6] [i_6] [i_8] [i_9] [i_11] = ((/* implicit */short) arr_18 [i_7]);
                        }
                        var_25 &= ((/* implicit */signed char) arr_21 [i_8]);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_12 = 0; i_12 < 22; i_12 += 3) 
        {
            for (long long int i_13 = 3; i_13 < 19; i_13 += 2) 
            {
                {
                    arr_41 [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) (~((-(var_6)))));
                    var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_12] [i_12] [i_13 + 2] [i_13] [i_6])) ? (((((/* implicit */_Bool) -4154021889193471898LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14832))) : (arr_13 [i_6] [i_6] [i_6] [i_13] [i_13]))) : (((/* implicit */unsigned int) 0))));
                    var_27 = (-((+(var_7))));
                    var_28 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21324)) ? (((/* implicit */int) arr_7 [i_13 + 2] [i_13 + 2] [i_13 + 2])) : (((/* implicit */int) arr_7 [i_13 - 2] [i_13] [i_13 + 3])))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        arr_46 [i_14] = ((/* implicit */_Bool) arr_4 [i_14] [i_14] [i_14]);
        var_29 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_14] [i_14] [i_14] [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_14]))) : (arr_11 [i_14] [i_14] [i_14] [i_14] [i_14])))) ? (arr_16 [i_14]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3833)) ? (((/* implicit */int) (short)32767)) : (-1296686676))))));
        var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_0)))))));
    }
    var_31 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_10))));
}
