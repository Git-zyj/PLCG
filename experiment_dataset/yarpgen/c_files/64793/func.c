/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64793
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64793 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64793
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
    for (long long int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [(signed char)8] &= ((/* implicit */unsigned short) (-((~(((/* implicit */int) ((3237808541893297429LL) == (-3237808541893297431LL))))))));
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 19; i_1 += 1) 
        {
            var_11 ^= ((/* implicit */long long int) arr_6 [(signed char)14] [(unsigned short)4]);
            /* LoopNest 3 */
            for (short i_2 = 0; i_2 < 21; i_2 += 1) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 4) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) arr_15 [i_3] [i_3 + 3] [(unsigned short)12] [i_2] [i_1]))));
                            arr_18 [i_0] [i_1 + 2] [i_0] [i_4] = ((/* implicit */signed char) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_1])))))))));
                        }
                    } 
                } 
            } 
            var_13 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)65509))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_12 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 3]) <= (arr_12 [i_0] [i_0 + 1] [i_0 + 3] [i_0 + 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [8LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (arr_14 [i_0])))) ? ((+(arr_16 [i_0] [i_1] [i_1] [i_0 + 2] [i_1 + 1]))) : (arr_14 [i_0 - 2])))));
        }
        for (int i_5 = 4; i_5 < 19; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                    {
                        {
                            arr_30 [i_0] [i_0] [i_6] [i_7] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (-(arr_7 [i_7])))) ? (((((/* implicit */_Bool) arr_0 [i_7] [i_7])) ? (((/* implicit */int) arr_20 [i_0] [i_5] [2ULL])) : (((/* implicit */int) arr_20 [i_7] [i_7] [i_7])))) : (((/* implicit */int) arr_23 [i_0] [10LL] [i_6]))))));
                            arr_31 [(short)18] [i_0] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) arr_19 [i_7] [i_5] [14LL]);
                            arr_32 [i_5] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((short) arr_23 [i_0] [i_0] [i_0])))));
                            var_14 ^= ((/* implicit */unsigned long long int) ((((2465085367605757372ULL) < (15981658706103794243ULL))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 376658575)) % (18446744073709551612ULL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_6] [i_6] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) -22LL)) < (9827975957889759297ULL)))))) : (((/* implicit */int) arr_2 [i_0] [i_5]))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~((+((~(((/* implicit */int) arr_23 [i_6] [(short)6] [i_6])))))))))));
            }
            var_16 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [0U] [i_5 - 2]))) ^ (arr_15 [i_0] [(signed char)12] [0U] [i_5] [i_5])))))) ? ((+(((/* implicit */int) (signed char)-99)))) : (((((/* implicit */_Bool) arr_19 [i_0] [i_0 - 2] [i_5 + 2])) ? (((((/* implicit */_Bool) -3237808541893297429LL)) ? (((/* implicit */int) (unsigned short)60025)) : (((/* implicit */int) (signed char)-59)))) : ((-(((/* implicit */int) arr_5 [(signed char)8]))))))));
            var_17 |= ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_29 [(signed char)13] [i_0] [i_5] [i_5] [i_5])) ? (arr_19 [4] [i_5] [i_5]) : (((/* implicit */int) arr_5 [16])))))) < ((+(arr_19 [i_0] [i_0 - 2] [17])))));
        }
        arr_33 [i_0] = ((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)1))))));
        var_18 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_10 [i_0 + 4] [i_0 + 4] [i_0]))))));
    }
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 1) 
    {
        var_19 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) (-(-8880419308544866666LL)))) ? (-1998412646) : (((int) arr_25 [i_9]))))));
        /* LoopNest 2 */
        for (unsigned short i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (unsigned int i_11 = 1; i_11 < 13; i_11 += 1) 
            {
                {
                    arr_43 [i_9] [i_10] [i_10] = ((/* implicit */int) arr_26 [i_10] [i_9]);
                    var_20 = ((/* implicit */unsigned short) ((int) 2465085367605757368ULL));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)29162)) ? (13722565073830407609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-75)))));
    }
    for (long long int i_12 = 1; i_12 < 23; i_12 += 3) 
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_45 [i_12])))) ? ((+((+(-1))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_12])))))))));
        arr_48 [i_12 + 2] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 15981658706103794256ULL))) ? (((/* implicit */int) ((arr_47 [i_12]) >= (arr_47 [i_12])))) : ((+(-376658576)))));
        arr_49 [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12 - 1])) ? (arr_44 [i_12 + 1]) : (arr_44 [i_12])))) ? (((((/* implicit */_Bool) (-(arr_45 [i_12])))) ? (((((/* implicit */_Bool) arr_47 [i_12])) ? (arr_44 [i_12]) : (arr_47 [i_12]))) : (arr_47 [i_12]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_45 [i_12])) && (((/* implicit */_Bool) arr_46 [i_12]))))))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_47 [2LL])) ? (arr_47 [(unsigned short)16]) : (arr_47 [(signed char)16]))))))));
    }
    var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15981658706103794261ULL)) && (((/* implicit */_Bool) (signed char)-62))));
    var_25 |= ((/* implicit */unsigned int) var_6);
    var_26 ^= ((/* implicit */signed char) var_4);
}
