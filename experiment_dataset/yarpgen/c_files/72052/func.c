/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72052
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_6))));
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) ((((/* implicit */_Bool) 9438317413369571281ULL)) ? (9438317413369571281ULL) : (9438317413369571281ULL))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_14 = ((var_2) ? (143752430) : (((var_3) >> (((/* implicit */int) var_2)))));
            /* LoopSeq 3 */
            for (unsigned int i_2 = 2; i_2 < 21; i_2 += 3) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned char) (!((!(arr_6 [i_0] [i_2] [i_2 - 2] [i_0])))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */int) arr_6 [i_1] [i_2] [i_2] [i_0])) >> (((((unsigned long long int) var_10)) - (18446744073709538004ULL)))));
                var_17 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)127))));
                var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)1)), (var_5)))), (max(((short)-12014), (((/* implicit */short) var_0))))))), (min((((/* implicit */int) arr_2 [i_1])), ((+(arr_7 [i_0] [i_1] [i_2]))))))))));
            }
            /* vectorizable */
            for (unsigned int i_3 = 2; i_3 < 21; i_3 += 3) /* same iter space */
            {
                var_19 += ((/* implicit */signed char) var_7);
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 24; i_4 += 3) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0] [i_0] [i_0])) * (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_2)) : (var_7))) : (arr_11 [i_1] [i_1] [i_3] [i_1])));
                    var_21 ^= ((/* implicit */_Bool) (~((-(arr_8 [i_1] [i_1] [i_1] [(short)14])))));
                }
                var_22 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 1745466531)) : (var_9))));
            }
            /* vectorizable */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                var_24 ^= ((_Bool) ((unsigned int) var_5));
            }
        }
        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            var_25 = ((/* implicit */_Bool) max((var_25), ((!(((((/* implicit */int) (!(((/* implicit */_Bool) 3296382590U))))) < (arr_11 [i_0] [i_6] [i_6] [i_6])))))));
            var_26 = ((/* implicit */_Bool) (short)-21233);
            arr_18 [i_0] [i_6] = ((int) (+(((/* implicit */int) min((var_0), (((/* implicit */unsigned char) var_2)))))));
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_8 = 1; i_8 < 21; i_8 += 2) /* same iter space */
            {
                arr_25 [i_7] [i_7] [i_8] = ((/* implicit */long long int) (+(min((((/* implicit */int) ((-1880786910) > (((/* implicit */int) (short)-20254))))), (((((/* implicit */_Bool) (signed char)-127)) ? (var_3) : (arr_7 [i_0] [i_0] [(short)8])))))));
                var_27 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(1424086808U)))) ? (((/* implicit */unsigned int) arr_7 [i_0] [(unsigned short)18] [i_0])) : (2470076177U)))));
            }
            for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_28 = (i_7 % 2 == zero) ? (((((((arr_20 [i_9 + 3] [i_9 + 2] [i_9 + 3]) + (2147483647))) >> (((arr_26 [i_9] [i_7] [i_9 - 1]) - (17014601306269615426ULL))))) + (((((/* implicit */_Bool) -7944532334450640934LL)) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_2))))) : (((/* implicit */int) min((var_4), (var_1)))))))) : (((((((arr_20 [i_9 + 3] [i_9 + 2] [i_9 + 3]) + (2147483647))) >> (((((arr_26 [i_9] [i_7] [i_9 - 1]) - (17014601306269615426ULL))) - (14650413879260348528ULL))))) + (((((/* implicit */_Bool) -7944532334450640934LL)) ? (((/* implicit */int) max((var_10), (((/* implicit */short) var_2))))) : (((/* implicit */int) min((var_4), (var_1))))))));
                            var_29 = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) ((int) var_1))) ? ((~(arr_20 [i_0] [i_9] [i_0]))) : (arr_11 [i_9 + 2] [i_9] [i_7] [i_10])))), (min((((/* implicit */long long int) max((((/* implicit */short) var_2)), (arr_27 [i_0] [i_7] [i_0])))), (((9147151229258960587LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (unsigned short i_12 = 3; i_12 < 22; i_12 += 3) 
                {
                    var_30 = ((/* implicit */short) (((((-(((((/* implicit */int) var_6)) << (((((var_9) + (1801997881392401576LL))) - (26LL))))))) + (2147483647))) >> (((/* implicit */int) ((_Bool) (~(18446744073709551615ULL)))))));
                    var_31 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_4)))) & (var_11)))));
                    var_32 = ((/* implicit */signed char) (+(1099511611392ULL)));
                }
                /* vectorizable */
                for (unsigned char i_13 = 4; i_13 < 23; i_13 += 3) 
                {
                    arr_38 [i_13 - 3] [i_7] [i_7] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_7])) ? (arr_9 [i_7]) : (arr_9 [i_7])));
                    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(var_7)))) ? ((-(arr_33 [i_0] [14ULL] [i_7] [i_13]))) : (((((/* implicit */_Bool) arr_4 [i_0] [i_9])) ? (((/* implicit */int) var_0)) : (arr_33 [i_13] [i_7] [i_7] [i_0])))));
                    var_34 = ((/* implicit */unsigned char) (~(9008426660339980331ULL)));
                }
                for (unsigned short i_14 = 0; i_14 < 24; i_14 += 3) 
                {
                    var_35 = ((/* implicit */long long int) (short)4944);
                    var_36 &= ((/* implicit */short) (-(((/* implicit */int) var_1))));
                }
            }
            var_37 ^= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)28)) ^ (((/* implicit */int) var_10))))), (max((arr_26 [i_0] [i_0] [(unsigned short)14]), (((/* implicit */unsigned long long int) var_4)))))), (((/* implicit */unsigned long long int) min((arr_37 [i_0] [i_7]), (((/* implicit */short) ((signed char) var_11))))))));
        }
        for (unsigned long long int i_15 = 1; i_15 < 23; i_15 += 2) 
        {
            var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? ((((_Bool)0) ? (((/* implicit */int) (unsigned short)5212)) : (((/* implicit */int) (short)-9185)))) : (((int) 7944532334450640932LL))));
            var_39 = ((/* implicit */short) 0LL);
            var_40 = ((/* implicit */int) (+(min((-9147151229258960588LL), (((/* implicit */long long int) (signed char)-119))))));
        }
        var_41 = ((/* implicit */signed char) ((short) ((short) ((((/* implicit */int) arr_43 [i_0])) < (((/* implicit */int) var_6))))));
    }
    for (int i_16 = 0; i_16 < 24; i_16 += 2) /* same iter space */
    {
        arr_50 [i_16] = ((/* implicit */unsigned long long int) max((max((arr_44 [i_16] [i_16]), (((/* implicit */unsigned int) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) arr_32 [i_16] [22U] [22U] [i_16] [i_16] [i_16]))))))), (((/* implicit */unsigned int) min((arr_41 [i_16] [i_16] [i_16] [i_16]), (arr_41 [i_16] [i_16] [i_16] [i_16]))))));
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) var_5)), (var_7)))) ? (((/* implicit */int) ((short) arr_16 [i_16] [i_16] [i_16]))) : (((((/* implicit */_Bool) arr_11 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */int) min((((/* implicit */short) var_0)), (var_1)))) : (((/* implicit */int) arr_42 [i_16]))))));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_16] [i_16] [i_16])) ? (((min((var_3), (((/* implicit */int) var_1)))) + (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)8164)) : (((/* implicit */int) var_6)))))) : (var_3)));
        var_44 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_19 [i_16] [i_16])) ? (var_7) : (((/* implicit */int) (unsigned char)112)))), (var_7)))) & ((+(((((/* implicit */_Bool) arr_35 [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (3296382611U)))))));
    }
    var_45 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((unsigned int) var_8)) & (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)51672))))))))));
}
