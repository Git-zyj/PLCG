/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57422
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) /* same iter space */
    {
        var_17 *= ((/* implicit */unsigned int) ((unsigned short) max((min((var_16), (((/* implicit */unsigned long long int) 1669180516308811547LL)))), (((/* implicit */unsigned long long int) ((var_15) >= (((/* implicit */unsigned long long int) 442906491529428724LL))))))));
        var_18 = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) >> (((((/* implicit */int) (unsigned short)44608)) - (44585)))))) ? (arr_1 [i_0] [i_0]) : (((((/* implicit */_Bool) (unsigned short)43931)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0]))))))), (((unsigned long long int) arr_1 [i_0] [i_0])));
        var_19 -= ((/* implicit */unsigned short) var_1);
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_3 [i_1] [i_1]), (((/* implicit */long long int) ((unsigned int) -442906491529428724LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [14ULL])) ? (7117789959384378189ULL) : (((/* implicit */unsigned long long int) 2977611221U))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21605))) : (var_15))) : (arr_4 [i_1]))) : (((unsigned long long int) ((((/* implicit */int) (unsigned short)43930)) % (((/* implicit */int) (unsigned short)43933))))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            for (int i_3 = 3; i_3 < 15; i_3 += 4) 
            {
                {
                    arr_9 [i_1] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_4 [i_3 + 1]), (((/* implicit */unsigned long long int) var_2))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)21605))) : (((((/* implicit */_Bool) ((unsigned int) arr_8 [i_2]))) ? (var_12) : (((unsigned int) var_13))))));
                    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_7))));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_1 [7ULL] [(unsigned short)0])), (18418552508698570275ULL))), (((((((/* implicit */_Bool) 2154762409040677419ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (3267168208305845001ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [10U] [i_2] [i_2])))))));
                    var_22 ^= ((/* implicit */signed char) max((((((/* implicit */_Bool) ((8956346086808532533ULL) & (9120582912798860551ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) + (arr_4 [i_1]))) : (arr_7 [i_1] [i_1] [i_2] [i_3]))), (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1]))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            {
                var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned short)21605)), (((long long int) ((signed char) var_16)))));
                var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 442906491529428731LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))) : (3329006218U)))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) 2154762409040677419ULL))))) >> (((((unsigned int) (signed char)-5)) - (4294967272U)))))) : (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))));
                var_25 = ((/* implicit */unsigned long long int) max((var_25), (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-7556), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5))) >= (9490397986901019082ULL)))))))) - (var_16)))));
                arr_16 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((var_7) ^ (((/* implicit */int) (unsigned short)43924)))), (((/* implicit */int) (unsigned char)46))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 951238832U)) ^ (arr_13 [i_4] [i_5])))) ? (arr_15 [i_4] [i_5]) : (((((/* implicit */_Bool) var_3)) ? (-442906491529428752LL) : (((/* implicit */long long int) 1385105976U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 888045873))))));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                    {
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                arr_23 [0U] [0U] = ((/* implicit */long long int) var_8);
                                arr_24 [1U] [i_7] [i_5] [i_5] [i_4] |= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((int) 3412766918U))) ? (max((((/* implicit */unsigned long long int) arr_18 [i_4] [i_5] [i_5])), (var_15))) : (((/* implicit */unsigned long long int) max((8939401512697318251LL), (((/* implicit */long long int) arr_14 [i_6]))))))), (((/* implicit */unsigned long long int) ((((var_0) | (6615414421844067189LL))) % (((/* implicit */long long int) ((unsigned int) arr_13 [i_6] [i_7]))))))));
                                arr_25 [i_4] [i_5] [i_6] = ((/* implicit */int) ((long long int) (unsigned char)213));
                                var_26 = ((/* implicit */long long int) var_13);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
