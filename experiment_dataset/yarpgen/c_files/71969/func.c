/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71969
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (unsigned char)240);
        var_10 = ((/* implicit */unsigned short) arr_1 [i_0] [i_0]);
    }
    var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) var_7))));
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) 7208734007307768198LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) / (var_6)))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned int i_4 = 3; i_4 < 22; i_4 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_5 = 3; i_5 < 22; i_5 += 1) 
                        {
                            arr_16 [i_1] [20U] [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */_Bool) (unsigned short)46086);
                            arr_17 [7ULL] [i_3] [(short)9] [i_4] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2495739402372769151ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19450))) : (1972136931U)));
                            arr_18 [i_5] = ((/* implicit */short) ((((/* implicit */int) (signed char)-5)) != (((/* implicit */int) arr_11 [i_4 + 1]))));
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            var_13 = ((/* implicit */_Bool) var_7);
                            var_14 = (!(((/* implicit */_Bool) arr_11 [i_4 - 1])));
                            arr_22 [i_6] [i_2] [i_2] [i_2] [15ULL] [i_2] [i_2] = ((/* implicit */_Bool) 7208734007307768198LL);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            arr_27 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_9))));
                            arr_28 [i_3] [i_3] [i_3] [i_4] [i_7] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [18] [i_1]))) * (arr_6 [i_3] [i_4] [(_Bool)1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_4 - 2] [i_4 - 3]))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [9ULL] [i_1] [2LL] = ((/* implicit */int) ((unsigned long long int) arr_20 [i_4 + 1] [i_4 + 1]));
                        }
                        /* LoopSeq 1 */
                        for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 2) 
                        {
                            var_15 ^= ((/* implicit */unsigned long long int) (unsigned short)65535);
                            var_16 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1] [i_2] [(short)22] [i_4] [i_8 + 4] [i_8])) % (((/* implicit */int) (_Bool)1))))) + ((-(var_3)))));
                            arr_33 [i_1] [i_2] [11LL] [(signed char)17] [(unsigned char)19] = ((/* implicit */unsigned long long int) ((unsigned int) arr_14 [i_8] [i_8 - 4] [i_8] [i_8] [i_8 - 4] [i_8]));
                        }
                    }
                } 
            } 
        } 
        var_17 &= ((((/* implicit */_Bool) ((((/* implicit */_Bool) -7208734007307768198LL)) ? (((/* implicit */int) arr_11 [17U])) : (((/* implicit */int) (unsigned short)26395))))) && (((/* implicit */_Bool) ((unsigned long long int) arr_8 [i_1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_10 = 2; i_10 < 22; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 1) 
            {
                for (short i_12 = 0; i_12 < 23; i_12 += 1) 
                {
                    {
                        var_18 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
                        arr_46 [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) * (7208734007307768198LL)));
                        var_19 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10] [i_10] [i_10 - 1]))) < (((arr_14 [(_Bool)1] [i_10] [i_11] [i_12] [i_12] [(short)13]) ? (arr_42 [i_12] [i_10] [i_11] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
            var_20 = ((/* implicit */unsigned long long int) min((var_20), (((unsigned long long int) (_Bool)1))));
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 23; i_13 += 2) 
        {
            arr_51 [i_13] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_13])) ? (arr_8 [i_9]) : (((/* implicit */unsigned long long int) arr_34 [i_13]))));
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) -2147483631))));
        }
        arr_52 [(unsigned char)22] = ((/* implicit */signed char) arr_43 [8ULL] [i_9] [i_9] [i_9]);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (unsigned short)0))));
    }
    /* vectorizable */
    for (unsigned long long int i_14 = 1; i_14 < 20; i_14 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            var_23 *= ((/* implicit */_Bool) ((unsigned long long int) arr_25 [i_14 + 2] [i_14 + 2]));
            arr_58 [i_14 + 2] [i_15] [i_15] = ((/* implicit */unsigned char) arr_39 [22ULL]);
            arr_59 [i_14] [i_15] = ((/* implicit */unsigned long long int) var_2);
            /* LoopNest 2 */
            for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    {
                        arr_65 [i_16] = ((/* implicit */unsigned long long int) var_0);
                        var_24 *= ((2040651251) != (((/* implicit */int) (_Bool)1)));
                    }
                } 
            } 
            arr_66 [i_14] [i_15] [i_15] = ((/* implicit */unsigned long long int) arr_54 [i_15]);
        }
        var_25 -= ((/* implicit */unsigned int) arr_61 [(short)18]);
        arr_67 [i_14 - 1] [i_14] = ((/* implicit */unsigned short) arr_24 [i_14] [i_14]);
    }
    for (unsigned long long int i_18 = 1; i_18 < 20; i_18 += 3) /* same iter space */
    {
        var_26 *= ((/* implicit */_Bool) var_6);
        arr_70 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)20288)) : (((((/* implicit */int) var_1)) << (((/* implicit */int) arr_23 [i_18 + 1] [i_18 + 2] [i_18] [i_18 + 2] [i_18] [i_18 + 2]))))));
        /* LoopSeq 2 */
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            arr_74 [i_19] [i_19] = 11034833639360182093ULL;
            arr_75 [i_18] [i_18] [i_18] = ((/* implicit */unsigned long long int) arr_13 [i_18] [i_18] [i_18 - 1] [i_19] [i_19] [i_18] [i_19]);
            var_27 = ((/* implicit */unsigned int) var_7);
        }
        for (signed char i_20 = 0; i_20 < 22; i_20 += 2) 
        {
            arr_78 [i_18] [i_18] = ((/* implicit */unsigned int) ((unsigned long long int) max((arr_71 [i_18 + 2]), (arr_71 [i_18 + 1]))));
            var_28 *= (!(((/* implicit */_Bool) (+(13180271939294456304ULL)))));
            var_29 = ((/* implicit */long long int) arr_56 [15ULL]);
        }
        arr_79 [i_18] [i_18] = arr_37 [6U];
        var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_3)))))))))));
    }
}
