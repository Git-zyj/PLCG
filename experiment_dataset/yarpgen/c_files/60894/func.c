/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60894
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
    for (short i_0 = 3; i_0 < 14; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)40110))))), (var_8)))) ? (min((((/* implicit */unsigned long long int) var_13)), (5703589714426405664ULL))) : (((/* implicit */unsigned long long int) var_11))));
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_5)), (var_13)))) ? (max((((/* implicit */unsigned int) var_1)), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_6))))))), (max((((/* implicit */long long int) var_9)), (max((var_11), (((/* implicit */long long int) var_6)))))))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_4 [i_0 + 1] [i_0] [i_0])) ? (arr_0 [i_0 - 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_10)), (var_7))))))), (((/* implicit */unsigned int) var_16)))))));
        }
        for (long long int i_2 = 0; i_2 < 15; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 4; i_3 < 14; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_15 [i_2] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((-5232557300371116380LL), (((/* implicit */long long int) arr_4 [i_3] [i_3] [i_3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((arr_0 [i_3] [7LL]) * (3714879642U)))))) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) var_7)) ? (arr_13 [i_0] [i_2] [i_3] [i_4]) : (arr_13 [(short)6] [i_2] [14U] [8ULL]))), (max((268435200U), (var_8)))))) : (min((((/* implicit */long long int) var_4)), ((((-9223372036854775807LL - 1LL)) / (((/* implicit */long long int) var_0))))))));
                        /* LoopSeq 2 */
                        for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_21 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((1152921504606846976LL), (((/* implicit */long long int) var_7))))) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) ((var_4) && (((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_9))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_5), (((/* implicit */short) arr_3 [i_2] [(_Bool)1] [i_4]))))) && (((var_4) && (((/* implicit */_Bool) var_11)))))))));
                            var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_3)), (arr_17 [i_4] [i_5 - 1] [i_3 - 4] [i_3 - 2] [i_5] [i_4]))))) - (var_0)));
                        }
                        for (unsigned int i_6 = 1; i_6 < 12; i_6 += 1) /* same iter space */
                        {
                            var_23 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((unsigned long long int) var_14)))) ^ (max((((((/* implicit */_Bool) var_5)) ? (var_11) : (((/* implicit */long long int) var_12)))), (((/* implicit */long long int) max((((/* implicit */short) arr_14 [i_0] [0U] [i_3 + 1] [i_4] [4LL])), ((short)402))))))));
                            arr_20 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) var_14);
                            var_24 = ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (((unsigned int) arr_16 [i_4] [i_6])));
                            arr_21 [i_0] [i_2] [i_0] [i_4] [i_6] = ((/* implicit */_Bool) ((long long int) ((arr_6 [i_0 - 1] [i_2] [i_6 + 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))));
                            var_25 = ((/* implicit */short) min((min((((var_8) * (var_13))), (((/* implicit */unsigned int) var_10)))), (((((/* implicit */_Bool) var_5)) ? (var_17) : (var_8)))));
                        }
                    }
                } 
            } 
            arr_22 [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((_Bool) arr_6 [i_0 - 1] [i_2] [i_2]))), (arr_1 [i_0 - 3] [i_0 - 3])));
        }
        for (long long int i_7 = 0; i_7 < 15; i_7 += 1) /* same iter space */
        {
            arr_25 [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) arr_7 [i_7]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_7 [i_7])))) : (((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)52))) : (arr_8 [i_0 - 2])))));
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 15; i_8 += 4) 
            {
                for (unsigned short i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    {
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)167))) - (((((/* implicit */_Bool) var_14)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_26 [i_0 - 3] [i_8])))))))));
                        arr_32 [i_9] [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */signed char) 1079238243U);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned int i_10 = 3; i_10 < 13; i_10 += 4) /* same iter space */
            {
                var_27 -= ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((signed char) var_9))) ? (((long long int) arr_1 [i_0] [i_10 - 1])) : (max((arr_24 [i_0]), (((/* implicit */long long int) var_15)))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_11), (((/* implicit */long long int) var_12))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_0 [(unsigned short)10] [i_7]) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
                arr_36 [i_7] [i_10 + 2] = ((/* implicit */short) var_4);
                arr_37 [i_0] [i_0] [(short)8] [(unsigned short)12] |= ((/* implicit */unsigned int) ((long long int) var_5));
            }
            for (unsigned int i_11 = 3; i_11 < 13; i_11 += 4) /* same iter space */
            {
                var_28 = ((/* implicit */unsigned short) max((((unsigned int) arr_35 [i_7])), (max((((unsigned int) arr_4 [i_0] [i_0] [(_Bool)1])), (var_17)))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
                {
                    for (unsigned char i_13 = 0; i_13 < 15; i_13 += 3) 
                    {
                        {
                            var_29 ^= min((((((/* implicit */_Bool) ((((/* implicit */int) var_16)) & (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */unsigned int) var_4)), (var_13))) : (var_8))), (((/* implicit */unsigned int) var_1)));
                            arr_44 [i_0] [i_7] [i_11] [i_12] [i_7] [i_13] = ((/* implicit */signed char) ((short) var_4));
                            var_30 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned short) (signed char)-61))))), (((((/* implicit */_Bool) (signed char)-37)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_14)))))) ? (((/* implicit */unsigned long long int) max((var_17), (((unsigned int) var_13))))) : (12743154359283145973ULL)));
                        }
                    } 
                } 
                arr_45 [i_7] [i_7] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) -1LL)), (arr_24 [7U])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_0] [i_0] [i_7] [i_0]))) : (max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_7] [8U] [i_0]))) : (var_11))), (((/* implicit */long long int) ((unsigned short) (_Bool)1)))))));
            }
            for (unsigned int i_14 = 0; i_14 < 15; i_14 += 1) 
            {
                var_31 ^= ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [10U])) ? (((/* implicit */long long int) ((/* implicit */int) (short)3655))) : (18014398509481980LL)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_17))) : (min((2485886432U), (((/* implicit */unsigned int) (unsigned short)45278)))))));
                arr_48 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_10)), (max((arr_0 [i_7] [i_7]), (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))))));
                var_32 = ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) var_5)), (arr_39 [i_0 - 2] [i_0] [i_7]))), (((arr_39 [i_0 - 3] [i_0] [i_7]) | (((/* implicit */unsigned long long int) var_8))))));
            }
        }
        var_33 = ((/* implicit */unsigned short) var_5);
    }
    var_34 = ((/* implicit */short) var_1);
}
