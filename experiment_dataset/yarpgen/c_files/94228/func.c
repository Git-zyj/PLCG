/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94228
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94228 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94228
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 2; i_3 < 18; i_3 += 4) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((arr_2 [i_1 - 1] [i_2 - 3]), (((/* implicit */long long int) (unsigned short)65532))))) ? (min((-6586315052958925384LL), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) ((var_12) <= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65508)))))))));
                                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) min((((((/* implicit */_Bool) 6586315052958925401LL)) ? (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1] [i_2 - 3] [i_3 - 2])) : (((/* implicit */int) arr_12 [i_1 - 2] [i_1 - 1] [i_2 - 3] [i_3 - 2])))), (((/* implicit */int) ((_Bool) arr_11 [18ULL] [(unsigned char)0] [i_2 - 3] [i_1] [i_0]))))))));
                                var_20 += ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 - 2] [i_1 + 1])) ? (6586315052958925419LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65499)))))), (((unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) var_7)))))));
                                var_21 = ((/* implicit */unsigned short) var_10);
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned char) var_1);
                    var_23 = ((/* implicit */long long int) (unsigned char)225);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 18; i_5 += 3) 
    {
        var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) 106637050))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 2) 
        {
            for (long long int i_7 = 1; i_7 < 17; i_7 += 2) 
            {
                for (short i_8 = 0; i_8 < 18; i_8 += 2) 
                {
                    {
                        arr_22 [i_6] [i_6] [i_6] [i_5] = ((/* implicit */short) arr_13 [i_8] [i_7] [i_5] [i_6] [i_5] [i_5] [i_5]);
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min(((~(((/* implicit */int) var_6)))), ((~(((/* implicit */int) (signed char)21)))))))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_9 = 0; i_9 < 15; i_9 += 4) 
    {
        var_26 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_4 [i_9])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_18 [i_9] [i_9] [i_9]))))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)3))) : (min((3221225472U), (((/* implicit */unsigned int) (short)26279)))))))));
        arr_25 [i_9] [i_9] = ((/* implicit */_Bool) min(((+(arr_2 [i_9] [i_9]))), (((/* implicit */long long int) min(((!(((/* implicit */_Bool) (short)-32739)))), (((_Bool) arr_18 [i_9] [i_9] [i_9])))))));
    }
    for (int i_10 = 0; i_10 < 10; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
        {
            for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
            {
                {
                    var_28 = ((/* implicit */long long int) var_1);
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 8; i_13 += 3) 
                    {
                        arr_36 [(unsigned short)0] [i_13] [i_12] [6LL] [i_11 - 1] [i_12] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((signed char) (short)18887))), (min((21ULL), (((unsigned long long int) var_10))))));
                        var_29 = ((unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (var_16) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)28119)) ? (arr_2 [i_11] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-1))))))));
                        var_30 = ((/* implicit */_Bool) -9223372036854775806LL);
                    }
                }
            } 
        } 
        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_6 [i_10] [i_10] [i_10]))));
        /* LoopSeq 3 */
        for (unsigned char i_14 = 2; i_14 < 8; i_14 += 4) 
        {
            arr_39 [i_10] = ((/* implicit */unsigned short) min((arr_18 [i_10] [i_14] [i_10]), ((unsigned char)58)));
            var_32 = ((/* implicit */signed char) -106637036);
        }
        for (unsigned char i_15 = 3; i_15 < 8; i_15 += 2) 
        {
            var_33 = ((/* implicit */short) ((((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) 2147483647)), (9223372036854775807ULL))))) ^ (((/* implicit */int) var_5))));
            var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) -212176045))));
        }
        /* vectorizable */
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 4) 
        {
            var_35 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-1235765128567495497LL) / (((/* implicit */long long int) 106637068))))) ? (((((/* implicit */_Bool) arr_34 [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) (short)8200)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((signed char) (unsigned char)147)))));
            arr_44 [i_16] = ((/* implicit */long long int) arr_13 [i_10] [i_10] [i_10] [i_16] [i_10] [i_16] [i_16]);
        }
    }
}
