/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96752
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
    /* LoopSeq 4 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_11)), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0 - 1]))) + (min((var_4), (((/* implicit */unsigned long long int) var_0)))))))))));
        var_15 *= ((/* implicit */unsigned long long int) ((max((((/* implicit */int) min(((unsigned short)52947), (((/* implicit */unsigned short) (signed char)-67))))), (var_1))) & (((/* implicit */int) ((((/* implicit */int) max((var_9), ((signed char)-35)))) <= (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_2 [(_Bool)1])) : (((/* implicit */int) (signed char)-11)))))))));
        var_16 -= ((/* implicit */short) (-((-((-(((/* implicit */int) arr_1 [i_0 + 1]))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_4 [i_1 + 1] [i_1 - 1]), (arr_4 [i_1 - 1] [i_1 + 1]))))) > (min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [i_1 - 1])))))))))))));
        var_18 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)52947))));
        /* LoopSeq 2 */
        for (short i_2 = 1; i_2 < 23; i_2 += 2) 
        {
            var_19 = ((/* implicit */long long int) var_5);
            var_20 = ((/* implicit */signed char) arr_6 [i_1] [i_1] [i_2]);
        }
        for (long long int i_3 = 3; i_3 < 22; i_3 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_12))))));
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_12))));
            /* LoopSeq 2 */
            for (signed char i_4 = 1; i_4 < 23; i_4 += 1) 
            {
                var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_9 [i_1] [i_1])), (((((((/* implicit */_Bool) (signed char)-96)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_10))) | (min((((/* implicit */unsigned long long int) var_6)), (var_5)))))));
                arr_15 [i_1 + 1] [i_1 + 1] [i_1 + 1] [24LL] |= ((/* implicit */unsigned short) var_11);
                arr_16 [i_1 - 1] [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_8 [i_1]);
                var_23 += ((/* implicit */unsigned long long int) (signed char)-108);
            }
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_6 = 2; i_6 < 23; i_6 += 3) 
                {
                    var_24 = ((/* implicit */unsigned short) (((~(((var_6) ? (var_4) : (var_13))))) == (min((((/* implicit */unsigned long long int) arr_20 [i_6] [i_1] [i_1] [i_1])), (((((/* implicit */_Bool) var_1)) ? (var_7) : (var_7)))))));
                    arr_21 [i_1] [19ULL] [i_1] [i_1] [i_1] = arr_19 [i_6] [i_1] [i_5] [i_1] [i_1] [i_1];
                }
                arr_22 [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) var_10));
                var_25 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_4)))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_10))))))))));
            }
            arr_23 [i_1] [i_3 + 1] [(unsigned char)2] &= ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_9)), (var_7)));
        }
    }
    for (unsigned long long int i_7 = 4; i_7 < 22; i_7 += 4) 
    {
        var_26 = ((/* implicit */unsigned long long int) ((unsigned int) min((((/* implicit */short) arr_14 [i_7] [i_7] [i_7 - 3])), (arr_6 [i_7] [i_7] [i_7 - 4]))));
        arr_27 [i_7 - 3] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_7 [i_7 - 4] [(short)6])), (var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_7 [i_7 - 2] [i_7]))))));
        var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) min(((unsigned short)12601), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))))))))));
        var_28 -= ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)52937), (arr_10 [i_7] [i_7] [i_7]))))) + (((var_3) >> (((var_3) - (12623482733047276760ULL))))))) + (var_5)));
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_9 = 1; i_9 < 20; i_9 += 1) 
        {
            var_29 = ((/* implicit */int) var_5);
            /* LoopSeq 2 */
            for (signed char i_10 = 1; i_10 < 20; i_10 += 3) 
            {
                arr_39 [i_8] [i_8] [i_8] [(short)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [(unsigned short)5])) ? (((((/* implicit */int) arr_29 [9LL] [9LL])) ^ (((/* implicit */int) arr_26 [i_8])))) : (((/* implicit */int) var_8))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) var_6))));
                arr_40 [1ULL] [i_8] = arr_17 [i_8];
            }
            for (unsigned char i_11 = 2; i_11 < 20; i_11 += 3) 
            {
                var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) var_9))));
                arr_43 [i_8 + 1] [i_8] [i_11] = ((/* implicit */short) var_6);
                var_32 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_26 [i_8 + 1])) : (((/* implicit */int) var_0))));
                arr_44 [i_11] [i_9] [i_11] = ((/* implicit */unsigned long long int) (-(((((/* implicit */int) arr_34 [i_8] [16U])) << (((((/* implicit */int) var_9)) + (80)))))));
            }
        }
        arr_45 [0ULL] [(unsigned short)17] = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) (signed char)95))))));
    }
    var_33 = var_5;
}
