/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61109
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61109 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61109
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_18 = ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) (short)-4718)) : (262143));
                var_19 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [10ULL] [10ULL]), (((/* implicit */int) (_Bool)1))))) ? (arr_1 [i_1]) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((+(arr_3 [i_0] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 25; i_4 += 2) 
            {
                for (int i_5 = 0; i_5 < 25; i_5 += 2) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((unsigned long long int) arr_11 [i_2] [(_Bool)1]));
                        arr_15 [10LL] [10LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_2] [i_3] [i_4]))) ^ (arr_9 [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_13 [i_2] [i_3] [(_Bool)1] [i_5] [i_3] [i_5])))) : (((((/* implicit */_Bool) arr_12 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_3] [i_4] [(_Bool)1]))) : (arr_7 [(signed char)9] [i_3])))));
                    }
                } 
            } 
            var_21 = ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_2] [i_3] [i_3]);
        }
        var_22 = ((/* implicit */signed char) (+(((int) (_Bool)1))));
        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((arr_6 [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))) : (((((/* implicit */_Bool) arr_13 [i_2] [15] [i_2] [i_2] [15] [22])) ? (arr_9 [(unsigned short)7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [(signed char)20] [i_2] [i_2]))))))))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        arr_20 [(unsigned char)7] [i_6] = ((_Bool) max((-3971778551738960915LL), ((((_Bool)1) ? (arr_7 [i_6] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
        var_24 &= ((/* implicit */short) max(((!(((/* implicit */_Bool) arr_4 [i_6])))), (((_Bool) min((arr_12 [i_6]), (((/* implicit */unsigned long long int) arr_17 [8LL] [(signed char)0])))))));
        arr_21 [i_6] = ((/* implicit */long long int) ((arr_6 [i_6]) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_6])), (arr_7 [i_6] [i_6])))) ? (((/* implicit */int) (unsigned short)59812)) : (((/* implicit */int) max((((/* implicit */short) (signed char)-1)), (arr_16 [i_6] [i_6]))))))) : (((unsigned int) ((var_6) ? (((/* implicit */int) var_3)) : (267521469))))));
    }
    for (int i_7 = 1; i_7 < 8; i_7 += 2) 
    {
        var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_1 [i_7 - 1])))) ? (((((/* implicit */_Bool) arr_23 [i_7 - 1])) ? (arr_23 [i_7 + 2]) : (arr_23 [i_7]))) : (((long long int) arr_23 [i_7 + 2]))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                    {
                        var_26 += ((/* implicit */unsigned long long int) max((arr_25 [i_9] [i_7 - 1] [i_7 + 2]), (min((arr_25 [i_9] [i_7 + 2] [i_7 + 1]), (((/* implicit */long long int) arr_16 [i_7 + 1] [i_10]))))));
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_11 [i_7] [i_10])))));
                        arr_32 [i_10] [i_8] [i_9] [(_Bool)1] [i_8] [i_7] = ((/* implicit */unsigned short) min((((/* implicit */int) arr_28 [i_7] [i_7 - 1] [i_7])), (arr_17 [i_8] [i_10])));
                    }
                    for (unsigned short i_11 = 1; i_11 < 9; i_11 += 3) 
                    {
                        arr_35 [i_8] [i_8] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_8] [i_7 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((long long int) (unsigned char)253))))) : (arr_9 [i_9])));
                        var_28 = ((/* implicit */_Bool) ((unsigned char) arr_31 [i_7] [i_7] [i_9] [i_11]));
                        arr_36 [i_9] [i_8] = ((/* implicit */unsigned long long int) ((long long int) (-(arr_5 [i_7]))));
                    }
                    arr_37 [i_9] &= ((/* implicit */short) (unsigned char)0);
                }
            } 
        } 
        arr_38 [i_7 + 2] = ((/* implicit */signed char) arr_29 [(short)4] [6] [i_7]);
        var_29 = ((/* implicit */signed char) arr_31 [(_Bool)1] [(short)9] [i_7] [i_7]);
    }
    /* vectorizable */
    for (signed char i_12 = 0; i_12 < 17; i_12 += 2) 
    {
        arr_41 [i_12] [i_12] = ((/* implicit */unsigned long long int) arr_6 [i_12]);
        var_30 = ((/* implicit */unsigned long long int) ((signed char) ((unsigned long long int) arr_6 [i_12])));
        var_31 = ((/* implicit */unsigned int) arr_12 [i_12]);
    }
}
