/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8065
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
    var_20 = ((/* implicit */unsigned short) var_10);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            var_21 = ((/* implicit */_Bool) 12360999253212030166ULL);
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (unsigned char i_3 = 2; i_3 < 14; i_3 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 17; i_4 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned short) ((unsigned long long int) 1683768701U));
                            var_23 = ((/* implicit */unsigned short) ((10585484054251539810ULL) | (((/* implicit */unsigned long long int) 1683768699U))));
                            var_24 -= ((/* implicit */short) (!(((/* implicit */_Bool) var_4))));
                        }
                        for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) var_4))));
                            var_26 -= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 12480838833594920750ULL)) ? (1683768701U) : (3385950826U)))) || (((_Bool) var_5))));
                            var_27 = ((/* implicit */unsigned short) (+(((/* implicit */int) min(((unsigned short)30077), (((/* implicit */unsigned short) var_3)))))));
                            var_28 = ((/* implicit */short) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)56209)))) && ((!(((/* implicit */_Bool) 12480838833594920750ULL))))));
                        }
                        arr_14 [i_0] [(signed char)14] [i_1] [i_3] [i_0] [i_1] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 514381390U)))))))));
                        var_29 = ((/* implicit */long long int) ((short) (unsigned short)30077));
                        var_30 = ((/* implicit */short) (((!((!(((/* implicit */_Bool) (signed char)96)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : ((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                } 
            } 
            arr_15 [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_12)))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    arr_21 [i_0] [i_6] = ((/* implicit */unsigned short) (+(((/* implicit */int) var_10))));
                    arr_22 [i_0] [i_6] [i_7] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))) + (((((var_13) - (0ULL))) + (((unsigned long long int) (unsigned char)120))))));
                    arr_23 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned short) (short)1);
                    var_31 = ((/* implicit */unsigned char) min((var_31), (((/* implicit */unsigned char) (unsigned short)18707))));
                    arr_24 [(short)10] [i_6] [(short)10] [(short)10] = ((/* implicit */short) 5965905240114630865ULL);
                }
            } 
        } 
    }
    for (unsigned long long int i_8 = 3; i_8 < 12; i_8 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (short i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                {
                    {
                        var_32 -= ((/* implicit */unsigned long long int) ((short) ((unsigned long long int) var_1)));
                        var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)1024)) || (((/* implicit */_Bool) (short)-21629)))))))))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            arr_38 [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) 536870911U))));
                            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)32747)) ? (((/* implicit */int) (short)12987)) : (((/* implicit */int) (short)17600))));
                        }
                        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) 
                        {
                            arr_42 [i_8] [i_8] [i_8] [(short)11] [(short)11] [(short)11] [i_8] = ((/* implicit */short) ((signed char) max(((short)28672), (((/* implicit */short) var_16)))));
                            var_35 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((12480838833594920769ULL) - (14813394289713956902ULL))))));
                            var_36 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_10))));
                            var_37 = min((((((/* implicit */_Bool) ((signed char) var_11))) ? (((((/* implicit */_Bool) (short)13004)) ? (14812635865469076387ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)96))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16))))))), (((/* implicit */unsigned long long int) (short)1278)));
                            arr_43 [i_8] [i_8] [i_8] [i_11] [i_8] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (short)-28673)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (signed char)100))) ? (max((1280324568556914485ULL), (((/* implicit */unsigned long long int) -1LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6144))))))));
                        }
                        /* vectorizable */
                        for (signed char i_14 = 2; i_14 < 11; i_14 += 4) 
                        {
                            var_38 += ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)6816))))) | (((/* implicit */int) ((short) (signed char)-40)))));
                            arr_47 [8ULL] [8ULL] [(signed char)2] [8ULL] [8ULL] [i_11] [i_14 - 2] = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)87))))));
                        }
                    }
                } 
            } 
        } 
        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (short)0))));
    }
    /* vectorizable */
    for (unsigned short i_15 = 0; i_15 < 15; i_15 += 2) 
    {
        arr_51 [i_15] = ((/* implicit */signed char) ((5965905240114630860ULL) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)0)))))));
        var_40 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_11))));
    }
}
