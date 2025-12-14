/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82347
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
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) (unsigned short)25387);
        var_18 ^= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_0 [i_0] [i_0 + 1])))) && (((/* implicit */_Bool) 29360128U))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        arr_12 [i_2] [i_2] [3U] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) arr_1 [(unsigned char)2] [(unsigned char)2]))) ? (((((/* implicit */_Bool) (unsigned short)40149)) ? (((/* implicit */int) arr_8 [(unsigned short)3])) : (var_7))) : (((((/* implicit */int) arr_2 [i_4])) >> (((/* implicit */int) arr_1 [i_2] [i_1]))))));
                        arr_13 [i_1] [i_2] [(short)9] [3] [7] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) arr_4 [i_3])) && (((/* implicit */_Bool) (unsigned short)40125)))));
                        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1]))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) * (var_8)))));
                        arr_14 [6ULL] [i_1] [(_Bool)1] [i_3] [i_4] = ((/* implicit */long long int) ((int) var_1));
                    }
                } 
            } 
            arr_15 [i_2] = ((/* implicit */long long int) ((arr_0 [i_1 - 1] [i_1 + 1]) < (((/* implicit */unsigned int) ((/* implicit */int) ((-3989319585223979360LL) >= (((/* implicit */long long int) ((/* implicit */int) var_12)))))))));
        }
        for (int i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_20 = ((/* implicit */signed char) ((var_0) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_1 + 1])))));
                var_21 = ((/* implicit */unsigned char) ((arr_10 [i_1] [i_5] [i_1] [i_1] [i_6]) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_5]))) : (arr_7 [i_1 + 1] [i_5]))) : (((((/* implicit */unsigned int) var_7)) * (var_16)))));
            }
            var_22 ^= ((/* implicit */unsigned short) arr_9 [i_1]);
        }
        /* LoopNest 3 */
        for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            for (unsigned short i_8 = 4; i_8 < 10; i_8 += 4) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    {
                        var_23 = ((/* implicit */int) var_6);
                        var_24 = var_13;
                        arr_29 [i_1 + 1] [(signed char)7] [i_1 - 1] [i_1 + 1] [(signed char)10] [(signed char)10] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) (unsigned short)40149)) ? (11304578950230678905ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))));
                        arr_30 [i_9] [3] [3] [i_1 + 1] = ((/* implicit */unsigned long long int) arr_22 [i_8]);
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_10 = 1; i_10 < 10; i_10 += 4) /* same iter space */
    {
        arr_34 [i_10] [i_10 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_32 [i_10])) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_10])) ? (((/* implicit */long long int) var_16)) : (var_14)))) ? (((unsigned long long int) 7142165123478872711ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10])))))));
        /* LoopNest 2 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_40 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8375512114116918951LL)) ? (7142165123478872711ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_10 + 1])))))) ? (((/* implicit */int) arr_8 [i_10 - 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_8 [i_10 - 1])))))));
                    arr_41 [i_12] [4] [i_12] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)92)) - (((/* implicit */int) (unsigned short)25387))))) | (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1322645641855531533LL)) & (10171702286302162614ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_1 [i_10] [i_12])))) : (((arr_19 [i_11] [i_10] [i_12] [i_11]) & (((/* implicit */long long int) var_0))))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_13 = 2; i_13 < 9; i_13 += 4) 
                    {
                        arr_46 [i_12] [i_12] = ((/* implicit */unsigned short) var_1);
                        arr_47 [i_12] [i_11] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11304578950230678910ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_11])) >> (((/* implicit */int) arr_1 [1LL] [(signed char)7]))))) ? ((~(((/* implicit */int) (short)0)))) : ((~(((/* implicit */int) var_11)))))) : (((/* implicit */int) var_3))));
                        var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_42 [i_10 + 1])))) ? (((/* implicit */long long int) ((int) arr_42 [i_10 - 1]))) : (arr_42 [i_10 - 1])));
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) arr_10 [(_Bool)1] [i_10] [i_10] [i_10] [(_Bool)1]);
        var_27 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)40149))));
    }
    var_28 = ((/* implicit */unsigned short) (+(var_10)));
    var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) min((((/* implicit */long long int) var_4)), ((~(max((((/* implicit */long long int) var_15)), (var_1))))))))));
}
