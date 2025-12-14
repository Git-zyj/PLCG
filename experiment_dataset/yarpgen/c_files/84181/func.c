/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84181
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
    var_13 = ((/* implicit */int) min((var_13), (min((-358881308), (((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) (short)15215))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) && (var_9)))) : (((/* implicit */int) var_3))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) < (((/* implicit */int) arr_0 [i_0] [i_0]))))), (((short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_1)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_6 [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) ? (((/* implicit */int) ((signed char) var_2))) : (var_5)));
                var_15 |= ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0]))) ^ (var_6)))));
            }
            for (unsigned long long int i_3 = 2; i_3 < 19; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-2))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */short) arr_5 [i_0]);
            }
            for (unsigned short i_4 = 0; i_4 < 20; i_4 += 3) 
            {
                arr_13 [i_1] [i_1] = ((/* implicit */unsigned long long int) var_4);
                var_17 = ((/* implicit */short) ((((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) (unsigned short)0)))) ? (arr_2 [i_1] [i_1]) : (((/* implicit */int) var_2))));
            }
            var_18 = arr_12 [i_0] [i_0] [i_0];
        }
        var_19 *= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((2147483647) + (((/* implicit */int) (_Bool)0))))), (min((arr_5 [i_0]), (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) & (((/* implicit */int) (unsigned char)14)))))))));
        /* LoopNest 2 */
        for (unsigned short i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (long long int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                {
                    var_20 = ((/* implicit */unsigned long long int) (~(max((max((-2147483644), (((/* implicit */int) var_7)))), ((~(((/* implicit */int) var_1))))))));
                    var_21 += var_0;
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) min(((!(((/* implicit */_Bool) var_11)))), (((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) arr_14 [i_0] [i_5] [i_6])))))))));
                    var_23 = ((/* implicit */_Bool) (unsigned short)127);
                }
            } 
        } 
    }
    for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_18 [i_7]), (((/* implicit */unsigned long long int) (_Bool)0)))))));
        /* LoopNest 2 */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            for (long long int i_9 = 0; i_9 < 20; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20; i_10 += 2) 
                    {
                        for (short i_11 = 0; i_11 < 20; i_11 += 2) 
                        {
                            {
                                var_25 *= ((/* implicit */_Bool) 2147483647);
                                arr_29 [i_8] [i_8] [i_8] [i_9] [i_9] [i_10] [i_11] = ((/* implicit */unsigned short) var_2);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) (((+((-2147483647 - 1)))) | (((/* implicit */int) max(((!(((/* implicit */_Bool) -4506449144589970300LL)))), ((!(((/* implicit */_Bool) -4506449144589970301LL)))))))));
                }
            } 
        } 
        var_27 |= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((2147483647), (((/* implicit */int) var_2))))), (((unsigned long long int) arr_15 [i_7] [i_7]))))) ? (2147483647) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))));
    }
}
