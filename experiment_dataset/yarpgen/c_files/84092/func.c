/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84092
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
    var_10 = ((((/* implicit */_Bool) (((-(((/* implicit */int) var_0)))) ^ (((((/* implicit */_Bool) 9602077929443198925ULL)) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) (unsigned char)6))))))) ? (((((/* implicit */_Bool) min((35184372088831ULL), (35184372088826ULL)))) ? (var_6) : (((((/* implicit */_Bool) 1480494551340662962ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54145))) : (var_7))))) : (min((var_6), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (18446708889337462784ULL))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) ((unsigned char) 15487033312790006838ULL)))));
                        var_12 = ((/* implicit */unsigned long long int) max((var_12), (35184372088831ULL)));
                    }
                } 
            } 
        } 
        arr_9 [i_0] [i_0 - 2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((10148476333527562325ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [(unsigned char)4] [(unsigned char)4])) - (((/* implicit */int) arr_5 [i_0 - 2] [8ULL] [i_0]))));
        var_14 = ((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (arr_1 [i_0 - 4]) : (arr_1 [i_0 - 4]));
        var_15 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_0 + 1] [i_0]))));
    }
    for (unsigned char i_4 = 4; i_4 < 15; i_4 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_4 - 4] [i_4 - 2])) >= (((/* implicit */int) arr_2 [i_4 - 1] [i_4 - 2])))))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_4 - 4] [i_4 - 2])) > (((/* implicit */int) arr_5 [i_4 - 4] [(unsigned short)6] [i_4]))))) % (((/* implicit */int) min((arr_5 [i_4 - 4] [(unsigned char)6] [12ULL]), (arr_3 [i_4 - 4] [i_4 - 2]))))));
    }
    for (unsigned char i_5 = 1; i_5 < 19; i_5 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (9105939249515374959ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)59))))) | (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_12 [i_5])))) * ((+(((/* implicit */int) arr_12 [i_5]))))))))))));
        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)30712)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 16688703037471638869ULL))))) : (((/* implicit */int) (unsigned short)1903))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_13 [i_5 + 1] [(unsigned char)2]) != (35184372088831ULL))))) : (min((arr_13 [i_5] [16ULL]), (16688703037471638871ULL))))))));
    }
    for (unsigned short i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((max(((+(((/* implicit */int) arr_12 [(unsigned char)8])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))) << ((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [(unsigned short)11]))))))))))));
        /* LoopSeq 2 */
        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) /* same iter space */
        {
            arr_20 [(unsigned char)2] = ((/* implicit */unsigned char) 2305843009213693951ULL);
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) + ((+(((/* implicit */int) min((arr_18 [i_6]), ((unsigned char)39))))))));
            var_22 = ((((/* implicit */_Bool) ((arr_13 [i_6] [i_7]) - (arr_13 [(unsigned short)0] [i_7])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_6] [8ULL] [i_7])) >> (((/* implicit */int) ((arr_19 [i_6] [i_6]) != (arr_19 [i_6] [i_6]))))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_6] [i_6] [i_6])) || (((/* implicit */_Bool) (unsigned short)29735))))), (((((/* implicit */_Bool) arr_18 [i_6])) ? (1758041036237912746ULL) : (4942453903583122132ULL))))));
            arr_21 [i_6] [i_7] &= ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)9)) ? ((-(arr_13 [i_6] [i_7]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) 896712928912298600ULL)))))));
        }
        for (unsigned char i_8 = 0; i_8 < 17; i_8 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned long long int) ((((10148476333527562325ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6345))))) != (((arr_17 [i_6] [i_8]) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_8] [i_8])) ^ (((/* implicit */int) (unsigned char)189)))))))));
            /* LoopNest 3 */
            for (unsigned short i_9 = 2; i_9 < 16; i_9 += 4) 
            {
                for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 17; i_11 += 1) 
                    {
                        {
                            var_24 -= ((min((arr_30 [i_6] [i_11]), (arr_30 [(unsigned char)5] [i_9 + 1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_30 [i_6] [i_8]) != (arr_17 [i_6] [i_6]))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)209)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) (unsigned short)15615))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_29 [i_6] [i_8] [14ULL] [i_9] [i_10] [i_11])) - (((/* implicit */int) arr_29 [i_6] [i_8] [i_9 + 1] [i_10] [i_11] [i_6])))) | (((((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) >> (((((/* implicit */int) (unsigned short)17441)) - (17421)))))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)40008)) ? (18446708889337462784ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))) == (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)40)))))))) : (((/* implicit */int) (unsigned short)25527))));
                        }
                    } 
                } 
            } 
        }
    }
}
