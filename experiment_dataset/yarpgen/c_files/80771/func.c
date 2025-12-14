/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80771
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
    var_19 = ((/* implicit */unsigned int) var_12);
    var_20 = (short)-13;
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_21 |= ((/* implicit */unsigned long long int) var_14);
            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_3 [(unsigned char)0]), (arr_3 [i_1])))) ? (((((/* implicit */int) arr_2 [i_1])) ^ (((/* implicit */int) var_11)))) : (((/* implicit */int) var_15))));
        }
        for (short i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) max(((short)-26), (((/* implicit */short) arr_4 [i_0] [i_2] [i_0])))))));
            arr_6 [i_0] [i_0] [i_2] = var_10;
            var_24 = ((/* implicit */signed char) ((unsigned char) 16762932374023894622ULL));
            var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((unsigned int) (~(((((/* implicit */int) var_7)) & (((/* implicit */int) arr_5 [i_0]))))))))));
            var_26 = ((/* implicit */unsigned int) (((~(arr_1 [i_0]))) != (arr_1 [2ULL])));
        }
        for (unsigned char i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            arr_10 [(signed char)0] [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (short)13)), ((-(arr_8 [i_0] [(unsigned char)7] [i_3])))));
            var_27 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (short)-14)) : (((/* implicit */int) (short)-30)))), (((((/* implicit */int) var_12)) ^ (((/* implicit */int) arr_0 [i_0]))))))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_0] [i_3]))) * (arr_3 [i_0])))));
        }
        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) ((min((((/* implicit */long long int) ((unsigned char) var_14))), (arr_8 [i_0] [i_0] [i_4]))) & (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) var_18)) - (arr_9 [i_0] [i_0] [i_4])))))))))));
            var_29 &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)137))))) ? (((((/* implicit */_Bool) arr_5 [(unsigned char)3])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (var_6))) < (((/* implicit */unsigned long long int) (~(((((/* implicit */long long int) var_10)) ^ (var_0))))))));
            arr_14 [i_0] [i_0] = ((/* implicit */short) arr_7 [i_0] [i_4]);
        }
        /* LoopSeq 1 */
        for (long long int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_30 *= ((/* implicit */unsigned long long int) min(((unsigned short)65512), ((unsigned short)42498)));
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) min(((+((~(((/* implicit */int) arr_16 [i_0])))))), (((/* implicit */int) (short)12)))))));
        }
        var_32 |= min((((unsigned int) arr_11 [i_0] [i_0] [i_0])), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_16 [i_0]))))));
        var_33 &= ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0]);
    }
    for (unsigned short i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
    {
        var_34 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6] [(unsigned char)12])) ? (((/* implicit */int) arr_7 [i_6] [i_6])) : (((/* implicit */int) arr_7 [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_6])) || (((/* implicit */_Bool) var_12)))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) var_12))) / (4385361133402923403LL)))))));
        var_35 |= ((/* implicit */unsigned short) min((2133599899921784227ULL), (((/* implicit */unsigned long long int) arr_15 [i_6]))));
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
    {
        var_36 = ((/* implicit */unsigned char) min((((unsigned int) arr_16 [(signed char)7])), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_19 [i_7])))))));
        arr_23 [i_7] [(unsigned short)4] = ((/* implicit */long long int) (+(((/* implicit */int) (!(((((/* implicit */int) var_12)) < (((/* implicit */int) arr_16 [i_7])))))))));
    }
    for (unsigned short i_8 = 0; i_8 < 14; i_8 += 4) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)23043))));
        var_38 -= arr_21 [i_8] [i_8];
    }
}
