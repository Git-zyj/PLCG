/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83531
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
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)-43))) ? (((/* implicit */int) ((_Bool) (short)16380))) : (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((/* implicit */int) min((((/* implicit */unsigned short) arr_3 [i_2])), (arr_1 [i_0 - 1] [i_2])))), (max((((/* implicit */int) (unsigned short)7106)), (((((/* implicit */int) var_6)) + (((/* implicit */int) arr_1 [i_0] [i_1])))))))))));
                    arr_11 [i_0] = max((((/* implicit */unsigned long long int) 0U)), (6ULL));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((int) arr_0 [i_0])))));
            var_20 = ((/* implicit */int) ((((/* implicit */_Bool) -2404509961714412725LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)768))) : (-2404509961714412725LL)));
        }
    }
    for (short i_4 = 1; i_4 < 13; i_4 += 2) /* same iter space */
    {
        arr_18 [i_4] = ((/* implicit */signed char) (~(-22)));
        /* LoopSeq 2 */
        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
        {
            var_21 = ((/* implicit */short) min((((((/* implicit */int) ((((/* implicit */_Bool) (short)8497)) && (((/* implicit */_Bool) (short)-21137))))) <= (((/* implicit */int) ((arr_20 [i_4 + 1]) != (arr_17 [i_4] [i_4])))))), ((!(((/* implicit */_Bool) arr_1 [i_4 + 1] [i_4 + 1]))))));
            var_22 -= ((int) ((3248147382424045134ULL) < (((/* implicit */unsigned long long int) 16320U))));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 13; i_6 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((10ULL) * (18446744073709551615ULL)))) ? (((var_13) ? (((/* implicit */unsigned int) 11)) : (var_9))) : (((/* implicit */unsigned int) ((int) arr_1 [i_4] [i_6 + 1])))));
            arr_24 [i_4] [i_4] = (~(arr_9 [i_6 - 1] [i_6 - 1] [(unsigned short)0]));
        }
        var_24 = ((/* implicit */int) var_10);
        var_25 = ((/* implicit */unsigned int) min((var_25), (((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_6 [i_4] [i_4])))))));
    }
    for (int i_7 = 1; i_7 < 11; i_7 += 4) 
    {
        var_26 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((arr_8 [i_7 + 1] [i_7] [i_7] [i_7 - 1]) ^ (2147418112)))) >= (((((/* implicit */_Bool) (short)-25141)) ? (((unsigned long long int) 18446744073709551614ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
        var_27 -= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7 - 1] [i_7 + 3] [i_7 + 3])) ? (arr_19 [i_7]) : (((/* implicit */unsigned long long int) var_10))))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) - (var_5)))))) << (((long long int) 1U))));
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 14; i_8 += 2) 
        {
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    var_28 -= ((int) 18446744073709551605ULL);
                    arr_37 [i_8] [i_8] [i_8] = ((/* implicit */unsigned char) ((short) arr_5 [i_7 + 3] [3] [i_10]));
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_29 -= ((/* implicit */unsigned short) ((arr_26 [i_7 + 3] [i_8]) & (min((arr_5 [i_7 + 1] [i_8] [i_9]), (arr_5 [i_7] [i_8] [i_9])))));
                    var_30 -= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */_Bool) ((int) var_2))) || (((var_0) <= (arr_28 [i_9])))))), ((((!(((/* implicit */_Bool) arr_10 [i_7] [i_9] [i_9] [i_11])))) ? (((((/* implicit */int) var_13)) ^ (((/* implicit */int) (short)12176)))) : (((/* implicit */int) (unsigned short)1))))));
                    arr_41 [i_7] [i_7] [i_7] [i_11] [i_7] [i_7] = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) arr_36 [i_7] [i_7 + 3] [i_7 + 3] [(unsigned char)5] [i_7])))), (((/* implicit */int) ((_Bool) arr_19 [i_7])))));
                }
                var_31 -= ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (short)14288)))));
                arr_42 [(signed char)10] [(signed char)10] [(unsigned short)10] [(signed char)10] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (arr_35 [i_9] [i_9] [i_9])))), (min((((/* implicit */unsigned long long int) -1843818805)), (var_12)))))) ? (min((7ULL), (((/* implicit */unsigned long long int) ((unsigned short) -1053746571))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) -1008843322))))))));
            }
            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_11))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)230)) >= (((/* implicit */int) (short)-1))))) : (arr_28 [i_7 + 2])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [10U] [(unsigned char)1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_8] [i_8]))) : (arr_20 [i_7])))) ? (var_14) : (((/* implicit */unsigned long long int) (+(arr_38 [i_7] [i_7] [i_7] [i_7] [i_7] [11ULL])))))))));
            var_33 = ((/* implicit */unsigned short) (~(var_14)));
        }
        for (short i_12 = 3; i_12 < 10; i_12 += 2) 
        {
            arr_45 [i_7 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_28 [i_7 + 2]))) ? ((-(18446744073709551607ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_7 + 2] [i_7 + 1] [i_12 - 3])))))) ? (arr_39 [i_12]) : ((~(arr_8 [i_7] [i_7 + 1] [i_12 - 2] [i_7 + 1]))));
            var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((min((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)224))))), (((long long int) (short)20)))) >> (min((((/* implicit */unsigned int) (unsigned short)11)), (2139095040U))))))));
            arr_46 [i_7 + 3] = ((/* implicit */unsigned long long int) var_5);
        }
        arr_47 [i_7] [i_7] = ((/* implicit */short) (!(((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_9 [i_7] [(_Bool)1] [i_7])) ? (((/* implicit */int) arr_16 [i_7])) : (((/* implicit */int) arr_43 [i_7] [i_7] [i_7 - 1]))))))));
    }
    var_35 -= ((int) ((((/* implicit */unsigned long long int) var_5)) / (((unsigned long long int) var_10))));
}
