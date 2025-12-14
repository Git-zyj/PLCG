/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94064
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
    var_13 &= ((/* implicit */unsigned char) 4176794796U);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_14 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)106))) : (4176794778U)))) & (((unsigned long long int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */unsigned short) ((2021530101) / (((/* implicit */int) (unsigned char)248))));
        var_16 *= ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) - (((long long int) (signed char)-42))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) var_2)) < (832905182)))) : (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))));
                    arr_8 [i_1] [i_2] [i_2] |= ((/* implicit */unsigned int) (-(4075157602952929489ULL)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 22; i_3 += 4) 
    {
        var_18 = ((unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_3]))));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) max((var_19), (((unsigned int) ((arr_3 [6U] [i_6] [i_5]) || (((/* implicit */_Bool) arr_6 [i_3] [i_4] [(unsigned short)9] [(unsigned short)9])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)168)) > (((/* implicit */int) (unsigned short)49615))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                arr_25 [i_3] [20U] [i_8] [i_8] = ((/* implicit */unsigned long long int) var_8);
                var_21 = ((arr_12 [i_8] [i_4]) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_4]))))) : (((/* implicit */int) var_10)));
                arr_26 [i_4] [1LL] [i_8] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-42)) && (((/* implicit */_Bool) 4176794789U))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) (short)24451)))))));
            }
        }
        for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) /* same iter space */
        {
            arr_30 [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (3351047057313932933ULL) : (25ULL)))) ? ((+(((/* implicit */int) (_Bool)1)))) : ((~(((/* implicit */int) var_7))))));
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
            {
                for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                {
                    {
                        var_22 = ((/* implicit */long long int) (+(arr_27 [i_3] [i_3] [(_Bool)1])));
                        /* LoopSeq 3 */
                        for (short i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (((+(536870784U))) > (0U))))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-14454)) ^ (1795996678)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)-14454))) | (2438475647U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-69)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)40630))))))))));
                            var_25 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) arr_22 [i_3] [i_9] [i_10] [i_9])) : (arr_13 [i_3]))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7))))));
                            var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)-18330)) | ((~(((/* implicit */int) var_1))))));
                            var_27 = ((/* implicit */int) var_11);
                        }
                        for (long long int i_13 = 0; i_13 < 22; i_13 += 1) 
                        {
                            var_28 = ((/* implicit */signed char) ((unsigned char) arr_6 [i_3] [i_9] [i_10] [i_10]));
                            arr_41 [i_13] [i_13] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_23 [i_3] [i_9] [i_10]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551604ULL))))) : (((((/* implicit */_Bool) arr_39 [i_3])) ? (((/* implicit */int) (short)11435)) : (((/* implicit */int) var_3))))));
                        }
                        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)14454)) ? (((/* implicit */int) (short)26373)) : (((/* implicit */int) arr_33 [i_3])))))));
                            arr_45 [i_9] [i_9] [i_14] [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */int) var_9)) >= (((/* implicit */int) var_6)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_11)))) : (arr_28 [i_3])));
                        }
                        var_30 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_36 [1ULL] [i_9] [i_10] [i_10] [(signed char)14] [1ULL])) && (((/* implicit */_Bool) 3351047057313932933ULL)))) || (((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) (short)32762))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (unsigned char i_15 = 0; i_15 < 22; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                {
                    arr_51 [i_16] [i_15] [17ULL] |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_3] [i_3] [i_16])) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_29 [i_3])) : (((/* implicit */int) (signed char)18)))) : (((/* implicit */int) arr_14 [i_3] [i_15]))));
                    var_31 = ((/* implicit */int) (short)-14463);
                    arr_52 [i_15] [i_16] = ((/* implicit */unsigned char) ((unsigned int) (~(((/* implicit */int) var_3)))));
                }
            } 
        } 
        arr_53 [i_3] = ((/* implicit */_Bool) arr_38 [i_3] [i_3] [(unsigned char)13] [i_3] [i_3] [i_3] [i_3]);
    }
}
