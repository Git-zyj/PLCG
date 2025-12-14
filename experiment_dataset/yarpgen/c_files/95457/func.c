/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95457
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95457 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95457
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (unsigned char)125)) ? (2354713054U) : (1987929205U))), (min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (var_10))), (((/* implicit */unsigned int) arr_1 [i_0 - 2]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) (unsigned short)32001)))));
            arr_6 [i_0] [i_0] [i_1] = ((/* implicit */_Bool) arr_0 [i_0] [i_1]);
        }
    }
    for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_3 = 0; i_3 < 17; i_3 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                for (int i_5 = 1; i_5 < 16; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 4; i_6 < 15; i_6 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), ((~(((/* implicit */int) (unsigned char)0))))));
                            var_14 = ((/* implicit */signed char) ((max((((unsigned int) var_5)), (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_8))))))) < (arr_20 [i_2] [i_2] [i_2] [i_2] [i_2])));
                        }
                    } 
                } 
            } 
            arr_21 [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) max(((_Bool)1), ((!((_Bool)1))))))));
            var_15 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)8192)) % (((/* implicit */int) (_Bool)1))));
        }
        for (signed char i_7 = 2; i_7 < 16; i_7 += 2) 
        {
            var_16 ^= ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_15 [i_2] [i_7] [i_7 - 2] [i_2]))))));
            /* LoopNest 3 */
            for (unsigned short i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                for (unsigned short i_9 = 2; i_9 < 14; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        {
                            arr_33 [i_2] [i_7] [i_8] [i_9] [i_10] = (~(var_0));
                            var_17 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(((/* implicit */int) var_11)))), ((-(arr_26 [i_10] [i_10] [i_10] [i_10])))))) ? (max((((/* implicit */int) ((_Bool) var_11))), (arr_19 [i_2] [i_2] [i_2] [i_2] [i_2]))) : ((~((~(((/* implicit */int) var_7))))))));
                            arr_34 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) ((min((((/* implicit */unsigned int) var_2)), (arr_18 [i_7]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_2))))))) ? (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))) : (((/* implicit */int) max(((signed char)112), (((/* implicit */signed char) (_Bool)1))))));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2] [i_2])))))));
                            var_19 = ((/* implicit */unsigned short) 0ULL);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned char i_11 = 1; i_11 < 16; i_11 += 2) 
            {
                arr_39 [i_11] [i_7] [i_7] [i_11] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((signed char) arr_8 [i_2]))), (arr_17 [i_7] [i_11]))), (((/* implicit */unsigned long long int) (-((-(arr_26 [i_11] [i_11] [i_11] [i_11]))))))));
                var_20 = ((/* implicit */unsigned long long int) ((int) max((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2])), (arr_11 [i_2] [i_7] [i_11]))));
                arr_40 [i_11] = ((/* implicit */signed char) (-(4294967280U)));
            }
            for (unsigned char i_12 = 2; i_12 < 14; i_12 += 2) 
            {
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) max((((/* implicit */unsigned short) ((((/* implicit */int) var_4)) >= (((/* implicit */int) arr_31 [i_12] [i_12] [i_12 + 2]))))), (min((var_7), (min((((/* implicit */unsigned short) (signed char)-124)), (arr_42 [i_2] [i_12] [i_12] [i_7]))))))))));
                arr_43 [i_2] [i_7] [i_12] [i_12] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) var_8)) ? (524287ULL) : (((/* implicit */unsigned long long int) ((int) (signed char)127)))))));
                arr_44 [i_2] [i_7] [i_12] = ((/* implicit */_Bool) var_12);
            }
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) min((arr_13 [i_7] [i_7] [i_7 + 1]), (arr_13 [i_7] [i_7] [i_7 + 1])))) + ((-(((/* implicit */int) arr_13 [i_7] [i_7] [i_7 + 1]))))));
            arr_45 [i_2] = ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (signed char)-113)));
        }
        for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 4) 
        {
            arr_49 [i_2] = var_5;
            arr_50 [i_2] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)24913), (((/* implicit */unsigned short) (_Bool)1)))))) >= (min((((/* implicit */unsigned int) arr_38 [i_2] [i_2] [i_13])), (var_10)))));
            var_23 = (-(max((((/* implicit */unsigned long long int) var_12)), (arr_22 [i_2] [i_13] [i_13]))));
            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)56)))), (((unsigned short) arr_25 [i_2] [i_2] [i_13])))))));
        }
        var_25 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)216)) + (-1832404107)));
    }
    for (unsigned int i_14 = 1; i_14 < 17; i_14 += 4) 
    {
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max((((/* implicit */unsigned int) ((15559459343962381556ULL) == (((/* implicit */unsigned long long int) 140462023))))), (((((((/* implicit */_Bool) arr_53 [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_51 [i_14]))) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (short)347)) : (((/* implicit */int) (short)21175))))))))))));
        arr_54 [i_14] = ((/* implicit */int) arr_51 [i_14 + 1]);
    }
    var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) ((unsigned int) var_12))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (var_0))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11)))))));
}
