/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83320
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83320 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83320
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_2 [6LL] = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_1 [(unsigned char)1])), (-1182156230)))) : (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) var_0))));
        var_19 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((arr_1 [i_0]) ? (1182156230) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_7)))) : (((long long int) arr_1 [i_0 + 1]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) (~(max((var_8), (((/* implicit */long long int) 1230229203))))))), (((((/* implicit */_Bool) (short)25500)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((unsigned int) arr_0 [i_0 - 1])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned int) (_Bool)1);
        var_21 = ((((/* implicit */_Bool) -770082296)) ? (4275677920989225213LL) : (((/* implicit */long long int) 4294967286U)));
        arr_6 [i_1] = ((/* implicit */unsigned long long int) (+((+(((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) + (4294967282U)))))));
        arr_7 [i_1] [i_1] = ((/* implicit */int) -1LL);
    }
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_22 -= (~(((/* implicit */int) (short)-28155)));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 2; i_3 < 22; i_3 += 2) 
        {
            arr_12 [3] [(short)2] = ((/* implicit */int) (((~(var_11))) * (((/* implicit */unsigned long long int) arr_8 [i_2] [i_3]))));
            arr_13 [i_2] [i_2] [i_2] = var_18;
            /* LoopSeq 2 */
            for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
            {
                arr_16 [i_2] [i_2] [i_4] = ((/* implicit */_Bool) ((long long int) ((var_14) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))) : (arr_9 [i_2] [10LL]))));
                arr_17 [(unsigned short)3] [(unsigned short)3] [(unsigned short)6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_2]))))) ? ((~(1140082018332101713LL))) : (((/* implicit */long long int) 1182156199))));
            }
            for (short i_5 = 1; i_5 < 21; i_5 += 2) 
            {
                arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_3 - 1] [i_3 - 1])) ? (arr_8 [i_3 - 2] [i_3 - 2]) : (arr_8 [i_3 - 2] [i_3 - 2])));
                arr_21 [i_2] [19] [i_5] [(unsigned char)16] = ((/* implicit */int) ((long long int) arr_10 [i_5 - 1]));
                /* LoopSeq 3 */
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 3) /* same iter space */
                {
                    arr_25 [i_5] [i_6 + 2] = ((short) -1238032481);
                    arr_26 [i_5] [i_5] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(var_17))))));
                }
                for (unsigned long long int i_7 = 1; i_7 < 22; i_7 += 3) /* same iter space */
                {
                    var_23 = ((/* implicit */signed char) 1ULL);
                    arr_30 [i_2] [i_3] [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_5))));
                }
                for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 3) /* same iter space */
                {
                    arr_34 [i_5] [i_5] [i_5] [i_3 - 1] [i_5] [i_5] = ((/* implicit */int) arr_28 [i_8 + 1] [i_5] [i_3 + 1]);
                    var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)19390))));
                    var_25 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1182156232)) ? (arr_32 [i_2] [14U] [14U] [i_8]) : (((/* implicit */long long int) 4294967281U)))) - (((/* implicit */long long int) (+(var_4))))));
                }
                arr_35 [i_5] [i_3] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (var_4) : (((/* implicit */int) arr_18 [i_2] [i_3 - 2]))))));
            }
            arr_36 [i_2] [i_2] = (+(((/* implicit */int) arr_24 [i_3 - 2] [i_3] [i_3] [i_3 - 2] [i_3 - 2] [i_3])));
        }
        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
        {
            arr_39 [i_9] [19U] [i_9] = ((/* implicit */_Bool) 1813489878);
            arr_40 [(_Bool)1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(1437358476)))) - (((((/* implicit */_Bool) 1048575ULL)) ? (arr_33 [i_2] [i_2] [i_2] [i_2] [(unsigned short)7]) : (((/* implicit */long long int) arr_23 [i_2] [12LL] [i_2]))))));
        }
        arr_41 [23] = ((/* implicit */unsigned short) ((int) arr_23 [i_2] [i_2] [i_2]));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_10 = 0; i_10 < 11; i_10 += 2) 
    {
        arr_44 [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_18 [i_10] [(unsigned short)7])) : (((/* implicit */int) arr_28 [i_10] [i_10] [i_10]))));
        arr_45 [1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_43 [i_10]))));
        arr_46 [7ULL] = ((/* implicit */short) (+(18446744073709551615ULL)));
        /* LoopNest 2 */
        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
            {
                {
                    arr_54 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (+(-2147483628)));
                    var_26 ^= ((/* implicit */short) var_10);
                    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)19410))));
                }
            } 
        } 
    }
}
