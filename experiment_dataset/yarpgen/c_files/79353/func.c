/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79353
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
    var_19 ^= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (var_14)));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 11; i_0 += 4) 
    {
        var_20 |= ((/* implicit */unsigned int) var_18);
        var_21 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) (+(((arr_3 [i_2]) / (var_4)))));
            var_23 ^= ((/* implicit */unsigned short) ((arr_6 [21LL] [i_2] [i_1]) / (arr_6 [i_1] [i_2] [i_2])));
        }
        var_24 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_1])) <= (((/* implicit */int) var_3))));
        arr_10 [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [(unsigned char)20] [i_1] [(unsigned short)2])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 23; i_3 += 4) /* same iter space */
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((min((var_14), (((unsigned long long int) var_15)))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [(unsigned short)17]))))))));
        var_26 |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) * (((((/* implicit */_Bool) arr_7 [i_3] [(short)21] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3] [i_3]))) : (var_0)))));
        var_27 = ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_11))))) : (arr_4 [i_3]))));
    }
    for (unsigned int i_4 = 0; i_4 < 23; i_4 += 4) /* same iter space */
    {
        var_28 = ((((/* implicit */_Bool) 955393904U)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (18446744073709551615ULL))))));
        /* LoopSeq 3 */
        for (short i_5 = 3; i_5 < 21; i_5 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) min((var_5), (((/* implicit */unsigned long long int) ((short) var_18))))))));
            var_30 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(var_13))))));
            var_31 &= ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_12)) | (var_5))) <= ((-(var_4))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_17 [i_4] [i_5]))))))) : (var_13)));
        }
        for (short i_6 = 3; i_6 < 21; i_6 += 1) /* same iter space */
        {
            arr_20 [(unsigned char)18] [(unsigned char)18] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_6 [i_4] [i_6 + 1] [i_4])) < (arr_18 [i_6] [i_6 + 2]))))));
            arr_21 [i_6] [i_6] [i_4] = ((/* implicit */unsigned short) 7116159821936572652ULL);
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            var_32 = ((/* implicit */_Bool) arr_18 [i_4] [i_7]);
            var_33 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_23 [i_4] [i_7] [i_7])) ? (((((/* implicit */_Bool) 1321299345U)) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) (unsigned short)7726)))) : ((-(((/* implicit */int) var_11))))))));
        }
    }
    var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (7ULL)))) ? (((/* implicit */int) (unsigned short)40249)) : ((((_Bool)0) ? (var_12) : (((/* implicit */int) var_8))))))) ? ((-(var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4294967294U)))))))))));
}
