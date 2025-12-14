/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85411
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned long long int) var_4);
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                var_13 += max((((/* implicit */int) var_3)), (((arr_8 [i_2 - 1] [i_1] [i_2]) ? (((1641328056) + (((/* implicit */int) (short)-22052)))) : (((/* implicit */int) var_7)))));
                arr_9 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */int) var_9)) + (((/* implicit */int) (signed char)-110)))))))));
            }
            var_14 = ((/* implicit */short) min((max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (var_8))), (((unsigned int) arr_7 [i_0] [8U] [(unsigned char)8])))), (((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]))));
        }
        for (long long int i_3 = 3; i_3 < 12; i_3 += 3) 
        {
            arr_12 [i_0] = max((arr_8 [i_0] [i_3 - 1] [5ULL]), (((((/* implicit */_Bool) (unsigned char)226)) || (((/* implicit */_Bool) 9700832168654768396ULL)))));
            /* LoopNest 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (short i_5 = 2; i_5 < 12; i_5 += 1) 
                {
                    for (unsigned int i_6 = 2; i_6 < 10; i_6 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */int) max((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)226))))) ? (((arr_7 [i_0] [8U] [i_6]) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_5])))))) ? (((((int) arr_17 [i_0] [i_0] [i_0] [i_0])) & (((((/* implicit */int) (short)19041)) + (((/* implicit */int) arr_3 [i_3])))))) : (((/* implicit */int) var_4))))));
                            arr_21 [i_0] [i_3] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) var_4);
                        }
                    } 
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
    {
        arr_25 [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                for (int i_10 = 4; i_10 < 24; i_10 += 3) 
                {
                    {
                        arr_35 [i_8] = ((((/* implicit */_Bool) ((int) ((2064384) < (((/* implicit */int) (_Bool)1)))))) ? (((int) (_Bool)1)) : (((/* implicit */int) ((arr_23 [i_10 - 1]) == (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))))));
                        var_16 *= ((/* implicit */signed char) (-((((~(var_8))) * (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)56)))))))));
                        var_17 = ((/* implicit */short) min((((int) (unsigned char)226)), (((((/* implicit */_Bool) ((short) (unsigned char)30))) ? (((((/* implicit */int) arr_30 [i_7] [i_8] [i_9])) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)226))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 25; i_11 += 3) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        arr_42 [i_7] [i_8] [i_11] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_30 [i_7] [i_8] [i_7])) : (((/* implicit */int) arr_26 [i_7])))));
                        var_18 = ((/* implicit */unsigned char) arr_22 [i_7]);
                        var_19 = ((/* implicit */_Bool) arr_33 [i_8] [i_11] [i_12]);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((long long int) (-(arr_41 [16LL] [i_7] [i_11] [i_12] [i_11])))))));
                    }
                } 
            } 
        }
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_24 [i_7])))))));
    }
    for (unsigned char i_13 = 0; i_13 < 21; i_13 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            arr_48 [i_13] [i_14] [i_13] = var_7;
            var_22 = ((/* implicit */_Bool) ((arr_27 [i_14]) & (((/* implicit */int) var_11))));
            var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3305065657706749371ULL)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned char)227))));
            arr_49 [i_13] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)226)) ? (6592385275969816110ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)227)))));
        }
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_31 [i_13] [(short)0] [i_13]))));
        var_25 *= ((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (max((min((arr_32 [i_13] [i_13] [i_13]), (((/* implicit */int) arr_26 [i_13])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))));
        var_26 = ((/* implicit */int) (((!(arr_28 [i_13]))) ? (min((min((var_0), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (!(var_5)))))) : (((/* implicit */long long int) ((var_6) ? (((/* implicit */int) arr_30 [i_13] [i_13] [i_13])) : (((/* implicit */int) (!(var_4)))))))));
    }
    var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_9))))))));
    var_28 = ((/* implicit */int) min((var_0), (min((min((var_0), (((/* implicit */long long int) var_1)))), (((/* implicit */long long int) var_10))))));
    var_29 = ((/* implicit */int) var_3);
}
