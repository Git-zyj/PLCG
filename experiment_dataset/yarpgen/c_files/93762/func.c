/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93762
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
    var_15 = ((/* implicit */short) min((var_7), (((/* implicit */long long int) ((short) 2989665752U)))));
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 9223372036854775791LL))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_17 ^= (+(2254652276U));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) 18446744073709551615ULL);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((unsigned int) arr_0 [i_0])))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) -3320620829064097149LL);
        var_19 *= ((/* implicit */unsigned long long int) ((-8652695440235093313LL) >= (2457573088447184139LL)));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_2 = 4; i_2 < 13; i_2 += 1) 
        {
            arr_11 [i_2] = ((/* implicit */long long int) (short)23139);
            /* LoopNest 3 */
            for (unsigned long long int i_3 = 1; i_3 < 14; i_3 += 3) 
            {
                for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                {
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (arr_13 [i_1] [i_2] [i_3] [i_5])));
                            var_21 *= ((/* implicit */_Bool) -3398479866246376070LL);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) 18446744073709551613ULL))));
                            arr_20 [i_2] [i_2] = ((long long int) ((unsigned int) 8219343610747207221ULL));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] [i_1] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */long long int) (((((~(((/* implicit */int) (short)2)))) + (2147483647))) << (((((arr_15 [i_2] [i_1] [i_1] [2ULL] [i_2]) & (((/* implicit */unsigned long long int) -1028312784666967615LL)))) - (12790275753200468353ULL)))))) : (((/* implicit */long long int) (((((~(((/* implicit */int) (short)2)))) + (2147483647))) << (((((((arr_15 [i_2] [i_1] [i_1] [2ULL] [i_2]) & (((/* implicit */unsigned long long int) -1028312784666967615LL)))) - (12790275753200468353ULL))) - (13804080655798632383ULL))))));
            var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) 274877906943LL))));
        }
        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
        {
            arr_26 [i_1] [i_6] [7LL] = ((/* implicit */_Bool) -274877906954LL);
            arr_27 [i_6] = ((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) ((short) (_Bool)0))))), ((!(((/* implicit */_Bool) ((unsigned long long int) 3320620829064097149LL)))))));
        }
        var_24 = max(((+(11329281633853948836ULL))), (((/* implicit */unsigned long long int) ((((arr_9 [8LL] [i_1]) + (9223372036854775807LL))) >> (((((arr_5 [i_1]) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) - (3193883246934089737LL)))))));
        arr_28 [i_1] = ((/* implicit */long long int) arr_10 [i_1]);
    }
    for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */long long int) (short)32767);
        var_26 *= ((/* implicit */short) ((_Bool) arr_17 [i_7] [(short)5] [(short)7] [i_7] [i_7] [i_7] [i_7]));
    }
    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(arr_18 [i_8] [i_8] [i_8] [i_8]))))));
        arr_33 [i_8] = ((/* implicit */_Bool) arr_9 [i_8] [i_8]);
        var_28 = ((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) -259213564780667930LL))))) << (((((137438953471LL) << (((arr_2 [9LL]) - (2937005331015322987LL))))) - (1099511627756LL)))))), (((long long int) (+(((/* implicit */int) arr_10 [i_8])))))));
        var_29 = ((/* implicit */long long int) arr_31 [i_8]);
    }
    var_30 = (((-(max((var_7), (var_5))))) | (((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) -274877906931LL)))))));
}
