/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67208
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
    var_11 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((7754613636773062028ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_7) : (((/* implicit */int) var_0))))) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_6)))))) ? (min(((~(var_7))), (((var_10) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((7581279009187918029ULL) | (((/* implicit */unsigned long long int) var_5)))) <= (((/* implicit */unsigned long long int) -325402149)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((arr_1 [i_0 + 2]) ? (var_1) : (((/* implicit */int) var_4))))), (arr_2 [i_0 + 2]))))));
        var_13 &= ((/* implicit */_Bool) 1023ULL);
        var_14 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) -1139287202)) : (9688325721420746596ULL)))) ? (((var_6) >> (((/* implicit */int) arr_1 [i_0 - 1])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 1]))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_0 [i_0] [i_0 + 1]))) ? (((8758418352288805003ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 2] [i_0 + 1]), (arr_0 [i_0 + 1] [i_0 + 2]))))))))));
        /* LoopSeq 3 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_16 += ((/* implicit */short) var_5);
            arr_7 [8] [8] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_2 [i_0 + 2])))) ? (max((arr_2 [i_0 - 1]), (((/* implicit */unsigned long long int) var_3)))) : (min((((/* implicit */unsigned long long int) var_7)), (arr_2 [i_0 + 2])))));
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (short)15314))));
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_18 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) >= (1906487738)))), (((((/* implicit */_Bool) arr_5 [i_2] [i_0 + 2])) ? (var_7) : (arr_5 [i_2] [i_0 - 1])))));
            var_19 = ((/* implicit */short) (~(((arr_9 [i_0 + 1]) << (((arr_9 [i_0 + 2]) - (4026287726911638432ULL)))))));
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_5 [i_2] [i_2]))))), (((((/* implicit */_Bool) arr_9 [(unsigned short)20])) ? (((/* implicit */unsigned long long int) -6643234535253772729LL)) : (arr_9 [i_2]))))), (((((/* implicit */_Bool) var_2)) ? (((arr_9 [i_2]) | (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((long long int) (signed char)58))))))))));
            /* LoopSeq 2 */
            for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_10 [6U] [(signed char)2] [i_0 + 1] [i_3 + 1])) ? (arr_2 [21]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3 - 1] [2LL] [i_0 + 1] [i_3 + 2]))))) >= (((/* implicit */unsigned long long int) max((-845881825), (((/* implicit */int) var_9)))))));
                var_22 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (short)32767)) < (1810402215)))) >> (((max((((16756984255706789360ULL) | (((/* implicit */unsigned long long int) 4200741235U)))), (((/* implicit */unsigned long long int) arr_11 [i_0 + 1] [i_0 + 1] [i_3 + 2] [i_0 + 1])))) - (16756984255878757869ULL)))));
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_0]))));
                arr_12 [10] [i_2] [10] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), (((((((/* implicit */_Bool) 10865465064521633587ULL)) ? (((/* implicit */int) arr_10 [i_3 + 1] [i_3 + 1] [(unsigned char)13] [(_Bool)1])) : (arr_6 [i_3]))) + (arr_6 [i_3])))));
            }
            for (short i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) min((min((((-4030033474205167820LL) / (((/* implicit */long long int) ((/* implicit */int) var_8))))), (((/* implicit */long long int) (signed char)-87)))), (((/* implicit */long long int) ((((/* implicit */_Bool) -531353128775612290LL)) ? (((/* implicit */int) arr_0 [(unsigned short)21] [(signed char)0])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))))))));
                arr_15 [(_Bool)1] [(_Bool)1] &= ((/* implicit */unsigned short) (-(((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) >= (259912505U))) ? (((var_5) / (((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_10))))))));
                arr_16 [(signed char)13] [0LL] [i_4] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_14 [i_0 - 1] [i_2] [i_4] [i_4]), (((/* implicit */signed char) ((arr_13 [(short)11]) >= (((/* implicit */long long int) ((/* implicit */int) var_4)))))))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_7) : (((/* implicit */int) arr_14 [i_0] [(signed char)15] [i_0 + 2] [(unsigned char)19]))))), (((16756984255706789360ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))));
                var_25 = ((/* implicit */long long int) min((var_25), (((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0])) ^ (((/* implicit */int) (signed char)40)))))))), (var_9))))));
            }
        }
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
        {
            arr_21 [6LL] [6LL] [i_0 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) min((var_1), (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [11ULL] [i_5])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_5]))))))) + (min((((/* implicit */unsigned long long int) var_1)), (arr_2 [i_0 + 1])))));
            var_26 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((9688325721420746617ULL), (((/* implicit */unsigned long long int) var_3))))) ? (min((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)103)) : (((/* implicit */int) var_9)))))) : (((/* implicit */int) var_0))));
            /* LoopSeq 3 */
            for (long long int i_6 = 4; i_6 < 22; i_6 += 2) 
            {
                var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) 7581279009187918039ULL)) ? (((/* implicit */int) (short)-14056)) : (358755107))) : (((((/* implicit */int) var_8)) >> (((var_1) + (1692983021)))))))) || (((/* implicit */_Bool) (signed char)100)))))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (+((+((-(arr_6 [i_6]))))))))));
            }
            for (long long int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_8 = 3; i_8 < 22; i_8 += 3) 
                {
                    for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_29 ^= ((((((/* implicit */int) var_10)) >> ((((+(((/* implicit */int) var_9)))) - (23756))))) + (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-54))) : (4294967290U)))) ? (((/* implicit */int) arr_14 [i_9] [i_9] [i_9] [i_8 + 1])) : (((/* implicit */int) min((var_9), (((/* implicit */unsigned short) (unsigned char)126))))))));
                            arr_30 [(signed char)4] [i_8] [5ULL] [5ULL] [i_9] [i_9] = ((/* implicit */unsigned short) min((3219870699U), (((/* implicit */unsigned int) var_9))));
                        }
                    } 
                } 
                var_30 += ((/* implicit */long long int) ((((min((((/* implicit */unsigned long long int) var_3)), (arr_20 [i_7] [i_7]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)65535), (((/* implicit */unsigned short) var_4)))))))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_5])))))));
                var_31 ^= ((/* implicit */unsigned long long int) (_Bool)1);
                arr_31 [i_5] [i_5] = ((/* implicit */int) var_8);
            }
            for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                var_32 -= ((/* implicit */signed char) ((short) ((_Bool) var_4)));
                arr_35 [i_5] = ((/* implicit */unsigned char) (~((~(((/* implicit */int) (short)-15314))))));
                var_33 *= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((min((18446744073709551597ULL), (((/* implicit */unsigned long long int) var_2)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) ^ (max((((((/* implicit */long long int) arr_5 [i_5] [i_5])) & (arr_29 [2ULL] [i_5] [8] [i_5] [i_0 + 2]))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1)))))))));
                var_34 ^= ((/* implicit */_Bool) (unsigned char)135);
            }
            var_35 *= ((/* implicit */short) min((((/* implicit */long long int) var_5)), (min((((/* implicit */long long int) arr_10 [i_0 - 1] [i_0 - 1] [22LL] [15])), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_34 [i_0 + 2] [2] [i_5] [i_0 + 2])))))));
            var_36 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned long long int) arr_27 [i_5] [i_5] [i_0 - 1] [i_0] [i_0])), (max((((/* implicit */unsigned long long int) (unsigned char)104)), (4806416935516388446ULL))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)104)))))));
        }
    }
}
