/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82557
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
    var_12 = ((/* implicit */long long int) min(((-((-(var_0))))), (((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (((!(var_4))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))));
        /* LoopSeq 1 */
        for (short i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) (+(arr_3 [i_0] [i_1 + 1])));
            arr_6 [i_0] = (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_3 [i_0] [i_1]))));
            arr_7 [i_0] [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (arr_3 [i_0] [i_1]) : (-9223372036854775800LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (arr_3 [i_0] [i_1])));
            var_14 = ((/* implicit */short) (+(((((/* implicit */_Bool) (short)11603)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
            /* LoopNest 2 */
            for (unsigned int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */unsigned int) 9223372036854775800LL);
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_1 [i_4];
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(-9223372036854775800LL)))) ? (arr_12 [i_3] [i_3 - 2] [i_4] [i_4]) : (((((/* implicit */_Bool) arr_15 [i_3] [i_2] [i_2] [i_2] [i_4])) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */int) arr_12 [i_0] [i_1 - 2] [i_1] [i_1]);
                            var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 1])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 + 1])))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) 96130964)) ? (((/* implicit */long long int) -1625255654)) : (7052984494242586064LL)));
                            arr_21 [i_0] [i_5] = arr_12 [i_1] [i_3 + 1] [i_2] [i_1 + 1];
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) var_10);
                        arr_23 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */signed char) var_4);
                    }
                } 
            } 
        }
        arr_24 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0])) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0])))) ? (arr_5 [i_0]) : (((((/* implicit */_Bool) -9223372036854775784LL)) ? (((/* implicit */long long int) -1625255654)) : (7052984494242586093LL)))));
        arr_25 [i_0] |= ((/* implicit */unsigned short) ((((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) : ((+(((/* implicit */int) (_Bool)1))))));
    }
    /* LoopNest 3 */
    for (unsigned int i_6 = 2; i_6 < 7; i_6 += 2) 
    {
        for (short i_7 = 1; i_7 < 8; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 6; i_8 += 2) 
            {
                {
                    var_19 = ((/* implicit */long long int) ((unsigned int) ((2147483646) & (((/* implicit */int) (unsigned char)255)))));
                    arr_36 [i_6] [i_7] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_30 [i_7] [i_8])) ? (max((((/* implicit */long long int) arr_1 [i_8])), (6139717316696714820LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_7])) ? (((/* implicit */int) arr_31 [i_8])) : (((/* implicit */int) arr_0 [i_6])))))))));
                }
            } 
        } 
    } 
}
