/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5591
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5591 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5591
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
    var_15 = ((/* implicit */unsigned int) var_7);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) 14U);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [17] [0LL])) ? (((min((6668100154427197177ULL), (((/* implicit */unsigned long long int) (unsigned short)31)))) - (((arr_0 [i_0] [6ULL]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
    }
    for (int i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
        {
            for (signed char i_3 = 4; i_3 < 18; i_3 += 3) 
            {
                {
                    arr_13 [i_1] [i_2] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [(unsigned char)12]) || (((/* implicit */_Bool) ((-5974301686998342284LL) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [12U] [i_2] [i_3 - 1]))))))))) | (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(-7933246747061895691LL)))) == (max((((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_3 + 2] [(unsigned char)13])), (arr_0 [i_1] [i_2]))))))));
                    arr_14 [(signed char)7] [i_2] [i_2] [i_2] = ((/* implicit */signed char) (((+(((/* implicit */int) arr_10 [i_2] [i_3 - 2] [i_3 + 1])))) / (((/* implicit */int) arr_10 [i_2] [i_3 - 2] [i_3 + 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 1; i_4 < 19; i_4 += 3) 
                    {
                        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            {
                                arr_20 [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) var_1);
                                var_16 = ((/* implicit */unsigned char) arr_19 [i_1] [i_1] [i_1] [19ULL] [i_1]);
                                var_17 = ((/* implicit */unsigned int) ((unsigned char) (+(var_1))));
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_1] [i_1] [i_3] [i_4] [i_4] [(unsigned char)8])) % (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned short)26367)) ? (743210528U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))))) ? (arr_6 [i_1]) : (((arr_16 [i_4 + 1] [i_4 - 1] [i_4] [i_3 - 4] [i_3]) & (((/* implicit */unsigned int) ((/* implicit */int) var_13)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [i_1] [9LL] = var_3;
        arr_22 [i_1] [i_1] = ((/* implicit */long long int) var_8);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 18; i_6 += 3) 
        {
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_7 [(_Bool)1] [(_Bool)1] [i_6]);
            /* LoopSeq 2 */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                arr_28 [i_7] [i_6] [i_6] [i_7] = ((/* implicit */unsigned char) var_11);
                var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_15 [4ULL] [i_6] [i_7] [i_7] [i_1] [i_1]))));
            }
            for (signed char i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_9 = 0; i_9 < 20; i_9 += 3) 
                {
                    arr_35 [(unsigned short)4] [i_6] [i_8] [i_6] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) arr_7 [i_1] [i_6 + 2] [i_8])) & ((~(743210528U)))));
                    arr_36 [i_1] [i_6] [i_6 + 1] [(signed char)15] [i_6] [i_9] = ((/* implicit */long long int) ((arr_6 [i_1]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6 + 2] [i_6 + 2] [i_6])))));
                    arr_37 [i_6] [i_6 - 1] = ((/* implicit */int) (~(arr_29 [i_6] [i_6] [i_6 - 1] [i_6])));
                    /* LoopSeq 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 3) /* same iter space */
                    {
                        arr_41 [(signed char)17] [i_6] [16LL] [i_8] [i_6] [(unsigned short)17] = ((/* implicit */unsigned int) arr_27 [(unsigned short)2] [i_6 - 1] [i_6] [i_10]);
                        arr_42 [i_1] [i_6] [(_Bool)1] [i_6] [(signed char)9] [i_6] [6ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_9] [i_10])) || (((/* implicit */_Bool) arr_34 [i_1] [i_1])))))));
                    }
                    for (int i_11 = 0; i_11 < 20; i_11 += 3) /* same iter space */
                    {
                        arr_46 [i_6] [i_9] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */int) arr_5 [17LL])) - (((((/* implicit */_Bool) 743210528U)) ? (((/* implicit */int) arr_19 [i_11] [i_9] [i_8] [i_6] [i_1])) : (((/* implicit */int) arr_24 [i_6]))))));
                        arr_47 [i_1] [i_1] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) var_0)) / ((~(((/* implicit */int) (signed char)(-127 - 1)))))));
                    }
                    arr_48 [i_6] [i_6] [i_8] [i_8] [i_9] = ((/* implicit */unsigned char) var_11);
                }
                var_20 = ((/* implicit */unsigned char) ((arr_16 [i_1] [i_6 + 1] [i_6 + 1] [i_6 + 2] [i_6 + 2]) < (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
            }
        }
        for (int i_12 = 0; i_12 < 20; i_12 += 3) 
        {
            var_21 = ((/* implicit */unsigned long long int) -7933246747061895691LL);
            arr_51 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), ((-(((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))));
            arr_52 [i_12] = ((((((((/* implicit */_Bool) arr_24 [i_1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_44 [i_1] [i_1] [(unsigned char)4] [i_1] [(unsigned char)2] [i_1]))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1] [i_12]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_38 [i_1] [i_12]))))) : ((+(((((/* implicit */long long int) arr_29 [(short)14] [i_12] [(unsigned short)18] [i_1])) / (arr_18 [(_Bool)1] [i_12]))))));
        }
        /* vectorizable */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_55 [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_31 [2ULL] [i_1] [i_1]))));
            /* LoopNest 2 */
            for (unsigned char i_14 = 2; i_14 < 19; i_14 += 3) 
            {
                for (unsigned char i_15 = 2; i_15 < 17; i_15 += 3) 
                {
                    {
                        arr_62 [i_14] = ((signed char) ((signed char) 666021208U));
                        var_22 = ((/* implicit */_Bool) ((arr_7 [i_14 + 1] [(_Bool)1] [i_15 - 1]) / (arr_7 [i_14 - 2] [i_15 - 2] [i_15 - 2])));
                        arr_63 [i_1] [i_14] [i_14 - 2] [i_14 - 2] = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) | (((/* implicit */int) var_9))));
                    }
                } 
            } 
        }
    }
}
