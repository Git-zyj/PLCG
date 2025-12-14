/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78134
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
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0])))) * ((~(((/* implicit */int) max((((/* implicit */short) var_10)), (arr_0 [i_0]))))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) var_10)) > (((/* implicit */int) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_8)))))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))));
    }
    for (unsigned short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */int) (((+(arr_5 [i_1] [i_1]))) >> ((((~(arr_5 [i_1] [i_1]))) - (3843866340913807424ULL)))));
        var_11 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_1]))))), (arr_5 [9] [9])));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10; i_3 += 4) 
        {
            for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    arr_17 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((signed char)9), (((/* implicit */signed char) arr_15 [i_4] [i_3]))))) ? ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) / (arr_11 [i_2] [i_3] [i_4]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)9))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2] [0]))) ^ (arr_16 [i_2] [i_2] [i_3] [i_4]))) : (arr_10 [i_3] [i_4]))))));
                    var_12 *= ((/* implicit */short) arr_16 [i_2] [i_2] [i_2] [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */int) max((((((((/* implicit */_Bool) arr_13 [i_5] [i_3] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_5]))) : (arr_10 [i_2] [(_Bool)1]))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2] [i_2]))))), (((/* implicit */unsigned int) ((int) arr_1 [i_2] [i_3])))));
                                var_14 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_1 [i_6 - 1] [i_6 - 1])) - (((/* implicit */int) arr_1 [i_6 - 1] [i_6])))) - (((((/* implicit */int) arr_1 [i_6 + 1] [(unsigned char)6])) ^ (((/* implicit */int) (unsigned char)59))))));
                                var_15 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_18 [i_2] [i_3] [i_5] [i_5] [i_6] [i_6 - 1])))) * ((-(((/* implicit */int) arr_18 [3] [3] [i_4] [3] [3] [i_6 + 1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) && (((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), (arr_18 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) && (((/* implicit */_Bool) (~(((/* implicit */int) arr_21 [i_2] [(unsigned char)1] [i_2] [(unsigned char)1])))))))));
        var_17 = ((/* implicit */signed char) arr_15 [i_2] [i_2]);
    }
    /* LoopSeq 1 */
    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) 
    {
        arr_26 [i_7] = min((((/* implicit */short) ((max((arr_23 [(_Bool)1] [i_7]), (((/* implicit */unsigned int) (signed char)4)))) > (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))), (arr_0 [i_7]));
        var_18 = min((((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)206)), (var_8)))) ? (((/* implicit */int) arr_2 [i_7] [i_7])) : ((~(((/* implicit */int) arr_24 [i_7] [i_7])))))), ((~(((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) arr_1 [i_7] [i_7]))))))));
    }
    var_19 = ((/* implicit */unsigned int) var_7);
}
