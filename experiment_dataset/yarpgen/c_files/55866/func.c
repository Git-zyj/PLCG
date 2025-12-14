/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55866
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
    var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) -7407242775539452438LL)) <= (10453226951146933651ULL))) ? ((~(-2632787311969795513LL))) : (2632787311969795512LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (2632787311969795512LL)));
    var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)217)) : (((/* implicit */int) var_5))))))))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_17 ^= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)85)) >> (((-204761631) + (204761643)))))) ? (((((/* implicit */int) (unsigned short)48926)) / (((/* implicit */int) (unsigned short)38192)))) : (((/* implicit */int) (_Bool)0)))) * ((+(((/* implicit */int) (!(((/* implicit */_Bool) 2632787311969795512LL)))))))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    {
                        var_18 -= max((max((min((arr_2 [i_2]), (((/* implicit */unsigned long long int) var_2)))), (min((((/* implicit */unsigned long long int) -7407242775539452456LL)), (var_4))))), (((/* implicit */unsigned long long int) var_10)));
                        arr_11 [7ULL] = ((/* implicit */unsigned int) max(((~(7407242775539452455LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3907073591444049799LL)) ? (((/* implicit */int) (unsigned short)0)) : (774250328))))));
                    }
                } 
            } 
            var_19 -= ((/* implicit */int) (!(((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) -1595250169)))))));
        }
    }
    for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((((/* implicit */int) (_Bool)1)) < ((+(((/* implicit */int) (unsigned char)155)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            for (unsigned char i_6 = 0; i_6 < 13; i_6 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)123)) ? (min((2632787311969795511LL), (((/* implicit */long long int) (short)-32714)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)35559)))));
                    arr_19 [9U] [i_5] [i_5] [i_4] = ((/* implicit */unsigned int) (unsigned short)9128);
                }
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
        {
            arr_24 [i_4] [i_7] = (unsigned char)5;
            arr_25 [(unsigned char)1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
            arr_26 [i_4] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)8))));
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 13; i_8 += 3) 
        {
            arr_29 [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_4] [i_8] [i_4] [i_4])) ? (((((/* implicit */_Bool) (unsigned short)19213)) ? (((/* implicit */int) arr_27 [i_4] [i_4])) : (((/* implicit */int) var_0)))) : ((-(((/* implicit */int) (unsigned short)52203))))));
            arr_30 [i_4] [(signed char)6] |= (~((~(((/* implicit */int) (unsigned char)172)))));
            /* LoopSeq 1 */
            for (unsigned char i_9 = 1; i_9 < 11; i_9 += 4) 
            {
                arr_33 [i_4] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) (+(((((var_2) + (2147483647))) << (((260096U) - (260096U)))))));
                arr_34 [i_8] [1LL] [i_9 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)235)) & (((/* implicit */int) (short)6536))));
                var_22 = ((/* implicit */unsigned int) ((signed char) -1));
            }
            arr_35 [i_8] = ((/* implicit */signed char) ((((/* implicit */int) (short)-4096)) * (((((/* implicit */int) var_7)) / (((/* implicit */int) (short)-11744))))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)29966)))))));
    var_24 = ((/* implicit */unsigned long long int) var_5);
}
