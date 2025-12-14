/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97686
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
    for (unsigned long long int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (int i_2 = 4; i_2 < 14; i_2 += 1) 
            {
                {
                    var_16 = (+(((((/* implicit */_Bool) arr_2 [i_2 - 2] [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_2 - 3] [i_0 + 1])) : (((/* implicit */int) (unsigned char)15)))));
                    var_17 = ((/* implicit */signed char) (-(((((/* implicit */int) arr_5 [i_0])) / (((/* implicit */int) arr_5 [i_1]))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 12; i_3 += 3) 
    {
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 2) 
        {
            for (unsigned char i_5 = 0; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 3) /* same iter space */
                    {
                        arr_22 [i_3] = arr_7 [i_3] [i_3] [i_6];
                        arr_23 [i_3] [i_3] [i_5] [i_6 - 3] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_3] [i_5] [i_3]))))) ? (((/* implicit */int) arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])) : ((+(((/* implicit */int) (unsigned char)250))))))) == (((unsigned long long int) arr_1 [i_6 + 1]))));
                    }
                    for (unsigned char i_7 = 4; i_7 < 11; i_7 += 3) /* same iter space */
                    {
                        arr_27 [i_3] [i_4] [i_5] [i_7] = (i_3 % 2 == zero) ? (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)5))) << ((((~(((/* implicit */int) arr_15 [i_3] [i_4] [i_3])))) - (28798)))))) : (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) (unsigned char)5))) << ((((((~(((/* implicit */int) arr_15 [i_3] [i_4] [i_3])))) - (28798))) + (38523))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((((/* implicit */_Bool) (signed char)-118)) && (((/* implicit */_Bool) (signed char)-1))))))) ^ (((/* implicit */int) (unsigned char)15))));
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (((-(((/* implicit */int) arr_4 [i_7 - 1] [i_7 - 1])))) & (((((/* implicit */int) arr_4 [i_7 - 4] [i_7 + 1])) - (((/* implicit */int) arr_17 [i_7 - 4] [i_7 - 4] [i_7 - 3] [i_7 - 1])))))))));
                        arr_28 [i_3] [i_3] [i_5] [i_7] = var_12;
                        var_20 *= ((/* implicit */unsigned char) (-(((/* implicit */int) min((arr_18 [i_7 - 1] [i_7] [i_4] [i_7] [i_7 - 1] [i_7 - 3]), (arr_18 [i_7 - 2] [i_7] [i_4] [i_7] [i_7 + 1] [i_7]))))));
                    }
                    for (unsigned char i_8 = 4; i_8 < 11; i_8 += 3) /* same iter space */
                    {
                        var_21 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_10 [i_3] [i_4])) ? (2138800569103522663ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_3] [i_4])) ? (((/* implicit */int) (_Bool)0)) : (1661848716))))))));
                        arr_32 [i_3] [i_5] [i_3] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_4] [i_3]))));
                    }
                    arr_33 [i_3] [i_3] = ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_5 [i_3])) && (((/* implicit */_Bool) arr_5 [i_4]))))));
                }
            } 
        } 
    } 
}
