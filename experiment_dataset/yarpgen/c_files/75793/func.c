/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75793
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
    var_10 = ((/* implicit */signed char) max((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) (short)11822)) || (((/* implicit */_Bool) var_8))))), (max((var_4), (((/* implicit */int) var_1))))))) != (var_9))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned char i_2 = 4; i_2 < 19; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0]))));
                    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) (short)5385))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 2])) ? (((/* implicit */int) (signed char)88)) : (((/* implicit */int) arr_3 [i_2])))) : ((~(((/* implicit */int) (unsigned short)0))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 2; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 20; i_4 += 4) 
                        {
                            {
                                var_13 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)5385)) ? (((((/* implicit */_Bool) 9234309544808577254ULL)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) arr_3 [i_0])))) : ((~(((/* implicit */int) (signed char)62))))));
                                var_14 = ((/* implicit */short) (-(arr_0 [i_0] [i_2 - 3])));
                                arr_12 [(unsigned char)2] [i_1] = ((/* implicit */unsigned char) (+(arr_6 [i_2 - 4] [(unsigned short)14] [i_3 + 1] [i_4 - 1])));
                                arr_13 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_3] [i_2] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) (+(-335876356)))) : (arr_0 [i_2 - 3] [i_2 - 4])));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */unsigned char) ((arr_6 [i_0] [(short)20] [i_0] [i_0]) >> (((arr_6 [(_Bool)1] [i_0] [i_0] [i_0]) - (571754514U)))));
        var_16 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [10ULL] [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_0] [(unsigned char)15] [i_0] [i_0]))));
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)568)) && (((/* implicit */_Bool) ((signed char) (signed char)63)))));
    }
    for (long long int i_5 = 0; i_5 < 21; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            arr_18 [i_6] [i_5] = ((/* implicit */unsigned char) min((arr_5 [i_6] [i_6] [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((arr_9 [3] [(short)13] [(short)2] [i_5] [i_5]), (arr_14 [i_6])))) ^ (((/* implicit */int) max((arr_17 [i_5]), (((/* implicit */signed char) (_Bool)0))))))))));
            arr_19 [i_6] [i_6] = ((/* implicit */signed char) (-(((/* implicit */int) max(((unsigned short)37766), ((unsigned short)769))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 1; i_7 < 20; i_7 += 3) 
            {
                for (signed char i_8 = 1; i_8 < 19; i_8 += 2) 
                {
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) 
                    {
                        {
                            arr_27 [i_5] [i_6] [i_6] [i_8 + 2] [i_9] = ((/* implicit */short) max((((((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [16ULL]))) & (3676882465U))) ^ (((/* implicit */unsigned int) (+(((/* implicit */int) arr_7 [i_9] [i_8 - 1] [i_6] [i_5]))))))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_10 [(unsigned char)16])))), (((((/* implicit */int) (signed char)63)) / (((/* implicit */int) arr_14 [i_5])))))))));
                            var_18 = ((((((/* implicit */_Bool) arr_23 [i_8 + 1])) || (((/* implicit */_Bool) arr_23 [i_5])))) ? (min((((/* implicit */unsigned long long int) arr_7 [i_5] [i_8 + 2] [i_9] [i_9])), (max((((/* implicit */unsigned long long int) 335876353)), (5309794992450005579ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)143)) ? (((/* implicit */int) ((((/* implicit */int) arr_7 [i_9] [i_8] [i_6] [7ULL])) != (((/* implicit */int) arr_7 [i_9] [i_8] [i_6] [i_5]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7)))))))));
                            var_19 |= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-1373113364), (-1237211649)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_24 [i_5] [(unsigned short)9]))))) : (arr_11 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_8 + 1])))), (max((arr_5 [i_8] [i_5] [i_5]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_17 [i_5])))))))));
                        }
                    } 
                } 
            } 
            arr_28 [i_6] [i_6] = ((/* implicit */signed char) max((max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)32017)), (2147483647)))), (arr_20 [i_5] [i_6] [2U]))), (max((max((arr_20 [(short)15] [(short)12] [i_5]), (((/* implicit */unsigned int) (unsigned short)0)))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) * (((/* implicit */int) (unsigned char)0)))))))));
        }
        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 4) /* same iter space */
        {
            arr_33 [i_10] [i_5] [i_5] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) (unsigned short)61316))), ((((!(((/* implicit */_Bool) (unsigned short)33518)))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_5] [i_10] [i_5] [i_5] [i_5] [i_5])), (16278610741570959229ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [19ULL])))))));
            arr_34 [i_10] = ((/* implicit */unsigned short) arr_6 [i_10] [15] [(unsigned char)15] [i_5]);
        }
        /* vectorizable */
        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */short) (-(arr_11 [i_5] [i_5] [i_5] [(unsigned short)8])));
            var_21 = ((/* implicit */short) (-9223372036854775807LL - 1LL));
            var_22 |= ((/* implicit */unsigned long long int) ((arr_11 [12LL] [i_5] [i_11 - 1] [15U]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_11 + 3])))));
        }
        var_23 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((arr_20 [i_5] [(_Bool)1] [(_Bool)1]) < (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)255)) % (((/* implicit */int) arr_37 [(unsigned char)13] [i_5])))))))), (max((((/* implicit */unsigned int) arr_26 [i_5] [i_5] [6LL] [i_5] [6LL])), ((~(145325706U)))))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_8 [i_5] [16U] [i_5] [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) arr_30 [i_5]))))), (arr_32 [i_5]))))) > (max((((/* implicit */unsigned long long int) arr_6 [i_5] [19] [i_5] [i_5])), (arr_0 [i_5] [(signed char)12])))));
        var_25 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)20526)) ? (arr_6 [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5])))))) && (((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)64954), (((/* implicit */unsigned short) (short)-13521)))))) : (((((/* implicit */_Bool) arr_4 [i_5] [i_5])) ? (((((/* implicit */_Bool) arr_10 [i_5])) ? (arr_31 [(signed char)4] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_5]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [4U] [i_5])) ? (((/* implicit */int) arr_36 [i_5] [i_5] [(unsigned short)12])) : (((/* implicit */int) arr_14 [i_5])))))))));
    }
    var_26 = ((/* implicit */signed char) (+(var_9)));
    var_27 = ((/* implicit */unsigned int) max((((/* implicit */int) var_6)), (((((/* implicit */int) var_1)) + (((/* implicit */int) ((_Bool) var_7)))))));
}
