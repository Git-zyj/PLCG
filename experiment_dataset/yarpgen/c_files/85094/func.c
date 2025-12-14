/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85094
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
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */short) min((var_19), ((short)21889)));
        var_20 = ((/* implicit */signed char) (~(((unsigned int) (signed char)7))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) arr_0 [1U]))));
        var_22 = ((/* implicit */unsigned long long int) arr_0 [i_1]);
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((var_7) + (var_7)))) ? (((/* implicit */int) ((max((var_7), (((/* implicit */unsigned int) arr_0 [i_1])))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (short)-21915)) <= (((/* implicit */int) arr_3 [i_1] [i_1]))))))))) : (((/* implicit */int) var_18)))))));
        arr_4 [i_1] = ((short) (~(((/* implicit */int) (short)-20649))));
        var_24 = ((/* implicit */short) var_8);
    }
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_9), (((/* implicit */unsigned short) var_13)))), (var_18)))) ? (((((((/* implicit */int) var_16)) % (((/* implicit */int) var_12)))) << ((((+(var_2))) - (3781158073406300138ULL))))) : (min(((-(((/* implicit */int) var_10)))), ((-(((/* implicit */int) (short)21876))))))));
    var_26 = ((/* implicit */signed char) ((((max((((/* implicit */long long int) var_18)), (var_17))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)105)), (var_6)))))) >> (((max((((int) (short)254)), (((/* implicit */int) var_15)))) - (240)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (((~(((/* implicit */int) arr_3 [i_2] [i_2])))) >> (((((/* implicit */int) var_9)) - (42275)))));
        /* LoopSeq 2 */
        for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            arr_11 [i_2] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) arr_10 [i_3])) : (arr_2 [i_3])));
            arr_12 [i_3] [i_3] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (821003819U)))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_2] [i_3])))))));
        }
        for (short i_4 = 2; i_4 < 16; i_4 += 3) 
        {
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_4 + 2])) % (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (signed char)-69)) : (((/* implicit */int) (short)-32759))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(short)5] [i_4 + 2])) ? (((/* implicit */int) var_18)) : (2147483647)))) ? (((((/* implicit */_Bool) (short)-14325)) ? (((/* implicit */int) arr_3 [i_2] [i_4 - 2])) : (((/* implicit */int) var_11)))) : (((/* implicit */int) var_16))));
            /* LoopSeq 1 */
            for (short i_5 = 1; i_5 < 15; i_5 += 4) 
            {
                var_29 = ((/* implicit */int) var_17);
                var_30 = ((/* implicit */unsigned char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-100))) | (arr_10 [i_2])))));
            }
            var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128))) & (2773760422U)));
        }
        var_32 = (short)-15;
        arr_18 [i_2] [i_2] = (short)-7007;
        var_33 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 3) 
    {
        var_34 *= ((/* implicit */long long int) ((signed char) (short)32767));
        var_35 = ((/* implicit */unsigned char) ((var_11) ? (arr_15 [i_6] [i_6]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_6] [i_6])) ? (((/* implicit */int) (_Bool)1)) : (arr_6 [i_6]))))));
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) ((arr_10 [i_6]) & (((/* implicit */unsigned int) ((/* implicit */int) var_14))))))));
    }
    for (short i_7 = 0; i_7 < 11; i_7 += 2) 
    {
        arr_24 [i_7] = ((/* implicit */short) arr_19 [i_7]);
        var_37 -= (signed char)105;
    }
    var_38 = ((/* implicit */signed char) ((((((/* implicit */int) var_12)) + (2147483647))) << (((max(((+(((/* implicit */int) var_9)))), (((/* implicit */int) max((((/* implicit */short) var_14)), (var_4)))))) - (42288)))));
}
