/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66771
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
    var_11 = ((/* implicit */_Bool) ((1659192802U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)121)))));
    var_12 = ((/* implicit */int) max((var_12), ((-(((/* implicit */int) (signed char)127))))));
    /* LoopSeq 3 */
    for (int i_0 = 4; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_1 [i_0 + 1] [i_0])), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 - 4]), (((/* implicit */unsigned char) ((_Bool) arr_0 [18]))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) * (((arr_1 [i_0] [13]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (var_1)))))));
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-112))) : (var_1))) * (2475116299971912928ULL)));
        var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        var_16 ^= (-(((/* implicit */int) arr_2 [i_1])));
        /* LoopNest 3 */
        for (unsigned char i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                for (unsigned int i_4 = 0; i_4 < 13; i_4 += 4) 
                {
                    {
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((_Bool) (signed char)-101)))));
                        arr_12 [i_3] [(unsigned short)0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_4 [i_3] [i_4]))));
                        /* LoopSeq 1 */
                        for (unsigned char i_5 = 4; i_5 < 10; i_5 += 4) 
                        {
                            arr_15 [(short)7] [(_Bool)1] [i_3] [i_3] [i_2] [8LL] = ((/* implicit */unsigned short) ((((arr_11 [(short)1] [i_4] [i_3] [i_1]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [(short)8] [(signed char)1]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) <= ((-9223372036854775807LL - 1LL))))) : (((((/* implicit */int) arr_13 [i_5] [i_5])) | (((/* implicit */int) var_2))))));
                            var_18 = ((/* implicit */unsigned long long int) arr_1 [i_5] [i_3]);
                            arr_16 [i_4] [i_2] [2U] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [2LL] [i_3] [i_3] [i_5 + 2] [(unsigned short)11] [(_Bool)1] [i_1])) ? (arr_14 [i_3] [i_2] [i_3] [i_5 + 2] [(unsigned char)5] [i_4] [3]) : (arr_14 [2LL] [i_2] [i_3] [i_5 + 2] [6ULL] [i_5] [11LL])));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        /* LoopSeq 3 */
        for (long long int i_7 = 0; i_7 < 11; i_7 += 4) /* same iter space */
        {
            arr_23 [3ULL] [i_6] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)2] [i_7])) ? (((/* implicit */int) arr_13 [4U] [8LL])) : (((/* implicit */int) ((signed char) ((arr_11 [0] [(_Bool)0] [(unsigned char)5] [i_7]) - (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
            var_19 = ((/* implicit */_Bool) arr_10 [2LL] [(_Bool)0]);
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 4) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_9 = 1; i_9 < 9; i_9 += 4) 
            {
                for (unsigned int i_10 = 0; i_10 < 11; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 7; i_11 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [4U] [i_8] [i_11] [(_Bool)1] [i_11] [i_9])) ? (min((min((var_1), (var_4))), (((/* implicit */unsigned long long int) arr_0 [18U])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [(_Bool)1])))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_9] [(_Bool)1]))))) < (((/* implicit */int) arr_0 [i_6]))))) != (((/* implicit */int) ((((/* implicit */int) ((_Bool) var_5))) <= (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [0] [(unsigned short)5]))))))))));
                            var_22 = ((/* implicit */signed char) ((long long int) (+(((((/* implicit */_Bool) arr_26 [i_6] [9] [(signed char)2])) ? (((/* implicit */unsigned long long int) 1571425253U)) : (arr_8 [6LL] [i_8] [(_Bool)1]))))));
                        }
                    } 
                } 
            } 
            var_23 = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_18 [i_8] [i_8])))) ^ (((((/* implicit */int) arr_18 [i_6] [i_8])) / (((/* implicit */int) arr_18 [i_6] [i_8]))))));
        }
        for (short i_12 = 3; i_12 < 10; i_12 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned int i_14 = 1; i_14 < 10; i_14 += 1) 
                {
                    {
                        var_24 = ((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) ((unsigned short) var_2)))))), (((arr_19 [i_12 + 1] [i_12 + 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_14 + 1])))))));
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((long long int) arr_26 [8ULL] [8] [i_12]))) - (((((/* implicit */_Bool) max(((signed char)-110), (((/* implicit */signed char) (_Bool)1))))) ? (((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) arr_35 [7LL] [i_12] [i_12] [3U] [i_12]))))) : (max((var_1), (((/* implicit */unsigned long long int) var_6))))))));
                        var_26 = ((/* implicit */unsigned long long int) var_10);
                    }
                } 
            } 
            var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 1603233920)) <= (9441047673843870299ULL)))))))));
        }
        /* LoopNest 3 */
        for (int i_15 = 1; i_15 < 8; i_15 += 4) 
        {
            for (unsigned short i_16 = 1; i_16 < 7; i_16 += 2) 
            {
                for (unsigned int i_17 = 2; i_17 < 8; i_17 += 4) 
                {
                    {
                        var_28 = ((/* implicit */int) arr_24 [i_15]);
                        arr_52 [(_Bool)1] [i_15] [(short)8] = ((/* implicit */short) ((unsigned int) arr_13 [i_6] [i_6]));
                        var_29 = ((/* implicit */unsigned char) ((long long int) 2475116299971912928ULL));
                        arr_53 [(_Bool)1] [i_15] [i_15] [(short)2] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)(-127 - 1))) % (((/* implicit */int) (short)4225))));
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_16] [i_16 - 1] [i_17 + 3])) ? (((((/* implicit */int) arr_31 [i_6] [i_16 + 4] [i_17 - 2])) - (((/* implicit */int) arr_31 [i_15] [i_16 + 2] [i_17 + 2])))) : (min((((/* implicit */int) arr_31 [(unsigned char)6] [i_16 + 4] [i_17 + 1])), (-2138174269)))));
                    }
                } 
            } 
        } 
    }
    var_31 = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (signed char)-47)) : (((/* implicit */int) (short)-21504))))), (var_7)));
}
