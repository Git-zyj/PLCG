/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76751
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            arr_6 [(short)0] [i_1 + 2] [(unsigned short)16] &= ((/* implicit */signed char) ((((/* implicit */int) arr_3 [16ULL])) << (((((((/* implicit */int) arr_5 [i_1])) + (6201))) - (18)))));
            var_12 = ((((/* implicit */int) var_4)) >> (((((((/* implicit */_Bool) var_9)) ? (((var_4) ? (((/* implicit */int) arr_5 [(unsigned short)2])) : (((/* implicit */int) var_8)))) : (((((/* implicit */int) var_4)) | (((/* implicit */int) arr_4 [i_0] [i_1 + 2])))))) + (6197))));
        }
        var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((((((/* implicit */int) var_9)) - (((/* implicit */int) arr_4 [i_0] [i_0])))), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))), (min((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_4 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) var_7);
        arr_10 [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(unsigned short)14]))) ^ (var_5)))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_14 = ((signed char) var_6);
            arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_7 [i_2] [i_3]))));
        }
        for (signed char i_4 = 1; i_4 < 14; i_4 += 3) /* same iter space */
        {
            var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) arr_2 [i_4 + 3]))));
            arr_17 [i_2] [i_4] = ((unsigned short) var_8);
        }
        for (signed char i_5 = 1; i_5 < 14; i_5 += 3) /* same iter space */
        {
            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_18 [i_2])) : (((/* implicit */int) arr_18 [i_5 + 2]))));
            arr_20 [i_2] [i_2] [i_5 + 3] = ((/* implicit */unsigned short) 11145648289273950328ULL);
            var_17 = ((/* implicit */_Bool) var_11);
            arr_21 [i_2] [i_2] [i_2] = ((/* implicit */_Bool) arr_0 [(short)8] [i_5 - 1]);
        }
    }
    /* LoopSeq 4 */
    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_18 = min((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_22 [i_6]))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) / (min((7301095784435601313ULL), (((/* implicit */unsigned long long int) arr_22 [i_6])))))));
        var_19 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) min(((unsigned short)56794), (((/* implicit */unsigned short) var_0))))) * (((/* implicit */int) arr_24 [i_6]))))) ? ((-(((/* implicit */int) ((short) var_5))))) : (((/* implicit */int) min((arr_23 [i_6]), (arr_23 [i_6]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
        {
            arr_28 [i_7] [i_6] [i_6] = ((/* implicit */int) ((unsigned short) var_1));
            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_7 - 1])) ? (var_6) : (((/* implicit */int) var_2))));
            arr_29 [i_6] [i_7] = ((/* implicit */unsigned char) ((_Bool) arr_23 [i_7 - 1]));
            var_21 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_24 [i_7 - 1]))));
        }
    }
    for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_22 = ((/* implicit */unsigned short) ((min((arr_24 [i_8]), (var_4))) ? (((arr_24 [i_8]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_24 [i_8])))) : (((/* implicit */int) min((var_11), (((/* implicit */unsigned short) arr_24 [i_8])))))));
        arr_33 [i_8] = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) var_0)) - (var_6))) + (var_6)))));
    }
    for (unsigned char i_9 = 3; i_9 < 7; i_9 += 3) 
    {
        var_23 = ((/* implicit */_Bool) (~(((/* implicit */int) var_10))));
        arr_36 [i_9] = ((/* implicit */_Bool) (~((~(((((/* implicit */int) (unsigned short)1)) | (((/* implicit */int) var_11))))))));
        /* LoopSeq 1 */
        for (unsigned short i_10 = 1; i_10 < 7; i_10 += 3) 
        {
            var_24 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) var_4)), (min((((/* implicit */unsigned char) var_4)), (arr_26 [i_9 - 3] [i_9 - 3])))))) >= (((/* implicit */int) max((((((/* implicit */int) arr_30 [i_10])) > (((/* implicit */int) var_8)))), (var_4))))));
            var_25 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_39 [i_9]))))), (min((7301095784435601313ULL), (((/* implicit */unsigned long long int) ((unsigned short) var_0)))))));
        }
        var_26 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (+(11145648289273950303ULL)))) ? ((-(((/* implicit */int) arr_0 [i_9] [i_9 - 1])))) : (((int) arr_7 [i_9] [i_9])))), (((/* implicit */int) ((((/* implicit */int) arr_34 [i_9 + 2] [i_9 + 1])) != (((/* implicit */int) var_10)))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 2) 
    {
        var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) (-(((((/* implicit */int) max((((/* implicit */unsigned char) var_0)), (var_1)))) / (((((/* implicit */_Bool) 0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)15)))))))))));
        var_28 = arr_39 [i_11];
    }
}
