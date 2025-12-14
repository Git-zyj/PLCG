/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9211
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
    var_20 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_11)), (var_5)));
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((18446744073709551615ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))), (((/* implicit */unsigned long long int) var_19))))) ? (((/* implicit */long long int) var_3)) : (var_4)));
    var_22 = ((/* implicit */signed char) var_0);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (18446744073709551615ULL) : (4302893289275025455ULL)))) ? (((/* implicit */int) ((472948456319824102ULL) < (((/* implicit */unsigned long long int) 7974302217331270254LL))))) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) var_10);
    }
    for (unsigned long long int i_1 = 2; i_1 < 20; i_1 += 1) /* same iter space */
    {
        var_23 ^= ((/* implicit */int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60003)) ? (0ULL) : (((/* implicit */unsigned long long int) -4890153342884090266LL)))))))), (min(((unsigned short)63018), ((unsigned short)63018)))));
        var_24 = ((/* implicit */unsigned short) ((short) (unsigned char)33));
    }
    for (unsigned long long int i_2 = 2; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20740))) : (18446744073709551607ULL)))))) ? ((+(((/* implicit */int) var_15)))) : (((/* implicit */int) var_12))));
        var_26 = ((/* implicit */long long int) min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)30993))));
        /* LoopNest 2 */
        for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 21; i_4 += 1) 
            {
                {
                    arr_13 [i_2 + 1] [(unsigned short)18] [i_2 + 1] [i_2 + 1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)0))));
                    arr_14 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_4])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_12))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) - (0ULL)))));
                }
            } 
        } 
        var_27 = ((/* implicit */int) ((((11727153968195673037ULL) | (0ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)255)) >= (((/* implicit */int) (_Bool)1))))) : (var_3))))));
        /* LoopNest 2 */
        for (long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            for (unsigned int i_6 = 4; i_6 < 19; i_6 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) (signed char)-1);
                    arr_21 [i_2 - 1] [i_2 - 1] [i_6] = ((/* implicit */unsigned char) 14206553709159671282ULL);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 2; i_7 < 20; i_7 += 1) /* same iter space */
    {
        var_29 = ((((((/* implicit */int) (signed char)116)) - (((/* implicit */int) var_12)))) + (((/* implicit */int) (unsigned short)63018)));
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 21; i_8 += 2) 
        {
            for (signed char i_9 = 1; i_9 < 18; i_9 += 1) 
            {
                {
                    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)178)) - (((/* implicit */int) (unsigned short)60003))));
                    /* LoopSeq 1 */
                    for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) 18446744073709551614ULL)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))) | (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (_Bool)1))))));
                        arr_31 [i_7] [i_7] = ((/* implicit */unsigned int) var_3);
                    }
                }
            } 
        } 
        var_32 = ((/* implicit */long long int) ((((int) -6294748486176912760LL)) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_16)))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
    {
        for (long long int i_12 = 2; i_12 < 21; i_12 += 4) 
        {
            {
                arr_38 [i_12] = ((/* implicit */int) (((_Bool)1) ? (-5014189904293729432LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)54410)))));
                var_33 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_4) >> (((var_4) - (1300770002669134160LL)))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8469628810956859692LL)) && (((/* implicit */_Bool) 11693764709424266445ULL)))))))) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_16)))))));
            }
        } 
    } 
}
