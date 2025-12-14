/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95427
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
    var_11 = ((/* implicit */unsigned short) ((short) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_8))) - (var_2))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_12 = var_5;
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 11; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_2] [i_2] = ((((((/* implicit */long long int) (+(((/* implicit */int) (signed char)-18))))) >= (var_6))) || (((/* implicit */_Bool) 5768820370830847477LL)));
                    var_13 = ((/* implicit */short) ((var_2) * (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_1 + 1] [i_1 + 1])))))));
                }
            } 
        } 
        var_14 += ((/* implicit */_Bool) (signed char)18);
        /* LoopSeq 3 */
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0]))));
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max(((~(((/* implicit */int) arr_3 [i_4] [i_3] [i_0])))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-77)) || (((/* implicit */_Bool) (short)31849))))))))));
                var_17 |= ((/* implicit */short) min((((/* implicit */long long int) ((max((arr_7 [i_0] [(signed char)8] [i_0]), (((/* implicit */unsigned int) (signed char)-66)))) >> (((((/* implicit */int) (signed char)13)) << (((9223372036854775783LL) - (9223372036854775782LL)))))))), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)54))))) ? (min((arr_9 [i_0] [i_4]), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_3] [i_0])))))));
            }
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_0] [i_3] [i_3]))))) ? (((((/* implicit */_Bool) var_4)) ? (988138124U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)24))))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) arr_13 [i_3] [i_3])))) : ((~(((/* implicit */int) (_Bool)0)))))))));
            arr_16 [i_0] [i_0] = min((524287LL), ((-(-6531640665726819307LL))));
        }
        for (long long int i_5 = 0; i_5 < 12; i_5 += 2) /* same iter space */
        {
            var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? ((+(((/* implicit */int) arr_5 [i_5])))) : (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_5 [i_0]))))));
            var_20 |= ((long long int) min((((((/* implicit */_Bool) arr_17 [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-105)))), (((/* implicit */int) ((_Bool) (signed char)46)))));
            /* LoopSeq 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                arr_21 [i_0] [(signed char)1] [i_6] [i_6] = ((/* implicit */signed char) arr_0 [i_5] [i_6]);
                var_21 |= ((/* implicit */_Bool) min(((short)30148), (((/* implicit */short) (signed char)17))));
                var_22 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_6])) ? (arr_2 [i_5] [i_5] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) (short)-30176)) : (((/* implicit */int) (signed char)-24))))));
                var_23 += ((/* implicit */unsigned int) ((signed char) max((((((/* implicit */_Bool) arr_20 [i_5] [i_5] [i_6] [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_6]))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_5] [i_6])) && (((/* implicit */_Bool) (signed char)-69))))))));
            }
            for (unsigned int i_7 = 3; i_7 < 11; i_7 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 2; i_8 < 11; i_8 += 2) 
                {
                    arr_27 [i_0] [i_5] [i_5] [i_7] [i_7] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_8] [i_5] [i_7] [i_8] [i_8] [i_5]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_15 [i_0] [i_7])), (arr_26 [i_0] [i_5] [i_7] [i_5] [i_5] [i_5])))) : (((/* implicit */int) arr_15 [i_0] [i_5]))));
                    var_24 = ((/* implicit */long long int) (~(((unsigned int) arr_26 [i_8] [i_8] [i_8 - 1] [i_8] [i_8] [i_8 + 1]))));
                    var_25 = ((/* implicit */long long int) var_4);
                }
                var_26 = ((/* implicit */signed char) (-(((/* implicit */int) arr_4 [i_7 + 1]))));
                var_27 = ((/* implicit */unsigned short) var_2);
                /* LoopSeq 2 */
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_28 += ((/* implicit */signed char) var_8);
                    var_29 += ((_Bool) ((var_0) >= (((/* implicit */long long int) 2436587637U))));
                    var_30 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))), (((/* implicit */int) arr_18 [i_7 - 2] [i_7 + 1] [i_7 - 2]))))) ? (((/* implicit */int) (signed char)-61)) : (((/* implicit */int) (_Bool)0))));
                    var_31 += ((/* implicit */signed char) var_1);
                    var_32 += ((/* implicit */long long int) max((((/* implicit */signed char) ((_Bool) var_1))), (var_9)));
                }
                /* vectorizable */
                for (long long int i_10 = 3; i_10 < 11; i_10 += 4) 
                {
                    arr_34 [i_10] = ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) >= (arr_22 [i_7 - 2] [i_10 - 3] [i_10 - 2] [i_10 - 2]));
                    arr_35 [i_0] [i_5] [i_7] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 4294967282U)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_3 [i_10] [i_7 - 2] [i_0]))));
                    var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (signed char)-69))))))));
                }
            }
        }
        for (long long int i_11 = 0; i_11 < 12; i_11 += 2) /* same iter space */
        {
            var_34 = ((/* implicit */long long int) var_4);
            var_35 = min((min((((/* implicit */long long int) var_9)), (((var_1) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_11]))) : (arr_36 [i_0] [i_0] [i_11]))))), (((/* implicit */long long int) ((((/* implicit */int) ((_Bool) var_4))) <= (((/* implicit */int) var_7))))));
            var_36 = ((/* implicit */_Bool) (+(524287LL)));
        }
    }
    /* vectorizable */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        arr_42 [i_12] = ((/* implicit */signed char) ((var_5) ? (arr_41 [i_12] [i_12]) : (arr_41 [i_12] [i_12])));
        var_37 = ((/* implicit */short) var_9);
        arr_43 [(signed char)6] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_40 [(_Bool)1])) * (((/* implicit */int) (short)-31850))))) ? (arr_41 [i_12] [i_12]) : (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)12328))))));
    }
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
    {
        var_38 += (_Bool)1;
        arr_48 [i_13] = (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_3)))))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        arr_51 [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_14])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))))));
        var_39 += ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-122)) ? (((/* implicit */int) arr_45 [i_14])) : (((((/* implicit */_Bool) -7565210867225654573LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_47 [i_14]))))));
        var_40 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_45 [i_14]))))) ? (6191556003134776504LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-69)))));
    }
    var_41 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_3))) > (var_0)));
}
