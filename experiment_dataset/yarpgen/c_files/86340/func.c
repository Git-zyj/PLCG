/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86340
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86340 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86340
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
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((1048568) == (((/* implicit */int) (_Bool)1)))))) : ((~(var_2)))))) && ((_Bool)1)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 2) 
    {
        var_20 += ((/* implicit */signed char) (!((_Bool)1)));
        var_21 = ((/* implicit */unsigned short) (unsigned char)233);
        var_22 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_14)) | (((/* implicit */int) var_3))))))) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)20)))))))) : ((~(((((/* implicit */long long int) arr_1 [i_0] [i_0])) / (2605494351322251009LL)))))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (((_Bool)1) ? (arr_3 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) ? (((/* implicit */int) (signed char)0)) : ((~(((/* implicit */int) (signed char)58))))))));
        arr_6 [2ULL] |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_18))));
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)204)) + (((/* implicit */int) (short)-1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_1] [i_1]))), (((/* implicit */unsigned int) (((+(arr_2 [i_1] [i_1]))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)0)))))))))))));
        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_14)), (2296809798U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5544298320176793512LL)))))) : (min((var_2), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))))))) ? (((/* implicit */unsigned int) -1048569)) : ((((!(((/* implicit */_Bool) var_12)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : ((-(arr_3 [i_1] [i_1])))))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1]);
    }
    for (unsigned char i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) (-((~(((/* implicit */int) (unsigned short)35763))))));
        var_25 = ((/* implicit */signed char) (+((-2147483647 - 1))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_2] [8LL])))))))) <= (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1048568)))))) - (arr_3 [i_2] [i_2])))));
    }
    for (unsigned char i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
    {
        arr_14 [i_3] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3] [(unsigned short)4]))) / (2296809798U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) var_13)))))))) > ((~(((arr_4 [i_3] [i_3]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_18)))))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
        {
            for (int i_5 = 0; i_5 < 18; i_5 += 4) 
            {
                {
                    arr_22 [i_5] [i_4] [i_3] = ((((((/* implicit */_Bool) ((2464591071U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_7))) ^ (0U))))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)89))));
                    arr_23 [i_3] [i_4] = ((/* implicit */unsigned int) var_13);
                }
            } 
        } 
        arr_24 [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (((!(arr_16 [i_3] [i_3]))) ? (min((5294427767066561083ULL), (((/* implicit */unsigned long long int) 2296809798U)))) : (((/* implicit */unsigned long long int) 2296809798U)))))));
        arr_25 [i_3] = ((/* implicit */short) var_14);
    }
    /* LoopSeq 1 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        arr_28 [i_6] = arr_26 [i_6];
        arr_29 [i_6] = var_10;
        /* LoopNest 2 */
        for (unsigned short i_7 = 1; i_7 < 22; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                {
                    var_26 *= ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) ((((/* implicit */long long int) var_17)) > (arr_33 [i_6] [i_7 + 2] [i_8])))), (arr_30 [i_6] [i_7]))) > (((/* implicit */unsigned int) (+((+(((/* implicit */int) var_9)))))))));
                    arr_35 [i_6] [i_7 - 1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((-1048555), (((/* implicit */int) (signed char)50))))))) ? ((~(((arr_33 [2LL] [2LL] [2LL]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) (~((~(((/* implicit */int) arr_31 [i_7] [i_6])))))))));
                }
            } 
        } 
    }
}
