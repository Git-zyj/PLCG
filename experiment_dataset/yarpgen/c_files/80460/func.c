/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80460
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
    for (unsigned long long int i_0 = 3; i_0 < 11; i_0 += 4) 
    {
        var_19 = ((/* implicit */signed char) ((unsigned short) min((((/* implicit */unsigned char) arr_0 [i_0 + 1])), ((unsigned char)3))));
        /* LoopNest 3 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 15; i_3 += 1) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) ((long long int) -9208346165931461893LL));
                        arr_12 [(unsigned char)7] [(unsigned char)7] [i_2] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((arr_8 [i_0 + 1] [i_0] [i_0 + 1]) | (arr_8 [i_0 + 1] [(short)4] [(unsigned char)4]))))));
                    }
                } 
            } 
        } 
        var_21 = ((/* implicit */int) (+(var_15)));
    }
    /* vectorizable */
    for (unsigned int i_4 = 0; i_4 < 10; i_4 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (short)-31893)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [13ULL])))) << (((arr_9 [i_4] [i_4]) + (7815205318908481661LL)))));
        var_23 -= ((arr_0 [i_4]) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_6));
        arr_17 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_3)));
        arr_18 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)215))))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_4 [i_4] [i_4] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_4])))));
        var_24 = ((/* implicit */unsigned int) max((var_24), ((+(((unsigned int) arr_9 [i_4] [i_4]))))));
    }
    for (unsigned int i_5 = 0; i_5 < 10; i_5 += 4) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 4) /* same iter space */
        {
            var_25 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (short)-31893)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((var_3) / (((/* implicit */long long int) ((/* implicit */int) var_5))))))), (((((/* implicit */_Bool) (short)32752)) ? (((arr_4 [i_5] [i_5] [i_6]) - (((/* implicit */long long int) ((/* implicit */int) (signed char)31))))) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)40)))))))));
            /* LoopNest 3 */
            for (unsigned int i_7 = 0; i_7 < 10; i_7 += 4) 
            {
                for (int i_8 = 2; i_8 < 9; i_8 += 1) 
                {
                    for (int i_9 = 3; i_9 < 7; i_9 += 1) 
                    {
                        {
                            arr_33 [i_9 + 1] [i_6] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((-(arr_15 [i_7]))) << (((((((((/* implicit */int) var_16)) + (arr_6 [i_5] [6LL] [i_8]))) + (247610887))) - (23)))))) ? (((int) var_18)) : ((~(((/* implicit */int) arr_0 [i_5]))))));
                            var_26 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) arr_29 [i_5] [i_5] [i_7] [(unsigned char)0])), ((+(max((var_17), (((/* implicit */unsigned long long int) arr_21 [i_5] [i_6]))))))));
                        }
                    } 
                } 
            } 
            arr_34 [i_5] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)-1578)), (min(((~(var_17))), (max((((/* implicit */unsigned long long int) -4875781675395417853LL)), (arr_22 [6U])))))));
            var_27 = ((/* implicit */long long int) var_17);
        }
        for (long long int i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
        {
            arr_38 [i_5] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)215)), ((short)31900))))));
            var_28 = ((/* implicit */unsigned int) var_5);
        }
        for (long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
        {
            var_29 = max((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (0U)))) ? (((/* implicit */int) var_12)) : (arr_25 [i_11] [i_11] [i_11] [i_11])))), (min((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_5] [i_11])) ^ (((/* implicit */int) var_16))))), ((-(var_3))))));
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                arr_45 [i_12] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((4294967273U), (var_0)))) ? (((((/* implicit */_Bool) arr_13 [i_5] [i_5])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31900))))) : (max((((/* implicit */unsigned int) var_7)), (var_10)))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) arr_8 [i_5] [i_11] [i_12])))))) : (max((min((4294967295U), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_5] [(signed char)7]))) > (var_6))))))));
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_5] [i_5] [i_5] [4ULL] [i_11] [7LL] [i_11]))) : (((((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)43313), (((/* implicit */unsigned short) arr_42 [i_11])))))) % (((((/* implicit */_Bool) (short)-31895)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_10))))))))));
            }
            arr_46 [i_11] [i_5] [i_5] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_16 [i_11])) / (((/* implicit */int) arr_16 [i_5]))))));
            var_31 = ((/* implicit */_Bool) arr_9 [(_Bool)1] [i_11]);
            var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_7 [(_Bool)1] [i_11] [2LL] [(signed char)12])))) ? (((arr_7 [(_Bool)1] [i_11] [i_5] [i_5]) + (((/* implicit */unsigned int) arr_6 [i_5] [i_5] [i_11])))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) var_14)) : (arr_6 [i_5] [i_5] [i_11]))))));
        }
        /* vectorizable */
        for (unsigned short i_13 = 2; i_13 < 6; i_13 += 4) 
        {
            var_33 |= ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_48 [i_5] [i_5] [i_13]))) : (((((/* implicit */_Bool) (unsigned short)32155)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-92))) : (-7829955424580375899LL)))));
            arr_50 [i_5] [i_5] = ((/* implicit */unsigned char) (+(0U)));
            arr_51 [i_5] [i_5] [i_13 - 2] = ((/* implicit */unsigned short) ((4294967295U) > (((/* implicit */unsigned int) -773146702))));
            arr_52 [i_5] [i_13] = ((/* implicit */long long int) 1U);
        }
        arr_53 [i_5] = ((/* implicit */short) arr_32 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]);
    }
    for (unsigned int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)0))) ? (-24) : (((/* implicit */int) (unsigned char)200))));
        var_35 *= ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_14] [i_14]))) + (((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned long long int) -1590981223849272245LL)) : (11145027330107604041ULL)))))));
        /* LoopSeq 3 */
        for (int i_15 = 0; i_15 < 10; i_15 += 1) 
        {
            var_36 *= ((/* implicit */unsigned int) var_8);
            arr_59 [i_14] [i_15] [i_14] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_1)) || ((_Bool)1))) ? (max((((/* implicit */unsigned int) var_8)), (var_0))) : ((+(4294967287U)))))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)4096))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [i_14] [i_14] [i_14]))) : (var_17)))))));
        }
        for (long long int i_16 = 1; i_16 < 6; i_16 += 1) /* same iter space */
        {
            arr_64 [i_16] [i_16 + 4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)4103))) < ((+(-6527241727350316175LL)))))) : ((+(((/* implicit */int) var_16))))));
            var_37 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((arr_15 [i_14]) + (((/* implicit */long long int) 1916308757)))) : (min((1590981223849272244LL), (((/* implicit */long long int) var_2)))))), (((var_3) + (arr_20 [i_14])))));
            var_38 ^= arr_54 [i_14] [i_16 - 1];
        }
        /* vectorizable */
        for (long long int i_17 = 1; i_17 < 6; i_17 += 1) /* same iter space */
        {
            var_39 = var_1;
            arr_67 [8LL] [i_14] [i_17] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 505289057U)) ? (((/* implicit */long long int) ((var_13) ? (var_15) : (4294967295U)))) : ((-(2124307098758478822LL)))));
        }
    }
    var_40 = ((/* implicit */short) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-4090))) : (((long long int) var_3)))) * (((/* implicit */long long int) ((/* implicit */int) var_14)))));
    /* LoopSeq 2 */
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
    {
        var_41 = ((/* implicit */unsigned char) max(((-(((((/* implicit */_Bool) 12988176679428996425ULL)) ? (15793608615330602256ULL) : (((/* implicit */unsigned long long int) var_9)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */int) ((var_1) >= (((/* implicit */long long int) var_2))))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (_Bool)1)))))))));
        /* LoopNest 3 */
        for (int i_19 = 0; i_19 < 14; i_19 += 4) 
        {
            for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                for (short i_21 = 1; i_21 < 13; i_21 += 4) 
                {
                    {
                        var_42 = ((/* implicit */unsigned char) arr_75 [i_21] [8LL] [i_19] [i_18]);
                        arr_82 [i_18] [i_18] [i_18] = ((/* implicit */unsigned int) min((((/* implicit */long long int) arr_70 [i_18])), (((((/* implicit */_Bool) 4701028606071431212LL)) ? (((/* implicit */long long int) arr_8 [i_18] [i_19] [i_18])) : (arr_4 [i_18] [i_18] [i_20])))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_22 = 4; i_22 < 13; i_22 += 4) 
        {
            arr_85 [i_18] [i_18] [i_22] = ((/* implicit */_Bool) var_11);
            var_43 = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
            var_44 = ((/* implicit */unsigned int) arr_73 [(signed char)11] [i_18] [i_22]);
            var_45 += (+(((/* implicit */int) (_Bool)1)));
        }
        arr_86 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((-4701028606071431212LL), (-3814400551408741402LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_75 [i_18] [i_18] [i_18] [i_18]))))) : (-310388447093778692LL)));
    }
    /* vectorizable */
    for (unsigned long long int i_23 = 1; i_23 < 15; i_23 += 4) 
    {
        var_46 = ((/* implicit */long long int) (_Bool)1);
        arr_90 [i_23] = ((/* implicit */int) ((((/* implicit */long long int) (-2147483647 - 1))) / (-1LL)));
        var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) arr_89 [i_23]))));
    }
    var_48 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((var_1) != (-653943909743283936LL))))))) ? (((/* implicit */int) ((((/* implicit */long long int) (+(((/* implicit */int) (short)-1))))) >= ((-(var_3)))))) : (((/* implicit */int) var_5))));
}
