/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79451
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
    var_10 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_8)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (103604460)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (18446744073709551604ULL)))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) min((var_0), (((/* implicit */short) arr_2 [i_0])))))) && (((((/* implicit */int) arr_0 [17ULL])) == (((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (max((((/* implicit */int) arr_0 [i_0])), (((((/* implicit */int) var_8)) >> (((18446744073709551604ULL) - (18446744073709551586ULL)))))))));
        var_12 = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned short i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (arr_7 [i_1]));
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] [18ULL] = ((/* implicit */unsigned short) ((unsigned long long int) ((((((/* implicit */_Bool) 8544040606831726318LL)) ? (arr_7 [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))) > (((/* implicit */unsigned long long int) var_9)))));
                    var_13 -= ((/* implicit */short) (~(((/* implicit */int) var_3))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        var_14 *= ((/* implicit */short) (unsigned char)123);
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) arr_6 [i_1] [i_3])))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [0ULL] [i_3] [i_3] [i_4 + 1] [0ULL] [i_3])) / (((/* implicit */int) arr_15 [i_1] [i_2] [i_2] [i_4 + 1] [i_5] [i_3]))));
                            var_17 = ((((/* implicit */int) ((((/* implicit */int) (unsigned char)156)) > (((/* implicit */int) arr_0 [i_5]))))) == ((~(((/* implicit */int) (unsigned short)0)))));
                            var_18 *= ((/* implicit */unsigned short) (!((_Bool)0)));
                        }
                        for (unsigned short i_6 = 0; i_6 < 20; i_6 += 4) 
                        {
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) (unsigned short)0))));
                            var_20 = ((/* implicit */unsigned short) (-(1406676809)));
                            var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) var_9))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) arr_3 [i_4 + 1]))));
                            var_23 *= ((/* implicit */unsigned int) arr_3 [i_1]);
                        }
                    }
                    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
                    {
                        arr_23 [i_3] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned short) (_Bool)1)), (arr_6 [i_7] [i_3]))), (((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [i_1] [(unsigned short)4] [i_3] [i_7] [i_2] [i_3])) < (((/* implicit */int) arr_17 [i_7] [i_7] [i_3] [i_2] [i_2] [i_1])))))));
                        var_24 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)58739))));
                    }
                }
            } 
        } 
    }
    for (unsigned short i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
    {
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_8])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_8])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_17 [i_8] [i_8] [(unsigned short)13] [i_8] [i_8] [i_8]))))) ? (((((/* implicit */int) (short)-26821)) / (1406676809))) : (((/* implicit */int) arr_3 [i_8])))) : (((/* implicit */int) arr_17 [i_8] [(unsigned short)8] [i_8] [i_8] [i_8] [i_8]))));
        arr_28 [6U] = ((/* implicit */short) var_6);
    }
}
