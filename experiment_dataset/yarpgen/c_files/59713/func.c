/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59713
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
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1)))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1]))) - (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) var_10)) : (var_3)))))) * (arr_2 [i_0 + 1] [i_0])));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 1; i_2 < 8; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 8; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (short)-15639))));
                                arr_13 [i_0 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) max(((~(arr_7 [i_0 - 1] [i_2 + 2] [i_3 + 2] [i_4]))), (((((/* implicit */_Bool) arr_7 [i_0 + 1] [i_2 + 1] [i_3 + 1] [i_3])) ? (arr_7 [i_0 - 1] [i_2 - 1] [i_3 + 2] [i_3]) : (arr_7 [i_0 - 1] [i_2 - 1] [i_3 + 2] [i_3 + 2])))));
                                var_21 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((1440156629482166020ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15639)))))) ? (min((0ULL), (((/* implicit */unsigned long long int) 3353382090U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)4)))))));
                            }
                        } 
                    } 
                    var_22 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) (signed char)-5)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (short)-15640)))) : (((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((((/* implicit */_Bool) 18265099055946202533ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)43)))) : (((/* implicit */int) (signed char)-12))))));
                    /* LoopSeq 3 */
                    for (signed char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            arr_19 [i_0] [i_1] [i_0] [i_2 - 1] [i_1] [i_6] = ((/* implicit */unsigned long long int) max((((/* implicit */int) arr_0 [i_0 - 1] [i_0])), ((+((-(((/* implicit */int) var_0))))))));
                            var_23 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-(-2147483624)))) == (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (4294967279U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_2 [i_2 - 1] [i_0]) % (arr_2 [i_2 + 1] [i_0])))) ? (arr_2 [i_2 + 2] [i_0]) : (((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_0])) ? (arr_2 [i_2 + 1] [i_0]) : (arr_2 [i_2 + 1] [i_0])))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) arr_2 [i_0] [i_1]))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_0] [i_0] = ((/* implicit */unsigned char) var_8);
                            var_26 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_13)), (((((/* implicit */_Bool) min((arr_17 [i_0] [i_0] [i_2] [i_5] [i_0] [i_0 + 1]), (((/* implicit */unsigned long long int) var_10))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_20 [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0 - 1] [i_0 - 1]), (arr_9 [i_8] [i_0] [i_5] [i_2] [i_0] [i_0]))))) : (((((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_2 + 2] [i_0] [i_8])) * (4294967288U)))))));
                            arr_25 [i_0] [i_1] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_0] [i_2 + 2] [i_8] [i_8])) ? (arr_11 [i_1] [i_1] [i_2] [i_2 - 1] [i_1] [i_5]) : (arr_11 [i_0] [i_1] [i_1] [i_2 - 1] [i_2 - 1] [i_2])))) <= (min((1127188690812961079ULL), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_0] [i_0] [i_5] [i_8])))));
                            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-12)) ? (369784929) : (((/* implicit */int) (signed char)17))));
                        }
                        for (unsigned char i_9 = 2; i_9 < 8; i_9 += 3) 
                        {
                            arr_30 [i_0] [i_1] [i_1] [i_1] [i_0] [i_9] [i_1] |= ((/* implicit */unsigned short) (+(0U)));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 184287354)) ? (min(((-2147483647 - 1)), (((/* implicit */int) (signed char)12)))) : (((/* implicit */int) (unsigned short)34924))))) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) ((min((4025772028U), (((/* implicit */unsigned int) var_0)))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_9 - 1] [i_0 - 1]))))))));
                        }
                        var_29 = ((/* implicit */unsigned char) (-(arr_22 [i_0] [i_0] [i_1] [i_0] [i_2] [i_5])));
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(var_17)))) * ((-(((((/* implicit */unsigned long long int) var_10)) / (3598781330627003473ULL)))))));
                    }
                    for (unsigned char i_10 = 4; i_10 < 8; i_10 += 1) /* same iter space */
                    {
                        arr_34 [i_0] [i_1] [i_2] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) arr_6 [i_0] [i_2] [i_0 + 1] [i_0]);
                        var_31 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (var_14)))) ? (((/* implicit */unsigned int) max((var_2), (((/* implicit */int) var_0))))) : (arr_32 [i_0 + 1])))));
                        /* LoopSeq 1 */
                        for (signed char i_11 = 3; i_11 < 7; i_11 += 2) 
                        {
                            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) max((((/* implicit */unsigned int) (short)15639)), (2383436818U))))));
                            var_33 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (+(arr_8 [i_11 - 1])))), (((((/* implicit */_Bool) 269195284U)) ? (((/* implicit */unsigned long long int) arr_8 [i_11 + 1])) : (181645017763349089ULL)))));
                            var_34 = (!(((/* implicit */_Bool) (+(4821576783372508193LL)))));
                        }
                        var_35 ^= ((/* implicit */unsigned int) arr_0 [i_1] [i_1]);
                    }
                    for (unsigned char i_12 = 4; i_12 < 8; i_12 += 1) /* same iter space */
                    {
                        arr_39 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */long long int) min((((((/* implicit */int) (signed char)6)) - (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))), (((((/* implicit */_Bool) min((((/* implicit */int) arr_37 [i_0 + 1] [i_1] [i_0] [i_12 - 4] [i_12] [i_0 + 1])), (arr_8 [i_12])))) ? (((/* implicit */int) arr_1 [(_Bool)0] [(_Bool)0])) : (((/* implicit */int) arr_33 [i_12] [i_0] [i_2] [i_0] [i_0]))))));
                        var_36 |= ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (((12938761991505378104ULL) + (((/* implicit */unsigned long long int) 253677370U)))))) > (((/* implicit */unsigned long long int) var_17))));
                        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_36 [i_0] [i_0] [i_2 + 2] [i_12]))) == (7544913288636254370LL)))) - ((+(((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_1] [i_1] [i_12]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_16)), (18404142051973241502ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-14))))))) : (max((arr_7 [i_2 - 1] [i_2] [i_2] [i_2]), (((/* implicit */unsigned int) arr_38 [i_2] [i_2 + 1] [i_2] [i_2] [i_2]))))));
                    }
                }
            }
        } 
    } 
    var_38 |= ((/* implicit */long long int) ((((/* implicit */long long int) (+(((/* implicit */int) max(((signed char)125), (((/* implicit */signed char) (_Bool)1)))))))) >= ((-(var_3)))));
}
