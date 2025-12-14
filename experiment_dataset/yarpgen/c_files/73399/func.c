/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73399
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
    var_13 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_5))));
    var_14 = var_1;
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned int) var_2);
                        arr_8 [i_1] [i_1 + 1] [(signed char)6] [i_3] [i_3] = (((!(((((/* implicit */_Bool) var_10)) && (var_12))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1] [i_1 - 3]))) != (arr_1 [20] [i_1]))))) != (arr_1 [i_1 + 1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)16))))));
                    }
                } 
            } 
        } 
        var_16 *= ((/* implicit */signed char) ((unsigned long long int) (unsigned short)60103));
    }
    for (signed char i_4 = 1; i_4 < 17; i_4 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (long long int i_5 = 2; i_5 < 16; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 16; i_6 += 4) 
            {
                {
                    var_17 *= ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) ((448LL) / (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_4])))))) ? (((/* implicit */int) arr_11 [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) var_12)))) + (2147483647))) << (((((min((((var_11) ? (arr_1 [i_4 - 1] [i_4 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-64))))), (((/* implicit */long long int) ((arr_0 [9U]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_5])))))))) + (79LL))) - (15LL)))));
                    var_18 = ((/* implicit */unsigned short) (+(-454LL)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_7 = 1; i_7 < 17; i_7 += 4) 
        {
            for (unsigned short i_8 = 2; i_8 < 15; i_8 += 3) 
            {
                {
                    arr_25 [i_8 + 2] [i_7] [i_7] [i_4 - 1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (arr_7 [i_7 + 1] [i_7] [i_8 + 3]) : (((/* implicit */int) arr_3 [i_7] [i_7 - 1] [i_8 - 1])))) >= (((/* implicit */int) ((arr_1 [i_4 + 1] [i_7 + 1]) >= (arr_17 [i_4 + 1] [i_4 + 1] [i_4]))))));
                    /* LoopSeq 1 */
                    for (signed char i_9 = 3; i_9 < 16; i_9 += 2) 
                    {
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) arr_2 [i_7] [i_7]))) / ((+(((/* implicit */int) var_4))))));
                        arr_29 [(short)12] &= ((((/* implicit */long long int) ((/* implicit */int) var_2))) ^ (((((/* implicit */_Bool) arr_28 [12ULL] [12ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (454LL))));
                    }
                    var_20 -= ((/* implicit */signed char) max((((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_4 - 1] [(unsigned char)16] [i_8 - 2])) < (arr_27 [i_4 - 1] [7LL] [i_4 + 1] [i_7] [i_8 + 2])))), (((((/* implicit */int) (unsigned char)61)) / (arr_22 [i_8 + 1] [(_Bool)0] [i_4])))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_21 = ((/* implicit */signed char) 4194303);
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65472)) ? (511173219) : (arr_7 [i_4] [i_7] [i_8 + 3])))) / (((arr_34 [i_11] [i_10] [i_8] [i_7 - 1] [i_4 + 1] [i_4]) ? (arr_27 [i_11] [i_10] [i_8 + 3] [i_7] [i_4]) : (((/* implicit */unsigned long long int) -448LL))))));
                            arr_35 [(_Bool)1] [i_7] [i_10] = ((/* implicit */int) (((~(((/* implicit */int) var_4)))) != (((/* implicit */int) var_2))));
                            var_23 = ((signed char) max((((/* implicit */long long int) arr_34 [16ULL] [8U] [i_8 + 1] [(signed char)5] [i_8 + 2] [i_8 + 2])), (arr_21 [i_4] [i_7 + 1] [i_10])));
                        }
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                    {
                        arr_38 [i_7] = ((/* implicit */unsigned char) (~((-(max((((/* implicit */unsigned long long int) var_7)), (arr_30 [12LL] [(unsigned short)7] [12U])))))));
                        /* LoopSeq 2 */
                        for (short i_13 = 2; i_13 < 17; i_13 += 2) 
                        {
                            arr_41 [i_4] [i_7] [i_7] = ((/* implicit */short) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7680))) : (var_6)))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4194279)) ? (((/* implicit */int) ((signed char) arr_14 [i_4] [i_8] [i_12]))) : (((((/* implicit */_Bool) 448LL)) ? (((/* implicit */int) arr_37 [i_7] [i_7] [8ULL] [i_12])) : (((/* implicit */int) var_5))))))) ? (((arr_12 [i_12]) ? (((/* implicit */int) arr_12 [i_4 - 1])) : (((/* implicit */int) arr_12 [i_4 + 1])))) : (((int) ((arr_20 [i_7] [i_7]) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))))))));
                            var_25 = ((/* implicit */int) (+(((((/* implicit */_Bool) 1584034789U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1212146444U)))))) : (((((/* implicit */_Bool) arr_11 [i_4 + 1] [3LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_4] [i_7] [i_7] [i_8] [i_12] [i_13]))) : (16799396881864100406ULL)))))));
                            arr_42 [i_7] [(signed char)16] [i_8 + 1] [i_12] [i_13 - 1] = ((/* implicit */signed char) max((((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) 2476507503U)) : (arr_23 [i_8 + 1] [i_8 + 1] [i_13 - 1])))), (((arr_34 [i_4 + 1] [i_4] [i_7] [i_7 + 1] [i_13 - 1] [(unsigned short)11]) || (arr_34 [i_4 - 1] [i_7] [(signed char)4] [i_7 + 1] [i_13 - 2] [(unsigned char)7])))));
                        }
                        for (unsigned long long int i_14 = 2; i_14 < 15; i_14 += 2) 
                        {
                            arr_47 [i_4] [i_7] [(signed char)15] [i_12] [i_14 - 2] = ((/* implicit */short) min((min((arr_19 [i_8 - 2] [i_7 - 1]), (((/* implicit */unsigned char) (signed char)2)))), (((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_19 [i_8 + 3] [i_7 + 1])))))));
                            var_26 = ((unsigned short) var_6);
                        }
                    }
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) min((var_27), ((!(((/* implicit */_Bool) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) var_12)))))))))));
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65149))) | (max((448LL), (935908771335810395LL)))));
    }
    for (signed char i_15 = 1; i_15 < 17; i_15 += 1) /* same iter space */
    {
        var_29 ^= ((int) ((((/* implicit */_Bool) var_0)) && (((((/* implicit */_Bool) (short)18211)) || (((/* implicit */_Bool) var_4))))));
        var_30 = ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)4996))) == (456LL))))));
        var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) >= ((+(var_6))));
        var_32 = ((/* implicit */_Bool) arr_20 [i_15 - 1] [i_15]);
    }
    var_33 = ((/* implicit */_Bool) var_0);
}
