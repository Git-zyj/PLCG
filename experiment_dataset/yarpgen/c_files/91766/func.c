/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91766
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */unsigned long long int) (unsigned short)3808);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(arr_8 [i_2 + 1]))))));
                                arr_13 [i_2] [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) (+(max((((((/* implicit */_Bool) arr_2 [i_2 + 1])) ? (7464746903012169407ULL) : (((/* implicit */unsigned long long int) 1182723454)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_8)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15; i_5 += 2) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_18 [i_0] [i_2 - 1] [i_6] [i_5] [i_5] [i_0] [i_1] |= ((/* implicit */unsigned int) max(((~(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) != (arr_7 [i_2] [i_2 + 1] [i_2 + 1] [i_2] [i_2] [i_2])))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) != (arr_16 [i_5]))))));
                                var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_5])) ? (arr_1 [i_5]) : (arr_1 [i_5])))) ? (((((/* implicit */_Bool) arr_1 [i_6])) ? (arr_1 [i_5]) : (arr_1 [i_6]))) : (((arr_1 [i_5]) | (2365960401U)))));
                                var_20 -= (unsigned char)150;
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_16)) ? (var_6) : (((/* implicit */unsigned long long int) var_11))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_7] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))))) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_7] [i_7] [i_7]))));
        var_22 = ((((arr_8 [i_7]) < (arr_8 [i_7]))) ? (((((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9367)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_6 [i_7] [i_7])), (arr_14 [14ULL] [10U] [i_7] [i_7] [i_7]))))) : (((((/* implicit */_Bool) var_3)) ? (var_2) : (4319813796781470053ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [(unsigned short)4] [i_7] [i_7] [i_7] [i_7] [i_7] [i_7]))));
    }
    var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_2) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (unsigned short)33050)))))))))));
}
