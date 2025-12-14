/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9519
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
    for (int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_3 [0LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) arr_0 [i_0])), (arr_2 [(unsigned short)10] [i_0])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)58))))) : (((arr_0 [i_0]) ? (((/* implicit */unsigned long long int) 4294967295U)) : (var_9)))))) ? (((int) ((((/* implicit */int) (unsigned char)139)) + (((/* implicit */int) var_3))))) : ((~((~(((/* implicit */int) arr_0 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_3 = 1; i_3 < 21; i_3 += 1) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_3]))));
                            var_19 ^= ((/* implicit */unsigned long long int) arr_0 [i_0]);
                            var_20 = ((/* implicit */int) var_12);
                        }
                    } 
                } 
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_0 + 2] [i_2 - 1]))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 21; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
                {
                    for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                    {
                        {
                            var_22 *= ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_20 [i_0] [i_1] [i_5] [i_6] [i_5])))));
                            arr_23 [i_0] [i_0] [i_0] [i_0] [21U] = ((/* implicit */unsigned long long int) arr_1 [i_0 - 1] [i_0 + 4]);
                            var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((long long int) ((unsigned long long int) arr_10 [i_0] [i_6] [i_5] [i_7]))))));
                            arr_24 [(short)20] [(unsigned char)3] [(_Bool)0] [i_1] [i_5] [i_6] [13U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_22 [i_0 - 1] [i_5 - 2] [i_5 - 2] [i_7] [i_7] [i_7] [0LL])) : (((/* implicit */int) arr_4 [i_5 + 1]))));
                        }
                    } 
                } 
                arr_25 [i_0] [(unsigned char)15] [i_5] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) 4294967285U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_14 [i_0] [i_0]))));
            }
            for (short i_8 = 2; i_8 < 22; i_8 += 1) 
            {
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [20] [i_0] [i_0 - 1] [0] [i_8 - 2] [18LL] [(unsigned char)4])) ? (((/* implicit */int) arr_13 [(_Bool)1] [i_0 + 2] [i_0 + 2] [i_1 - 1] [i_8 - 2])) : (((/* implicit */int) (_Bool)0))));
                arr_29 [i_0] [i_0] [i_0] [i_8] = ((/* implicit */long long int) arr_1 [i_1] [i_8]);
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 562949953421311LL)) - (var_1)))) ? (((((/* implicit */_Bool) -1663954814)) ? (((/* implicit */long long int) var_15)) : (var_12))) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_0 + 2])))));
            }
            var_26 = ((/* implicit */long long int) arr_18 [i_1] [(signed char)22]);
            arr_30 [3LL] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) (unsigned char)207))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_1] [i_1])))))));
            arr_31 [i_0] [i_0] = ((/* implicit */unsigned char) ((arr_18 [i_0 + 4] [i_0]) ? (((long long int) var_0)) : (((/* implicit */long long int) (~(arr_2 [i_0] [i_1]))))));
        }
        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_18 [i_0] [i_0 + 1])), (((short) arr_26 [i_0] [i_0] [i_0 + 2] [i_0])))))));
    }
    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 1) 
    {
        var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (+(var_0))))));
        var_29 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_9] [22ULL] [(signed char)16] [(signed char)16])) ? (((/* implicit */int) arr_22 [i_9] [i_9] [7U] [(unsigned char)17] [7U] [i_9] [i_9])) : (((/* implicit */int) arr_22 [i_9] [19LL] [16ULL] [(signed char)10] [i_9] [16ULL] [i_9])))) == (((/* implicit */int) var_17))));
    }
    for (long long int i_10 = 3; i_10 < 15; i_10 += 1) 
    {
        var_30 = (i_10 % 2 == zero) ? (((/* implicit */unsigned char) min((562949953421331LL), (((/* implicit */long long int) ((((/* implicit */int) arr_10 [7] [i_10] [19ULL] [(unsigned char)14])) >> (((min((((/* implicit */unsigned long long int) arr_8 [i_10] [i_10] [17U] [i_10 - 2])), (arr_27 [i_10] [21LL] [13ULL] [(short)13]))) - (226ULL))))))))) : (((/* implicit */unsigned char) min((562949953421331LL), (((/* implicit */long long int) ((((((/* implicit */int) arr_10 [7] [i_10] [19ULL] [(unsigned char)14])) + (2147483647))) >> (((((min((((/* implicit */unsigned long long int) arr_8 [i_10] [i_10] [17U] [i_10 - 2])), (arr_27 [i_10] [21LL] [13ULL] [(short)13]))) - (226ULL))) - (18446744073709551380ULL)))))))));
        var_31 = ((unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) % (arr_2 [i_10] [i_10])));
        var_32 = ((((unsigned long long int) ((short) var_9))) - (((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [(_Bool)1] [i_10])) / (arr_2 [(unsigned char)21] [i_10 - 3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_10] [18]))))))) : (((((/* implicit */_Bool) (unsigned char)197)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_15 [i_10] [i_10] [i_10] [i_10]))))));
        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1110661142)) && (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_10] [i_10 - 2]))) != (arr_35 [i_10])))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_10 - 3] [i_10 - 3]))) == (arr_35 [(unsigned short)14])))))))));
    }
    for (unsigned char i_11 = 1; i_11 < 14; i_11 += 4) 
    {
        var_34 = ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 1110661166)) : (var_12))) <= (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_11] [i_11] [(_Bool)1] [i_11] [(_Bool)1]), (((/* implicit */unsigned short) arr_8 [i_11] [i_11] [i_11] [16ULL])))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (((11597809890217528402ULL) << (((var_7) + (8461966586385129231LL))))))))));
        var_35 = ((/* implicit */unsigned char) (unsigned short)4133);
    }
    var_36 = ((/* implicit */_Bool) var_2);
}
