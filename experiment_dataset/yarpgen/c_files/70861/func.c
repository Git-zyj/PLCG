/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70861
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
    var_18 = min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (signed char)-61)) ? (var_2) : (var_0))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0U)) == (var_15))))) * ((-(var_12))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) arr_1 [i_0] [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_8 [14U] [i_2] [i_3]))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            arr_12 [i_0] = (+(((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_2 [i_3] [i_0])))));
                            arr_13 [i_0] [i_3] [3ULL] [i_2] [(short)5] [i_0] = ((/* implicit */short) ((signed char) (+(879992397012137305ULL))));
                        }
                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            arr_18 [i_0] [i_0] [i_2] [i_3] [i_5 - 2] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
                            var_21 += ((/* implicit */short) ((((2513724572U) >> (((((/* implicit */int) (short)299)) - (284))))) ^ (((/* implicit */unsigned int) ((int) arr_2 [12ULL] [i_5])))));
                        }
                        for (int i_6 = 2; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_1] [i_1] [(short)6] [5] [i_0] = ((/* implicit */int) ((unsigned long long int) (((!(((/* implicit */_Bool) arr_7 [i_6] [i_1])))) ? ((+(9304444674751170085ULL))) : (((/* implicit */unsigned long long int) (~(var_10)))))));
                            var_22 &= ((/* implicit */short) (-(1252379366U)));
                        }
                        var_23 ^= (+(((int) (!(((/* implicit */_Bool) var_16))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
        {
            for (unsigned int i_8 = 4; i_8 < 13; i_8 += 2) 
            {
                for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                {
                    {
                        var_24 += ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_8 [6ULL] [i_7] [i_7])) ? (max((((/* implicit */unsigned long long int) 1562103208U)), (var_0))) : (((unsigned long long int) arr_19 [i_8 - 1] [2] [i_8] [i_7] [i_7] [i_7])))), (((/* implicit */unsigned long long int) (-(((int) var_9)))))));
                        arr_30 [i_0] = ((((((/* implicit */unsigned long long int) arr_5 [i_0] [i_7] [2ULL] [1])) < (((((/* implicit */unsigned long long int) 2124397524)) + (var_2))))) ? (max((((((/* implicit */_Bool) arr_29 [i_0] [i_0] [i_0] [15U] [15ULL] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_0] [i_0] [5] [i_8] [(short)13]))) : (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_12))))))) : (((arr_15 [i_0]) ^ (var_12))));
                        var_25 += (-(((/* implicit */int) ((signed char) (~(var_12))))));
                        arr_31 [i_0] [i_7] [i_8] [10] = ((/* implicit */signed char) -995384029);
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 3) /* same iter space */
        {
            arr_34 [i_0] = arr_19 [i_0] [8] [i_0] [i_10] [13ULL] [7U];
            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? ((+(min((((/* implicit */unsigned long long int) -723572617)), (var_7))))) : (((/* implicit */unsigned long long int) ((unsigned int) (+(arr_4 [i_0] [14U]))))))))));
        }
        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 3) /* same iter space */
        {
            arr_38 [i_0] [i_11] = ((/* implicit */short) var_11);
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 16; i_12 += 4) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((((/* implicit */_Bool) arr_36 [i_0] [i_12])) ? (arr_32 [i_12] [i_11] [i_12]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4021101841U)) ? (((/* implicit */int) (signed char)-61)) : (-2147483636))))))));
                var_28 ^= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))), (((int) arr_4 [i_0] [i_12]))));
                arr_42 [i_0] [i_11] [i_11] [i_11] = ((/* implicit */unsigned long long int) (signed char)-29);
            }
        }
    }
    var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) var_14))));
    var_30 = ((/* implicit */int) var_5);
}
