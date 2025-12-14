/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97568
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
    var_11 &= ((/* implicit */long long int) min((var_7), (((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (short)9929))))))))));
    var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((8049243655972055352LL), (((/* implicit */long long int) (unsigned char)80))))) ? (((((/* implicit */_Bool) (unsigned char)116)) ? (1515970130U) : (885283090U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) var_4);
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */int) (signed char)54)) >> (((((/* implicit */int) arr_4 [i_1 - 1])) - (11982))))))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (((((_Bool)1) ? (266812175221211173ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 1]))))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1])) / (((/* implicit */int) arr_4 [i_1 - 1]))))))))));
    }
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((/* implicit */int) (!((!(((/* implicit */_Bool) arr_4 [i_2]))))))) == (((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_8 [(short)1])) ? (((/* implicit */unsigned long long int) arr_8 [i_2])) : (arr_6 [i_2]))))))))));
        var_17 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) (signed char)50))))));
        var_18 = ((long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)53988)) ? (var_3) : (6LL)))) & ((~(arr_6 [i_2])))));
        var_19 = ((/* implicit */short) arr_9 [i_2] [i_2]);
    }
    for (unsigned long long int i_3 = 1; i_3 < 20; i_3 += 1) 
    {
        arr_13 [13] = ((/* implicit */short) arr_12 [7ULL]);
        arr_14 [i_3] = ((/* implicit */signed char) ((((var_10) == (((/* implicit */long long int) ((((/* implicit */_Bool) 15975341840028306416ULL)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))))))) ? (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7))))))) : (var_9)));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) >> ((((-(((/* implicit */int) (short)5588)))) + (5619)))));
        /* LoopSeq 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (+(((((/* implicit */int) (unsigned char)20)) >> (((var_1) - (1257693045U))))))))));
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_3 - 1] [i_3 + 1])) ? (((/* implicit */int) arr_10 [i_4] [(short)17])) : (((/* implicit */int) ((var_3) == (((/* implicit */long long int) 1177302212U))))))))));
            var_23 = ((/* implicit */unsigned int) max((var_23), (2905516123U)));
            var_24 = ((/* implicit */unsigned char) min((var_24), (((/* implicit */unsigned char) ((max((2559415268U), (((/* implicit */unsigned int) (_Bool)1)))) == (arr_12 [i_3 + 1]))))));
            /* LoopNest 3 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 4) 
                {
                    for (int i_7 = 1; i_7 < 18; i_7 += 3) 
                    {
                        {
                            arr_25 [i_3] [i_3] [7U] [i_3] [7U] = ((/* implicit */unsigned char) min((((/* implicit */long long int) (((~(((/* implicit */int) (unsigned char)159)))) == (((/* implicit */int) (_Bool)1))))), (max((min((var_3), (-1395922365714889467LL))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 2147483647)) : (var_6)))))));
                            arr_26 [(unsigned char)16] [(_Bool)1] [(unsigned char)16] [(_Bool)1] = ((/* implicit */unsigned long long int) var_0);
                            var_25 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_3] [(signed char)13] [i_7 + 1] [(short)4] [i_3 - 1] [i_7]))) : (var_9))), (((var_9) >> (((((/* implicit */int) arr_21 [i_7 + 2] [(_Bool)1] [i_7 + 2] [i_7 + 2] [15LL] [i_5])) + (68)))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_26 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_21 [i_3] [20ULL] [i_3] [i_3] [i_3] [i_8]))));
            var_27 = ((/* implicit */signed char) (unsigned char)148);
            var_28 += ((/* implicit */long long int) (~(((/* implicit */int) arr_20 [(unsigned char)3] [(unsigned char)3] [i_3]))));
        }
        for (short i_9 = 0; i_9 < 21; i_9 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
                {
                    {
                        var_29 -= ((/* implicit */unsigned long long int) var_5);
                        var_30 = ((/* implicit */short) 11460944025734173824ULL);
                    }
                } 
            } 
            var_31 ^= ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) min((arr_22 [i_3] [i_3] [i_3]), (arr_22 [i_9] [i_9] [i_3]))))))));
        }
        arr_37 [5LL] [5LL] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((arr_17 [i_3 + 1]) == (arr_17 [i_3 - 1]))))));
    }
}
