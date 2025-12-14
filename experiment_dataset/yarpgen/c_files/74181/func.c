/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74181
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)65520)) ? (7342833161446944765LL) : (((/* implicit */long long int) var_15)))) <= (((/* implicit */long long int) (-(((/* implicit */int) (short)3))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) (+((+(((/* implicit */int) ((((/* implicit */unsigned int) arr_1 [i_0] [i_0])) <= (arr_0 [i_0]))))))));
        var_21 = ((/* implicit */unsigned int) arr_1 [1U] [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)6)) ? (4294967281U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))))))));
        var_23 = ((/* implicit */unsigned int) min((var_23), ((-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))))) ? ((~(arr_0 [i_0]))) : ((-(arr_0 [i_0])))))))));
    }
    for (int i_1 = 1; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */short) (+(((/* implicit */int) arr_5 [i_1]))));
        var_24 |= ((/* implicit */_Bool) (+((+(-7342833161446944766LL)))));
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_25 = arr_7 [i_2] [i_1];
            var_26 = ((/* implicit */int) arr_7 [i_1] [i_2]);
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_1 [(unsigned short)3] [i_1]) : (arr_1 [i_2] [i_2])))) ? (arr_8 [i_2] [i_2]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-22545)) ? (((/* implicit */int) (short)22524)) : (((/* implicit */int) (short)-11161)))))));
        }
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            var_28 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) ((arr_8 [i_1] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))))))))));
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) (-(arr_4 [i_1])));
        }
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            arr_16 [i_4] [i_1] = ((/* implicit */short) ((arr_4 [i_1]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(unsigned short)1] [i_1])))));
            arr_17 [i_1] [i_1 + 1] [i_1 + 1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-13)) ? (18446744073709551611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34))))) / (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1]))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (unsigned short i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    for (unsigned short i_7 = 2; i_7 < 13; i_7 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) arr_0 [i_1]))));
                            arr_28 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)13))))));
                            arr_29 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)33357)) ? (1653472993U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65529)))));
                            arr_30 [i_7] [i_6] [i_1] [i_4] [i_1] = ((/* implicit */_Bool) arr_4 [i_6]);
                        }
                    } 
                } 
            } 
            arr_31 [i_1] [10U] [i_1] = ((/* implicit */unsigned short) (-((~(((arr_9 [i_4 - 1]) ? (((/* implicit */unsigned long long int) arr_8 [i_4] [i_4])) : (arr_7 [i_1] [i_4])))))));
        }
    }
}
