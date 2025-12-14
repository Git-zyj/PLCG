/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85993
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
    var_10 = var_3;
    var_11 *= var_9;
    var_12 |= var_1;
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [10ULL])) ? (arr_0 [6ULL]) : (arr_0 [14ULL])))) ? (((((/* implicit */_Bool) arr_0 [10ULL])) ? (arr_0 [14ULL]) : (var_0))) : (((var_0) * (arr_0 [2ULL])))))));
        var_14 -= min((8159084477364606990ULL), (12505453759679684809ULL));
    }
    for (unsigned long long int i_1 = 1; i_1 < 13; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned long long int) max((var_15), (min((arr_15 [i_2] [i_1 + 1] [12ULL] [i_4] [i_1 + 1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1])))))))));
                                arr_16 [i_1] [i_2] [i_3] [i_3] [i_3] = var_4;
                            }
                        } 
                    } 
                    var_16 ^= ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) ? (min((arr_7 [i_1 + 1] [i_2] [i_3]), (18446744073709551615ULL))) : (((unsigned long long int) arr_7 [i_3] [i_2] [i_1 - 1])));
                }
            } 
        } 
        var_17 = ((((((/* implicit */_Bool) arr_9 [i_1 - 1] [10ULL] [i_1 + 1])) ? (17320112458281048958ULL) : (arr_9 [i_1 + 1] [0ULL] [i_1 - 1]))) << (((arr_15 [i_1 + 1] [i_1 + 1] [4ULL] [i_1 + 1] [i_1 + 1]) - (7995365787110495960ULL))));
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_18 &= min((var_9), (min((arr_13 [i_6] [i_6] [i_6]), (min((var_8), (arr_13 [i_1] [i_6] [i_1 + 1]))))));
            arr_19 [9ULL] &= ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_6] [i_1] [i_1 - 1])) ? (var_8) : (0ULL)))) ? (arr_8 [i_1 - 1] [i_6]) : (((var_6) / (var_7))))) : (((arr_11 [i_1 + 1] [i_6]) * (min((arr_3 [i_1] [i_6]), (arr_3 [i_6] [i_1]))))));
            arr_20 [i_1] [11ULL] = ((unsigned long long int) ((((/* implicit */_Bool) ((arr_17 [12ULL]) << (((2390045079949931924ULL) - (2390045079949931909ULL)))))) ? (min((var_9), (14729008740222772533ULL))) : ((~(var_0)))));
            arr_21 [i_1] [i_6] = (-((+(var_6))));
        }
        for (unsigned long long int i_7 = 2; i_7 < 11; i_7 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 14; i_8 += 1) /* same iter space */
            {
                var_19 = ((((var_2) <= (arr_5 [i_7 - 2] [i_1 + 1]))) ? (arr_12 [i_1] [i_7 - 1] [i_8] [i_8]) : (((var_5) ^ (arr_3 [i_1 - 1] [i_8]))));
                var_20 = ((((/* implicit */_Bool) 18ULL)) ? (min((arr_4 [i_1] [i_7 - 1]), (arr_4 [i_1] [i_7]))) : (((unsigned long long int) 5050050504811080801ULL)));
            }
            for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (var_7)));
                var_22 = ((((/* implicit */_Bool) ((min((var_5), (arr_22 [i_9] [i_7 + 2]))) / (arr_7 [i_9] [i_9] [i_7 + 3])))) ? (min((((/* implicit */unsigned long long int) ((arr_15 [i_1] [i_7 + 2] [i_9] [i_9] [1ULL]) <= (9603892251030319975ULL)))), (((((/* implicit */_Bool) arr_7 [i_7] [i_7] [i_7])) ? (var_3) : (arr_25 [i_7]))))) : (((((/* implicit */_Bool) 18108293392166771097ULL)) ? (arr_17 [i_1 - 1]) : (arr_17 [i_1 + 1]))));
                arr_31 [i_9] = var_9;
            }
            var_23 = ((((/* implicit */_Bool) ((((var_6) >= (13396693568898470804ULL))) ? (((((/* implicit */_Bool) var_2)) ? (var_9) : (arr_30 [i_1]))) : (min((17077618117489655081ULL), (8055857065330094754ULL)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((arr_11 [i_1 + 1] [i_7]) < (16947664491268389631ULL))))))) : (((((unsigned long long int) 2104696061150733976ULL)) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3905829596869767837ULL)))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_24 = var_4;
            var_25 ^= 18446744073709551612ULL;
            arr_34 [4ULL] [4ULL] = arr_18 [i_1 - 1];
        }
        var_26 = var_0;
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) 
        {
            arr_37 [i_1 + 1] [i_11] [i_11] = (+((~(min((arr_11 [i_1] [10ULL]), (var_1))))));
            var_27 = var_6;
        }
    }
}
