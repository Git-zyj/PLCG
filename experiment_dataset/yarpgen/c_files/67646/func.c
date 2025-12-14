/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67646
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
    var_16 &= ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) var_11)), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)14693)) < (((/* implicit */int) (short)14857))))), (var_8)))));
    var_18 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) var_11)))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */unsigned long long int) arr_6 [10U])) : (((arr_10 [i_0] [i_0] [i_2] [i_2]) % (((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [i_3]))))));
                        var_20 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_2 [i_2])) / (arr_6 [i_0])))) / ((+(arr_10 [i_0] [i_0] [i_2] [i_0])))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) (signed char)62);
        arr_12 [i_0] = ((/* implicit */short) (signed char)-117);
        var_22 = ((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) % (((/* implicit */int) arr_4 [i_0]))));
    }
    for (long long int i_4 = 0; i_4 < 11; i_4 += 3) /* same iter space */
    {
        arr_15 [i_4] = ((/* implicit */short) min((min((((/* implicit */long long int) arr_0 [i_4])), (arr_7 [i_4] [i_4]))), (((/* implicit */long long int) (((_Bool)0) || (((/* implicit */_Bool) arr_0 [i_4])))))));
        arr_16 [i_4] [i_4] = (short)-30014;
    }
    for (long long int i_5 = 0; i_5 < 11; i_5 += 3) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))), (min((((((/* implicit */_Bool) arr_0 [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111))) : (989716991U))), (((/* implicit */unsigned int) arr_3 [i_5] [i_5]))))));
        /* LoopNest 2 */
        for (unsigned char i_6 = 3; i_6 < 8; i_6 += 3) 
        {
            for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) (unsigned short)40504)) ? (((/* implicit */int) arr_4 [i_7])) : (((/* implicit */int) (short)14857)))))) - (((/* implicit */int) ((((((/* implicit */_Bool) (short)14875)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_4 [i_7])))) <= (((((/* implicit */_Bool) 1028607864)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (signed char)41)))))))));
                    var_25 += ((/* implicit */short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54708)) ? (((/* implicit */int) arr_19 [i_7])) : (((/* implicit */int) (_Bool)0))))) ? (min((arr_10 [i_5] [i_5] [(short)11] [i_7]), (((/* implicit */unsigned long long int) (signed char)41)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)93)), (-1143471023))))))));
                    var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)14865)) ? (arr_9 [i_7] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_7] [i_6])))));
                }
            } 
        } 
    }
}
