/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63626
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((arr_2 [i_1] [i_0]), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) && (((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_3))))))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_11 = ((unsigned long long int) arr_8 [i_4] [i_1]);
                                var_12 = ((/* implicit */long long int) arr_7 [i_4 + 1]);
                                arr_14 [i_4] [i_4] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) 521937107561677430ULL)) ? (((((/* implicit */_Bool) var_10)) ? (6874881437595638702ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) var_9))));
                                var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_6), (arr_4 [i_0])))) / (((((/* implicit */unsigned long long int) 2147483647)) * (var_5))))))));
                            }
                        } 
                    } 
                    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned long long int) var_0))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((unsigned long long int) var_8))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_8)) : (-792100573)))) ? (var_5) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_3 [i_2] [i_1])) : (arr_10 [i_2] [i_0]))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (max((max((arr_11 [i_5]), (((/* implicit */unsigned long long int) var_6)))), (11571862636113912913ULL))) : (((/* implicit */unsigned long long int) min((var_0), (((/* implicit */long long int) arr_17 [i_5] [i_6])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_16 ^= ((/* implicit */long long int) arr_15 [i_5] [i_5]);
                            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 17924806966147874190ULL))));
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) (~(-889915793187813873LL)))) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (((17924806966147874175ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_5] [i_6] [i_7] [i_8] [i_8] [i_9]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_6] [i_7])))));
                            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((arr_24 [i_5]), (arr_24 [i_9])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (max((max((((/* implicit */unsigned int) arr_3 [i_7] [i_7])), (0U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_10 [i_5] [i_5]) : (((/* implicit */int) var_10)))))))));
                        }
                    } 
                } 
                var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) arr_16 [i_5])) : (((((/* implicit */_Bool) var_6)) ? (arr_11 [i_6]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_5] [i_5])) ? (arr_2 [7] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)112))))))))));
                arr_28 [i_5] [i_5] [i_5] = ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (unsigned char)0)), (((unsigned long long int) 3874560100902283034ULL)))), (((/* implicit */unsigned long long int) max((arr_1 [i_7]), ((-(((/* implicit */int) arr_18 [9LL] [i_6] [9LL])))))))));
                arr_29 [i_5] [i_7] = ((/* implicit */unsigned char) ((short) arr_12 [i_7] [i_6] [i_6] [i_6] [i_5] [i_5]));
            }
            for (unsigned short i_10 = 0; i_10 < 10; i_10 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned char i_12 = 0; i_12 < 10; i_12 += 4) 
                    {
                        {
                            arr_38 [i_5] [i_10] [i_6] [i_10] [(unsigned short)1] [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4779594573199368355ULL)) ? (((/* implicit */unsigned long long int) ((arr_15 [i_11] [i_6]) ? (((/* implicit */int) arr_34 [i_5] [(short)0] [i_10] [i_10] [i_11] [i_12])) : (1661230476)))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_24 [i_12]) : (arr_24 [i_12])))));
                            var_21 -= ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) arr_18 [i_5] [i_6] [i_12])))));
                            var_22 = ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_12 [i_5] [i_5] [1LL] [i_5] [i_11] [i_12])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((2147483647) <= (-1))))))) : (var_5)));
                        }
                    } 
                } 
                var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_10] [i_5] [i_5])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23168))) : (((((/* implicit */_Bool) (unsigned char)151)) ? (max((var_5), (((/* implicit */unsigned long long int) arr_36 [i_5] [i_6] [i_5] [i_10] [i_10])))) : (((/* implicit */unsigned long long int) 2147483647))))));
                arr_39 [i_6] [i_10] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((_Bool) ((int) var_5)))) : (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) ^ (0ULL)))))));
            }
            arr_40 [i_5] [i_5] = ((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */int) min((((/* implicit */unsigned char) var_10)), (var_3)))), (((((/* implicit */int) var_3)) * (((/* implicit */int) arr_27 [i_5] [i_5] [i_5] [7LL])))))) : (((/* implicit */int) min(((unsigned short)16385), (((/* implicit */unsigned short) (_Bool)1))))));
            var_24 = ((/* implicit */unsigned long long int) max((var_24), (max((((/* implicit */unsigned long long int) var_8)), (((unsigned long long int) arr_34 [i_6] [(_Bool)1] [(unsigned char)4] [i_5] [i_5] [i_5]))))));
            var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) arr_0 [i_5] [i_5])) : (max((((/* implicit */unsigned long long int) arr_33 [i_5])), (max((var_5), (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL)))))))));
        }
        arr_41 [i_5] [i_5] = ((/* implicit */long long int) max(((_Bool)1), ((_Bool)1)));
    }
}
