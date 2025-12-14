/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8674
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
    var_16 = ((/* implicit */int) var_11);
    var_17 = (short)-15185;
    var_18 = ((/* implicit */unsigned int) ((unsigned long long int) 2649566055U));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (unsigned short)51854;
        var_19 = ((/* implicit */short) (unsigned char)230);
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) * (((/* implicit */int) (_Bool)1))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)61023)))) : (((/* implicit */int) (unsigned short)51854))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            arr_8 [i_1] [(signed char)0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-20344)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))));
            arr_9 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -8329442426116158326LL)) ? (((/* implicit */int) (unsigned short)51882)) : ((+(((/* implicit */int) arr_1 [i_0]))))));
            var_21 = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) - (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))));
        }
        for (unsigned char i_2 = 3; i_2 < 19; i_2 += 4) 
        {
            arr_12 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(short)16]))) : (arr_2 [i_0] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_2)));
            var_22 = ((/* implicit */signed char) ((unsigned short) var_9));
            /* LoopSeq 1 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 3) 
            {
                var_23 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) (unsigned short)45143))))) + ((((_Bool)1) ? (1946372186) : (((/* implicit */int) (_Bool)1))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_0) : (((/* implicit */int) var_12))));
                arr_16 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */long long int) (unsigned char)182);
                arr_17 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0])) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))) == (arr_15 [i_2] [i_0]))))));
                arr_18 [i_0] [i_2] [19LL] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_4 [i_2 - 3])) <= (((/* implicit */int) arr_7 [i_2 - 1] [i_2 + 1] [i_2]))));
            }
        }
        for (unsigned short i_4 = 1; i_4 < 19; i_4 += 1) 
        {
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_0] [i_4 + 1] [i_4 + 1] [(short)19])) - (var_0)));
            arr_22 [i_0] &= ((/* implicit */signed char) 8992053085734898453ULL);
            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) + (((/* implicit */int) (unsigned short)46365))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)87)) - (((/* implicit */int) arr_11 [i_0] [i_0] [(signed char)10]))))) : (((var_4) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-5)))))));
        }
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) 
        {
            var_27 = ((/* implicit */long long int) (+((-(((/* implicit */int) arr_14 [19] [(unsigned short)7] [i_0] [i_0]))))));
            arr_25 [i_0] [i_5] = ((/* implicit */unsigned char) ((arr_24 [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))));
            arr_26 [i_5] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)10630)) ? (8501351225475154147ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_0] [i_5] [(_Bool)1]))))) / (((/* implicit */unsigned long long int) ((394345316758500667LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62634))))))));
        }
    }
    for (int i_6 = 0; i_6 < 20; i_6 += 1) 
    {
        arr_31 [i_6] = ((/* implicit */unsigned short) arr_27 [i_6] [(signed char)12]);
        arr_32 [i_6] [i_6] = (-((~(arr_15 [(unsigned short)2] [i_6]))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_28 &= ((/* implicit */long long int) (+((~(((/* implicit */int) arr_30 [i_7]))))));
        arr_37 [1LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)-10631)) : (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) var_8))))));
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_29 = ((((/* implicit */_Bool) (unsigned char)95)) ? (((/* implicit */int) arr_39 [i_8] [i_8])) : (((/* implicit */int) arr_39 [4] [i_8])));
        /* LoopSeq 1 */
        for (long long int i_9 = 0; i_9 < 23; i_9 += 3) 
        {
            arr_42 [i_8] = ((/* implicit */unsigned long long int) (signed char)16);
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)39951)) - (((/* implicit */int) arr_39 [15LL] [i_9]))))) ? (((/* implicit */int) ((short) var_9))) : (((/* implicit */int) ((((/* implicit */_Bool) 494184227)) || (((/* implicit */_Bool) arr_41 [i_8] [i_9])))))));
            arr_43 [i_9] [i_9] [(unsigned short)9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2008524997)) ? (-1853127904723084016LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-67)))));
        }
        arr_44 [i_8] = ((/* implicit */signed char) arr_40 [i_8]);
    }
}
