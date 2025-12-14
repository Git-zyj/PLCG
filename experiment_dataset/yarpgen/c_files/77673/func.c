/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77673
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_12 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((+(((/* implicit */int) max(((short)12452), (var_6)))))) : (((/* implicit */int) var_7))));
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_7)), (arr_1 [i_0 + 2] [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) (short)-25711)) : (((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_10)) ? (arr_1 [i_0 - 1] [i_1]) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_2 = 0; i_2 < 12; i_2 += 3) /* same iter space */
    {
        arr_8 [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_1 [i_2] [i_2]) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2])))))) > (((/* implicit */int) var_9))));
        arr_9 [i_2] [i_2] &= ((/* implicit */_Bool) ((((((/* implicit */int) arr_6 [i_2])) > (((/* implicit */int) (unsigned short)32768)))) ? ((~(((/* implicit */int) arr_6 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2])))))));
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
        {
            var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) (short)-12817))));
            arr_12 [i_2] [i_3] = (-(arr_4 [(_Bool)1] [(_Bool)1]));
            /* LoopNest 2 */
            for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (unsigned short i_5 = 2; i_5 < 10; i_5 += 2) 
                {
                    {
                        arr_17 [i_2] [i_3] [i_4 - 1] [i_4 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */int) var_2)) / (((((/* implicit */int) (short)-1)) * (((/* implicit */int) (short)-25711)))))) : ((+(((/* implicit */int) (short)12458))))));
                        arr_18 [i_5] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) arr_10 [i_2] [i_2] [i_2]);
                        var_15 ^= ((/* implicit */short) max(((~(arr_1 [i_4 - 2] [i_5 - 2]))), (((/* implicit */unsigned long long int) ((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_7)) - (19735))))))));
                        var_16 = ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4 - 1] [(short)10] [i_5 - 2]))) + (var_1))) - (((/* implicit */long long int) (+(((/* implicit */int) arr_5 [i_4 + 1] [i_5 - 2]))))));
                    }
                } 
            } 
            arr_19 [i_2] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))) ? (((/* implicit */int) ((arr_1 [(unsigned short)12] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) : (((/* implicit */int) (_Bool)1))))));
        }
    }
    for (short i_6 = 0; i_6 < 12; i_6 += 3) /* same iter space */
    {
        var_17 += ((/* implicit */long long int) var_9);
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) ? ((~(((/* implicit */int) ((_Bool) 14436319990523756671ULL))))) : ((+(((/* implicit */int) min((((/* implicit */unsigned short) (short)-30880)), (var_5))))))));
        var_19 = ((/* implicit */short) arr_15 [i_6] [i_6]);
        arr_24 [i_6] [i_6] = ((/* implicit */unsigned short) ((((_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)25711)) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775780LL))) + (47LL)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_6])) ? (((/* implicit */int) arr_23 [i_6])) : (((/* implicit */int) (unsigned short)35477))))))))) : ((((!(((/* implicit */_Bool) var_1)))) ? (((var_8) - (((/* implicit */long long int) ((/* implicit */int) var_6))))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)21931), ((short)12068)))))))));
        arr_25 [i_6] [i_6] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_15 [i_6] [i_6])))));
    }
    for (short i_7 = 0; i_7 < 16; i_7 += 3) 
    {
        arr_30 [(unsigned short)4] &= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (short)-22452)) : (((/* implicit */int) (short)-18347)))))) >> (((((/* implicit */int) var_6)) - (4509)))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [i_7])) | (((/* implicit */int) arr_29 [i_7]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22451))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 14436319990523756671ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25711))) : (var_0)))) : (((18446744073709551611ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30880)))))))));
        var_21 -= ((/* implicit */_Bool) arr_26 [8LL]);
    }
}
