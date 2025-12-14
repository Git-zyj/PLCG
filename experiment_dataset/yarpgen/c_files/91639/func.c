/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91639
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
    var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (max((((((/* implicit */_Bool) var_0)) ? (var_4) : (var_0))), ((~(var_13))))) : (((/* implicit */unsigned long long int) 7LL))));
    var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_1), ((signed char)-104)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_18)))) ? (((/* implicit */int) var_15)) : (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-98))) == (var_18)))) % (((/* implicit */int) (signed char)-105))))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_8))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 2) 
    {
        var_23 |= arr_1 [i_0 + 1];
        var_24 |= ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_25 |= var_12;
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 3) 
        {
            arr_7 [0LL] |= max((((/* implicit */long long int) ((arr_6 [i_2] [2ULL] [i_1]) == (arr_6 [i_1] [2ULL] [i_2])))), (1046041201916051720LL));
            arr_8 [14LL] [14LL] [i_2] |= max((((/* implicit */long long int) (((+(arr_0 [1ULL]))) >= (arr_0 [i_2])))), ((+(((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-26))) : (arr_0 [i_2]))))));
            /* LoopSeq 4 */
            /* vectorizable */
            for (signed char i_3 = 1; i_3 < 14; i_3 += 1) 
            {
                var_26 |= ((/* implicit */signed char) var_8);
                var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)97)) == (((/* implicit */int) arr_1 [i_3])))))) >= (((long long int) (signed char)0)))))));
                arr_13 [i_1] [i_1] [i_3 + 1] [(signed char)10] |= ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1] [i_3 - 1])) % (((/* implicit */int) arr_4 [i_1] [i_3 + 1]))));
            }
            for (signed char i_4 = 0; i_4 < 17; i_4 += 3) 
            {
                arr_17 [(signed char)10] [i_2] [i_4] |= ((/* implicit */signed char) (((~(((var_4) % (var_16))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) (signed char)12))))))));
                var_28 = ((/* implicit */unsigned long long int) min((var_28), (7873389983690134740ULL)));
            }
            for (signed char i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_19 [i_1] [i_1] [i_1] [i_5]))));
                var_30 |= arr_4 [i_1] [i_1];
            }
            for (signed char i_6 = 0; i_6 < 17; i_6 += 2) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_7 = 0; i_7 < 17; i_7 += 4) 
                {
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((arr_18 [i_1] [i_6] [i_6] [i_7]) >= ((~(var_18))))))));
                    var_32 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) arr_23 [i_1] [i_6] [i_6] [i_7])) : (17154343774204559327ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_7] [i_2])) ? (((/* implicit */int) arr_1 [5LL])) : (((/* implicit */int) arr_1 [21LL])))))));
                }
                for (long long int i_8 = 1; i_8 < 15; i_8 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_9 = 0; i_9 < 17; i_9 += 1) 
                    {
                        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((var_4) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_2] [i_6] [i_9]))))) == (((unsigned long long int) 1292400299504992288ULL)))))));
                        var_34 = ((/* implicit */unsigned long long int) min((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((arr_23 [i_8 + 1] [i_6] [i_8 - 1] [i_8 - 1]) % (((/* implicit */long long int) ((/* implicit */int) (signed char)-98)))))) == ((-(((0ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-46))))))))))));
                    }
                    var_35 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) 4499201580859392ULL))));
                }
                /* vectorizable */
                for (long long int i_10 = 1; i_10 < 15; i_10 += 1) /* same iter space */
                {
                    var_36 |= ((/* implicit */signed char) (((-(((/* implicit */int) (signed char)-115)))) % (((((/* implicit */_Bool) 15LL)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_11))))));
                    arr_34 [i_1] [i_1] [i_6] [i_6] |= var_1;
                    var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_6] [i_2] [14ULL]))) : (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2]))))))));
                }
                var_38 |= arr_22 [(signed char)16];
            }
            var_39 |= ((/* implicit */long long int) max((min((var_13), (((/* implicit */unsigned long long int) ((var_17) == (1837906512903084389ULL)))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 18014398509481968ULL)))))));
            arr_35 [i_1] [0LL] [i_2] |= ((/* implicit */signed char) var_8);
        }
        for (signed char i_11 = 3; i_11 < 16; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_12 = 1; i_12 < 14; i_12 += 4) 
            {
                var_40 |= ((/* implicit */signed char) ((max((arr_29 [i_1] [i_11] [i_12 + 1] [i_11 - 1] [i_11 - 1] [i_12 + 3] [i_11]), (((arr_29 [i_1] [i_1] [i_11 - 1] [i_11 - 2] [i_11 - 2] [i_11] [i_12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)80))))))) == (var_0)));
                var_41 |= ((/* implicit */signed char) max((((long long int) arr_14 [8ULL] [i_12] [i_12 + 1])), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_11)))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                var_42 |= ((((/* implicit */_Bool) arr_22 [i_13])) ? (((((/* implicit */_Bool) arr_9 [14LL] [i_11] [i_11] [14LL])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13]))) / (arr_42 [i_13] [i_1])))));
                var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) (((-(((/* implicit */int) (signed char)65)))) * (((/* implicit */int) var_1)))))));
                var_44 |= (signed char)-7;
                arr_43 [(signed char)12] [(signed char)12] [i_11] |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_11 - 1])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_11 + 1])))));
            }
        }
        for (signed char i_14 = 3; i_14 < 16; i_14 += 1) /* same iter space */
        {
            arr_48 [i_1] [10LL] |= ((/* implicit */signed char) 128849018880LL);
            var_45 = ((/* implicit */signed char) min((var_45), (((/* implicit */signed char) (-(-8662706972130005345LL))))));
            var_46 = ((/* implicit */signed char) max((var_46), ((signed char)87)));
        }
        for (signed char i_15 = 0; i_15 < 17; i_15 += 1) 
        {
            var_47 |= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_15] [i_1]))))) == (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_2)), (var_3)))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                var_48 = ((/* implicit */signed char) max((var_48), (arr_12 [i_16] [i_15] [i_1])));
                arr_55 [i_16] [2LL] [i_1] [2LL] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)127))) : (var_0))), (((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-101))) : (var_16))))))));
                var_49 = ((/* implicit */signed char) min((var_49), (((signed char) (signed char)0))));
            }
        }
        /* LoopSeq 1 */
        for (long long int i_17 = 0; i_17 < 17; i_17 += 2) 
        {
            var_50 |= ((/* implicit */signed char) max((((arr_5 [i_17] [i_17]) % (var_18))), (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_17])))))));
            arr_58 [i_17] |= (signed char)-62;
            var_51 = ((/* implicit */signed char) min((var_51), (((signed char) var_0))));
        }
    }
    for (signed char i_18 = 0; i_18 < 17; i_18 += 3) /* same iter space */
    {
        var_52 = ((/* implicit */signed char) max((var_52), (var_1)));
        var_53 |= ((/* implicit */signed char) (-((~(15005249153046888715ULL)))));
        var_54 |= ((/* implicit */signed char) max((var_16), (((/* implicit */unsigned long long int) ((arr_5 [(signed char)10] [i_18]) == (((/* implicit */long long int) (~(((/* implicit */int) var_11))))))))));
    }
    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) 
    {
        arr_64 [i_19] |= ((/* implicit */signed char) 160471933388852178ULL);
        arr_65 [i_19] [i_19] |= ((/* implicit */signed char) arr_63 [i_19] [(signed char)13]);
    }
    var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) (!(((/* implicit */_Bool) 6479070495036189968ULL)))))));
}
