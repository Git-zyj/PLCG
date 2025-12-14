/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81194
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81194 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81194
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 3; i_0 < 17; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_10 [i_0 - 2] [i_1] [i_2] [i_0 - 2] = ((/* implicit */unsigned long long int) (unsigned char)11);
                    arr_11 [i_0] = ((/* implicit */signed char) var_10);
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 16; i_3 += 1) 
                    {
                        for (int i_4 = 1; i_4 < 19; i_4 += 1) 
                        {
                            {
                                arr_18 [(unsigned char)4] [i_3] [14U] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_8 [i_1] [(signed char)3] [(unsigned char)9] [7ULL])))) ? (max((((/* implicit */unsigned int) arr_0 [i_0 - 3])), (((((/* implicit */_Bool) arr_1 [i_3])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_15 [i_0 + 2] [i_1] [3] [i_3] [i_4]))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)163)) * (((/* implicit */int) (short)18037)))))));
                                arr_19 [(unsigned char)18] [(unsigned char)11] [i_3] = max((((((/* implicit */_Bool) (unsigned char)254)) ? (arr_3 [i_3 - 2] [i_4] [i_4 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)18035))))), (((((/* implicit */unsigned long long int) var_0)) * (arr_3 [i_3 + 2] [i_3] [i_4]))));
                                arr_20 [i_0 + 1] [i_3] = ((/* implicit */unsigned long long int) min(((unsigned char)84), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) var_3)), ((unsigned short)17541)))))))));
                            }
                        } 
                    } 
                    arr_21 [i_2] [(unsigned char)4] [i_2 + 1] = ((/* implicit */unsigned char) 7782527305711747311ULL);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_24 [i_5] = ((/* implicit */_Bool) var_9);
        /* LoopNest 3 */
        for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                for (long long int i_8 = 0; i_8 < 14; i_8 += 2) 
                {
                    {
                        arr_36 [i_5] [i_5] [i_7] [(_Bool)0] [i_8] [(signed char)2] = ((/* implicit */unsigned int) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)82))) / (-26LL))) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) (unsigned short)47988)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_6]))) : (var_0)))));
                        arr_37 [i_6] [3ULL] [i_6] [i_8] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_28 [11ULL] [i_7])), ((-9223372036854775807LL - 1LL))));
                        arr_38 [12] [6U] [i_8] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_7 [i_8] [i_6] [i_5]), (((((/* implicit */_Bool) 2147483640)) ? (9223372036854775807LL) : (var_9)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) >= (arr_32 [i_8] [i_7] [i_6] [i_5]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) arr_8 [i_5] [i_6] [i_5] [8])) : (144115188075855872LL)))) ? (var_4) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (short)18034))) : (var_0))))))));
                        arr_39 [i_5] [i_6] [i_6] [2ULL] [13LL] [i_5] = ((/* implicit */long long int) ((_Bool) (((-(var_12))) >> (((((/* implicit */int) var_3)) - (150))))));
                    }
                } 
            } 
        } 
        arr_40 [5U] = ((/* implicit */unsigned int) var_3);
        /* LoopSeq 2 */
        for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 4) 
        {
            arr_44 [i_5] [12U] = var_7;
            arr_45 [11U] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(max((((/* implicit */unsigned int) (short)-18039)), (var_5)))))) ? (var_0) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-18037)) & (2147483640)))) ? (((/* implicit */int) (unsigned char)37)) : (((/* implicit */int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) 3379461955845015578LL))))))))));
            arr_46 [9] = ((/* implicit */int) ((max((var_15), (((/* implicit */unsigned long long int) var_1)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_9] [(unsigned char)5] [i_5])) ? (((/* implicit */int) arr_6 [i_5] [i_5] [5ULL])) : (((/* implicit */int) (short)-18036)))))));
        }
        for (long long int i_10 = 3; i_10 < 13; i_10 += 1) 
        {
            arr_50 [i_10] [i_10 - 2] [i_10] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)2))));
            arr_51 [i_10 + 1] [i_5] [i_5] = ((/* implicit */signed char) (+((~(arr_3 [i_10 - 3] [i_10 - 2] [i_10 - 1])))));
            arr_52 [i_5] [i_5] = ((/* implicit */short) (!(((((/* implicit */int) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_0))))) <= (((((/* implicit */_Bool) (short)-9916)) ? (((/* implicit */int) arr_42 [i_5] [i_5] [(unsigned short)7])) : (((/* implicit */int) var_10))))))));
        }
    }
    var_17 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned short)256)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7936))) : ((-9223372036854775807LL - 1LL)))), (min((1435586284744840772LL), (((/* implicit */long long int) (signed char)-125)))))))));
}
