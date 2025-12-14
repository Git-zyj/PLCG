/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7612
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
        arr_4 [i_0] = ((/* implicit */signed char) (+(((((/* implicit */int) var_7)) - (((/* implicit */int) arr_2 [2LL]))))));
        arr_5 [i_0] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [(_Bool)1])) && ((!(((/* implicit */_Bool) arr_8 [8LL])))))))));
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) arr_6 [(unsigned short)6]))));
            arr_11 [i_1] [i_2] = ((/* implicit */signed char) var_7);
        }
        for (unsigned int i_3 = 4; i_3 < 19; i_3 += 4) 
        {
            arr_15 [i_3 + 1] [i_3 - 4] [(unsigned short)5] = ((/* implicit */_Bool) ((signed char) var_7));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) 1486525908U)) || (((/* implicit */_Bool) -1LL))));
        }
        for (unsigned short i_4 = 1; i_4 < 20; i_4 += 1) 
        {
            arr_18 [i_4 + 1] [i_4 + 1] [i_4 - 1] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((unsigned int) var_18))) / (9229337863790967027ULL)));
            /* LoopSeq 1 */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 2) 
            {
                arr_22 [i_1] [20U] [(unsigned char)14] = ((/* implicit */unsigned short) arr_13 [i_1] [3U] [(_Bool)1]);
                arr_23 [i_1] [i_4 + 1] [i_5] = ((/* implicit */int) (~(-9LL)));
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    var_23 *= ((/* implicit */_Bool) arr_16 [i_6] [8LL] [i_4 - 1]);
                    var_24 = ((/* implicit */unsigned int) (+(((0LL) >> (((4294967295U) - (4294967276U)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        arr_29 [(signed char)12] [i_5] [i_5] [i_4 + 1] [(signed char)14] [4] [i_6] |= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(arr_6 [i_4 + 1])))) * (((9217406209918584576ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)66)))))));
                        arr_30 [i_4 + 1] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_13 [(signed char)13] [(signed char)3] [i_7 + 3])) * ((+(arr_9 [(unsigned short)9] [(unsigned char)17])))));
                    }
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned int) ((9229337863790967024ULL) * (((((/* implicit */unsigned long long int) arr_10 [1] [i_1])) / (9217406209918584574ULL)))));
                        arr_34 [(unsigned short)15] [i_4 + 1] [3U] [20U] [i_8] = ((/* implicit */unsigned short) var_14);
                    }
                    for (unsigned int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [i_1] [i_6])) ^ (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) arr_20 [(_Bool)1] [(unsigned short)5] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_19)) : (arr_20 [i_4 + 1] [(unsigned char)16] [i_6]))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((9217406209918584580ULL) - (9217406209918584580ULL))))))));
                        var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (-((+(((/* implicit */int) (unsigned short)65519)))))))));
                    }
                    for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                    {
                        arr_40 [(unsigned short)10] [i_4 - 1] [i_5] [(unsigned char)15] [20U] [i_10 + 1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) != (((/* implicit */int) var_15))));
                        var_28 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_26 [i_1] [(_Bool)1] [20U] [i_10 + 3]))))));
                        var_29 ^= ((/* implicit */_Bool) (~(-6LL)));
                    }
                    arr_41 [(_Bool)1] [i_4 - 1] [i_5] [i_6] |= ((/* implicit */unsigned short) arr_6 [(unsigned short)6]);
                }
            }
            var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((var_5) || (((/* implicit */_Bool) arr_38 [i_1] [(signed char)9] [(unsigned short)4] [i_4 + 1] [i_4 - 1])))) ? (arr_6 [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65408)))))))))));
        }
        for (long long int i_11 = 2; i_11 < 20; i_11 += 3) 
        {
            var_31 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_43 [i_1] [i_11 - 1] [i_11]))));
            var_32 = ((/* implicit */int) arr_31 [i_11 - 1] [i_11 + 1] [i_11 - 2] [i_1] [12U] [i_1]);
            var_33 = ((/* implicit */short) (!(((/* implicit */_Bool) -2006969258))));
            var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_1] [i_1] [i_11 - 2] [i_11 + 1]))) / (arr_10 [12LL] [(unsigned short)11]))))));
        }
        var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) var_13))));
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 22; i_12 += 1) 
    {
        arr_46 [(short)16] |= ((/* implicit */unsigned char) ((((((/* implicit */long long int) var_19)) / (914055218878968323LL))) * (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65414)))));
        arr_47 [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_45 [i_12]))));
        /* LoopNest 2 */
        for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
        {
            for (int i_14 = 0; i_14 < 24; i_14 += 1) 
            {
                {
                    var_36 += ((/* implicit */unsigned int) 9217406209918584580ULL);
                    var_37 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((short) var_9)))));
                }
            } 
        } 
    }
    var_38 = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -1LL)))))) : (max((-21LL), (((/* implicit */long long int) 1486525908U)))))))));
    var_39 ^= ((/* implicit */long long int) (-((+(((/* implicit */int) max(((unsigned short)37056), (((/* implicit */unsigned short) var_8)))))))));
}
