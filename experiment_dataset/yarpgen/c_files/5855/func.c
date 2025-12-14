/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5855
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
    var_20 ^= ((/* implicit */unsigned char) (-(((/* implicit */int) var_0))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 21; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (unsigned char i_4 = 2; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) (-(max((((/* implicit */unsigned long long int) arr_5 [i_0])), (((((/* implicit */unsigned long long int) -8144993288141689899LL)) * (var_5)))))));
                                var_22 *= ((/* implicit */unsigned char) (+(1169590943U)));
                                var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_3] [i_3]))))))))));
                            }
                        } 
                    } 
                } 
                var_24 = max((min(((~(var_8))), (((/* implicit */unsigned long long int) ((signed char) 11122142649398254573ULL))))), (((/* implicit */unsigned long long int) arr_2 [i_1])));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((var_19), (arr_5 [i_5])))))))) > (1169590927U)));
        arr_16 [i_5] [i_5] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)129))))), ((+((~(5390997036943881518ULL)))))));
        /* LoopNest 3 */
        for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 2) 
            {
                for (unsigned char i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    {
                        var_26 += ((/* implicit */signed char) 842507532);
                        var_27 += ((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_7 [i_6] [i_7])), (max((660766654U), (((/* implicit */unsigned int) (signed char)73)))))) != (((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_19 [i_5] [i_5])))), (((/* implicit */int) arr_13 [i_6])))))));
                        var_28 -= ((/* implicit */int) (+(((((/* implicit */unsigned int) ((/* implicit */int) (signed char)23))) & (max((3634200663U), (((/* implicit */unsigned int) var_18))))))));
                        arr_27 [i_5] [i_7] [i_5] = ((/* implicit */unsigned short) (!(((((/* implicit */int) (short)-13320)) == (((/* implicit */int) var_12))))));
                    }
                } 
            } 
        } 
        var_29 = ((/* implicit */int) min((var_29), (-230889384)));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 2) 
    {
        arr_31 [i_9] = ((/* implicit */unsigned long long int) -113918543);
        arr_32 [i_9] [i_9] &= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_25 [i_9]))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 1) 
        {
            var_30 += ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_34 [i_10])))) ^ ((~(((/* implicit */int) var_11))))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                var_31 = ((((/* implicit */_Bool) arr_23 [i_9] [i_10] [i_11])) ? (arr_23 [i_9] [i_10] [i_11]) : (arr_23 [i_9] [i_10] [i_11]));
                /* LoopNest 2 */
                for (short i_12 = 2; i_12 < 10; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 11; i_13 += 3) 
                    {
                        {
                            var_32 = (-(((int) var_15)));
                            var_33 = ((/* implicit */short) (-(((/* implicit */int) (signed char)13))));
                            arr_43 [i_9] [i_12 - 2] [i_9] [i_9] [i_9] [i_9] |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_12 - 1] [i_12] [i_12 - 1] [i_12] [i_12 - 1] [i_11]))));
                            arr_44 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_7 [i_12] [i_13]);
                        }
                    } 
                } 
            }
            arr_45 [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? ((~(arr_35 [i_9] [i_9] [i_9] [i_9]))) : (((/* implicit */int) ((unsigned short) arr_33 [i_10])))));
            var_34 = ((/* implicit */short) (+((+(786432)))));
            var_35 = (~(arr_9 [i_9] [i_10] [i_9] [i_10]));
        }
    }
}
