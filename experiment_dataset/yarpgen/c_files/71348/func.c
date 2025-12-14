/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71348
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
    var_18 = 0U;
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) ((signed char) var_7));
            var_19 = ((/* implicit */unsigned short) 3189697182U);
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_2 [i_0] [i_0]))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_5))));
    }
    /* vectorizable */
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 1) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)29263))));
        arr_8 [i_2] = ((/* implicit */unsigned short) var_16);
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) 1951371685)) + (var_8))) * (((unsigned int) var_6))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 1) /* same iter space */
    {
        arr_12 [i_3] [i_3] = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (unsigned short)29263)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)62298))) : (arr_6 [i_3] [i_3 + 1])))));
        var_24 = ((/* implicit */unsigned int) max((var_24), (((((/* implicit */_Bool) arr_3 [i_3 + 1])) ? (1140138959U) : (0U)))));
    }
    /* vectorizable */
    for (short i_4 = 0; i_4 < 19; i_4 += 1) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((signed char) ((1951371685) / (((/* implicit */int) (unsigned short)29263)))))));
        var_26 = ((/* implicit */unsigned short) (((((-(4738646113623689128LL))) + (9223372036854775807LL))) << (0U)));
    }
    /* LoopSeq 3 */
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        arr_18 [0] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_17 [(short)0]), (((/* implicit */unsigned int) var_2))))) ? (((((/* implicit */int) var_11)) / (((/* implicit */int) var_14)))) : ((-(((/* implicit */int) var_7))))))));
        arr_19 [i_5] = arr_17 [i_5];
        arr_20 [i_5] = ((/* implicit */unsigned int) ((int) arr_17 [i_5]));
    }
    for (unsigned int i_6 = 3; i_6 < 9; i_6 += 1) 
    {
        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_0 [i_6])), (arr_22 [i_6] [i_6]))), (((/* implicit */unsigned int) arr_1 [i_6] [i_6 - 1]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned short)36272)), (var_3)))) && (((/* implicit */_Bool) arr_6 [i_6] [i_6]))))) : (((/* implicit */int) arr_9 [i_6] [i_6]))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
        {
            var_28 *= ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26018))) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) (signed char)24)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_14)))) : (((((((/* implicit */int) (signed char)-24)) + (2147483647))) >> (((((/* implicit */int) (short)2411)) - (2384))))))) < ((-(((/* implicit */int) (short)22862))))));
            arr_26 [i_6] [i_6] [i_6] = var_8;
            arr_27 [i_6] = ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_2 [i_6 - 3] [i_6 - 1])) + (((/* implicit */int) arr_2 [i_6 - 3] [i_6]))))));
        }
    }
    /* vectorizable */
    for (long long int i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        arr_31 [i_8] = ((/* implicit */signed char) (-(5036495982432962557LL)));
        arr_32 [i_8] = ((/* implicit */unsigned short) (-((-(((/* implicit */int) (short)(-32767 - 1)))))));
        var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_16 [i_8]))));
    }
    /* LoopSeq 3 */
    for (int i_9 = 0; i_9 < 12; i_9 += 1) 
    {
        arr_35 [i_9] = ((/* implicit */short) ((((((/* implicit */int) var_17)) << (((arr_15 [i_9] [i_9]) - (544313742U))))) + ((+((-2147483647 - 1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 12; i_10 += 1) 
        {
            var_30 *= ((/* implicit */short) (-(arr_30 [i_10] [i_10])));
            arr_38 [i_9] [i_9] [(unsigned short)8] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) << (((((/* implicit */int) arr_13 [i_10])) + (20436)))))) ? (((((/* implicit */_Bool) var_12)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)29264))))) : (((((/* implicit */_Bool) var_6)) ? (2597185347U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
            var_31 = ((/* implicit */unsigned short) ((arr_30 [i_9] [i_10]) >> (((((/* implicit */int) arr_13 [i_10])) + (20432)))));
            arr_39 [i_9] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_28 [i_9] [i_9]))));
        }
        for (unsigned short i_11 = 2; i_11 < 11; i_11 += 1) 
        {
            var_32 = ((/* implicit */unsigned int) max((var_32), (((((arr_30 [i_11 - 2] [i_11 - 2]) << (((arr_30 [i_11 + 1] [i_11 - 1]) - (3248108492U))))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_11 - 2] [i_11]))) > (arr_30 [i_11 - 2] [i_11 - 1])))))))));
            var_33 = ((/* implicit */unsigned short) -1469385445);
            var_34 = ((/* implicit */short) ((max((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) arr_43 [i_9] [(unsigned short)4]))))), ((-(((/* implicit */int) arr_28 [i_9] [i_11])))))) << (((/* implicit */int) (((-(0U))) < (((((/* implicit */_Bool) var_15)) ? (var_4) : (var_4))))))));
        }
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 12; i_12 += 1) 
        {
            var_35 = ((/* implicit */int) arr_30 [i_9] [i_12]);
            var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_15))));
            arr_47 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((int) ((612082579U) << (((var_3) - (3101281340U))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_13 = 0; i_13 < 12; i_13 += 1) 
            {
                var_37 = ((/* implicit */long long int) max((var_37), (((((((/* implicit */_Bool) var_7)) ? (arr_36 [i_9] [i_12] [(short)10]) : (((/* implicit */long long int) arr_40 [i_13])))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_9] [i_12])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))))))));
                var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)24168)) : (((/* implicit */int) (unsigned short)32736))))) ? (((((/* implicit */_Bool) 4221999120115332097LL)) ? (2754926426U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_9] [i_12] [i_12]))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                arr_50 [4] &= ((/* implicit */short) ((((arr_41 [i_9] [i_9]) ? (3404452209U) : (var_16))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)(-32767 - 1)))) : (3770576985U)))));
                arr_51 [i_9] [i_9] [i_9] [i_9] = ((/* implicit */signed char) (-(((/* implicit */int) arr_45 [i_9] [i_9] [9U]))));
                var_39 = ((/* implicit */unsigned short) var_9);
            }
        }
    }
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 1) 
    {
        var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) var_5))));
        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) arr_16 [i_14]))));
        arr_54 [i_14] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((arr_44 [i_14] [i_14]), (arr_44 [i_14] [i_14]))))));
        var_42 = ((/* implicit */signed char) ((890515086U) >> (((-5734388050506783058LL) + (5734388050506783073LL)))));
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 2) 
    {
        arr_58 [i_15] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 890515087U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-25538))) : (-7220594953768254962LL))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) : (890515087U))))))));
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)28670)) ? (((/* implicit */int) (unsigned short)46750)) : (((/* implicit */int) (unsigned short)16384))))), (arr_14 [i_15]))))));
        var_44 *= var_10;
        var_45 *= ((((/* implicit */_Bool) var_14)) ? (var_8) : (((((/* implicit */_Bool) (-(261632LL)))) ? (max((2634593274U), (4082756832U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_6), (((/* implicit */short) var_2)))))))));
        arr_59 [i_15] = ((/* implicit */long long int) (+(((/* implicit */int) var_6))));
    }
}
