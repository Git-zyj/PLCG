/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63268
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
    for (unsigned short i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) arr_4 [i_1] [i_0] [i_0])))))))))));
            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) ((short) min((131479577), ((~(((/* implicit */int) (unsigned short)0))))))))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1] [i_0])) == (((/* implicit */int) arr_1 [i_0] [i_1]))))) >> (((/* implicit */int) max((var_0), (((/* implicit */signed char) var_11))))))), (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) arr_2 [i_0 + 1])) : (((/* implicit */int) arr_2 [i_0 - 1]))))));
            var_22 = arr_1 [(unsigned short)4] [i_0 + 1];
        }
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
        {
            for (short i_3 = 0; i_3 < 13; i_3 += 4) 
            {
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_5 = 0; i_5 < 13; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_3] [i_5]))))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0] [2ULL]))) : ((~(var_3))))));
                            var_24 = ((/* implicit */unsigned short) (signed char)39);
                        }
                        for (signed char i_6 = 3; i_6 < 12; i_6 += 4) 
                        {
                            arr_19 [i_0 + 1] [i_0] [i_0] [i_0] = (i_0 % 2 == zero) ? (((/* implicit */int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775792LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 1]))) / (arr_10 [i_0] [i_0] [i_3]))))) >> (((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1345094186U)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_2 [i_2]))))) ? (max((arr_15 [i_0] [i_0] [i_4 - 1] [(signed char)3]), (((/* implicit */int) arr_14 [i_0] [(signed char)1] [i_3] [i_0] [i_6])))) : (((/* implicit */int) arr_17 [i_6 - 1] [i_4 - 1] [i_6 + 1] [i_4])))) - (31867)))))) : (((/* implicit */int) ((max((((/* implicit */long long int) (!(((/* implicit */_Bool) -9223372036854775792LL))))), (((((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_2] [i_3] [i_4] [i_6 + 1]))) / (arr_10 [i_0] [i_0] [i_3]))))) >> (((((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1345094186U)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_2 [i_2]))))) ? (max((arr_15 [i_0] [i_0] [i_4 - 1] [(signed char)3]), (((/* implicit */int) arr_14 [i_0] [(signed char)1] [i_3] [i_0] [i_6])))) : (((/* implicit */int) arr_17 [i_6 - 1] [i_4 - 1] [i_6 + 1] [i_4])))) - (31867))) - (1647765212))))));
                            var_25 = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) ((short) var_10)))), ((~(((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_0] [i_2] [i_3] [i_4] [i_6])), (arr_17 [i_2] [i_3] [i_4] [i_6]))))))));
                            var_26 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) var_6))), (min((((/* implicit */unsigned long long int) (unsigned short)23588)), (10985800954812296472ULL)))));
                            var_27 &= ((/* implicit */int) (!(((((/* implicit */_Bool) max((((/* implicit */signed char) arr_18 [(_Bool)1] [i_6] [i_6 - 3])), (arr_13 [i_2] [i_2] [i_2] [i_2] [i_2])))) || (((/* implicit */_Bool) arr_4 [i_2] [i_4] [i_6]))))));
                            var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) (!(((arr_15 [i_6] [i_2] [i_2] [i_0]) >= (((/* implicit */int) arr_2 [i_0 + 1])))))))));
                        }
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) 167579424)))))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_15)) * (((/* implicit */int) ((((/* implicit */int) (signed char)91)) != (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1]))))))))));
                    }
                } 
            } 
        } 
        var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0 + 1] [12] [i_0 + 1])))) : ((~(arr_10 [i_0 + 1] [(signed char)6] [i_0 + 1])))));
        var_31 -= ((/* implicit */_Bool) min((var_3), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (signed char)108)), (-1)))))))));
        var_32 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 131479577)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) (signed char)-127)))) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-39)))))))) ? (((/* implicit */long long int) ((max((2147483647), (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) : (((arr_10 [i_0] [i_0] [i_0]) / (((/* implicit */long long int) ((int) arr_18 [i_0 - 1] [i_0] [i_0 - 1]))))));
    }
    for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) /* same iter space */
    {
        arr_22 [i_7] [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) arr_3 [i_7 - 1] [i_7 + 1] [i_7 - 1])) % (((/* implicit */int) arr_17 [i_7] [i_7] [i_7 - 1] [i_7])))) | (500812988)));
        var_33 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_3 [i_7] [i_7] [i_7])), (max((1873991331), (((/* implicit */int) var_13))))))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_7] [(signed char)4])))))));
        arr_23 [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */int) (signed char)105)) % (((/* implicit */int) (signed char)84))))));
        arr_24 [i_7] = (!(((/* implicit */_Bool) max((((/* implicit */int) (signed char)66)), (1048574)))));
        var_34 = ((/* implicit */int) (_Bool)1);
    }
    var_35 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) min((((/* implicit */int) var_19)), (var_4)))) : ((((!(var_11))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-1575246541) >= (7))))) : (max((((/* implicit */unsigned long long int) var_10)), (0ULL)))))));
}
