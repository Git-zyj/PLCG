/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65409
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
    var_13 &= ((/* implicit */int) var_0);
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((int) (unsigned short)42610)), (((((/* implicit */int) var_3)) >> (((((/* implicit */int) var_9)) - (10504)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_9)))) : (((unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))))));
    var_15 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) ((min((var_6), (((/* implicit */int) arr_0 [i_0 - 1])))) >> (((max((max((((/* implicit */int) arr_1 [i_0 + 1])), (var_10))), (((/* implicit */int) var_1)))) - (75)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                arr_10 [i_2] [i_2] = ((/* implicit */_Bool) (+(4U)));
                var_17 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_7 [i_0 - 1] [i_1 + 3] [i_0 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_7 [i_1] [i_0 - 2] [i_0 - 1] [i_1 - 1])) : (((/* implicit */int) (unsigned short)22920)))) + ((~(((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) var_8))))))));
            }
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) /* same iter space */
            {
                arr_15 [i_0] [i_1] = max((((/* implicit */long long int) (!(((arr_1 [i_0 - 2]) || (((/* implicit */_Bool) var_8))))))), (min(((+(-8143222233450649552LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1 + 3] [i_3]))) + (var_11)))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 3; i_4 < 21; i_4 += 1) 
                {
                    for (unsigned char i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_8 [i_0 - 1] [i_4 - 2])) : (((/* implicit */int) arr_8 [i_0 - 2] [i_4 - 2])))), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_8 [i_0 - 2] [i_4 - 2])))))));
                            arr_21 [i_5] [i_3] [i_3] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */unsigned int) 10990811307688892527ULL);
                            var_19 = ((/* implicit */long long int) min((var_19), (min((255LL), (((/* implicit */long long int) 2147483629))))));
                            var_20 -= ((/* implicit */long long int) max((((((/* implicit */int) (unsigned short)16384)) > (((/* implicit */int) (unsigned short)16352)))), (((max((var_10), ((-2147483647 - 1)))) == (((/* implicit */int) ((unsigned char) (_Bool)1)))))));
                            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (((-(4294967285U))) - (((/* implicit */unsigned int) ((/* implicit */int) max((arr_5 [i_4] [i_4 - 1]), (((/* implicit */unsigned short) arr_7 [i_4 - 2] [i_5 - 2] [(unsigned short)9] [i_5])))))))))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned short) (!(((((/* implicit */int) (!(((/* implicit */_Bool) -264LL))))) == (((((/* implicit */_Bool) (unsigned short)16352)) ? (var_10) : (-968435144)))))));
            }
            for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) /* same iter space */
            {
                var_23 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (var_10) : (((/* implicit */int) (short)-13820))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1])) : (13201364176084611043ULL)))))));
                /* LoopNest 2 */
                for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    for (unsigned char i_8 = 1; i_8 < 20; i_8 += 2) 
                    {
                        {
                            arr_29 [i_8] [i_8] = ((/* implicit */short) ((unsigned char) ((arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 1] [i_8 + 1]) ? (((/* implicit */int) arr_20 [i_0] [i_0 - 2] [i_1 - 2] [i_1 + 1] [i_8 + 3])) : (((/* implicit */int) arr_20 [i_0] [i_0 + 1] [i_0] [i_1 - 2] [i_8 + 2])))));
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (+(min((((unsigned int) (short)-6274)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_6] [i_8])) ? (((/* implicit */int) var_7)) : (var_6)))))))))));
                        }
                    } 
                } 
                arr_30 [i_0 - 2] [i_0 - 2] [i_6] &= ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
            }
            /* vectorizable */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                var_25 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)65534))));
                /* LoopSeq 3 */
                for (int i_10 = 0; i_10 < 23; i_10 += 1) /* same iter space */
                {
                    var_26 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_31 [i_10] [i_9] [i_1 + 2] [i_0 + 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_14 [i_0] [i_9] [i_10])))) : (((((/* implicit */long long int) ((/* implicit */int) (short)511))) - (var_0)))));
                    var_27 *= ((/* implicit */short) arr_22 [i_0 + 1] [i_1 - 1] [i_9] [i_10]);
                    var_28 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) arr_1 [i_0 - 2]))));
                }
                for (int i_11 = 0; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)20482)) : (((/* implicit */int) var_5))))))));
                    var_30 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_0 + 1] [i_1 + 3]))));
                    arr_37 [i_0] [i_1] [i_9] [i_11] = ((((/* implicit */int) var_9)) >> (((var_2) + (3353127018221390335LL))));
                    var_31 -= ((/* implicit */unsigned short) ((((/* implicit */int) arr_32 [i_0 - 1] [i_0] [3LL] [i_0 + 1])) / (arr_31 [i_0] [i_0] [i_9] [i_9])));
                }
                for (int i_12 = 0; i_12 < 23; i_12 += 1) /* same iter space */
                {
                    arr_41 [i_0] [i_0 + 1] [i_1] [i_1] [i_9] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0 - 2] [i_9] [i_0 + 1])) ? (arr_33 [i_0] [i_0 - 2] [i_9] [i_12] [i_0] [i_0 + 1]) : (arr_33 [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 - 1] [i_1])));
                    var_32 = ((/* implicit */_Bool) ((((var_0) >= (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0 + 1] [i_0 + 1] [i_12]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))));
                }
            }
            var_33 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)-72)))) ? (((/* implicit */int) ((unsigned char) (short)22754))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_25 [i_0 - 1] [i_0 - 1] [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1 - 2])) || (((/* implicit */_Bool) arr_5 [i_0] [i_1 - 2])))))));
            arr_42 [i_0 - 1] [i_1] [i_1 + 2] = (-(((((/* implicit */_Bool) arr_16 [i_0] [i_0 - 2] [i_1 - 1])) ? (((/* implicit */int) arr_16 [i_0] [i_0 - 1] [i_1 - 2])) : (arr_31 [i_0] [i_0 + 1] [i_1 - 2] [i_1]))));
            arr_43 [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)26646);
        }
        var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) (~((+(((/* implicit */int) (short)32575)))))))));
    }
    for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
    {
        var_35 = ((/* implicit */long long int) arr_26 [i_13] [i_13] [i_13] [i_13] [i_13]);
        var_36 = ((/* implicit */_Bool) (unsigned char)96);
        arr_47 [i_13] = ((/* implicit */unsigned short) max((arr_34 [1LL] [i_13] [i_13] [20]), (((/* implicit */long long int) arr_23 [i_13] [i_13] [i_13]))));
    }
}
