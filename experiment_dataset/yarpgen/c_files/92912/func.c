/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92912
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
    var_20 = ((/* implicit */unsigned long long int) var_16);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_5 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_17))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_10 [i_1] [i_1] = ((/* implicit */int) (unsigned char)198);
        var_21 &= ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)13095))))) / (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)93)))) - (((((/* implicit */_Bool) (unsigned short)52441)) ? (arr_7 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
        arr_12 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_7))) ? (min((var_12), (((/* implicit */int) arr_6 [i_1])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)13109)) == (((/* implicit */int) arr_6 [i_1])))))));
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 23; i_2 += 3) /* same iter space */
        {
            var_22 -= (+(((/* implicit */int) (unsigned short)13108)));
            /* LoopSeq 3 */
            for (short i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                var_23 ^= ((/* implicit */unsigned long long int) var_16);
                var_24 = ((/* implicit */_Bool) (+((+(((((/* implicit */int) (unsigned short)13095)) + (1976685788)))))));
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)11)) ^ (((/* implicit */int) (unsigned short)59489))));
                var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) var_5))));
            }
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned char) (((+(var_0))) == (((/* implicit */int) min((arr_13 [i_1] [i_2]), (((/* implicit */unsigned short) (signed char)-84)))))));
                var_28 = ((/* implicit */short) (unsigned char)172);
            }
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) /* same iter space */
            {
                arr_27 [i_1] = min((min((((/* implicit */unsigned long long int) arr_13 [i_1] [i_1])), (((((/* implicit */_Bool) var_3)) ? (9353156739646692716ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1]))))))), (((/* implicit */unsigned long long int) ((unsigned char) arr_7 [14ULL] [i_5]))));
                arr_28 [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((short) var_13)))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (int i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1748972500)) || (((/* implicit */_Bool) var_12)))))) : (var_10)));
                    var_30 = ((/* implicit */signed char) min((var_30), (((/* implicit */signed char) (~(((/* implicit */int) ((unsigned char) (unsigned char)93))))))));
                }
                for (long long int i_7 = 0; i_7 < 23; i_7 += 3) /* same iter space */
                {
                    var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) ((9223372036854775785LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)10)))))) ? (var_14) : ((((~(var_11))) ^ (((arr_32 [i_7] [i_7] [i_7] [(unsigned short)22]) | (((/* implicit */int) var_2))))))))));
                    arr_33 [17] [i_2] [i_1] [(short)15] = ((/* implicit */short) ((((min(((~(((/* implicit */int) (unsigned char)142)))), (((/* implicit */int) (signed char)-2)))) + (2147483647))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */int) arr_6 [i_1])) == (((/* implicit */int) var_13))))))));
                }
                for (long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                {
                    var_32 = ((/* implicit */int) var_4);
                    var_33 = ((/* implicit */_Bool) var_1);
                    arr_36 [15] [i_1] [i_2] [i_2] [i_1] [6ULL] = (+(((/* implicit */int) ((((/* implicit */int) arr_18 [i_1] [i_1] [i_5] [(short)13])) == (((/* implicit */int) arr_18 [i_1] [i_1] [i_5] [i_1]))))));
                    arr_37 [i_1] = ((((/* implicit */_Bool) min(((unsigned short)46992), ((unsigned short)46989)))) ? (((/* implicit */unsigned long long int) min((arr_34 [i_8] [i_1] [(unsigned short)3] [i_1] [i_1]), (((/* implicit */int) arr_23 [i_8]))))) : (((((/* implicit */_Bool) min((9223372036854775785LL), (((/* implicit */long long int) (unsigned short)23874))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2]))) : (var_10))))));
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_17)) | (((/* implicit */int) (unsigned short)23878))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_21 [i_1] [i_5] [i_8])) : (((/* implicit */int) arr_21 [i_2] [i_2] [i_8])))) : (((((/* implicit */int) (unsigned short)18574)) & (((/* implicit */int) arr_21 [i_1] [i_2] [i_5]))))));
                }
            }
        }
        for (signed char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
        {
            arr_40 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)175)) ? (-4456463499915757215LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37558)))));
            var_35 ^= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 1748972512)) ? (((/* implicit */int) (signed char)32)) : (196928978)))) == (arr_7 [i_1] [i_9])));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                {
                    var_36 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)46992))));
                    arr_47 [i_10] [i_1] = ((var_14) == (((/* implicit */int) arr_26 [i_1])));
                }
                arr_48 [i_1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) arr_15 [i_1]);
            }
            var_37 = ((((/* implicit */int) ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) max((var_16), (((/* implicit */int) (unsigned short)65528)))))))) >> (((((/* implicit */int) (unsigned short)13108)) - (13103))));
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_13 = 0; i_13 < 23; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 23; i_14 += 3) 
                {
                    {
                        var_38 -= ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [(unsigned short)12]))) <= (var_10))))));
                        var_39 = ((/* implicit */unsigned char) max((var_39), (((/* implicit */unsigned char) ((unsigned long long int) (((-(var_9))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))))));
                    }
                } 
            } 
            var_40 = ((/* implicit */int) min((var_40), ((-(((/* implicit */int) (unsigned short)31692))))));
            arr_57 [i_1] [i_12] [i_12] = ((/* implicit */short) (+(((/* implicit */int) ((arr_41 [i_1] [i_1] [i_12] [i_12]) > (arr_41 [i_1] [i_1] [i_1] [i_1]))))));
        }
    }
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_41 = ((/* implicit */int) min((((unsigned long long int) arr_26 [i_15])), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)43)))))));
        var_42 = ((/* implicit */int) max((var_42), ((((+(((/* implicit */int) arr_55 [i_15] [i_15])))) + (((/* implicit */int) max(((unsigned char)181), (((/* implicit */unsigned char) (signed char)-105)))))))));
    }
}
