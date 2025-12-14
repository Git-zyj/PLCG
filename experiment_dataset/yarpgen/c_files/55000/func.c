/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55000
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -6133518383584919844LL)) ? (((((/* implicit */_Bool) (short)-24294)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [(signed char)3]))) : (((((/* implicit */_Bool) (unsigned char)51)) ? (6973526746413297435LL) : (((/* implicit */long long int) 651715573U)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (unsigned short)34838)))) > (((long long int) 6973526746413297454LL))))))));
        arr_3 [i_0] = ((/* implicit */short) ((min((((unsigned long long int) (_Bool)1)), (((/* implicit */unsigned long long int) var_8)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30701))) != (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) -1139622132229377855LL)) : (arr_0 [i_0] [i_0])))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
    {
        arr_7 [i_1 - 1] = ((/* implicit */signed char) (((_Bool)0) ? (((((arr_4 [0ULL]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_1 + 2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34814))))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1 + 1] [(short)4])) && (((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 + 1]))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (short)-24297);
        arr_9 [i_1] = ((/* implicit */unsigned int) (_Bool)1);
    }
    for (short i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        arr_13 [(signed char)1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2])) ? (arr_11 [i_2]) : (arr_11 [i_2])))) ? (((/* implicit */unsigned long long int) 6133518383584919835LL)) : (var_0)));
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            for (short i_4 = 0; i_4 < 14; i_4 += 1) 
            {
                for (signed char i_5 = 3; i_5 < 12; i_5 += 4) 
                {
                    {
                        arr_20 [i_3] [(signed char)0] [(short)12] [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((long long int) arr_18 [i_3] [(short)12] [(short)11]))) : (((max((arr_17 [i_5 - 1] [i_4]), (((/* implicit */unsigned long long int) (unsigned short)30723)))) + (((/* implicit */unsigned long long int) 2918609923U))))));
                        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((1821265815U) << (((17261305698931167246ULL) - (17261305698931167220ULL)))))) - (min((((/* implicit */long long int) (signed char)37)), (-2448146882709838496LL)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_9)) ? (5585794539234258282LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34834)))))))) : (((arr_17 [i_5 + 2] [i_3 - 2]) | (arr_17 [i_5 - 1] [i_3 - 2])))));
                        arr_21 [1] [i_3] [(short)11] [i_3 - 2] [i_3] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) (short)-24294)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)36))) * (arr_4 [i_4]))) <= (((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) (_Bool)0))))))))) : (min((((-6973526746413297448LL) - (-5155618685691903087LL))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) - (1392547018))))))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) > (((((/* implicit */_Bool) 626835137U)) ? (min((arr_17 [9U] [12ULL]), (arr_4 [i_2]))) : (((/* implicit */unsigned long long int) ((int) arr_10 [i_3])))))));
                    }
                } 
            } 
        } 
        var_17 |= ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [(unsigned short)12] [i_2] [i_2]))) : (var_2)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) var_1)) < (876635428548903127ULL)))) : (((((/* implicit */int) (signed char)92)) - (((/* implicit */int) var_8)))))));
    }
    /* vectorizable */
    for (long long int i_6 = 0; i_6 < 24; i_6 += 1) 
    {
        arr_25 [11U] [i_6] = ((/* implicit */unsigned long long int) ((((var_10) ^ (((/* implicit */int) arr_22 [i_6])))) | (((/* implicit */int) arr_22 [i_6]))));
        /* LoopNest 2 */
        for (unsigned int i_7 = 2; i_7 < 23; i_7 += 2) 
        {
            for (unsigned short i_8 = 0; i_8 < 24; i_8 += 4) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((6133518383584919849LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_33 [i_6] [i_7 - 1] [i_7] [i_6] = ((/* implicit */_Bool) ((var_8) ? (((((/* implicit */_Bool) -937886104)) ? (((/* implicit */int) (short)-14475)) : (((/* implicit */int) (short)-17790)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2558593879U)))))));
                    var_19 &= ((/* implicit */signed char) arr_31 [(signed char)0] [i_6]);
                }
            } 
        } 
    }
    var_20 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)38581))));
}
