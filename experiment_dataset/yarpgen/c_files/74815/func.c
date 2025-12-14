/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74815
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
    for (unsigned char i_0 = 4; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    arr_7 [i_2] [i_2] [16] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1]))));
                    arr_8 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 - 1])), (min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) (signed char)7)) ? (arr_0 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0 + 2] [i_0 + 2])))))))));
                    arr_9 [i_1] [(signed char)0] [i_0] = ((/* implicit */unsigned char) ((signed char) arr_1 [i_1]));
                }
            } 
        } 
        var_11 *= ((/* implicit */short) min((min(((unsigned char)184), ((unsigned char)160))), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0 - 4])))) || ((!(((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))))))));
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)19)) ? (((/* implicit */int) arr_4 [i_0 - 4] [i_0] [i_0])) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) var_7))))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */int) arr_3 [i_0])) | (((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_10))))))))))));
        arr_10 [i_0 + 1] = min((((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) 2796645463U)) : (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 + 2] [i_0] [i_0]))) : (arr_5 [i_0] [i_0] [i_0])))))), (((/* implicit */unsigned long long int) var_5)));
    }
    for (unsigned short i_3 = 0; i_3 < 13; i_3 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_4 = 4; i_4 < 10; i_4 += 4) /* same iter space */
        {
            arr_17 [i_3] = ((arr_15 [(unsigned char)12] [i_4 + 3] [(unsigned short)3]) / (arr_15 [(signed char)1] [i_4 + 3] [i_4]));
            arr_18 [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_3]))));
            /* LoopSeq 2 */
            for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        {
                            var_13 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)4773)) ? (94584741U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)131)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (signed char)59)))))));
                            arr_26 [i_3] [i_3] [i_3] [i_5] [i_3] = ((/* implicit */int) arr_25 [i_3] [(_Bool)1] [i_4 - 2] [i_4 - 4] [i_6] [i_7] [i_7]);
                            arr_27 [(unsigned short)10] [(signed char)11] [i_5] [i_6] [i_6] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_4 - 4] [i_4 - 3] [i_4 + 2])) && (arr_11 [i_4 - 3])));
                            var_14 *= ((/* implicit */unsigned short) 2133001470U);
                            var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) (((!(((/* implicit */_Bool) 2707028026U)))) || ((!(((/* implicit */_Bool) arr_3 [(unsigned short)21])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned short i_8 = 2; i_8 < 12; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                    {
                        {
                            arr_34 [i_3] [i_4] [i_4] [i_5] [i_3] = (~(arr_0 [i_4 + 3]));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((arr_25 [i_8] [i_8] [i_8] [i_8 - 1] [(_Bool)1] [i_8] [i_8 - 2]) * (arr_6 [i_8] [i_8] [i_8] [i_8 + 1])))));
                        }
                    } 
                } 
            }
            for (int i_10 = 0; i_10 < 13; i_10 += 2) 
            {
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) ((((/* implicit */_Bool) -2147483639)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (94584741U))))));
                var_18 = ((/* implicit */_Bool) var_0);
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_22 [12] [i_4] [i_4 - 1] [i_4] [i_4])))) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) var_1))))));
            }
        }
        for (unsigned char i_11 = 4; i_11 < 10; i_11 += 4) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_3] [i_3]))) + (var_8)))) ? (((/* implicit */int) arr_12 [i_3])) : (((int) (short)22645))))));
            var_21 = ((/* implicit */int) ((signed char) ((min((536870911ULL), (var_6))) ^ (((/* implicit */unsigned long long int) max((var_0), (-1999956577)))))));
        }
        for (unsigned char i_12 = 4; i_12 < 10; i_12 += 4) /* same iter space */
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (arr_38 [i_3] [i_3] [i_3])));
            var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_36 [i_12 - 1] [i_12 + 2] [i_12 - 4] [i_12 + 2]), (arr_6 [i_12 + 3] [i_12 - 4] [i_12 - 2] [i_12])))) ? (((long long int) arr_36 [i_12 + 3] [i_12 - 4] [i_12 - 3] [i_12])) : (((/* implicit */long long int) (~(arr_6 [i_12 - 1] [i_12 - 1] [i_12 + 2] [i_12 - 3]))))));
        }
        /* LoopNest 3 */
        for (int i_13 = 0; i_13 < 13; i_13 += 1) 
        {
            for (unsigned char i_14 = 0; i_14 < 13; i_14 += 3) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_54 [i_3] [i_3] [i_3] [i_15] = ((/* implicit */unsigned long long int) ((var_8) * (((((/* implicit */_Bool) arr_13 [i_3] [i_13])) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [21] [21] [i_14])) / (((/* implicit */int) arr_43 [i_3] [i_3] [i_15]))))) : (var_10)))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((((-625227872) != (((/* implicit */int) (unsigned char)246)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [(unsigned short)10] [(unsigned char)12]))) : (min((var_10), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))))));
                    }
                } 
            } 
        } 
        arr_55 [(signed char)11] = (+(((/* implicit */int) arr_23 [i_3] [i_3] [i_3] [10ULL])));
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 1) 
    {
        var_25 |= ((/* implicit */unsigned short) arr_1 [i_16]);
        arr_58 [i_16] = ((/* implicit */unsigned char) ((unsigned long long int) arr_56 [i_16]));
    }
    var_26 += ((/* implicit */unsigned int) var_4);
    var_27 = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_28 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) == (var_4)))) << (((((((/* implicit */int) var_9)) & (((/* implicit */int) min((var_1), (var_1)))))) - (42439)))));
    var_29 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 4357522347545191790LL)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (14437277988795957502ULL))))))));
}
