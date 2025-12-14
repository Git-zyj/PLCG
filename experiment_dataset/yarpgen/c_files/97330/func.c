/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97330
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
    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)255)), (var_11)))) : (var_3)))) ? (((/* implicit */unsigned long long int) max((var_13), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_6))))))) : (min((((/* implicit */unsigned long long int) (+(var_15)))), (min((var_3), (((/* implicit */unsigned long long int) var_0))))))));
    var_17 = ((/* implicit */unsigned long long int) ((_Bool) var_1));
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~((~(var_11)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((var_4) - (var_11)))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        arr_3 [i_0] = (-(((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (8313777497312177205ULL))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                {
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_8)), (var_14)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_10)))) ? ((-(var_15))) : (272746936U))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 2) /* same iter space */
                    {
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) var_2)))))));
                        var_21 ^= ((/* implicit */short) var_7);
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_15))));
                        var_23 -= ((/* implicit */unsigned short) ((((/* implicit */int) (short)-3825)) % (((((/* implicit */int) (short)3833)) - (((/* implicit */int) var_8))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 2) /* same iter space */
                    {
                        var_24 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) != (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (1826780952))))))) ^ (1128082052022852319ULL));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 16; i_5 += 3) 
                        {
                            arr_17 [i_5] [i_2] [i_0] = ((/* implicit */unsigned long long int) (+((~(3858918301U)))));
                            var_25 = ((/* implicit */int) (-((-(var_1)))));
                            arr_18 [i_2] [i_4] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((var_4) / (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            arr_22 [i_0] [i_0] [i_1] [i_2 - 2] [i_4] [i_2] = (+(((/* implicit */int) (signed char)-9)));
                            arr_23 [i_2] [i_2 - 3] [i_4] [i_2 - 3] [i_1] [i_2] = ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) % (var_10));
                        }
                        /* vectorizable */
                        for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_26 [i_2] [i_4] [i_2] [i_1] [i_2] = ((100663296U) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))));
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) 607827167U)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1106)))));
                            var_27 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))));
                        }
                        /* vectorizable */
                        for (unsigned char i_8 = 2; i_8 < 17; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                            arr_29 [i_8 - 2] [i_2] [i_2 - 1] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (8773110882648039326ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)255)))))));
                            var_29 = var_12;
                        }
                    }
                    var_30 = ((/* implicit */signed char) max((var_30), (((/* implicit */signed char) var_3))));
                    arr_30 [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) var_13);
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
    }
    for (unsigned short i_9 = 1; i_9 < 13; i_9 += 1) 
    {
        var_32 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_6)) % (((/* implicit */int) (short)31764)))));
        arr_33 [i_9] = ((/* implicit */int) min((((((/* implicit */_Bool) var_9)) ? (var_10) : (3498576542U))), (((((/* implicit */_Bool) var_1)) ? (var_15) : (var_10)))));
        arr_34 [i_9] [i_9] = ((/* implicit */unsigned long long int) var_9);
        arr_35 [i_9 + 1] [10] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) 1783902714U)), (8393248877467268041ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (unsigned char)0)))))));
    }
    for (int i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        arr_38 [i_10] = ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), (var_0)))), (((((/* implicit */_Bool) (short)-18415)) ? (10220218408041235786ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3825)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_11 = 1; i_11 < 9; i_11 += 2) 
        {
            for (unsigned int i_12 = 2; i_12 < 8; i_12 += 2) 
            {
                for (int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    {
                        arr_49 [2U] [2U] [i_10] [i_12] [i_13] = ((/* implicit */short) ((unsigned char) (~(var_11))));
                        var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (((((/* implicit */_Bool) (short)-3854)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned char)1))))))) ? (var_11) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-4825)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (short)-18412))))))))));
                        var_34 ^= ((/* implicit */short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (signed char)-9)))) / (((/* implicit */int) ((unsigned short) var_3)))));
                        var_35 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_14) : (((/* implicit */int) var_2))))) && (((/* implicit */_Bool) var_13)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_12)))))) : (var_10));
                    }
                } 
            } 
        } 
        var_36 = ((/* implicit */unsigned int) var_6);
        arr_50 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23865)) ? (62914560) : (((/* implicit */int) (unsigned short)64356))))) ? (max((((/* implicit */unsigned long long int) (unsigned char)42)), (var_3))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)15)))))));
    }
}
