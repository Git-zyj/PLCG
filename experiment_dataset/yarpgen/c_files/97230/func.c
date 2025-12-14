/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97230
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
    /* LoopSeq 4 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_2 [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) || (arr_2 [i_0] [i_0])));
        arr_3 [12LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1008536694U)) ? (arr_0 [i_0]) : (((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) << (((12) - (12)))))))) ? (arr_0 [20U]) : (((((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))) + (2147483647))) >> (((var_9) + (737383050157428378LL)))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) (+((-(((/* implicit */int) (unsigned char)124))))));
        /* LoopSeq 4 */
        for (short i_1 = 3; i_1 < 20; i_1 += 4) 
        {
            var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_1 + 2])) ? (max((((/* implicit */unsigned int) arr_1 [i_0])), (580479185U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [(_Bool)1])))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) arr_0 [i_1]))))) ? (((/* implicit */long long int) min((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])), (7)))) : (((arr_6 [i_0] [(short)11] [i_0]) ? (arr_5 [i_0] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_1])))));
            var_16 ^= ((/* implicit */unsigned char) arr_0 [i_0]);
            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_1] [i_0])), (arr_0 [6])))) ? (((/* implicit */int) arr_6 [(short)16] [i_0] [i_0])) : (((/* implicit */int) (!(arr_2 [(_Bool)1] [i_1 + 4]))))));
        }
        /* vectorizable */
        for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (~((+(((/* implicit */int) var_7)))))))));
            arr_10 [i_2] = ((/* implicit */short) arr_0 [i_2]);
            var_19 *= ((/* implicit */_Bool) (+(((int) arr_5 [i_2] [1ULL]))));
            arr_11 [i_2] = ((/* implicit */_Bool) (-(arr_9 [i_0] [i_0])));
        }
        for (int i_3 = 2; i_3 < 20; i_3 += 3) 
        {
            var_20 = ((/* implicit */long long int) ((unsigned short) ((arr_9 [i_3 + 1] [i_3 + 1]) < (arr_9 [i_3 + 1] [i_3]))));
            /* LoopSeq 1 */
            for (long long int i_4 = 1; i_4 < 22; i_4 += 4) 
            {
                arr_18 [i_3] = ((/* implicit */unsigned long long int) arr_15 [i_0]);
                arr_19 [i_3] = ((/* implicit */int) arr_2 [i_3 - 1] [i_3 - 1]);
                var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) var_8))) ? (max((((/* implicit */int) (unsigned char)131)), (arr_0 [i_3]))) : (arr_0 [8U])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_3 + 1] [i_3 + 4]))))) : ((((+(arr_16 [i_0] [i_3] [(short)5]))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-7218725420756217948LL) == (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_0])))))))))));
                var_22 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((signed char) arr_2 [i_4] [i_4 - 1]))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) -30)) && (((/* implicit */_Bool) (short)960)))))) : (min((arr_7 [i_0]), (((/* implicit */unsigned int) (_Bool)1)))))), (((/* implicit */unsigned int) ((unsigned char) var_4)))));
            }
            var_23 = ((int) (~(((((/* implicit */_Bool) arr_16 [(unsigned short)17] [(unsigned short)17] [i_3 + 1])) ? (((/* implicit */int) arr_13 [i_3])) : (((/* implicit */int) arr_13 [i_3]))))));
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                /* LoopNest 2 */
                for (int i_6 = 4; i_6 < 23; i_6 += 2) 
                {
                    for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (short)32767)), (((unsigned short) arr_25 [i_6 - 3] [i_3] [i_3] [i_3 + 1]))));
                            var_25 = ((/* implicit */_Bool) arr_20 [i_7] [i_5] [(unsigned short)2]);
                        }
                    } 
                } 
                var_26 = ((/* implicit */int) (signed char)-124);
            }
            for (long long int i_8 = 3; i_8 < 21; i_8 += 2) 
            {
                var_27 = ((/* implicit */short) (~((-(((((/* implicit */_Bool) (unsigned short)28510)) ? (-20) : (arr_0 [i_0])))))));
                arr_29 [i_0] [i_3] [20] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483621)) ? (((((/* implicit */_Bool) -387454920655267673LL)) ? (arr_16 [i_0] [17U] [i_0]) : (((/* implicit */unsigned long long int) arr_25 [i_8] [i_3] [i_3] [(unsigned char)4])))) : (arr_16 [i_3 + 2] [i_8 + 1] [i_8 - 3]))))));
            }
        }
        for (short i_9 = 0; i_9 < 24; i_9 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (5852773017279080153ULL))), (((/* implicit */unsigned long long int) ((long long int) -3630036929726530644LL)))))) ? (((int) 1097041318)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_17 [i_0] [(unsigned char)6] [(_Bool)1]) : (((/* implicit */long long int) arr_25 [i_0] [22] [10] [i_0]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) arr_14 [i_9])), ((unsigned short)52469)))) : (arr_21 [i_0] [(unsigned char)14] [i_9])))));
            arr_34 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_14 [16ULL])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((((/* implicit */unsigned long long int) 65535U)) + (549755813887ULL))))) >> (((((/* implicit */int) ((short) arr_21 [i_0] [(unsigned short)0] [i_9]))) + (21669)))));
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [(short)3] [i_9] [i_9] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)49857)), (arr_0 [i_0]))))))) : (((int) min((arr_5 [i_0] [i_9]), (((/* implicit */long long int) arr_28 [3ULL] [i_9] [i_0])))))));
        }
        var_30 = ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0]);
    }
    for (short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
    {
        var_31 *= ((/* implicit */short) max((((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 5852773017279080154ULL)) ? (arr_5 [i_10] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))))), (((((unsigned long long int) arr_23 [i_10])) << (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_10])))))))));
        arr_37 [9] &= min((2147483621), (((/* implicit */int) arr_35 [i_10])));
        var_32 = ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) arr_14 [16U]))))) + (((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [8LL] [i_10] [i_10])) << (((/* implicit */int) arr_6 [i_10] [i_10] [i_10]))))) ? (max((((/* implicit */long long int) arr_27 [i_10])), (arr_9 [i_10] [i_10]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1020)) != (5852773017279080153ULL)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            arr_40 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_10] [i_11])) ? (((/* implicit */int) arr_12 [i_11] [i_11])) : (((/* implicit */int) (_Bool)1))));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_33 = ((((((/* implicit */int) arr_35 [5])) & (((/* implicit */int) (short)-3869)))) >> (((((int) var_4)) - (1830578923))));
                var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (short)8927))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
            {
                for (signed char i_14 = 0; i_14 < 24; i_14 += 4) 
                {
                    {
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) << (((/* implicit */int) arr_15 [i_10]))))) ? (((/* implicit */int) ((unsigned char) var_5))) : (arr_0 [i_10])));
                        var_36 = var_10;
                    }
                } 
            } 
        }
    }
    for (short i_15 = 0; i_15 < 24; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (short i_16 = 1; i_16 < 22; i_16 += 4) 
        {
            arr_51 [i_15] [10U] [i_16] = ((/* implicit */int) min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)0))))), (((arr_17 [i_16 - 1] [i_16 + 1] [i_16 + 1]) - (36028797018963968LL)))));
            var_37 = ((/* implicit */int) (short)1159);
            var_38 = ((/* implicit */int) max((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2080374784U)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) arr_43 [i_15] [i_15] [i_15] [i_16 + 2])) ? (6291456) : (((/* implicit */int) arr_6 [i_15] [i_15] [i_15]))))))) ? (-1590749124) : (((int) (~(((/* implicit */int) (unsigned char)16)))))))));
        }
        /* vectorizable */
        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
        {
            arr_54 [i_17] = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_48 [6])) ? (((/* implicit */unsigned int) arr_49 [i_17] [i_17] [i_17])) : (127U))));
            arr_55 [i_17] [i_17] [i_17] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_15] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (-3630036929726530644LL)))) - (((arr_20 [i_15] [i_17] [i_17]) / (((/* implicit */unsigned long long int) arr_28 [i_15] [i_17] [i_17]))))));
            var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_17])) ? (((/* implicit */int) ((short) arr_31 [i_15] [i_17]))) : (((arr_52 [i_15] [(unsigned short)4] [i_15]) ? (((/* implicit */int) arr_27 [i_15])) : (((/* implicit */int) arr_44 [i_17] [(unsigned short)9] [i_15] [(unsigned char)12])))))))));
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 24; i_19 += 3) /* same iter space */
            {
                var_40 -= ((/* implicit */unsigned long long int) (!(arr_15 [i_15])));
                var_41 = (~((+(((/* implicit */int) var_7)))));
            }
            for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) /* same iter space */
            {
                arr_64 [i_15] [i_15] [i_20] = ((/* implicit */short) ((long long int) arr_53 [i_15] [i_15]));
                var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)951)) ? (((/* implicit */long long int) 4087711812U)) : (6657599512359164023LL))))));
            }
            arr_65 [i_15] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_9 [i_18] [i_15])))) ? (arr_26 [i_15] [i_18] [i_18]) : (((/* implicit */int) var_12))));
            /* LoopSeq 3 */
            for (short i_21 = 0; i_21 < 24; i_21 += 4) 
            {
                var_43 = ((/* implicit */int) ((unsigned int) var_11));
                arr_68 [i_15] [i_18] [i_15] = ((/* implicit */int) arr_31 [i_15] [i_18]);
            }
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                var_44 &= ((/* implicit */unsigned short) arr_48 [i_18]);
                var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (-(((/* implicit */int) arr_44 [i_18] [i_18] [i_18] [i_18])))))));
            }
            for (int i_23 = 0; i_23 < 24; i_23 += 1) 
            {
                var_46 = ((/* implicit */unsigned int) var_2);
                var_47 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((arr_73 [i_18] [i_15] [i_23] [i_18]) ? (((/* implicit */unsigned long long int) arr_23 [i_18])) : (arr_42 [i_15] [15] [i_18] [21U])))) ? (arr_32 [i_18] [(short)3] [i_23]) : (var_11)));
                arr_75 [i_15] [i_18] [20U] = ((/* implicit */_Bool) arr_31 [i_18] [i_15]);
            }
            arr_76 [i_18] = (~(((/* implicit */int) (short)32562)));
        }
        for (signed char i_24 = 0; i_24 < 24; i_24 += 4) /* same iter space */
        {
            arr_80 [i_15] [i_15] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((short) var_3))) >= (((31) << (((/* implicit */int) (unsigned char)8))))));
            /* LoopSeq 1 */
            for (int i_25 = 0; i_25 < 24; i_25 += 3) 
            {
                var_48 = var_6;
                var_49 -= ((/* implicit */unsigned int) ((_Bool) ((long long int) (short)1168)));
                arr_83 [i_24] [i_24] [i_25] = ((/* implicit */int) ((((arr_15 [i_25]) ? (((/* implicit */int) arr_15 [i_15])) : (((/* implicit */int) (signed char)1)))) != (((arr_28 [i_15] [i_15] [i_15]) & (((/* implicit */int) arr_14 [i_25]))))));
            }
        }
        var_50 = ((/* implicit */unsigned int) max((var_50), (((/* implicit */unsigned int) (-(((((/* implicit */int) arr_35 [i_15])) << (((var_9) + (737383050157428366LL))))))))));
        var_51 = ((/* implicit */int) max((var_51), (((/* implicit */int) (-9223372036854775807LL - 1LL)))));
    }
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_27 = 2; i_27 < 23; i_27 += 2) 
        {
            arr_89 [i_26] [i_27 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_85 [i_27 - 2] [i_27 + 1]), (((/* implicit */unsigned short) var_8))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_86 [i_26]), (((/* implicit */int) arr_87 [i_26] [i_27]))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13759))) : (arr_84 [i_26]))))));
            arr_90 [(_Bool)0] = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_86 [i_27])) + (min((-36028797018963946LL), (((/* implicit */long long int) arr_85 [i_27 + 1] [i_27 + 2]))))));
            var_52 *= ((/* implicit */short) min((((/* implicit */int) arr_87 [i_27 + 2] [i_27 - 1])), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_85 [i_27 + 1] [i_27 + 2])) : (((/* implicit */int) arr_87 [i_27 + 1] [i_27 + 2]))))));
        }
        var_53 = ((/* implicit */short) (+((~(((/* implicit */int) arr_85 [i_26] [i_26]))))));
    }
    var_54 = ((/* implicit */long long int) (!(var_10)));
    var_55 = ((/* implicit */unsigned short) (short)8191);
    var_56 = ((/* implicit */unsigned short) min((((/* implicit */int) var_3)), (var_13)));
}
