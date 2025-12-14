/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97772
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
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 += ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) 7997251015413400431ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (10449493058296151184ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)148)) * (((/* implicit */int) arr_0 [(short)3])))))));
        arr_2 [i_0] |= ((/* implicit */long long int) var_3);
        /* LoopSeq 3 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
        {
            var_12 -= ((/* implicit */int) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) arr_6 [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 10449493058296151185ULL)) ? (((/* implicit */int) var_9)) : (var_7)))) ? ((+(((/* implicit */int) (unsigned short)53307)))) : (((/* implicit */int) ((signed char) arr_3 [11LL])))))) : ((-(((long long int) arr_4 [i_0]))))));
            arr_7 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (+(10449493058296151185ULL)))))), (arr_0 [i_1])));
            arr_8 [i_0] [i_1] = (unsigned char)246;
        }
        for (int i_2 = 0; i_2 < 14; i_2 += 4) /* same iter space */
        {
            arr_11 [i_2] [i_2] = ((/* implicit */signed char) 1374482627);
            var_13 = ((/* implicit */signed char) ((long long int) arr_10 [i_0] [i_2]));
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 13; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 14; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 14; i_5 += 3) 
                        {
                            var_14 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)108))));
                            var_15 = ((/* implicit */int) max((arr_15 [i_3 - 3] [i_4] [i_5]), (((/* implicit */unsigned short) max((arr_6 [i_3 - 3] [i_3 - 3]), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))) == (arr_14 [i_3])))))))));
                        }
                        arr_21 [i_0] [i_2] [9] [i_4] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                    }
                } 
            } 
        }
        for (int i_6 = 0; i_6 < 14; i_6 += 4) /* same iter space */
        {
            var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (+(((/* implicit */int) arr_19 [i_6] [(signed char)0] [i_0] [i_0] [i_0])))))));
            var_17 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_0]))));
            var_18 = ((/* implicit */unsigned char) arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
            var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) max(((~(((/* implicit */int) var_5)))), (((/* implicit */int) var_1)))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 14; i_7 += 4) 
            {
                for (unsigned short i_8 = 4; i_8 < 12; i_8 += 4) 
                {
                    for (long long int i_9 = 4; i_9 < 12; i_9 += 1) 
                    {
                        {
                            var_20 = ((/* implicit */int) ((signed char) (unsigned short)2551));
                            arr_33 [i_6] [i_8] [i_9] [i_7] [i_9 - 2] [i_7] &= ((/* implicit */int) max(((+(arr_32 [i_9] [i_9 + 1] [i_8] [i_7] [i_0] [i_0] [i_0]))), (arr_32 [i_9] [i_9 - 4] [i_9 - 2] [(_Bool)1] [(short)10] [i_9 - 1] [i_8 - 2])));
                            var_21 &= ((/* implicit */signed char) arr_27 [i_0] [i_6] [i_7] [i_9 - 4]);
                            var_22 ^= ((/* implicit */int) min((343573252663752074LL), (((/* implicit */long long int) (short)32767))));
                            arr_34 [i_9] = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((_Bool) arr_5 [i_0] [i_6] [i_9]))), ((~(((/* implicit */int) arr_4 [i_6])))))), (((/* implicit */int) (unsigned short)265))));
                        }
                    } 
                } 
            } 
        }
        arr_35 [i_0] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0]);
    }
    for (long long int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_38 [i_10] = ((/* implicit */signed char) min((((/* implicit */short) arr_37 [i_10])), ((short)29078)));
        arr_39 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_36 [i_10])), (372459888)))) ? (((/* implicit */int) (((!(((/* implicit */_Bool) (unsigned char)148)))) && (((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)148)))))))) : (((/* implicit */int) arr_36 [i_10]))));
        /* LoopNest 3 */
        for (signed char i_11 = 2; i_11 < 18; i_11 += 2) 
        {
            for (long long int i_12 = 0; i_12 < 19; i_12 += 4) 
            {
                for (signed char i_13 = 2; i_13 < 17; i_13 += 4) 
                {
                    {
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((signed char) ((((((/* implicit */int) arr_37 [i_10])) << (((((/* implicit */int) arr_40 [i_10] [i_11 + 1] [i_10])) - (38294))))) >> (((/* implicit */int) min((arr_45 [i_12] [i_12] [i_13] [i_13 + 1] [i_11]), (((/* implicit */signed char) arr_37 [i_10])))))))))));
                        arr_47 [i_13 + 1] [i_13] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) arr_43 [i_11] [i_11])) - (((/* implicit */int) ((short) max((1LL), (((/* implicit */long long int) arr_36 [i_13 - 1]))))))));
                        arr_48 [i_13 + 2] [i_12] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_13 + 1] [i_12] [i_11 - 2])))))) | (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_36 [i_12]))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [(short)18] [i_11] [i_10]))) : (10449493058296151184ULL)))))));
                    }
                } 
            } 
        } 
        var_24 = ((/* implicit */long long int) (short)-10681);
        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */short) arr_37 [i_10])), ((short)-29086)))), (4489416449083411480ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((arr_42 [i_10]) ? (((/* implicit */unsigned int) arr_46 [i_10] [i_10] [i_10] [i_10] [i_10])) : (max((((/* implicit */unsigned int) var_9)), (981089070U)))))));
    }
    var_26 = var_6;
    var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)1)))) : (var_7))))));
}
