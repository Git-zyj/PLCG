/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55960
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
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_11 -= ((/* implicit */short) ((((/* implicit */int) ((short) min((((/* implicit */int) var_7)), (var_3))))) - (((((/* implicit */int) (unsigned short)57304)) & (((/* implicit */int) (short)0))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 21; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 22; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) ((signed char) ((((((/* implicit */int) (unsigned char)31)) >> (((((/* implicit */int) (short)30720)) - (30706))))) > (((/* implicit */int) ((unsigned char) var_0))))));
                        var_13 = ((/* implicit */int) min((max((((long long int) var_9)), (((long long int) arr_9 [i_0] [i_1] [i_3] [i_3] [i_1])))), (((/* implicit */long long int) ((short) min((((/* implicit */int) arr_1 [i_0])), (arr_8 [(signed char)9] [i_0 - 1] [i_0 - 2] [i_1] [i_0 - 2] [i_3])))))));
                        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)110)) % (((/* implicit */int) arr_7 [i_3] [(short)21] [i_0 - 1]))))) + (max((arr_2 [3LL]), (var_8))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) min((var_5), (((/* implicit */long long int) arr_7 [i_0] [8] [i_0])))))))))))));
                        /* LoopSeq 4 */
                        for (int i_4 = 0; i_4 < 22; i_4 += 4) 
                        {
                            arr_13 [i_0 + 1] [i_1] [4ULL] [i_3] [i_4] = ((/* implicit */int) min((((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)145)) ^ (((/* implicit */int) (unsigned char)44))))) | (((long long int) var_3)))), (min((max((var_0), (((/* implicit */long long int) (unsigned char)127)))), (min((-671406158942101226LL), (((/* implicit */long long int) (unsigned char)129))))))));
                            var_15 = ((/* implicit */int) min((((((/* implicit */long long int) ((/* implicit */int) min((arr_5 [i_4]), (((/* implicit */unsigned short) (unsigned char)31)))))) < (((long long int) arr_0 [i_1])))), (((((/* implicit */long long int) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (var_9)))) < (((long long int) (unsigned char)167))))));
                            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) ((unsigned char) 1083141942012934184LL)))) || (((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)142))) < ((-9223372036854775807LL - 1LL))))), (((((/* implicit */int) (unsigned char)255)) * (((/* implicit */int) (unsigned char)118)))))))));
                            arr_14 [i_0] [i_1] [i_2 - 1] [i_1] [i_0] [i_4] = ((/* implicit */int) min((min((((/* implicit */short) (signed char)-126)), ((short)32760))), (((/* implicit */short) ((((arr_8 [i_0] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [(unsigned char)8]) >> (((((/* implicit */int) (signed char)126)) - (102))))) == (((/* implicit */int) ((unsigned char) (unsigned char)146))))))));
                        }
                        for (long long int i_5 = 3; i_5 < 20; i_5 += 2) 
                        {
                            var_17 += ((/* implicit */int) ((unsigned char) min((min((arr_10 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0 + 1] [i_5] [i_5]), (((/* implicit */int) (unsigned char)225)))), (((/* implicit */int) ((unsigned short) (unsigned char)31))))));
                            var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((long long int) ((-396645992029191541LL) | (arr_2 [i_3]))))), (max((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)101))), (((unsigned long long int) (unsigned short)2016))))));
                            var_19 = ((/* implicit */unsigned char) ((((((((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))) | (arr_2 [i_2]))) % (((long long int) var_5)))) <= (min((((/* implicit */long long int) (unsigned char)31)), (-1LL)))));
                            arr_17 [i_0] [i_1] [i_2 + 1] [i_3] [i_5] = ((/* implicit */short) max((((/* implicit */int) ((unsigned short) ((((/* implicit */int) arr_3 [i_0 - 1] [i_2] [i_3])) << (((arr_12 [i_0] [i_0 - 2]) + (763820527812066364LL))))))), (((((min((var_10), (((/* implicit */int) arr_0 [i_1])))) + (2147483647))) << (((((min((1444973440772420372LL), (((/* implicit */long long int) arr_10 [9LL] [i_1] [i_2] [i_1] [i_1] [i_0])))) + (406565329LL))) - (30LL)))))));
                            arr_18 [i_0] [i_1] [i_5] = ((/* implicit */short) ((((/* implicit */int) ((short) (unsigned char)255))) | (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_2 - 1]))))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 22; i_6 += 4) 
                        {
                            arr_23 [i_0 - 2] [i_1] [i_2 - 1] [i_3] [i_6] = ((/* implicit */unsigned char) min((((long long int) ((short) var_2))), (min((((/* implicit */long long int) min(((short)-32763), (((/* implicit */short) var_7))))), (min((arr_2 [i_3]), (((/* implicit */long long int) (signed char)-88))))))));
                            var_20 = ((/* implicit */short) ((min((min((-6332835395558679461LL), (var_5))), (((long long int) (unsigned char)34)))) > (max((((var_0) / (var_5))), (((/* implicit */long long int) ((((/* implicit */_Bool) 20LL)) || (((/* implicit */_Bool) var_8)))))))));
                        }
                        for (long long int i_7 = 0; i_7 < 22; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) max((((((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2] [i_3] [i_7])) <= (((/* implicit */int) arr_4 [i_1] [i_3] [i_7])))), (((((/* implicit */_Bool) arr_22 [i_0] [12ULL] [i_2] [i_0 - 2] [i_7] [i_0] [i_3])) && (((/* implicit */_Bool) arr_15 [i_0] [10] [i_2 - 1] [i_3] [i_7] [i_1]))))))) >> (((((unsigned long long int) ((unsigned short) arr_1 [i_0 - 2]))) - (13ULL)))));
                            arr_26 [i_2 - 2] [i_3] [12LL] = ((int) (unsigned char)1);
                            var_22 = ((long long int) ((long long int) ((((/* implicit */int) arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [5] [i_7])) > (((/* implicit */int) (unsigned short)29094)))));
                        }
                    }
                } 
            } 
            var_23 = ((short) max((min((68719476735LL), (((/* implicit */long long int) arr_21 [i_1] [i_1] [i_0 + 1])))), (((long long int) var_9))));
        }
        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_9 = 1; i_9 < 20; i_9 += 2) 
            {
                arr_33 [i_0] [i_8] [i_8] &= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) (short)-5818)) > (((/* implicit */int) (signed char)51)))));
                var_24 &= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_0 - 2] [i_8] [i_8] [i_9 - 1] [i_9 + 1])))) <= (((var_8) + (((/* implicit */long long int) ((/* implicit */int) (short)-32749)))))));
                var_25 *= ((unsigned char) (short)-16236);
                /* LoopNest 2 */
                for (signed char i_10 = 1; i_10 < 19; i_10 += 3) 
                {
                    for (long long int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) (short)16234))))) + (((((/* implicit */int) arr_3 [i_11] [i_8] [i_9])) + (((/* implicit */int) (unsigned short)23036))))));
                            var_27 = ((/* implicit */signed char) ((((int) -1392238599)) & (((/* implicit */int) ((unsigned char) arr_24 [i_0 - 2] [i_9 + 2] [i_10 + 1] [i_11])))));
                            var_28 &= ((/* implicit */short) ((signed char) ((int) var_2)));
                            var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((((-1LL) % (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) & (((((var_5) + (9223372036854775807LL))) << (((((-40087598) + (40087601))) - (3))))))))));
                        }
                    } 
                } 
            }
            for (int i_12 = 3; i_12 < 21; i_12 += 2) 
            {
                arr_44 [i_12] [i_12] [i_12] = ((/* implicit */signed char) ((unsigned long long int) ((((var_8) & (((/* implicit */long long int) var_3)))) | (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)85)) & (((/* implicit */int) var_7))))))));
                var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-123)) < (-1180810098)))), (max((((long long int) var_0)), (((/* implicit */long long int) ((int) var_7)))))));
                arr_45 [i_0 + 1] [2] [i_12] = ((/* implicit */long long int) max((((/* implicit */unsigned short) ((short) ((long long int) var_4)))), (min((((/* implicit */unsigned short) ((var_10) != (((/* implicit */int) (unsigned char)0))))), (max(((unsigned short)41300), (((/* implicit */unsigned short) (unsigned char)110))))))));
                var_31 += ((unsigned short) max((((int) arr_2 [i_0 - 2])), (((/* implicit */int) ((unsigned char) (short)0)))));
                var_32 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((arr_32 [i_0 - 1] [i_8] [i_0 - 1] [i_12 - 1]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))))) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -7635087920150035298LL)) || (((/* implicit */_Bool) arr_36 [i_0] [i_8] [i_8] [i_8] [i_12 - 2] [i_12]))))))))), (min((((/* implicit */int) ((short) var_9))), (((int) -9223372036854775793LL))))));
            }
            arr_46 [i_0] = ((/* implicit */short) ((unsigned char) ((max((var_8), (((/* implicit */long long int) arr_21 [i_0 - 1] [i_0] [(unsigned char)17])))) >= (((/* implicit */long long int) ((/* implicit */int) min((var_6), ((unsigned char)177))))))));
            var_33 = ((int) ((((int) (signed char)-106)) == (((/* implicit */int) min((arr_21 [i_0] [i_0] [i_8]), (arr_37 [i_0] [i_8] [i_0] [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_13 = 0; i_13 < 11; i_13 += 4) 
    {
        var_34 = ((long long int) ((arr_30 [i_13] [10] [i_13] [i_13]) / (((/* implicit */int) (unsigned char)30))));
        var_35 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_10))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13] [19LL]))) - (var_5))))));
        var_36 += ((/* implicit */long long int) ((((long long int) (unsigned char)71)) != (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) << (((-8929556621415972210LL) + (8929556621415972213LL))))))));
    }
    for (long long int i_14 = 2; i_14 < 10; i_14 += 2) 
    {
        arr_53 [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */int) ((unsigned char) 0ULL))) + (min((((/* implicit */int) var_4)), (var_1))))) >= (((/* implicit */int) ((signed char) max((((/* implicit */long long int) arr_20 [(signed char)8] [i_14 + 3] [i_14 + 3] [i_14 + 3] [i_14 + 3])), (arr_31 [i_14 + 1] [i_14 + 1])))))));
        var_37 = ((/* implicit */int) ((long long int) min((((/* implicit */long long int) min((arr_27 [i_14 + 2] [i_14]), (((/* implicit */short) (unsigned char)7))))), (min((((/* implicit */long long int) arr_19 [i_14 + 2] [i_14 + 2] [i_14] [i_14 + 3] [i_14 - 1] [i_14] [i_14])), (var_8))))));
    }
    for (short i_15 = 0; i_15 < 10; i_15 += 1) 
    {
        var_38 = ((/* implicit */signed char) min((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_15] [i_15]))) / (var_0))))) && (((/* implicit */_Bool) ((unsigned short) max((arr_32 [i_15] [i_15] [i_15] [2]), (-5346981450028904954LL))))))))));
        var_39 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)201)) || (((/* implicit */_Bool) ((int) (signed char)-106)))))) != (((/* implicit */int) ((((/* implicit */long long int) 1391329394)) >= (((long long int) (unsigned char)211)))))));
    }
    var_40 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (short)24291)) / (var_10)))), (((long long int) var_1))))) || (((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) > (var_8)))))));
    var_41 &= ((/* implicit */int) ((((-702636389667760506LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)170))))) % (((long long int) ((((((/* implicit */int) (signed char)-106)) + (2147483647))) >> (((var_8) + (1791707397694051771LL))))))));
}
