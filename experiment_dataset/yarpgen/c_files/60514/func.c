/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60514
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
    var_13 = ((/* implicit */unsigned long long int) var_8);
    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_12)) / ((-(((((/* implicit */unsigned long long int) -678975358)) ^ (8847545018732879259ULL))))))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            for (int i_2 = 3; i_2 < 18; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0 - 1] [i_1 - 1])))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) <= (2328668851164804097ULL))))));
                        arr_11 [i_0] [i_1] [i_2 - 2] [i_1] = ((/* implicit */int) arr_3 [i_0] [i_1]);
                    }
                    arr_12 [i_0 - 3] [i_1] [i_2 - 1] = ((/* implicit */_Bool) arr_4 [i_0 + 2] [i_1 + 1] [i_2 + 2]);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_4 = 2; i_4 < 16; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0 - 1] [i_0 + 2]) : (arr_1 [i_0 - 1] [i_0 + 2])))));
            var_18 = ((/* implicit */unsigned int) min((((var_3) << (((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0 + 1] [i_4])) ? (1033607799994501518ULL) : (9599199054976672360ULL))) - (1033607799994501465ULL))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) var_6))))))));
            var_19 = ((/* implicit */unsigned int) arr_16 [i_4] [i_4]);
            /* LoopNest 3 */
            for (short i_5 = 2; i_5 < 16; i_5 += 1) 
            {
                for (long long int i_6 = 0; i_6 < 20; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) ((((unsigned long long int) 9599199054976672360ULL)) > (((9599199054976672369ULL) << (((((/* implicit */int) arr_8 [i_5 + 3] [i_5 - 2] [i_5] [i_4 + 2] [i_0 - 2] [i_0 + 1])) + (117)))))));
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) max((min((arr_21 [i_0 - 1] [i_5 + 3] [(_Bool)1]), (arr_7 [i_0 - 2] [i_0 - 2] [i_6]))), (((/* implicit */unsigned long long int) arr_5 [i_4 + 4] [18])))))));
                            var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) (((!(((((/* implicit */_Bool) (short)22994)) && (((/* implicit */_Bool) (unsigned char)18)))))) ? (((/* implicit */int) ((min((9599199054976672351ULL), (((/* implicit */unsigned long long int) 4050318042U)))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)328)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_5] [i_5])) ? (arr_20 [i_0 + 3]) : (arr_20 [i_0]))) < (((/* implicit */long long int) (+(((/* implicit */int) arr_15 [i_0])))))))))))));
                            arr_26 [i_5] [i_5 - 1] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_0 + 3] [i_5] [i_5] [i_6] [(unsigned char)15])) % (max((((((/* implicit */_Bool) 5725497881665137214LL)) ? (var_7) : (arr_1 [i_0] [i_0 + 2]))), (((/* implicit */int) arr_14 [i_0 + 1] [i_5 + 2]))))));
                        }
                    } 
                } 
            } 
        }
        arr_27 [i_0] [i_0 - 3] = ((/* implicit */unsigned char) ((arr_13 [i_0]) * (((((/* implicit */int) arr_3 [i_0] [i_0])) / (((arr_4 [i_0 - 1] [i_0] [i_0]) / (((/* implicit */int) var_8))))))));
        arr_28 [i_0] = ((/* implicit */unsigned int) max(((-((-(((/* implicit */int) arr_15 [6U])))))), (((/* implicit */int) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0]))))), (arr_10 [7ULL] [i_0] [i_0] [7ULL]))))));
    }
    for (signed char i_8 = 3; i_8 < 17; i_8 += 2) /* same iter space */
    {
        arr_31 [(_Bool)1] [i_8] = ((/* implicit */_Bool) 2173237636347657611LL);
        /* LoopNest 2 */
        for (unsigned char i_9 = 1; i_9 < 19; i_9 += 4) 
        {
            for (long long int i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                {
                    arr_36 [i_9] [i_10] [12U] [i_9] = ((/* implicit */unsigned char) max(((+(18446744073709551615ULL))), (((arr_21 [i_8 + 3] [i_8 - 1] [i_8 - 2]) ^ (arr_21 [i_8 - 2] [i_8 + 3] [i_8])))));
                    /* LoopSeq 2 */
                    for (unsigned char i_11 = 2; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) 1543784879U)) && (((/* implicit */_Bool) (short)328))));
                        var_24 = ((/* implicit */unsigned char) arr_33 [(unsigned short)4] [i_9]);
                    }
                    for (unsigned char i_12 = 2; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((arr_38 [i_8 - 1] [i_9 + 1]), (((/* implicit */unsigned int) arr_41 [i_9] [i_9 - 1] [i_9 + 1] [i_8 - 2] [i_9])))))));
                        arr_42 [i_9] [i_9] [i_9] [i_12 - 1] [i_10] = ((/* implicit */short) (~((-(arr_13 [i_9 + 1])))));
                    }
                    var_26 = ((/* implicit */int) -2173237636347657611LL);
                }
            } 
        } 
    }
    for (signed char i_13 = 3; i_13 < 17; i_13 += 2) /* same iter space */
    {
        arr_47 [i_13] = ((/* implicit */short) -2173237636347657612LL);
        arr_48 [i_13] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_13 + 2] [i_13])))))));
    }
    var_27 = ((/* implicit */unsigned int) min((max((var_3), (var_3))), (((/* implicit */unsigned long long int) var_4))));
}
