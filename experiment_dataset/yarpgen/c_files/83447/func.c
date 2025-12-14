/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83447
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
    var_19 = ((/* implicit */short) var_7);
    /* LoopSeq 3 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            for (short i_2 = 2; i_2 < 10; i_2 += 1) 
            {
                {
                    var_20 = (unsigned short)0;
                    arr_7 [i_0 + 1] [i_2] [i_2] = ((/* implicit */signed char) min((max((var_17), (arr_1 [i_0 - 1]))), (((/* implicit */unsigned int) arr_6 [i_0 - 2] [i_0] [i_0] [i_0]))));
                    var_21 = ((/* implicit */unsigned int) min((var_21), (max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0 - 1]))))), (min((((unsigned int) arr_2 [i_0])), (((((/* implicit */unsigned int) 933296245)) - (arr_0 [i_0 - 3] [i_0])))))))));
                    var_22 ^= ((/* implicit */signed char) arr_6 [i_0] [i_1] [i_2] [i_1]);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned short i_3 = 2; i_3 < 10; i_3 += 2) 
        {
            var_23 = ((/* implicit */long long int) max(((!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned int) (signed char)-32))))))), (((min((((/* implicit */long long int) (signed char)16)), (arr_4 [i_0]))) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 3] [i_0 - 1])))))));
            var_24 = (~(((((/* implicit */int) (signed char)10)) & (((/* implicit */int) arr_2 [i_0 - 1])))));
        }
        for (signed char i_4 = 0; i_4 < 11; i_4 += 2) /* same iter space */
        {
            var_25 = ((/* implicit */long long int) min((min((arr_0 [i_0 - 2] [i_0 + 1]), (((/* implicit */unsigned int) arr_11 [i_0] [i_0 - 1])))), (((/* implicit */unsigned int) min((arr_10 [i_0 - 2] [i_0 - 1]), (arr_10 [i_0 - 2] [i_0 - 1]))))));
            var_26 = ((/* implicit */long long int) (signed char)31);
            arr_13 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) arr_3 [i_0 + 1]))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0 - 1])) >= (((/* implicit */int) arr_3 [i_0 - 1]))))) : (((((/* implicit */_Bool) (unsigned char)128)) ? (((/* implicit */int) arr_3 [i_0 - 1])) : (((/* implicit */int) arr_3 [i_0 + 1]))))));
            var_27 = ((/* implicit */unsigned char) ((short) (+(arr_1 [i_0 + 1]))));
        }
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_5]))))), (((((/* implicit */_Bool) arr_10 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 3])) : (((/* implicit */int) arr_10 [i_0 - 3] [i_0 + 1]))))));
            var_29 = ((/* implicit */unsigned int) min((arr_5 [i_0] [i_5] [i_0] [i_0]), (((((/* implicit */_Bool) (signed char)1)) ? ((+(arr_4 [i_0]))) : (((/* implicit */long long int) var_11))))));
        }
    }
    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
    {
        arr_19 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_17 [i_6 + 1] [i_6 - 1]), (((/* implicit */int) (unsigned short)1744))))) ? (min((arr_18 [i_6 + 1]), (arr_18 [i_6 - 1]))) : (arr_18 [i_6 - 1])));
        /* LoopNest 2 */
        for (unsigned int i_7 = 1; i_7 < 12; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 15; i_8 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned short)51292)), (max((((/* implicit */unsigned int) max((var_2), ((signed char)16)))), (arr_18 [i_7])))));
                    var_31 ^= ((/* implicit */signed char) ((arr_17 [i_6 - 1] [i_6 - 1]) <= (arr_17 [i_6] [i_6 + 1])));
                }
            } 
        } 
        arr_26 [i_6] = ((/* implicit */unsigned int) ((unsigned char) ((var_15) != (min((arr_17 [i_6] [i_6]), (arr_20 [i_6] [(unsigned short)4] [i_6]))))));
    }
    for (unsigned short i_9 = 0; i_9 < 13; i_9 += 2) 
    {
        var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) min((((/* implicit */unsigned int) ((arr_24 [i_9] [i_9] [i_9] [i_9]) <= (arr_24 [i_9] [i_9] [i_9] [i_9])))), (((((/* implicit */_Bool) arr_21 [i_9] [i_9])) ? (arr_18 [i_9]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_6))))))))))));
        arr_31 [i_9] [i_9] = ((/* implicit */unsigned char) arr_30 [i_9] [i_9]);
        var_33 = max((((/* implicit */long long int) arr_20 [i_9] [i_9] [i_9])), (min((((/* implicit */long long int) ((((/* implicit */_Bool) 1416543843U)) ? (((/* implicit */int) arr_23 [i_9])) : (((/* implicit */int) (unsigned char)238))))), (-9166650249016114906LL))));
    }
    var_34 = ((/* implicit */int) var_12);
}
