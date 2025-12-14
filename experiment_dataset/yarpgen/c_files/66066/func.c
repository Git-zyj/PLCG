/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66066
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
    var_11 &= ((/* implicit */unsigned short) ((var_6) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (var_5)))) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) max((var_2), (var_3)))) : (((((/* implicit */int) var_0)) - (((/* implicit */int) var_6))))))));
    var_12 = ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 1) /* same iter space */
    {
        arr_3 [(unsigned char)1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_0]))) ? ((+(357026276U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))))))) ? ((+(((((/* implicit */unsigned int) arr_2 [i_0])) / (357026276U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) 357026280U))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) -268435456);
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 1) 
        {
            var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)6663))));
            arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)-28282))));
            var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) arr_6 [i_1 + 1] [i_1])) : (arr_5 [i_1 - 2] [i_1 - 1])));
            var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) <= ((+(((/* implicit */int) (_Bool)1)))))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_13 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)6651))));
            var_16 = ((/* implicit */short) var_10);
        }
        for (unsigned short i_3 = 1; i_3 < 10; i_3 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) arr_9 [i_4 - 2]))));
                arr_20 [i_0] [i_3 + 1] [i_0] = ((/* implicit */unsigned short) var_7);
            }
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 1) /* same iter space */
            {
                arr_23 [5U] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-28268)))), ((((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)120))))))) + (min((((/* implicit */unsigned int) arr_21 [i_0] [(signed char)7] [(signed char)7])), ((~(var_7)))))));
                arr_24 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) == (((/* implicit */int) ((signed char) min((var_7), (((/* implicit */unsigned int) var_2))))))));
                arr_25 [i_0] [i_0] [4] [i_5] = ((/* implicit */unsigned long long int) 4294967293U);
            }
            for (unsigned char i_6 = 1; i_6 < 10; i_6 += 1) /* same iter space */
            {
                var_18 = ((((/* implicit */unsigned int) ((min((arr_6 [i_0] [i_3]), (arr_15 [i_0] [i_0] [i_0]))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)46113))))) * (((unsigned int) arr_15 [i_6] [i_6] [(unsigned char)8])));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) arr_32 [i_0] [i_3] [i_6] [i_7] [0ULL])) - (arr_30 [i_0] [i_7] [i_0]))))) - (((/* implicit */int) var_1))));
                            arr_34 [i_0] [i_3 + 1] [i_3] [i_3] [(_Bool)1] [i_3] = ((/* implicit */short) var_8);
                            var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!((_Bool)1))))))) + (((((/* implicit */_Bool) ((arr_21 [i_8] [10U] [i_8]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14447))) : (var_10)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_8])), (arr_33 [i_0] [i_0] [(signed char)0] [(unsigned char)7] [(unsigned char)8]))))) : (((unsigned int) arr_11 [i_6] [i_0])))))))));
                            arr_35 [i_0] [i_6] [i_0] [i_8] = ((/* implicit */signed char) (unsigned char)151);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) ((min((1011387047U), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_10))))) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)92)))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_22 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((((/* implicit */int) ((_Bool) var_8))) * (((/* implicit */int) (_Bool)1))))));
                    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) arr_19 [i_9] [i_6 + 1] [i_3] [(short)7]))));
                    arr_38 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_43 [i_0] [i_0] [i_0] = (_Bool)1;
                    var_24 = (_Bool)1;
                }
            }
            for (unsigned char i_11 = 1; i_11 < 10; i_11 += 1) /* same iter space */
            {
                arr_48 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_39 [i_0] [i_3]), (((/* implicit */unsigned char) arr_45 [i_11 - 1] [i_0] [i_0] [i_0])))))));
                var_25 = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)65)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_9)))) ? (max((var_5), (((/* implicit */unsigned long long int) arr_22 [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) arr_26 [i_0])))))))));
            }
            var_26 = ((/* implicit */unsigned char) 357026272U);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_51 [1ULL] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_32 [(_Bool)0] [i_12] [i_12] [i_12] [(short)10]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)120)))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)230)))) : (((((/* implicit */int) max((arr_45 [(unsigned char)8] [i_0] [i_12] [(_Bool)1]), ((_Bool)1)))) * (((/* implicit */int) (unsigned short)8765))))));
            var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min(((~(max((var_7), (((/* implicit */unsigned int) var_6)))))), (((/* implicit */unsigned int) ((var_6) || (arr_7 [(unsigned char)4])))))))));
        }
        /* LoopNest 3 */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 3) 
        {
            for (unsigned char i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                for (unsigned int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    {
                        var_28 &= (unsigned short)0;
                        arr_58 [0] [0] [0] [i_0] [i_14] [i_14] = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_16 = 0; i_16 < 11; i_16 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */_Bool) min((((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) arr_1 [(_Bool)1])), (var_5))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)211))) : (3421034760U))))))), ((unsigned char)64)));
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 11; i_17 += 2) 
        {
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
            {
                {
                    arr_65 [i_18] [(_Bool)1] [i_18] = ((/* implicit */short) min((var_7), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned short)59733)) : (((/* implicit */int) arr_40 [i_16] [(signed char)6] [(short)1] [4U])))))))));
                    var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (arr_32 [0LL] [0LL] [(unsigned short)5] [i_18] [i_16]) : (arr_32 [i_16] [i_17] [(_Bool)1] [i_18 + 1] [i_16])))) ? (min((arr_32 [i_16] [i_17] [i_18 + 1] [(unsigned char)1] [i_18 + 1]), (arr_32 [i_18] [i_18] [i_17] [i_17] [i_16]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_3))))));
                    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)56771), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) var_4)) : ((-(((/* implicit */int) (unsigned short)5787))))))) || (((/* implicit */_Bool) (signed char)-88))));
                }
            } 
        } 
    }
}
