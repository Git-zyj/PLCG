/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99650
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
    var_14 = ((/* implicit */signed char) 8563928504026263829ULL);
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) 13548335912279403736ULL)))) ? (((((/* implicit */_Bool) 4898408161430147879ULL)) ? (var_11) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned char) arr_0 [i_0])))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */long long int) max((min((((((/* implicit */_Bool) arr_7 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3] [i_1]))) : (9882815569683287817ULL))), (((/* implicit */unsigned long long int) ((unsigned short) arr_12 [10U]))))), (((/* implicit */unsigned long long int) (_Bool)1))));
                        var_16 = ((max((9223372036854775807ULL), (((/* implicit */unsigned long long int) ((_Bool) 12771924718600325385ULL))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_1)))));
                        var_17 -= ((/* implicit */long long int) (~(((var_7) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0])))))));
                    }
                } 
            } 
            var_18 += ((/* implicit */unsigned long long int) var_1);
            /* LoopNest 3 */
            for (unsigned short i_4 = 2; i_4 < 14; i_4 += 1) 
            {
                for (signed char i_5 = 2; i_5 < 14; i_5 += 2) 
                {
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */int) arr_18 [i_0]);
                            var_20 = ((/* implicit */_Bool) ((unsigned int) ((arr_8 [i_4 - 2] [i_5 - 1] [i_6] [i_6]) * (arr_8 [i_4 + 1] [i_5 + 1] [i_5] [i_5]))));
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((unsigned long long int) ((5674819355109226239ULL) - (((((/* implicit */_Bool) 4898408161430147879ULL)) ? (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [i_1] [i_1])) : (13548335912279403724ULL)))))))));
            arr_23 [i_1] = min((((((/* implicit */_Bool) 5674819355109226228ULL)) ? (((2485619878894513470LL) - (arr_22 [i_0] [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_10))))))), (((/* implicit */long long int) min((((unsigned char) var_12)), (((/* implicit */unsigned char) (signed char)66))))));
        }
        /* vectorizable */
        for (unsigned char i_7 = 2; i_7 < 14; i_7 += 2) 
        {
            var_22 += ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)213))) : ((~(var_7))));
            var_23 = ((/* implicit */int) 2887222329U);
            var_24 ^= ((/* implicit */unsigned long long int) var_5);
            var_25 = ((/* implicit */unsigned char) ((long long int) var_9));
        }
        /* vectorizable */
        for (long long int i_8 = 0; i_8 < 15; i_8 += 1) 
        {
            arr_31 [i_8] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1829532391)) ? (((/* implicit */int) arr_29 [i_8] [i_8] [i_0])) : (((/* implicit */int) arr_27 [i_0] [i_8]))));
            arr_32 [i_0] [i_8] [i_8] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_8])) != (((/* implicit */int) (signed char)-52)))) ? (arr_25 [i_8]) : (((/* implicit */int) (short)-11193))));
            arr_33 [i_0] [i_8] [i_0] = ((/* implicit */int) ((long long int) var_3));
        }
        arr_34 [i_0] [i_0] = ((/* implicit */unsigned int) (short)-10076);
    }
    for (unsigned long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        var_26 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_35 [i_9] [i_9]))) || (((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)6531)))) ? (min((4898408161430147877ULL), (((/* implicit */unsigned long long int) (short)17360)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9])) && (((/* implicit */_Bool) var_7)))))))))));
        var_27 = ((/* implicit */unsigned int) max((((arr_36 [i_9] [i_9]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_36 [i_9] [i_9])))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_7))))) : (((/* implicit */int) ((_Bool) var_2)))))));
        var_28 = ((/* implicit */long long int) arr_36 [i_9] [i_9]);
        var_29 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (((unsigned int) var_2))));
    }
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */long long int) 16593538755134453710ULL);
        var_31 = ((/* implicit */int) ((unsigned short) 3948479583U));
    }
    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 1) 
            {
                {
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)28600)) || (((/* implicit */_Bool) ((int) (~(((/* implicit */int) var_13))))))));
                    var_33 = ((/* implicit */long long int) 1173117627U);
                }
            } 
        } 
        var_34 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_5)), (var_8))) * (((/* implicit */int) arr_5 [i_11] [i_11]))));
    }
}
