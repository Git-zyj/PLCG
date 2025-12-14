/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77795
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
    var_14 = ((/* implicit */_Bool) var_4);
    var_15 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)-22203)) : (((/* implicit */int) (short)22203)))) / (min((var_3), (((/* implicit */int) (short)-22214)))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(min((var_10), (((/* implicit */int) var_13))))));
        arr_4 [i_0] = ((/* implicit */int) -2016367695267271730LL);
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            arr_9 [i_0] [i_0] = ((/* implicit */long long int) ((unsigned short) ((unsigned char) var_9)));
            arr_10 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */int) (short)-22186)) : (((/* implicit */int) (short)-22203)))) + (((int) 8932945426481588931LL))));
            arr_11 [i_0] = ((/* implicit */int) var_6);
            arr_12 [i_0] [i_0] [i_0] = ((/* implicit */short) var_13);
            arr_13 [i_0] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), ((+(((/* implicit */int) (unsigned short)48070))))))) & (((unsigned long long int) var_0))));
        }
        arr_14 [i_0] [i_0] = ((/* implicit */long long int) min((var_1), ((-(((var_12) % (((/* implicit */unsigned int) var_3))))))));
    }
    for (unsigned short i_2 = 3; i_2 < 18; i_2 += 1) 
    {
        arr_19 [i_2 - 2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-22186)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (short)9297)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) 8821079770793122384LL)))) : (-146482473065735183LL));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            arr_23 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((((/* implicit */_Bool) -518495668)) ? (((/* implicit */long long int) -1)) : (15LL))) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) | (((/* implicit */long long int) ((int) (short)-8814)))));
            arr_24 [i_2] [i_3] [i_3] = ((/* implicit */long long int) (((~(6170681633320145700ULL))) % (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((unsigned char) 1749558366334163668LL))), (var_1))))));
        }
        for (int i_4 = 0; i_4 < 19; i_4 += 3) 
        {
            arr_28 [i_4] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)17))));
            arr_29 [i_4] = ((/* implicit */int) ((unsigned long long int) min((((/* implicit */unsigned char) ((_Bool) (unsigned short)2145))), ((unsigned char)255))));
            arr_30 [i_2] [i_2] = arr_21 [i_2] [i_2];
        }
        arr_31 [i_2] [i_2 + 1] = ((/* implicit */int) (((!(((/* implicit */_Bool) 165862069)))) || (((((((/* implicit */_Bool) -5598221904073768463LL)) && (((/* implicit */_Bool) (short)22202)))) && (((/* implicit */_Bool) max((-2016367695267271730LL), (((/* implicit */long long int) (short)26199)))))))));
    }
}
