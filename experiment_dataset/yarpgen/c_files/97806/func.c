/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97806
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97806 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97806
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) > (((/* implicit */int) (unsigned char)127))))), (max((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [i_2])), (arr_6 [i_0])))))) ? (max((((((/* implicit */_Bool) (short)3531)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9)))), (((/* implicit */int) ((short) var_14))))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)64188)) >= (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))))));
                    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1])))) ? (((((/* implicit */_Bool) 18446744073709551601ULL)) ? (arr_0 [i_1] [i_1]) : (arr_0 [i_0] [i_1]))) : (arr_0 [i_2] [i_0])))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned short) var_4);
    /* LoopNest 3 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 13; i_5 += 2) 
            {
                {
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) (short)5)) ? (((/* implicit */int) (short)3525)) : (((/* implicit */int) (unsigned short)28647)))))));
                    var_20 *= (+(((/* implicit */int) ((arr_15 [i_5] [i_4] [i_4] [i_5]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_6 = 0; i_6 < 15; i_6 += 2) 
    {
        for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
        {
            {
                var_21 -= ((/* implicit */signed char) var_4);
                var_22 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_9)), (var_6)))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((((/* implicit */int) (short)-32753)) - (((/* implicit */int) var_8)))))) << (((((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_1)), ((unsigned short)64177)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) (short)-3520))))) + (11467))) - (18)))));
                /* LoopSeq 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                {
                    var_23 -= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) > (var_3))))) == (7ULL)))), (((((/* implicit */int) var_2)) + (((/* implicit */int) arr_19 [i_7] [i_8]))))));
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 15; i_9 += 4) /* same iter space */
                    {
                        var_24 -= ((/* implicit */signed char) min((var_4), (((((/* implicit */unsigned int) ((int) var_11))) | (((var_6) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                        arr_25 [i_8] [i_8] [i_8] [i_9] [i_8] [i_7] = ((/* implicit */int) (~((-(((unsigned int) var_6))))));
                        arr_26 [i_7] [i_8] [i_6] [i_6] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) >> (((((/* implicit */int) arr_4 [i_6] [i_7])) + (86)))))) ? (min((((/* implicit */unsigned int) arr_4 [i_8] [i_7])), (var_4))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5)))))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_7) >> (((((((/* implicit */int) arr_4 [i_6] [i_7])) + (86))) - (49)))))) ? (min((((/* implicit */unsigned int) arr_4 [i_8] [i_7])), (var_4))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))))));
                    }
                    for (short i_10 = 0; i_10 < 15; i_10 += 4) /* same iter space */
                    {
                        var_25 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))) : (((((/* implicit */_Bool) arr_27 [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */unsigned long long int) var_4)) : (var_10)))));
                        arr_29 [i_6] [i_7] [i_7] [i_7] [i_10] = ((/* implicit */unsigned int) ((short) max((((/* implicit */int) var_11)), (((((/* implicit */int) (signed char)0)) | (((/* implicit */int) var_15)))))));
                        var_26 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_5 [i_6] [i_7] [i_10])) > (((/* implicit */int) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) max((((/* implicit */short) var_15)), (var_2)))))) : ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (-5637626732872872764LL)))))));
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_33 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_4 [i_6] [i_7])))));
                    arr_34 [i_7] [i_7] = (i_7 % 2 == zero) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_6) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_3))) >> ((((~(((/* implicit */int) arr_32 [i_7])))) - (88))))))))) : (((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (var_6) : (((/* implicit */unsigned int) var_3)))), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (var_3))) >> ((((((~(((/* implicit */int) arr_32 [i_7])))) - (88))) + (204)))))))));
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) < (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-3522)) ? (-5637626732872872764LL) : (((/* implicit */long long int) -92714227))))))));
            }
        } 
    } 
    var_28 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) var_11)) >> (((var_4) - (1964157247U))))));
}
