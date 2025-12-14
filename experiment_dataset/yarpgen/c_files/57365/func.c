/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57365
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
    var_13 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) (~(-5053553913332721933LL)))) + (9135723537156486222ULL))), (min((min((9311020536553065403ULL), (9135723537156486222ULL))), (max((9311020536553065393ULL), (((/* implicit */unsigned long long int) var_0))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (9311020536553065394ULL)));
        var_14 ^= ((/* implicit */short) min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_1 [9LL]))));
    }
    var_15 = ((/* implicit */signed char) (short)-1);
    var_16 = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) ((signed char) var_4)))) / (var_8))) > (((/* implicit */long long int) ((/* implicit */int) (short)-32761)))));
    /* LoopSeq 3 */
    for (short i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        arr_7 [(signed char)1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
        arr_8 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1])))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62882)) ^ (((/* implicit */int) (unsigned char)40))))) ? (3468150433U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1])))));
    }
    for (unsigned int i_2 = 1; i_2 < 11; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 1; i_3 < 10; i_3 += 4) 
        {
            for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
            {
                {
                    arr_18 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_12 [i_2 + 1]), (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_4])) || (((/* implicit */_Bool) arr_9 [(short)8] [(unsigned short)4])))))))) ? (((((/* implicit */int) (unsigned char)124)) * (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((short) arr_15 [i_4])))));
                    arr_19 [i_2] [(unsigned char)0] [i_4] [i_4] |= ((/* implicit */unsigned short) (((((~(((/* implicit */int) arr_9 [i_2] [(_Bool)0])))) == (((((/* implicit */int) (_Bool)1)) | (1993313616))))) ? ((+(arr_13 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-31124)))));
                }
            } 
        } 
        arr_20 [i_2] = ((/* implicit */short) (~(min((((long long int) (unsigned char)40)), (((/* implicit */long long int) ((((/* implicit */int) arr_15 [(unsigned char)6])) * (((/* implicit */int) arr_16 [2LL])))))))));
    }
    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (signed char i_6 = 0; i_6 < 21; i_6 += 2) 
        {
            var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) / (13576649915387099424ULL))))));
            var_19 ^= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_22 [i_6]) ? (((/* implicit */int) arr_21 [i_6])) : (((/* implicit */int) arr_24 [(_Bool)1] [i_6] [i_6]))))) ? (((unsigned int) arr_23 [i_6])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_6]))))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_5])) - (((/* implicit */int) arr_24 [i_5] [i_5] [(unsigned short)5])))) | (((/* implicit */int) ((signed char) (signed char)31))))))));
            /* LoopSeq 3 */
            for (short i_7 = 0; i_7 < 21; i_7 += 1) 
            {
                arr_27 [i_5] [i_6] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_5])) || ((!(((/* implicit */_Bool) -668455391))))))), (((arr_25 [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_23 [i_5])), (arr_1 [(signed char)8])))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_20 ^= ((/* implicit */unsigned short) (((~(arr_28 [i_5] [i_6] [12U] [i_8] [i_9]))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_23 [i_6])) <= (((/* implicit */int) arr_23 [i_6]))))))));
                            arr_32 [(unsigned char)18] [i_5] [(unsigned char)8] [i_7] [i_5] [(signed char)8] = max((((arr_22 [i_5]) && (arr_22 [i_5]))), (arr_22 [i_5]));
                        }
                    } 
                } 
            }
            for (int i_10 = 3; i_10 < 20; i_10 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (signed char i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        {
                            arr_39 [i_5] [(short)20] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_5] [(unsigned char)13] [i_10 - 3] [i_11] [5ULL] [1LL] [(_Bool)1])) || (((/* implicit */_Bool) arr_38 [(short)5] [i_6] [i_10 - 2] [i_11] [4ULL] [i_5] [10ULL]))))), (arr_38 [i_5] [i_5] [i_10 - 1] [i_11] [10ULL] [i_11] [i_5])));
                            arr_40 [8] [i_5] [i_11] [i_12] = ((short) max((arr_35 [i_5] [i_6] [(unsigned short)19] [8U]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)89)) || (((/* implicit */_Bool) (signed char)32)))))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) arr_31 [(_Bool)1] [i_6] [i_10] [i_5] [16]))));
                /* LoopSeq 1 */
                for (short i_13 = 4; i_13 < 19; i_13 += 4) 
                {
                    arr_45 [i_10] [i_10] [(_Bool)1] [i_10] [i_10] [i_5] = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((arr_1 [i_5]), (arr_1 [15ULL])))) ? (((((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_10] [(unsigned char)12])) ? (((/* implicit */int) arr_44 [i_13] [i_10] [i_6] [i_5])) : (((/* implicit */int) (signed char)-1)))) : (min((((/* implicit */int) arr_21 [i_5])), (1414901338))))), (((int) ((((/* implicit */int) arr_24 [(short)16] [i_6] [i_13])) & (((/* implicit */int) arr_36 [i_5] [i_6] [i_10] [i_13] [i_13])))))));
                    var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((max((((/* implicit */unsigned int) ((((/* implicit */int) arr_22 [i_13])) >> (((8107790422128110911ULL) - (8107790422128110891ULL)))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6]))) & (arr_25 [i_5]))))) << ((((~(((/* implicit */int) arr_38 [i_10 - 2] [i_13] [i_13 - 4] [i_13] [i_13] [i_13] [i_13 - 4])))) + (41401))))))));
                    arr_46 [i_5] [(unsigned char)16] [i_10] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_34 [i_13 + 2] [i_13 + 1] [i_13 - 4] [i_13]), (arr_34 [i_13 - 2] [i_13 - 4] [i_13 - 3] [i_13])))) << (((max((-21), (((/* implicit */int) (unsigned short)511)))) - (506)))));
                    var_23 ^= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5267))) <= (4870094158322452201ULL)))) >= ((+(((/* implicit */int) arr_30 [i_5] [i_5] [i_6] [16] [i_10] [i_10] [i_13]))))));
                }
            }
            for (int i_14 = 3; i_14 < 20; i_14 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    for (short i_16 = 2; i_16 < 18; i_16 += 4) 
                    {
                        {
                            var_24 += ((/* implicit */signed char) arr_41 [i_6] [i_14 + 1] [12U] [i_15]);
                            var_25 = ((/* implicit */long long int) arr_49 [1U] [i_15] [i_16]);
                        }
                    } 
                } 
                var_26 = ((((/* implicit */int) min((((/* implicit */unsigned char) (signed char)102)), ((unsigned char)255)))) * (((/* implicit */int) arr_21 [i_5])));
                arr_54 [i_5] [i_5] [i_5] [i_6] &= ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) 5571264158106669352ULL))))), (arr_30 [i_5] [12U] [i_6] [i_6] [i_5] [i_14 - 2] [i_5])));
            }
            arr_55 [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */int) arr_38 [i_5] [i_6] [i_5] [i_6] [i_5] [i_5] [i_5])) - (((/* implicit */int) arr_38 [(_Bool)1] [i_6] [i_6] [i_6] [i_5] [i_5] [i_5])))));
        }
        arr_56 [i_5] = ((/* implicit */unsigned short) arr_24 [(unsigned short)9] [16ULL] [i_5]);
    }
}
