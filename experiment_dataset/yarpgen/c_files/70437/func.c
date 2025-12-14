/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70437
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
    var_10 = (short)-22042;
    /* LoopSeq 4 */
    for (short i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */long long int) var_9);
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((((arr_1 [i_0]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-2941))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_1 [i_0]))))))) : (((/* implicit */int) ((((0U) == (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) && ((!(((/* implicit */_Bool) var_8)))))))));
        arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)-22042)) != (((/* implicit */int) (short)22042))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) arr_1 [6ULL])) & ((~(arr_0 [i_1] [i_1])))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
        {
            for (long long int i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    {
                        var_11 = ((/* implicit */unsigned long long int) arr_7 [i_1]);
                        var_12 = arr_17 [i_1];
                        var_13 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_11 [i_1] [i_1 - 1]))));
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (short)11636))) < (551699247560366591LL))))));
                    }
                } 
            } 
        } 
        var_15 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_5)) >= (15782226254950967276ULL))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1 - 1] [7ULL]))) != (arr_9 [i_1 + 1]))))) : (var_5)));
        var_16 = ((/* implicit */short) ((((/* implicit */long long int) 3688443152U)) >= (((((/* implicit */_Bool) var_0)) ? (0LL) : (var_1)))));
    }
    for (unsigned int i_5 = 2; i_5 < 12; i_5 += 4) /* same iter space */
    {
        arr_22 [i_5] = var_6;
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
        {
            var_17 ^= ((/* implicit */unsigned int) (-(min((-2876227428916438591LL), (-8824980887757114791LL)))));
            var_18 ^= ((/* implicit */unsigned int) max((((((((/* implicit */_Bool) 2876227428916438606LL)) ? (var_6) : (((/* implicit */long long int) 3688443151U)))) / (((/* implicit */long long int) 780028757U)))), (((4817975485926867959LL) / (((((/* implicit */_Bool) -2876227428916438596LL)) ? (arr_3 [i_5]) : (var_5)))))));
        }
        for (long long int i_7 = 1; i_7 < 12; i_7 += 1) /* same iter space */
        {
            arr_27 [i_5] [i_7 + 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -6888093551559687105LL)) ? (5101647839258945249LL) : (1474981435810604490LL)))) ? (max((arr_21 [i_7 - 1] [i_7 + 1]), (arr_21 [i_7 + 2] [i_7]))) : ((+(arr_2 [i_5]))));
            arr_28 [i_5] [i_5] [i_5] = ((/* implicit */short) (~(var_6)));
            var_19 = ((/* implicit */long long int) ((((/* implicit */int) var_9)) << (((((((((/* implicit */int) (short)-25109)) + (2147483647))) >> (((((((((/* implicit */_Bool) -9223372036854775788LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)22042))))) - (-9223372036854775789LL))) + (31LL))))) - (524278)))));
        }
    }
    for (unsigned int i_8 = 2; i_8 < 12; i_8 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_9 = 3; i_9 < 10; i_9 += 1) 
        {
            for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        arr_40 [i_8] [i_8] [i_10] [i_11] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (~(606524145U))))));
                        var_20 = min((((/* implicit */long long int) ((short) var_2))), (min((-2876227428916438597LL), (arr_3 [i_8]))));
                        arr_41 [i_10] = ((/* implicit */short) var_6);
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 1) 
        {
            for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                {
                    arr_46 [i_8] [13LL] [i_12] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_8] [i_12] [5LL] [i_12]))) / (((9017202359929264604LL) / (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_13] [i_8] [i_13])))))))) : (4663021287577789736ULL)));
                    arr_47 [i_8] [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_2 [i_13])))) ? (max((arr_2 [i_13]), (arr_2 [i_8]))) : ((-(arr_2 [i_8]))));
                    var_21 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32761)) ? (((/* implicit */unsigned long long int) -6116524914658387635LL)) : (13ULL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-22042))))) : (8800216524638868374ULL))), (((/* implicit */unsigned long long int) var_1))));
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) arr_34 [i_8] [i_12]))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (long long int i_14 = 1; i_14 < 13; i_14 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_15 = 3; i_15 < 12; i_15 += 2) 
            {
                for (short i_16 = 0; i_16 < 14; i_16 += 2) 
                {
                    {
                        var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 9007199254740736ULL)) ? (2180856115U) : (2767888179U)));
                        arr_57 [i_15] = ((/* implicit */unsigned int) ((long long int) arr_26 [i_8] [i_14]));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                for (long long int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    {
                        arr_64 [i_8] [i_14 - 1] [i_18] [10LL] [i_18] [i_18] &= ((/* implicit */long long int) (-(var_2)));
                        var_24 ^= (~(var_5));
                        var_25 = ((((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((var_6) + (-3654561708452879251LL))) : (((/* implicit */long long int) ((/* implicit */int) (short)-15366))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_19 = 3; i_19 < 12; i_19 += 1) 
        {
            var_26 += ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 9195611414005706792LL)) < (min((((/* implicit */unsigned long long int) arr_63 [i_19] [i_19 - 3] [i_19 - 3] [i_8 - 2] [i_8 + 1] [i_8])), (arr_49 [i_8 + 2] [i_8])))));
            var_27 ^= ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_44 [i_19 + 1] [i_19 - 3] [i_19 + 1] [i_8])) ? (((/* implicit */int) arr_44 [i_8 + 2] [i_19] [i_19] [i_8 - 1])) : (((/* implicit */int) arr_44 [i_8 + 1] [i_8] [7LL] [i_19 + 2]))))));
        }
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
        {
            arr_72 [1LL] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_8 - 1] [i_20] [i_20])) ? (2306627167177925646LL) : (((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-1)))))));
            arr_73 [i_8 - 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 13783722786131761879ULL))));
        }
    }
    var_28 = ((/* implicit */unsigned int) ((min((var_0), (min((var_1), (var_7))))) <= (((((/* implicit */_Bool) ((var_2) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16445)))))) ? (-2453679195619231401LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
    var_29 = ((/* implicit */short) max((var_29), (min((var_4), (var_9)))));
    var_30 = ((/* implicit */long long int) var_9);
}
