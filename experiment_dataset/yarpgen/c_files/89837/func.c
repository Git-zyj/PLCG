/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89837
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) min((2011928911), (((/* implicit */int) (unsigned char)38))))))));
                    var_16 -= ((/* implicit */_Bool) (((_Bool)1) ? (3784381849U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 2) 
    {
        arr_10 [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) (_Bool)0)), (arr_7 [i_3]))))))) ? (((/* implicit */int) arr_8 [(_Bool)1])) : (((/* implicit */int) min((arr_2 [i_3] [i_3] [i_3]), (arr_1 [i_3]))))));
        arr_11 [2LL] = ((/* implicit */signed char) min((((/* implicit */int) min((arr_9 [i_3 + 1]), (((/* implicit */signed char) (_Bool)1))))), ((~(((/* implicit */int) arr_9 [i_3]))))));
    }
    for (short i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_5 = 2; i_5 < 23; i_5 += 3) 
        {
            var_17 &= arr_13 [i_4] [i_5 - 1];
            arr_17 [i_5] [i_5] = ((/* implicit */signed char) (!(((((/* implicit */long long int) max((2061437064), (((/* implicit */int) (_Bool)1))))) != (((long long int) (short)0))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            var_18 = (+(((((/* implicit */_Bool) var_14)) ? (-8690659962602746944LL) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
            arr_20 [i_6] [i_6] = ((/* implicit */signed char) arr_16 [i_6]);
            var_19 = ((/* implicit */_Bool) arr_3 [i_6]);
            arr_21 [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)128)) ? (arr_13 [i_4] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) (short)21663)))));
            var_20 = ((long long int) arr_18 [i_4] [i_6]);
        }
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_12 [i_7] [(short)6])))) ^ (((((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)128))))) & (min((((/* implicit */unsigned long long int) var_14)), (var_15)))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
            {
                for (long long int i_9 = 2; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_22 = ((/* implicit */unsigned int) min((1125898833100800LL), (max((-4611686018427387904LL), (((/* implicit */long long int) arr_29 [i_8] [i_7]))))));
                        arr_32 [i_4] [i_7] [i_8] [i_7] [i_7] = min((((((/* implicit */_Bool) arr_31 [i_9 - 1] [i_9] [i_9 - 1] [i_9 - 2] [i_9] [i_9 + 1])) ? (((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) (short)21680)) : (((/* implicit */int) (unsigned char)66)))) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) min((arr_26 [i_4] [i_4] [i_8]), (((/* implicit */long long int) var_8))))) == (((((/* implicit */_Bool) -2064198812)) ? (((/* implicit */unsigned long long int) 6113478535755056871LL)) : (var_11)))))));
                        var_23 = ((/* implicit */long long int) (((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8)))))) & (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) (short)16256)) ? (-8690659962602746941LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))));
                        var_24 = ((/* implicit */unsigned int) arr_13 [i_4] [17LL]);
                    }
                } 
            } 
            arr_33 [i_4] [i_4] [i_7] = ((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4]);
            var_25 *= ((/* implicit */short) -1125898833100788LL);
        }
        /* vectorizable */
        for (short i_10 = 1; i_10 < 21; i_10 += 1) 
        {
            var_26 = ((arr_15 [i_10 + 1] [i_10 + 2]) % (((/* implicit */long long int) ((/* implicit */int) var_14))));
            var_27 = ((/* implicit */_Bool) ((unsigned long long int) (unsigned char)255));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_11 = 0; i_11 < 24; i_11 += 1) 
        {
            var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_37 [i_4] [i_11] [i_4])) ? (arr_34 [i_4]) : (((/* implicit */int) (unsigned char)84))));
            var_29 = ((/* implicit */long long int) arr_5 [i_4]);
            arr_41 [i_11] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)66))));
        }
        var_30 = ((/* implicit */_Bool) arr_2 [i_4] [i_4] [i_4]);
    }
    for (short i_12 = 0; i_12 < 24; i_12 += 4) /* same iter space */
    {
        arr_44 [i_12] = ((/* implicit */int) (!((!(((/* implicit */_Bool) min((((/* implicit */int) arr_3 [i_12])), (arr_25 [i_12] [i_12] [i_12]))))))));
        var_31 = ((/* implicit */int) ((((1067547121U) * (((/* implicit */unsigned int) 2097151)))) - (((/* implicit */unsigned int) ((/* implicit */int) (short)30667)))));
        var_32 = arr_22 [i_12] [i_12] [i_12];
        /* LoopSeq 1 */
        for (unsigned char i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)43177)) ? (((595865990U) << (((3120997525U) - (3120997522U))))) : (max((((/* implicit */unsigned int) (unsigned char)11)), (1410945162U)))))) ? (arr_15 [(unsigned short)16] [i_13]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-67)) ? (67108863) : (((/* implicit */int) (short)16256)))))));
            var_34 = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1067547121U))))), (((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)29))) : (2980212374U))))));
            var_35 = ((/* implicit */short) (-(((((/* implicit */int) arr_5 [i_12])) ^ (((/* implicit */int) arr_5 [i_12]))))));
        }
    }
    var_36 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) (unsigned short)17679)))))) != (((((/* implicit */_Bool) var_1)) ? (4294967289U) : (((/* implicit */unsigned int) -67108864)))))) ? (var_4) : ((((!(((/* implicit */_Bool) var_4)))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) 7450708579747922117LL)) : (var_4))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_1)) : (18446744073709551615ULL)))))));
    var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-1515697808837229579LL) : (var_3))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(var_10))))))) : (var_11))))));
}
