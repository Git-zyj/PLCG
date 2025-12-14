/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61740
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_2 = 1; i_2 < 9; i_2 += 4) 
            {
                var_10 = ((/* implicit */signed char) min((var_10), (var_9)));
                arr_9 [i_1] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [i_1]))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(var_3)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 10948174558620341852ULL)) ? (7498569515089209745ULL) : (((/* implicit */unsigned long long int) 2249343997U))))) ? (((/* implicit */int) ((unsigned char) (signed char)-31))) : (((/* implicit */int) ((_Bool) var_5))))) : ((+(((/* implicit */int) (unsigned char)224))))));
                var_11 = arr_8 [i_2] [i_1] [i_2] [i_1];
            }
            var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (~(((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_0])) : (((/* implicit */int) var_5))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))) * (var_1))))))))));
            arr_10 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) min((arr_3 [i_0]), (var_2)))) : ((~(((/* implicit */int) var_0)))))) - (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [i_0]))));
            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) arr_4 [i_0] [i_1] [i_1]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(unsigned char)6])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_3 [i_0]))))) : ((-(((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [(short)7]))) : (7498569515089209764ULL)))))));
        }
        for (unsigned char i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
        {
            arr_14 [i_0] = arr_8 [(_Bool)1] [9LL] [i_0] [i_0];
            arr_15 [i_0] [1U] [(unsigned char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_3] [i_3] [i_0]))))) ? (((/* implicit */int) arr_0 [i_3])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [(_Bool)1] [(_Bool)1])) || (((/* implicit */_Bool) arr_11 [i_0] [i_3])))))))) ? ((+(((((/* implicit */_Bool) arr_2 [0])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_7 [i_0] [i_0] [(_Bool)1] [i_3])))))) : (((arr_13 [(short)2] [i_3]) - (arr_13 [i_3] [i_3])))));
            arr_16 [i_3] [i_0] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((var_6) - (((/* implicit */unsigned int) arr_13 [i_0] [i_3]))))))) || (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3])))))));
            /* LoopNest 2 */
            for (unsigned char i_4 = 0; i_4 < 11; i_4 += 2) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        var_14 -= ((/* implicit */signed char) min(((~(((/* implicit */int) arr_0 [i_0])))), (((((/* implicit */int) arr_4 [i_0] [(unsigned short)7] [i_5])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) || (((/* implicit */_Bool) arr_5 [i_0])))))))));
                        arr_21 [i_5] = ((/* implicit */_Bool) ((unsigned long long int) ((signed char) arr_2 [i_3])));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_25 [(signed char)3] [i_6] [i_6] [i_0] = ((/* implicit */unsigned int) ((_Bool) (~(-1289960123))));
                            arr_26 [i_0] [0] [i_6] [(unsigned short)6] [i_4] [i_5] [i_6] = ((/* implicit */unsigned char) (+((~(2249343985U)))));
                        }
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (-((-((~(((/* implicit */int) arr_23 [i_0] [i_0] [i_0] [i_4] [i_0] [i_0])))))))))));
                            var_16 -= arr_24 [(_Bool)1] [i_7] [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7] [i_7];
                        }
                        for (unsigned int i_8 = 0; i_8 < 11; i_8 += 2) 
                        {
                            arr_32 [i_0] [i_5] [i_4] [i_0] [i_0] = ((/* implicit */int) (-(min((min((arr_18 [i_0] [i_3] [i_4] [i_5]), (((/* implicit */unsigned long long int) arr_31 [i_0] [i_3] [i_3] [i_0] [i_4] [i_0] [1ULL])))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_5])))))))));
                            var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_6 [i_8] [i_0] [i_0]))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_8] [i_4] [i_4])))))));
                            arr_33 [i_0] [i_3] [(_Bool)1] [i_5] [i_0] = ((/* implicit */unsigned int) min((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_20 [i_0] [i_0] [(signed char)9] [i_0])))))), ((~(((((/* implicit */_Bool) arr_12 [i_5] [i_8])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_6 [(_Bool)1] [i_5] [i_8]))))))));
                        }
                        /* LoopSeq 4 */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_18 = ((/* implicit */unsigned char) max(((-(arr_11 [i_4] [i_4]))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)248)))))));
                            var_19 = ((/* implicit */short) arr_13 [i_4] [(signed char)2]);
                            var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                        }
                        for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            arr_39 [i_10] [i_10] [i_4] [i_4] = arr_8 [i_10] [i_5] [i_4] [i_0];
                            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [(signed char)2] [i_0] [i_10])) ? (((/* implicit */int) arr_8 [i_0] [i_3] [i_5] [i_10])) : (((/* implicit */int) var_7))))) ? (((/* implicit */int) ((unsigned char) arr_3 [i_3]))) : (((((/* implicit */_Bool) arr_3 [i_10])) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) arr_3 [(unsigned char)8]))))));
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_27 [i_0] [i_0] [i_0]))))) ? (((((/* implicit */_Bool) arr_27 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (arr_18 [i_10] [i_4] [i_3] [i_0]))) : ((+(arr_18 [i_0] [i_0] [i_4] [i_5])))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            arr_42 [i_0] [i_0] [i_11] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 7498569515089209747ULL)) ? (10948174558620341841ULL) : (((/* implicit */unsigned long long int) 1340488281U))));
                            arr_43 [i_0] [i_0] [i_11] [i_4] [i_5] [(signed char)2] [i_0] = (!(((/* implicit */_Bool) 2250017221U)));
                            var_23 *= ((/* implicit */_Bool) (((~(7498569515089209763ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_3 [i_4])) - (((/* implicit */int) var_0)))))))));
                        }
                        for (unsigned char i_12 = 2; i_12 < 10; i_12 += 4) 
                        {
                            var_24 *= ((/* implicit */_Bool) max((((/* implicit */unsigned char) (signed char)31)), ((unsigned char)14)));
                            arr_46 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) > (min((var_6), (arr_1 [i_3])))))) << ((((+(((/* implicit */int) var_4)))) - (53167)))));
                        }
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) arr_44 [i_0] [(signed char)8] [i_3] [(signed char)8] [i_3])) || (((/* implicit */_Bool) arr_17 [i_0] [(unsigned char)8]))))))) > ((~(arr_11 [i_0] [i_3])))));
        }
        /* vectorizable */
        for (unsigned char i_13 = 0; i_13 < 11; i_13 += 1) /* same iter space */
        {
            var_26 &= ((/* implicit */unsigned char) (+(((arr_45 [(unsigned char)9] [i_13] [10] [i_13]) ? (((/* implicit */int) (unsigned char)231)) : (((/* implicit */int) arr_27 [i_0] [i_0] [i_0]))))));
            /* LoopSeq 1 */
            for (int i_14 = 0; i_14 < 11; i_14 += 2) 
            {
                arr_52 [i_0] [i_13] [i_0] = ((/* implicit */unsigned short) arr_38 [i_13]);
                /* LoopNest 2 */
                for (short i_15 = 2; i_15 < 8; i_15 += 1) 
                {
                    for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) arr_55 [i_16] [10] [i_13]);
                            arr_60 [(signed char)6] [i_0] [(_Bool)1] [i_15 + 2] [i_14] |= ((/* implicit */signed char) var_5);
                        }
                    } 
                } 
                arr_61 [i_13] = ((/* implicit */_Bool) arr_55 [i_0] [i_0] [i_14]);
            }
        }
        arr_62 [(_Bool)1] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */int) max((var_2), (((/* implicit */unsigned char) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))), (((((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) + (2147483647))) << (((arr_1 [i_0]) - (3557944306U))))))));
    }
    for (unsigned char i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
    {
        arr_65 [3] = ((/* implicit */_Bool) min((max((arr_37 [i_17] [i_17] [i_17] [i_17]), (((/* implicit */unsigned long long int) arr_40 [i_17] [i_17])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_17] [i_17] [i_17])) || (((((/* implicit */int) var_4)) != (((/* implicit */int) arr_4 [i_17] [i_17] [i_17])))))))));
        arr_66 [i_17] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_13 [i_17] [(unsigned short)6])) ? (((/* implicit */int) ((1340488296U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_17] [0U] [i_17] [i_17] [i_17] [i_17] [(_Bool)1])))))) : ((-(((/* implicit */int) var_3)))))), (((((/* implicit */int) (unsigned char)14)) << (((/* implicit */int) (_Bool)0))))));
    }
    var_28 = ((/* implicit */signed char) var_8);
    var_29 = var_5;
}
