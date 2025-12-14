/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71132
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
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (short i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_2] [i_1]))));
                var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) (+(((((/* implicit */unsigned int) ((/* implicit */int) var_11))) & (245455577U))))))));
                var_14 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) var_1)) : (((unsigned int) var_9)));
            }
            var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
        }
        var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) min((max((((int) arr_5 [i_0])), ((-(((/* implicit */int) var_10)))))), (((var_7) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((unsigned char) 4049511723U))))))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
    {
        var_17 = ((/* implicit */signed char) 245455577U);
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
        {
            arr_16 [i_3] = ((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */unsigned long long int) 4049511723U)) : (18446744073709551610ULL)));
            var_18 = ((/* implicit */unsigned int) ((arr_8 [i_4] [i_3 + 1]) <= (arr_8 [i_4] [i_3 + 1])));
            var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */int) arr_14 [i_4] [14])) < (((/* implicit */int) ((((/* implicit */long long int) 245455566U)) > (32704LL)))))))));
        }
        for (short i_5 = 0; i_5 < 19; i_5 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
            {
                var_20 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 245455577U)) ? ((-(-32712LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)5))))) + (((/* implicit */long long int) (~(((/* implicit */int) ((short) 4049511729U))))))));
                /* LoopSeq 1 */
                for (short i_7 = 0; i_7 < 19; i_7 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 807093184)) ? (var_6) : (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)255))))) * ((((_Bool)0) ? (245455567U) : (((/* implicit */unsigned int) 807093194))))))))))));
                        arr_26 [i_3] [i_6 - 1] [i_6 - 1] [i_5] [i_3] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 245455568U)) ? (arr_15 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (max((8439081027242451907ULL), (((/* implicit */unsigned long long int) var_4)))) : (((/* implicit */unsigned long long int) max((3259713760U), (((/* implicit */unsigned int) (signed char)0))))))))));
                        var_22 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1047015760)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30941))) : (65535ULL)))) ? (((((/* implicit */int) var_2)) & (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)22324)) : (var_1)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((~(((/* implicit */int) var_5)))) <= (((/* implicit */int) var_2)))))) : (((((/* implicit */_Bool) max((4049511747U), (((/* implicit */unsigned int) (signed char)0))))) ? (((((/* implicit */_Bool) var_3)) ? (245455567U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))) : (arr_19 [i_6] [i_6]))));
                        var_23 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) arr_25 [i_3] [i_7] [i_3 + 1] [(signed char)14] [i_3])) ? (1253831464U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1)))))))));
                    }
                    var_24 = ((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1));
                }
                arr_27 [i_3] = ((/* implicit */unsigned short) (((~(arr_8 [i_6 + 1] [i_3 + 1]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_10 [i_3]))))));
            }
            /* LoopSeq 3 */
            for (unsigned short i_9 = 0; i_9 < 19; i_9 += 4) /* same iter space */
            {
                arr_30 [i_3] [i_3] [(signed char)13] [i_9] = ((max((((/* implicit */long long int) ((arr_29 [10LL]) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)25899)))))), (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_5]))) & (var_9))))) | (((/* implicit */long long int) 4049511729U)));
                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) min((245455568U), (((/* implicit */unsigned int) (signed char)1)))))));
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
                {
                    var_26 = ((/* implicit */short) arr_31 [i_3] [i_9] [i_9] [i_10] [i_5]);
                    /* LoopSeq 3 */
                    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 2) /* same iter space */
                    {
                        var_27 ^= ((/* implicit */short) ((var_1) | (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))) >= ((+(1253831462U))))))));
                        var_28 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)63433))));
                        var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(min((((/* implicit */int) arr_20 [i_5] [i_3 + 1])), (var_3)))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-94)), ((unsigned short)8191))))))) : (((unsigned long long int) var_9))));
                        var_30 = ((/* implicit */unsigned long long int) (-((~(var_3)))));
                        var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)24711)) * (((/* implicit */int) (unsigned char)8))));
                    }
                    /* vectorizable */
                    for (unsigned int i_12 = 0; i_12 < 19; i_12 += 2) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (unsigned short)62361);
                        var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_7))));
                    }
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned char) max((var_34), (((/* implicit */unsigned char) arr_19 [i_13] [i_5]))));
                        arr_42 [i_3] [i_3] = ((/* implicit */unsigned char) (((!(((((/* implicit */_Bool) arr_22 [i_3] [i_5] [i_3])) || (((/* implicit */_Bool) arr_37 [i_10] [i_10] [i_9] [(signed char)7] [i_3])))))) ? (((((/* implicit */_Bool) var_6)) ? (-32707LL) : (((/* implicit */long long int) arr_21 [i_3] [5ULL] [i_9] [i_10])))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) ((var_2) && (((/* implicit */_Bool) var_3))))), ((short)-22315)))))));
                    }
                }
            }
            for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) /* same iter space */
            {
                var_35 = ((/* implicit */short) (~(4049511729U)));
                var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_14 [i_3 + 1] [i_3 + 1]), (arr_14 [i_3 + 1] [i_3 + 1])))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) min((arr_31 [9LL] [i_3 + 1] [i_14] [i_3 + 1] [i_14]), (arr_31 [i_3] [i_3 + 1] [i_14] [i_5] [i_14]))))));
            }
            for (unsigned short i_15 = 0; i_15 < 19; i_15 += 4) /* same iter space */
            {
                var_37 -= ((/* implicit */unsigned long long int) var_8);
                var_38 = ((/* implicit */long long int) (~((+(arr_44 [i_3])))));
            }
        }
        for (unsigned short i_16 = 1; i_16 < 18; i_16 += 4) 
        {
            var_39 -= max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-1)) + ((-(var_1)))))), ((~(arr_25 [(unsigned char)14] [i_16] [i_16 - 1] [i_3 + 1] [(unsigned char)14]))));
            var_40 = ((/* implicit */signed char) (unsigned short)40824);
            var_41 = ((/* implicit */unsigned long long int) ((-32710LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
            arr_49 [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) var_2)) << (((var_6) + (7172750541558296730LL))))) * (((/* implicit */int) var_4))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_3 + 1] [i_16 + 1]))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (4049511728U)))))));
        }
    }
    var_42 |= ((/* implicit */unsigned long long int) var_3);
    var_43 = ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (32692LL))))))));
    var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) (-(((/* implicit */int) var_10)))))));
}
