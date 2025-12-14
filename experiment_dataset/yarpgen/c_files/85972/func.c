/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85972
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
    var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) ((_Bool) (_Bool)1))))) ^ (((/* implicit */int) ((short) var_1)))));
    var_20 = ((/* implicit */unsigned short) (!(var_12)));
    /* LoopSeq 4 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((_Bool) arr_1 [i_0 + 1]));
        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [(_Bool)0])) : (((/* implicit */int) var_11))));
        var_23 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [(signed char)0]))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned short) var_1);
        var_25 *= ((/* implicit */unsigned short) var_12);
        var_26 = ((/* implicit */unsigned char) max(((-(((/* implicit */int) var_13)))), (((arr_4 [i_1]) ? (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) <= (((/* implicit */int) (unsigned char)178))))) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))))));
        /* LoopSeq 4 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
            {
                var_27 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)0)))) ^ (arr_6 [i_1])));
            }
            var_29 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-4)) ? (((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)11)), (var_13)))) : (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_1])))))) : (((/* implicit */int) ((unsigned char) arr_7 [i_2] [i_2] [i_2] [(signed char)0])))));
        }
        for (unsigned long long int i_4 = 3; i_4 < 22; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 21; i_5 += 4) 
            {
                for (unsigned long long int i_6 = 1; i_6 < 22; i_6 += 4) 
                {
                    {
                        arr_15 [i_1] [i_4] [i_4] [i_4] = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                        var_30 = ((/* implicit */unsigned int) var_2);
                    }
                } 
            } 
            arr_16 [i_4] = (signed char)-11;
            var_31 |= ((/* implicit */signed char) max(((!(((/* implicit */_Bool) (signed char)126)))), (((((/* implicit */int) (unsigned char)32)) == (((/* implicit */int) (short)9300))))));
        }
        for (signed char i_7 = 4; i_7 < 22; i_7 += 4) 
        {
            arr_20 [i_1] [i_7 - 4] [i_7] = ((/* implicit */unsigned long long int) ((unsigned short) 4600326899771052908ULL));
            /* LoopNest 3 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 23; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 23; i_10 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned short) 13846417173938498711ULL);
                            arr_27 [i_8] = ((/* implicit */unsigned int) (signed char)4);
                            var_33 *= (-(((unsigned long long int) (unsigned char)39)));
                        }
                    } 
                } 
            } 
            arr_28 [i_1] [9U] = ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) var_0)))), (((_Bool) 4294967295U))));
            arr_29 [i_1] [i_7 - 1] [i_7] = ((/* implicit */short) max((4294967295U), (((/* implicit */unsigned int) (unsigned short)4883))));
            arr_30 [(_Bool)1] [i_7 - 4] = min((((_Bool) (((_Bool)0) ? (4294967274U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), ((_Bool)0));
        }
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            arr_34 [13ULL] [(unsigned short)8] = ((/* implicit */_Bool) ((((/* implicit */int) ((((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_6 [i_1]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_1] [i_1] [i_1] [i_11] [i_11] [i_11] [i_11])))))) & (((/* implicit */int) max((((((/* implicit */_Bool) (signed char)(-127 - 1))) && (var_12))), (max(((_Bool)1), (var_11))))))));
            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) (_Bool)1))));
        }
    }
    for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
    {
        var_35 |= ((/* implicit */signed char) ((max((arr_8 [i_12] [i_12] [(unsigned short)14]), (arr_8 [i_12] [i_12] [i_12]))) ? ((~(((/* implicit */int) arr_8 [i_12] [i_12] [i_12])))) : (((((/* implicit */_Bool) (unsigned short)1023)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) (unsigned short)65511))))));
        var_36 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (((/* implicit */int) (signed char)-11)) : (((/* implicit */int) (unsigned short)65535)))) : ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)223)))))));
    }
    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 3) 
    {
        arr_41 [(short)6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (max((max((((/* implicit */unsigned long long int) arr_23 [(_Bool)1] [(_Bool)1])), (arr_25 [i_13] [i_13] [i_13] [(short)20]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_17)), (4137419558U))))))));
        var_37 += ((/* implicit */unsigned short) arr_21 [(unsigned short)0] [i_13] [(unsigned char)22]);
    }
}
