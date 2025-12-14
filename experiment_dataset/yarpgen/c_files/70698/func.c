/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70698
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_14 -= ((/* implicit */signed char) arr_0 [14]);
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) (+(arr_4 [i_1] [i_0])))) : (((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (((((/* implicit */long long int) arr_2 [4ULL] [i_1] [i_1])) / (var_0))) : (((6702253008663034062LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)61244)))))))));
                var_15 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned char)34)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_0)) ? (arr_2 [i_0] [(signed char)2] [i_1]) : (arr_2 [i_1] [(unsigned short)17] [i_0])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
        {
            {
                arr_12 [i_2] [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_8))));
                /* LoopSeq 4 */
                for (unsigned short i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    var_16 &= (_Bool)1;
                    arr_15 [i_2] [i_3] [i_4] = ((/* implicit */short) max(((+((-(((/* implicit */int) var_7)))))), (((/* implicit */int) ((short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))));
                }
                for (short i_5 = 0; i_5 < 17; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_6 = 2; i_6 < 14; i_6 += 3) 
                    {
                        for (unsigned short i_7 = 0; i_7 < 17; i_7 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) var_10))));
                                var_18 = min(((!(((/* implicit */_Bool) ((unsigned long long int) arr_10 [3LL]))))), (((((((/* implicit */_Bool) arr_19 [i_2] [2U] [i_5])) || (((/* implicit */_Bool) arr_18 [i_2] [i_3] [(unsigned char)9] [i_3])))) || (((/* implicit */_Bool) max(((short)9303), (((/* implicit */short) (_Bool)1))))))));
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_6 + 1] [(unsigned short)12] [i_7] [i_7])))) ? (((((/* implicit */_Bool) (+(-3630131)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [(signed char)4] [i_2] [0]))))) : (((arr_13 [i_2] [i_3] [(unsigned short)7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) var_9))));
                                arr_25 [16U] [i_7] [6] [i_5] [(unsigned short)8] [16U] |= ((/* implicit */int) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_16 [7ULL] [(short)0] [i_5] [i_5])))), ((~(((/* implicit */int) (unsigned char)126))))))) || (((/* implicit */_Bool) arr_21 [i_3] [i_5] [i_6]))));
                            }
                        } 
                    } 
                    arr_26 [i_2] [(short)0] [i_5] [i_5] = ((((/* implicit */_Bool) ((long long int) arr_2 [1] [i_3] [9]))) ? (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [(unsigned short)10] [9] [i_5]))))), (((((/* implicit */_Bool) (signed char)127)) ? (arr_19 [9] [i_5] [(unsigned short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_5 [7U] [i_5])) > (((/* implicit */int) (_Bool)1)))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_29 [i_8] [i_2] = ((/* implicit */unsigned long long int) ((long long int) ((arr_1 [i_3]) ? (((/* implicit */int) arr_27 [i_2] [i_3] [(short)8])) : (((/* implicit */int) arr_16 [i_8] [i_8] [13LL] [5U])))));
                    arr_30 [i_8] [7] [i_2] = ((/* implicit */unsigned long long int) ((arr_1 [i_2]) || (((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) var_5))));
                    arr_31 [(short)12] [i_3] = (!(((/* implicit */_Bool) ((long long int) 16759990977022309611ULL))));
                }
                for (short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    arr_35 [i_2] [i_2] [i_9] [i_2] = ((unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-127)) || (((/* implicit */_Bool) arr_22 [i_2])))))) : ((+(-3465841174850860352LL)))));
                    arr_36 [i_9] [13LL] [i_2] = ((/* implicit */int) arr_17 [10U] [(short)0] [i_3] [i_2]);
                    var_21 = ((/* implicit */unsigned char) var_4);
                }
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((int) var_2)) - (min((((int) var_1)), (((/* implicit */int) var_7))))));
}
