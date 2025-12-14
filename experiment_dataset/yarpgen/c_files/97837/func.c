/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97837
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
        arr_3 [i_0] [i_0] = (+(arr_1 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((arr_1 [i_0]) ^ (((/* implicit */unsigned long long int) (~(2876269664033181919LL))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((arr_1 [i_1]) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1])))))))))) ^ (arr_0 [i_1])));
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
        {
            arr_13 [i_1] [i_2] = ((/* implicit */short) ((((arr_7 [i_1] [i_2]) - (arr_7 [i_1] [i_2]))) / (arr_7 [i_1] [i_2])));
            var_13 = ((/* implicit */_Bool) arr_7 [i_1] [i_2]);
            arr_14 [i_1] [i_1] = ((/* implicit */long long int) arr_0 [i_1]);
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_22 [i_1] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_20 [i_1] [i_2] [i_3] [i_4] [i_2])), (((((((/* implicit */_Bool) -2876269664033181947LL)) ? (10771698268176665339ULL) : (((/* implicit */unsigned long long int) -1LL)))) - (((((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_2] [i_3] [i_2])) - (arr_17 [i_1] [i_2] [i_1] [i_4])))))));
                        var_14 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */short) arr_19 [i_1] [i_2] [i_3] [i_4])), (arr_6 [i_1])))), (max((((/* implicit */unsigned int) arr_9 [i_3])), (arr_11 [i_1] [i_4 - 1])))))), (arr_8 [i_4 - 1])));
                        arr_23 [i_1] [(_Bool)1] [(signed char)5] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_12 [i_1] [i_3] [i_4])), (arr_17 [i_1] [i_1] [i_3] [i_3]))), (((/* implicit */unsigned long long int) (~(arr_0 [i_4]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_19 [i_4 - 1] [i_3] [i_3] [i_4])) <= (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))))) : (((max((((/* implicit */unsigned long long int) arr_9 [i_4])), (arr_8 [i_4]))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_20 [i_1] [i_2] [i_4] [i_4] [i_3]))))))));
                        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)64))))) - (4294967295U)));
                        var_16 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)10)), (3077795408220966137ULL))), (((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_6 [i_1])), (arr_21 [i_1] [i_2] [i_1] [i_3] [i_4]))) & (((/* implicit */long long int) (+(arr_11 [i_1] [i_1])))))))));
                    }
                } 
            } 
            var_17 = ((/* implicit */_Bool) ((arr_17 [19U] [19U] [i_1] [19U]) % (((((/* implicit */unsigned long long int) ((arr_20 [i_1] [i_2] [i_2] [i_1] [i_1]) | (((/* implicit */long long int) arr_0 [i_1]))))) | (((arr_17 [i_1] [i_1] [i_1] [i_1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2] [i_2])))))))));
        }
        for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
        {
            arr_28 [i_1] [i_5] [i_5] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5]))) : (arr_12 [i_1] [i_1] [i_1])))) && (((/* implicit */_Bool) arr_18 [i_1] [i_5] [i_5] [i_1])))))));
            arr_29 [i_5] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_7 [i_5] [i_1])) > (arr_17 [i_1] [i_1] [i_1] [i_1]))))) - (min((arr_17 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_1] [i_1] [i_5])))));
        }
        var_18 = ((/* implicit */unsigned char) (+(((min((((/* implicit */unsigned int) arr_9 [5U])), (arr_7 [i_1] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_1] [(signed char)20])) != (((/* implicit */int) arr_16 [i_1] [i_1]))))))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            arr_32 [i_1] [i_1] [i_6] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) 3598785761U)), (12207850324284724356ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_27 [i_6 + 1])))))));
            arr_33 [i_1] [i_6] = ((/* implicit */long long int) (~((~(((((/* implicit */_Bool) arr_18 [i_6] [i_6 - 2] [i_6] [i_1])) ? (arr_12 [i_1] [i_6 - 2] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_6 - 1])))))))));
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned char i_8 = 1; i_8 < 21; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_9 = 2; i_9 < 22; i_9 += 3) 
                        {
                            arr_42 [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_19 [i_6] [i_7] [i_8] [i_9]))));
                            arr_43 [i_1] [i_6] [i_6 + 1] [i_7] [i_8 - 1] [i_7] [i_9] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */long long int) arr_27 [i_7 - 1])), (arr_40 [i_7])))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_38 [i_7])) - (((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1]))))))) ? (((min((((/* implicit */long long int) arr_9 [i_1])), (arr_40 [i_7]))) + (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_8 - 1]))))) : (((((/* implicit */_Bool) arr_37 [i_6 + 1] [i_7] [i_7 - 1] [i_6 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_6 - 2] [i_7] [15U] [i_8 - 1]))) : (arr_35 [i_9 - 2] [i_8 + 2] [i_7])))));
                            var_19 = ((/* implicit */signed char) ((max((((((/* implicit */int) arr_27 [i_7])) * (((/* implicit */int) arr_19 [(unsigned char)14] [(unsigned char)14] [19LL] [i_9 - 1])))), (((((/* implicit */int) arr_16 [i_1] [i_8])) / (((/* implicit */int) arr_26 [i_1] [i_1])))))) + (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_6 [i_1])), (arr_17 [i_1] [i_7 - 1] [i_8] [(short)2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_17 [i_9] [18LL] [i_7] [i_6]) <= (((/* implicit */unsigned long long int) arr_0 [i_9])))))))))));
                            arr_44 [i_1] [i_7] [i_7 - 1] [i_8 - 1] [i_9] = ((/* implicit */unsigned char) min((((/* implicit */long long int) min((arr_18 [i_1] [i_6 + 1] [i_8 + 1] [i_9]), (arr_18 [(_Bool)1] [i_6 - 1] [i_8 + 1] [i_8])))), (arr_34 [i_7] [i_8] [i_9])));
                        }
                        arr_45 [i_7] [i_6] [i_6] [i_6] = ((/* implicit */long long int) arr_24 [i_6]);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_8] [i_7 - 1] [i_6] [i_1])) / (((/* implicit */int) arr_41 [i_1] [i_1] [i_1] [i_1] [i_7] [i_1])))))))) + (((((/* implicit */int) arr_19 [i_1] [i_6] [i_7] [i_8])) + (((/* implicit */int) arr_41 [18U] [i_8 + 1] [i_8 - 1] [i_8 - 1] [i_8] [i_8 - 1]))))));
                        arr_46 [i_1] [i_1] [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_7]))));
                    }
                } 
            } 
        }
    }
    for (unsigned char i_10 = 3; i_10 < 14; i_10 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */int) arr_37 [i_10 - 2] [2ULL] [2ULL] [i_10 + 1])) % (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_10]))))), (((arr_47 [i_10]) ? (((/* implicit */int) arr_16 [i_10 + 2] [6ULL])) : (((/* implicit */int) arr_27 [i_10]))))))));
        var_22 = ((/* implicit */unsigned long long int) arr_12 [i_10 - 1] [i_10] [i_10 - 3]);
    }
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) 8104713178106695861LL)) || (((/* implicit */_Bool) -3916775938805031989LL))));
}
