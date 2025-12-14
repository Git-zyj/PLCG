/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84873
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
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned int) var_2);
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (!((_Bool)1)))) + (406169250)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3] [i_1])) && (((/* implicit */_Bool) var_1)))))) : ((+(max((-1LL), (((/* implicit */long long int) 0U))))))));
                        arr_9 [i_0] [4LL] [0LL] = ((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) ((9223372036854775785LL) ^ (((/* implicit */long long int) 1466525082U))))), (((unsigned long long int) var_11)))) >> (((((/* implicit */int) var_3)) - (34913)))));
                        var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) arr_5 [4ULL] [4U] [i_2]))));
                        var_17 = ((/* implicit */long long int) ((unsigned int) var_11));
                    }
                } 
            } 
        } 
    }
    var_18 = ((/* implicit */int) var_1);
    /* LoopSeq 3 */
    for (unsigned char i_4 = 0; i_4 < 11; i_4 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) arr_2 [i_4]);
        var_20 -= ((/* implicit */_Bool) max((((/* implicit */long long int) (-(((unsigned int) var_4))))), (min((((/* implicit */long long int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))), (max((((/* implicit */long long int) 2759503468U)), (arr_4 [i_4] [i_4] [i_4])))))));
        arr_13 [i_4] [i_4] = ((((arr_4 [i_4] [(unsigned char)9] [i_4]) + (9223372036854775807LL))) << (((((int) arr_4 [i_4] [(unsigned char)3] [i_4])) - (491578405))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 0; i_5 < 14; i_5 += 2) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_5]) : (arr_15 [i_5])))) ? (9223372036854775785LL) : (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        arr_17 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (-4825645423451241256LL) : (((/* implicit */long long int) arr_15 [i_5]))));
    }
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 15582167349862395329ULL))));
            arr_22 [i_7] = ((/* implicit */long long int) max((((arr_19 [i_6] [(unsigned char)1]) >= (((/* implicit */int) ((_Bool) var_4))))), (((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)33)) - (1085784814)))) <= (min((((/* implicit */unsigned long long int) arr_1 [i_6])), (var_13)))))));
        }
        for (unsigned long long int i_8 = 1; i_8 < 11; i_8 += 3) 
        {
            arr_26 [i_6] [i_6] [i_6] = ((/* implicit */_Bool) (-(1535463820U)));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 1; i_9 < 10; i_9 += 3) 
            {
                var_22 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_4 [i_8 - 1] [i_9] [i_9 - 1]))) < (var_2)));
                arr_29 [i_9] = ((/* implicit */unsigned long long int) min((((unsigned char) 2864576723847156287ULL)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (2759503476U)))))))));
                var_23 &= ((/* implicit */int) (+(arr_7 [3ULL] [3ULL] [i_8] [3ULL] [i_9 + 1])));
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    for (unsigned int i_11 = 2; i_11 < 9; i_11 += 1) 
                    {
                        {
                            arr_35 [i_6] [11LL] [i_9] [(_Bool)1] [i_10] [i_11 + 2] = ((/* implicit */_Bool) ((15582167349862395339ULL) | (((/* implicit */unsigned long long int) var_2))));
                            var_24 = ((/* implicit */int) ((((/* implicit */unsigned int) ((int) 15582167349862395346ULL))) == (((((/* implicit */_Bool) ((unsigned long long int) arr_2 [i_6]))) ? (max((((/* implicit */unsigned int) arr_34 [i_8 + 1] [i_9])), (1535463827U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))));
                            var_25 = ((/* implicit */unsigned int) 2864576723847156303ULL);
                            arr_36 [i_6] [i_8 - 1] [i_9] [i_9 - 1] [1] [i_11] = ((/* implicit */short) (~(((((/* implicit */_Bool) arr_21 [i_11 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_30 [(short)9] [i_10] [i_10])))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) arr_31 [i_6] [i_9 - 1] [i_11]))));
                        }
                    } 
                } 
                arr_37 [i_6] [i_9] = ((/* implicit */int) var_11);
            }
            /* LoopSeq 1 */
            for (unsigned int i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                arr_41 [i_6] [i_6] [i_6] [i_12] |= ((min((((/* implicit */unsigned int) var_3)), (var_12))) << (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_34 [i_6] [i_12])) : (((/* implicit */int) arr_3 [i_6] [i_12])))));
                arr_42 [(unsigned short)3] [i_12] [i_12] [i_8] = ((/* implicit */signed char) 2759503475U);
                arr_43 [i_6] [i_6] = ((/* implicit */int) var_4);
                arr_44 [6LL] [i_8] [i_8] [i_8] = ((/* implicit */short) var_6);
                var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) arr_0 [i_8 + 1] [i_6])) < (((/* implicit */int) arr_0 [i_8 + 1] [i_8]))))))));
            }
        }
        var_28 = ((/* implicit */unsigned int) min((var_28), (arr_30 [i_6] [i_6] [i_6])));
    }
    var_29 |= ((/* implicit */unsigned short) 2759503477U);
}
