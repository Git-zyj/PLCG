/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81413
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
    /* vectorizable */
    for (short i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 2] [(unsigned short)8]))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 4) 
            {
                for (unsigned short i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [(unsigned char)9] [i_2] [(unsigned char)11] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_0] [1])))) && (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)83)))))));
                        arr_11 [i_0] [i_0] [(_Bool)0] [18LL] = ((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_7 [i_2 - 1] [i_0]))));
                        arr_12 [i_0] [i_0] [i_1] [i_2] [15U] [13] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_1 + 4])) ? (((/* implicit */long long int) arr_4 [i_3])) : (549754765312LL)));
                    }
                } 
            } 
        } 
        arr_13 [(short)10] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 2] [i_0 + 1]))) : (4192256U)));
    }
    /* LoopNest 2 */
    for (signed char i_4 = 2; i_4 < 19; i_4 += 1) 
    {
        for (signed char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            {
                arr_21 [i_4] [(_Bool)1] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 129918703)) ? (var_13) : (((/* implicit */int) var_6))))) ? (arr_17 [i_4 + 1] [i_4 - 1]) : (((arr_17 [2] [i_4]) << (((1615468903) - (1615468903)))))))), ((-((-(0U)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 17; i_6 += 1) /* same iter space */
                {
                    arr_24 [i_5] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)57)))))));
                    var_16 += ((/* implicit */unsigned short) (~(((((/* implicit */int) arr_18 [(unsigned char)3] [i_4])) & (((/* implicit */int) arr_16 [i_6]))))));
                }
                for (signed char i_7 = 3; i_7 < 17; i_7 += 1) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_22 [i_7] [i_7 + 1]))) * (((/* implicit */int) ((arr_19 [i_4 - 2]) > (arr_19 [i_4 + 1]))))));
                    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4192256U)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_12)))) + (((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_14 [6] [i_5]))))))) ? (((((/* implicit */_Bool) arr_14 [i_4] [(unsigned char)7])) ? (((int) arr_25 [i_4] [i_5] [2])) : (((/* implicit */int) arr_23 [i_7] [i_7 - 1] [i_4 - 1] [i_4])))) : ((~(((/* implicit */int) arr_16 [(unsigned char)18]))))));
                }
                /* vectorizable */
                for (signed char i_8 = 3; i_8 < 19; i_8 += 2) 
                {
                    arr_32 [i_8] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_4 + 1])) | (var_14)));
                    arr_33 [14] [i_8] [(unsigned short)0] = ((/* implicit */short) (-(arr_19 [i_8 - 3])));
                    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (+(((/* implicit */int) var_6)))))));
                }
                for (int i_9 = 1; i_9 < 16; i_9 += 1) 
                {
                    var_20 -= ((/* implicit */unsigned char) (+(((((/* implicit */int) var_11)) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_8)))) - (27252)))))));
                    var_21 = ((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) arr_35 [4] [15] [i_5] [i_9])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))), (((/* implicit */int) arr_18 [7U] [i_4 - 2]))))));
                    arr_37 [17U] [i_5] [i_5] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) var_4))));
                    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)26)) ? (12) : (((/* implicit */int) var_9))))))), (max((523218861281866970ULL), (((/* implicit */unsigned long long int) var_10)))))))));
                }
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_9))));
}
