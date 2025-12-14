/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93827
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
    for (short i_0 = 0; i_0 < 17; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (short i_3 = 0; i_3 < 17; i_3 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_4 = 1; i_4 < 14; i_4 += 4) /* same iter space */
                        {
                            var_13 = ((/* implicit */unsigned long long int) (short)-4348);
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_3] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_15 [(signed char)12] [i_2] [i_1] [(unsigned short)2]))) : (4075670413875725254LL)))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4 + 3] [i_1]))))))));
                        }
                        for (unsigned short i_5 = 1; i_5 < 14; i_5 += 4) /* same iter space */
                        {
                            var_15 = ((/* implicit */_Bool) ((long long int) ((unsigned short) arr_17 [i_5 + 3] [i_5 - 1] [i_5 + 1] [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 1])));
                            arr_18 [i_0] = ((/* implicit */unsigned char) max(((((~(((/* implicit */int) arr_16 [i_0] [15ULL] [i_2] [i_2] [i_3] [i_5])))) - (((/* implicit */int) (!((_Bool)0)))))), (((((((/* implicit */_Bool) arr_4 [i_3] [i_5])) && (((/* implicit */_Bool) arr_0 [i_3] [i_0])))) ? (((/* implicit */int) ((((/* implicit */int) arr_16 [i_2] [i_1] [i_2] [i_2] [i_5 + 1] [i_0])) >= (((/* implicit */int) arr_11 [(short)9] [i_1] [(short)9] [(short)9]))))) : ((+(((/* implicit */int) (_Bool)1))))))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) /* same iter space */
                        {
                            arr_21 [i_0] [i_0] [i_0] [i_3] [i_6] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_2]))));
                            var_16 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_17 [i_1] [i_1] [(unsigned short)13] [i_6 + 3] [i_6 + 3] [i_6 + 2] [i_6])) ? (((((/* implicit */_Bool) arr_17 [i_0] [i_6] [i_6] [i_6] [i_6 - 1] [i_6] [i_0])) ? (arr_2 [i_6 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_6 + 2] [i_6] [i_6 + 1] [i_6] [i_6]))))) : (arr_2 [i_6 + 1])));
                        }
                        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) -9223372036854775804LL)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */int) arr_13 [i_3] [i_3])) : (((/* implicit */int) var_10)))))));
                        arr_22 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */unsigned short) (~(max(((-(arr_2 [i_1]))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (var_9))))))));
                        /* LoopSeq 2 */
                        for (short i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) (((((-(var_3))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_2] [i_2] [(unsigned short)13] [i_7] [i_0] [(unsigned short)13])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))) != (((/* implicit */long long int) 2834203726U))));
                            var_19 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                            var_20 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_20 [i_1] [i_7 - 2] [i_7 + 1] [i_7] [i_7 - 2])) ? (arr_20 [i_2] [i_3] [i_7 + 1] [i_7] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [(_Bool)1] [i_0])) ? (((/* implicit */int) arr_23 [i_7] [i_7 + 2] [i_7 + 1] [i_7 + 1] [i_7 - 2] [i_7] [i_7])) : (((((/* implicit */_Bool) 464775102)) ? (((/* implicit */int) (_Bool)1)) : (8191))))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_8 = 2; i_8 < 14; i_8 += 4) 
                        {
                            var_21 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_8 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_3])))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171))) : (arr_20 [i_8] [i_8] [i_8 - 2] [i_8 + 3] [i_8 + 3])))));
                            var_22 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_11 [i_2] [i_2] [i_2] [i_3])) : (((/* implicit */int) var_7)))) < (((/* implicit */int) (short)15985))));
                        }
                        arr_27 [(unsigned short)3] [(unsigned short)3] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8191)) && ((_Bool)1)));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 17; i_9 += 1) 
        {
            arr_30 [i_0] = ((/* implicit */long long int) 2890728511U);
            var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) (+(8693629203426319623ULL)))) ? (max((((/* implicit */unsigned long long int) min((arr_7 [i_0] [10LL] [i_9]), ((unsigned short)6607)))), (274877906943ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4360))))))));
            var_24 = max((((arr_12 [i_0] [i_0]) > (((/* implicit */long long int) ((/* implicit */int) min(((short)-4370), (arr_10 [i_0] [i_0] [i_0] [i_9] [i_0]))))))), (arr_11 [(unsigned short)11] [9LL] [11ULL] [i_9]));
        }
    }
    for (short i_10 = 0; i_10 < 17; i_10 += 1) /* same iter space */
    {
        arr_35 [i_10] = ((/* implicit */short) arr_3 [i_10]);
        var_25 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_2))));
        var_26 = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))) ^ (((((/* implicit */_Bool) max((arr_19 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]), (((/* implicit */long long int) arr_15 [i_10] [i_10] [i_10] [i_10]))))) ? (((/* implicit */unsigned long long int) arr_12 [i_10] [i_10])) : (((((/* implicit */_Bool) 9011820702367107616ULL)) ? (((/* implicit */unsigned long long int) 8619431259567200196LL)) : (18446744073709551599ULL))))));
        var_27 = ((/* implicit */signed char) arr_3 [i_10]);
        var_28 = var_12;
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 17; i_11 += 1) /* same iter space */
    {
        arr_38 [i_11] = var_7;
        var_29 = ((/* implicit */int) (signed char)-108);
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(-1)))) ? (arr_31 [10U] [(unsigned short)14]) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_14 [i_11]) < (arr_14 [i_11])))))));
    }
    var_31 = ((/* implicit */int) ((var_8) > (((/* implicit */long long int) 2834203726U))));
}
