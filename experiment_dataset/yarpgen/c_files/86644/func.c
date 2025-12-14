/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86644
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
    var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (short)-8580))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)14940))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), ((unsigned short)63706))))) : (max((712611286835706148ULL), (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        var_16 &= ((/* implicit */long long int) (((-(((/* implicit */int) arr_2 [i_0] [i_0 + 3])))) - ((+(((/* implicit */int) max((((/* implicit */unsigned short) (short)16926)), ((unsigned short)14940))))))));
        var_17 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    for (long long int i_1 = 4; i_1 < 14; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */int) (-((-(2538483627264615639ULL)))));
        /* LoopNest 3 */
        for (signed char i_2 = 0; i_2 < 17; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (long long int i_4 = 2; i_4 < 15; i_4 += 1) 
                {
                    {
                        var_18 ^= ((/* implicit */unsigned int) arr_11 [(short)4] [i_2] [i_1] [i_1]);
                        arr_13 [(short)8] [i_2] [i_2] [16U] [(short)8] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (short)-23217))) / (arr_7 [i_1] [i_1] [i_3])))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [16LL]))) / (arr_7 [i_1] [i_2] [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 2765861324798633188ULL)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) arr_2 [i_2] [i_3]))))))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21792)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)38648))))) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-103)), (arr_1 [i_4])))))))));
                    }
                } 
            } 
        } 
        arr_14 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-21792))))) ? ((-(((/* implicit */int) ((signed char) (unsigned char)253))))) : (((((890536109) - (((/* implicit */int) arr_2 [i_1] [i_1 - 3])))) << (((((/* implicit */int) (unsigned short)38247)) - (38247)))))));
        var_19 = ((/* implicit */signed char) ((unsigned long long int) ((unsigned long long int) max((((/* implicit */short) arr_10 [i_1] [i_1])), ((short)-12986)))));
    }
    for (unsigned long long int i_5 = 1; i_5 < 18; i_5 += 1) 
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned long long int) (((~(arr_16 [i_5 - 1]))) >= (((((/* implicit */_Bool) (signed char)-117)) ? (arr_16 [i_5 - 1]) : (arr_16 [i_5 + 2])))));
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                {
                    arr_25 [i_7 - 1] [i_5] [i_7] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_6])) ^ (((/* implicit */int) (signed char)37))))))) ? (((((/* implicit */_Bool) 12638819124737646047ULL)) ? (((((/* implicit */_Bool) (short)13140)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_6))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (-8625413026057408282LL))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_21 [i_5] [i_6] [i_6])) : (((/* implicit */int) (unsigned short)38267))))) ? (max((((/* implicit */long long int) arr_23 [i_7] [i_6] [i_7] [(short)17])), (arr_20 [i_5] [i_5]))) : (((/* implicit */long long int) ((((/* implicit */int) (short)-21792)) % (((/* implicit */int) arr_19 [i_5])))))))));
                    arr_26 [i_5] [i_6] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) | (max((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_2)))), ((-(((/* implicit */int) var_11))))))));
                }
            } 
        } 
    }
    for (unsigned char i_8 = 0; i_8 < 12; i_8 += 1) 
    {
        arr_29 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-29)) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_20 [(_Bool)1] [i_8])), (2880994935083769646ULL)))) ? (-1846666044232580823LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50596))))) : (((/* implicit */long long int) min((((/* implicit */int) (_Bool)0)), ((-(((/* implicit */int) (unsigned short)56565)))))))));
        arr_30 [i_8] = ((/* implicit */short) (-(((/* implicit */int) arr_5 [i_8]))));
    }
}
