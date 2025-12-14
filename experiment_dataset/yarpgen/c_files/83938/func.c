/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83938
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
    var_10 |= ((/* implicit */unsigned long long int) var_3);
    var_11 = ((/* implicit */_Bool) min((var_11), (var_4)));
    var_12 |= ((/* implicit */unsigned long long int) min((min((var_8), (((/* implicit */unsigned int) min((((/* implicit */unsigned char) var_1)), ((unsigned char)124)))))), (((/* implicit */unsigned int) var_3))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_5 [0U] [i_1] = ((/* implicit */signed char) arr_2 [i_0]);
            var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)7] [i_1])) ? (arr_4 [i_0] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)5)))));
        }
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            var_14 ^= ((/* implicit */signed char) (unsigned char)1);
            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_2])) != (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)124))))));
        }
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            arr_12 [i_0] [8LL] [8LL] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_0])) - (((/* implicit */int) arr_7 [i_0]))));
            arr_13 [i_0] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0]))) + (arr_11 [i_0] [i_0] [i_0])));
            var_16 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))) * (9726982208476317053ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))));
        }
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 1; i_5 < 8; i_5 += 4) 
            {
                var_17 -= ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-89))));
                var_18 = ((/* implicit */signed char) (~(arr_18 [i_0] [(signed char)0])));
            }
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned short i_7 = 3; i_7 < 10; i_7 += 4) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */long long int) arr_3 [i_0]);
                            arr_28 [i_0] [i_4] [i_4] [i_6] [i_6] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_4] [i_4 + 4] [i_4]))) ^ (-331770665562979141LL)));
                            var_20 = ((/* implicit */signed char) arr_8 [(_Bool)1]);
                        }
                    } 
                } 
                arr_29 [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4 + 1] [i_4 + 3] [i_4 + 4])) ? (arr_4 [i_4 + 2] [i_4 + 1] [i_4 + 3]) : (arr_4 [i_4 - 1] [i_4 + 3] [i_4 + 3])));
            }
            arr_30 [i_4] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)-17978)) + (2147483647))) << (((arr_22 [i_4 + 4] [i_4 - 1] [i_4] [(_Bool)1] [i_4 + 3]) - (467103390)))));
            /* LoopNest 2 */
            for (long long int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                for (unsigned char i_10 = 2; i_10 < 9; i_10 += 4) 
                {
                    {
                        var_21 = ((/* implicit */signed char) arr_31 [i_4] [8] [i_4]);
                        var_22 = ((/* implicit */int) 73165241U);
                        arr_38 [i_0] [i_4 + 2] [i_4] [i_10] = ((/* implicit */unsigned short) arr_35 [i_0] [i_0] [i_0] [i_0]);
                    }
                } 
            } 
            var_23 &= ((/* implicit */signed char) 4221802044U);
        }
        for (int i_11 = 2; i_11 < 9; i_11 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 2) 
            {
                for (int i_13 = 2; i_13 < 9; i_13 += 4) 
                {
                    {
                        arr_47 [i_13 - 2] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_8 [i_13 - 2]))));
                        arr_48 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_44 [i_0])) > (arr_46 [i_0] [(unsigned short)0] [i_12] [i_11] [i_0]))) || (((/* implicit */_Bool) ((arr_24 [i_11] [4ULL] [i_13] [i_13] [i_0] [i_0]) | (((/* implicit */long long int) arr_22 [i_0] [i_0] [i_12] [i_0] [i_11])))))));
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_37 [i_11 - 2] [i_11])) : ((+(1408221504)))));
            arr_49 [(signed char)8] [4ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_32 [i_11 + 1] [i_11 + 1])) == (((/* implicit */int) arr_32 [i_11 - 2] [i_11 - 2]))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
            {
                var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_19 [i_14])) ? (arr_9 [i_14] [i_0]) : (((/* implicit */unsigned long long int) 2131396458U)))) | (((/* implicit */unsigned long long int) (~(arr_10 [i_0] [i_11]))))));
                var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_50 [3ULL]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-89)) ? (((/* implicit */int) arr_0 [(_Bool)1])) : (-1200683407)))) : (15053953321759622106ULL)));
                arr_52 [i_14] [i_11] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_43 [i_14 + 1] [i_14 + 1] [i_14 + 1] [i_14 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_11 + 1] [(signed char)3] [i_14 + 1]))) : (arr_27 [i_0] [i_14 + 1] [i_14] [i_14] [i_14] [i_14 + 1] [0LL])));
            }
        }
    }
}
