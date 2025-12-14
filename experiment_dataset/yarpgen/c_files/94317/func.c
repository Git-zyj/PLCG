/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94317
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
    var_14 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned char)137)), (((int) 70368744177663ULL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-1075)), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */unsigned long long int) ((4294967295U) << (((((/* implicit */int) (unsigned char)128)) - (120)))))) : (max((70368744177663ULL), (((/* implicit */unsigned long long int) 16LL))))))));
        var_16 = min((arr_0 [i_0 - 1]), (((unsigned short) (~(70368744177632LL)))));
        /* LoopNest 2 */
        for (short i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) 
                    {
                        var_17 &= ((/* implicit */unsigned short) min((arr_7 [i_0] [i_0] [i_0] [1U]), (((/* implicit */short) (signed char)1))));
                        var_18 *= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27246))) >= (13366793510710422771ULL)));
                    }
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3521951562U)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 13; i_4 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (unsigned int i_6 = 0; i_6 < 13; i_6 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        for (short i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            {
                                arr_26 [i_4] [i_5] [(unsigned char)6] [(unsigned char)6] [(signed char)9] [i_8] [(_Bool)1] = ((/* implicit */unsigned long long int) arr_22 [i_4] [(unsigned short)1] [i_8]);
                                var_20 = ((/* implicit */short) arr_25 [i_4] [i_8 + 4] [(short)11] [i_4] [i_8 + 4]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_9 = 3; i_9 < 12; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (+(773015734U)))) ? (((/* implicit */int) (short)27246)) : (((/* implicit */int) ((((/* implicit */long long int) arr_20 [i_4] [i_4] [i_4] [i_4])) >= (2251799813685247LL))))));
                                arr_35 [(unsigned char)10] [i_5] [i_5] [i_5] [(_Bool)0] = ((/* implicit */short) 8128U);
                                arr_36 [i_4] [i_4] [i_4] [i_4] [i_4] [(unsigned short)6] = ((/* implicit */long long int) (short)4971);
                                var_22 = ((/* implicit */unsigned char) 3521951556U);
                                arr_37 [i_4] [i_4] [i_5] [i_6] [i_4] [i_9 - 3] [i_4] = ((/* implicit */unsigned char) arr_7 [i_4] [11U] [11U] [12LL]);
                            }
                        } 
                    } 
                    var_23 -= ((/* implicit */short) ((arr_4 [i_4] [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (short)30654)))));
                    var_24 = ((/* implicit */long long int) ((short) arr_16 [i_4] [(unsigned short)6]));
                }
            } 
        } 
        var_25 ^= ((/* implicit */short) arr_22 [i_4] [i_4] [i_4]);
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)89)) <= (((/* implicit */int) (short)-24516)))))) <= (8145U)));
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        var_27 -= ((/* implicit */short) (!(((/* implicit */_Bool) 342024784141555964ULL))));
        /* LoopSeq 1 */
        for (unsigned int i_12 = 0; i_12 < 18; i_12 += 2) 
        {
            arr_43 [(_Bool)1] [i_12] |= ((/* implicit */_Bool) max((39705006U), (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)188))) * (773015752U))) * ((+(773015734U)))))));
            var_28 = ((/* implicit */_Bool) (signed char)-126);
        }
    }
    var_29 = (_Bool)1;
    var_30 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) 2147483647)), (-6663763979670040210LL)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)214)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (_Bool)1)))) != (((((/* implicit */_Bool) 2147483647LL)) ? (2147483647) : (((/* implicit */int) (_Bool)0))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) || (((/* implicit */_Bool) (short)13523))))) : (((/* implicit */int) ((signed char) -70368744177646LL)))))));
}
