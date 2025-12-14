/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58334
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
    var_19 = var_12;
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) | (-2806167469586670034LL)))) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)0)), (((((/* implicit */_Bool) (signed char)0)) ? (arr_1 [i_0 + 2]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))))))));
        var_21 = ((/* implicit */long long int) ((_Bool) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11)))), (((((/* implicit */_Bool) (short)-31520)) ? (arr_2 [i_0]) : (var_3))))));
        var_22 = (~(arr_2 [i_0]));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 4; i_2 < 15; i_2 += 1) 
        {
            for (int i_3 = 3; i_3 < 15; i_3 += 1) 
            {
                {
                    var_23 = ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)68)))))), (2224089881520058015ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)3)) && (((/* implicit */_Bool) max((arr_8 [i_1]), (((/* implicit */int) var_7))))))))));
                    var_24 -= ((/* implicit */unsigned long long int) min(((~(((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))))), (((/* implicit */long long int) var_16))));
                    arr_13 [i_1] [i_1] [14LL] = ((/* implicit */long long int) ((var_11) && (arr_5 [i_2 - 2])));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned int i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_18) - (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [2ULL])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */long long int) var_16))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((max((2224089881520058015ULL), (((/* implicit */unsigned long long int) (short)0)))) != (max((16706752751578056626ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_4])))))))) : (-7283413962421051299LL))))));
            /* LoopSeq 3 */
            for (int i_5 = 0; i_5 < 16; i_5 += 1) /* same iter space */
            {
                var_26 = ((((/* implicit */_Bool) max((arr_17 [i_1]), (arr_17 [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_1])) && (((/* implicit */_Bool) -1454970686))))) : (((/* implicit */int) max((arr_17 [i_1]), (arr_17 [i_1])))));
                /* LoopSeq 3 */
                for (short i_6 = 3; i_6 < 14; i_6 += 1) 
                {
                    var_27 = ((/* implicit */int) max((var_27), (((/* implicit */int) var_13))));
                    arr_20 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1])) ? (((((/* implicit */_Bool) (+(arr_10 [i_6] [i_5])))) ? (max((arr_1 [i_4]), (((/* implicit */long long int) arr_5 [i_1])))) : (((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_0))))))) : (min((arr_14 [i_6] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_4] [(_Bool)1])) ? (((/* implicit */int) var_14)) : (-55992758))))))));
                }
                for (signed char i_7 = 0; i_7 < 16; i_7 += 1) 
                {
                    var_28 = ((/* implicit */signed char) ((short) (signed char)5));
                    var_29 += ((/* implicit */int) arr_9 [(signed char)14] [(signed char)14] [(signed char)14]);
                }
                for (int i_8 = 0; i_8 < 16; i_8 += 1) 
                {
                    var_30 = ((((((/* implicit */_Bool) 24)) ? (((/* implicit */int) arr_5 [i_4])) : (((/* implicit */int) arr_5 [i_5])))) != (((/* implicit */int) var_2)));
                    var_31 = ((/* implicit */unsigned short) ((_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1])) ? (var_6) : (3113763207U)))), (((((/* implicit */_Bool) (short)23934)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-102))))))));
                    var_32 = ((int) -482401186);
                    var_33 = ((((7370800329970634254LL) << (((2147483647) - (2147483647))))) - (((/* implicit */long long int) (+(var_16)))));
                }
            }
            for (int i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
            {
                var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((((_Bool)0) ? (((/* implicit */int) (signed char)127)) : (671479760))), ((-(((/* implicit */int) (short)15166))))))) ? ((+(-482401189))) : (((/* implicit */int) var_10))));
                var_35 = ((/* implicit */int) ((arr_19 [i_1] [i_4] [(short)0] [i_1] [(short)0]) ^ (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))));
                var_36 = ((/* implicit */_Bool) max(((+(((/* implicit */int) min(((unsigned short)0), (((/* implicit */unsigned short) (short)32767))))))), (((/* implicit */int) ((((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_4])))))) && (((/* implicit */_Bool) arr_16 [i_4] [13U])))))));
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((+(-314455568)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9])) / (2147483647)))) ? (1007314338) : ((-(var_3)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [i_4] [i_1]))) - ((+(arr_4 [i_4])))))));
                var_38 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_5 [i_1]))))) ? (((/* implicit */int) arr_0 [i_4])) : ((-(((/* implicit */int) arr_5 [i_1]))))));
            }
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_39 = ((/* implicit */_Bool) arr_24 [i_1] [i_4] [i_10] [i_10] [i_10]);
                var_40 ^= ((/* implicit */unsigned long long int) var_10);
                var_41 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_0 [7])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14)))) % (((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_10])) && (((/* implicit */_Bool) arr_15 [i_1] [i_1])))))));
                var_42 = ((/* implicit */int) ((unsigned long long int) var_7));
                arr_29 [i_1] [(short)9] [i_1] = ((/* implicit */long long int) (signed char)96);
            }
        }
        for (unsigned int i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
        {
            var_43 = ((/* implicit */signed char) arr_2 [i_1]);
            var_44 = ((/* implicit */long long int) var_9);
        }
        /* vectorizable */
        for (unsigned int i_12 = 0; i_12 < 16; i_12 += 1) /* same iter space */
        {
            var_45 = ((/* implicit */short) arr_27 [i_1]);
            var_46 = ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)3992))))) * ((+(var_16))));
            var_47 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_18 [15] [i_12] [i_1]))) == ((((_Bool)1) ? (arr_10 [i_1] [i_1]) : (var_1)))));
        }
        for (signed char i_13 = 0; i_13 < 16; i_13 += 1) 
        {
            var_48 = ((/* implicit */unsigned short) max((var_48), (((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (signed char)110)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) : (((long long int) arr_11 [(unsigned short)2] [(unsigned short)2] [i_13])))))))));
            var_49 = ((/* implicit */short) max((var_18), (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1] [3ULL])))))));
            /* LoopSeq 3 */
            for (short i_14 = 3; i_14 < 12; i_14 += 1) 
            {
                var_50 = ((/* implicit */_Bool) arr_18 [i_1] [i_1] [i_1]);
                var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_11 [i_14 + 2] [i_14 + 3] [i_1])) >> (((((((/* implicit */_Bool) arr_12 [i_14 + 1] [i_14 + 4] [i_1])) ? (arr_12 [i_14] [i_14 + 3] [i_13]) : (var_16))) + (1732787747)))));
                var_52 &= ((/* implicit */signed char) arr_30 [i_14 + 4] [i_14 + 4]);
                var_53 = ((short) arr_7 [i_1] [(signed char)9] [i_14]);
            }
            for (signed char i_15 = 3; i_15 < 14; i_15 += 1) 
            {
                arr_42 [i_1] [i_13] [i_1] = ((((/* implicit */_Bool) var_18)) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_17)) : (var_18)))), (arr_28 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (short)2582)))));
                var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) max((max((((/* implicit */int) arr_11 [(short)11] [i_15 - 2] [i_15 + 2])), (882748407))), (((((/* implicit */int) arr_11 [(signed char)1] [i_15 + 2] [i_15 + 2])) % (((/* implicit */int) arr_11 [i_15] [i_15 + 2] [i_15 - 2])))))))));
                arr_43 [i_1] = ((/* implicit */unsigned long long int) (~(((unsigned int) var_3))));
                var_55 ^= ((/* implicit */int) ((long long int) ((short) arr_37 [6LL] [i_15 + 2] [i_15 - 2] [i_15 + 1])));
            }
            /* vectorizable */
            for (long long int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                var_56 = ((/* implicit */long long int) max((var_56), (((/* implicit */long long int) (signed char)88))));
                var_57 = ((/* implicit */short) ((((/* implicit */int) (short)3)) * (((/* implicit */int) (signed char)-1))));
                var_58 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-5955))))) != (((/* implicit */int) var_10))));
            }
        }
    }
    var_59 = ((/* implicit */short) min((var_3), (var_18)));
    var_60 = ((/* implicit */long long int) var_10);
}
