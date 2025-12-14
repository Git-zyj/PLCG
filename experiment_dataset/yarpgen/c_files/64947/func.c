/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64947
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned long long int) ((unsigned int) var_7))) : (((((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (var_3)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (short)-32750)), (0U)));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_0] = ((/* implicit */short) (-(min((-9223372036854775797LL), (9223372036854775799LL)))));
                    var_20 *= ((/* implicit */short) ((((/* implicit */_Bool) max((min((var_7), (((/* implicit */unsigned int) (unsigned char)31)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -2147483645)))))))) && (((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */short) arr_2 [i_0] [i_2])), ((short)9077)))))))));
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_5 [i_0] [i_0 - 1]))) ? (max((((/* implicit */unsigned int) (short)-20950)), (arr_5 [i_0] [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((-9223372036854775791LL) < (9223372036854775805LL)))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775789LL)) ? (((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_3])) ? (arr_1 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0]))))) : (arr_7 [i_0] [i_0] [i_0 - 1])))), (((((/* implicit */_Bool) min((((/* implicit */long long int) 4294967295U)), (arr_11 [(short)17] [i_1] [i_1] [i_1] [10ULL])))) ? (18446744073709551590ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1]))))))))));
                        var_21 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) -9223372036854775790LL)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_1] [i_3]))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)135))) & (arr_4 [i_1] [i_2])))));
                    }
                    for (unsigned char i_4 = 0; i_4 < 19; i_4 += 4) 
                    {
                        var_22 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))));
                        arr_18 [i_0] [i_0] [i_0] [12] [18U] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [i_0 - 1]))))));
                        var_23 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) var_14)) != (arr_11 [i_0 - 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])))) & (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20926))) : (arr_6 [i_1] [6ULL] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_0 - 1] [i_1] [i_0 - 1]))))) : ((~(((/* implicit */int) (_Bool)1))))))));
                        arr_19 [i_0] [6LL] [i_2] [(short)7] [i_0] [i_2] = ((/* implicit */unsigned char) (signed char)-124);
                    }
                }
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */long long int) min((var_24), (-9223372036854775795LL)));
                    arr_23 [i_0] [17U] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)222)) ? (arr_6 [i_0 + 1] [i_0 - 1] [i_0 + 1]) : ((~(18446744073709551590ULL)))));
                    arr_24 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_15 [i_0 + 1] [(short)6] [i_5]))))));
                }
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) /* same iter space */
                {
                    arr_27 [i_0] = ((/* implicit */long long int) (-(((arr_2 [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) (short)(-32767 - 1)))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 0; i_7 < 19; i_7 += 1) 
                    {
                        arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20950)) ? (((/* implicit */int) (short)29687)) : (2147483644)))) ? (arr_17 [4ULL] [i_1] [i_0 + 1] [i_7] [i_0] [i_0]) : (((/* implicit */unsigned int) ((2147483633) % (((/* implicit */int) (short)10926)))))))));
                        arr_31 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */short) ((min((max((((/* implicit */unsigned long long int) var_5)), (arr_4 [i_0] [i_0]))), (((/* implicit */unsigned long long int) (+(arr_11 [i_1] [i_1] [i_1] [(unsigned char)1] [i_1])))))) == (arr_6 [11U] [i_1] [i_0])));
                        arr_32 [i_0] [i_0] [i_6] [i_0] [i_7] [i_7] = max((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_11 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [2U])) : (arr_21 [i_0] [i_0] [i_6]))), (((/* implicit */unsigned long long int) ((unsigned int) 18300322342950003284ULL))))), (((/* implicit */unsigned long long int) max((arr_1 [i_0] [i_0 - 1]), (arr_1 [i_0] [i_0 - 1])))));
                    }
                    arr_33 [i_0] [i_0] = ((/* implicit */short) arr_25 [2U] [12ULL] [i_0]);
                    var_25 ^= ((/* implicit */_Bool) 146421730759548332ULL);
                }
                var_26 = ((/* implicit */unsigned int) min((var_26), (((unsigned int) 3714295864U))));
            }
        } 
    } 
    var_27 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(min((var_0), (((/* implicit */unsigned int) (signed char)-110))))))) && ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_17))))))))));
    var_28 += var_15;
}
