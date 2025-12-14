/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8717
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
    var_18 = ((((/* implicit */_Bool) (unsigned short)41287)) ? (((/* implicit */unsigned long long int) (-(-1709829584)))) : (max((14237317719057100122ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-26122))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                arr_6 [i_2] [(unsigned short)15] [(unsigned short)15] = ((/* implicit */short) arr_2 [i_2] [i_0]);
                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (unsigned char)6))));
            }
            /* vectorizable */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
            {
                var_20 -= (_Bool)0;
                var_21 += ((/* implicit */unsigned int) arr_3 [i_0] [i_1] [i_3]);
            }
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
            {
                var_22 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_4] [i_1]);
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 23; i_5 += 1) 
                {
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */_Bool) ((((arr_7 [i_1] [(_Bool)1] [i_6]) | (((/* implicit */unsigned int) ((/* implicit */int) (short)30020))))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((_Bool) var_7))) : (((var_8) & (((/* implicit */int) (_Bool)1)))))))));
                            var_24 = ((/* implicit */unsigned int) arr_5 [8LL]);
                            var_25 = ((/* implicit */int) ((((/* implicit */_Bool) 4611686009837453312LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : (3157221915193391731ULL)));
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((+(4294967295U))) >> (((/* implicit */int) (_Bool)0))))) ? (18446744073709551597ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [(_Bool)1] [i_4] [16U] [i_4])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_4] [i_0] [i_0])))))))))));
                var_27 = ((/* implicit */short) 2137014859U);
            }
            var_28 = ((/* implicit */int) ((unsigned int) 4059372327U));
            var_29 = ((/* implicit */int) ((var_0) ? (3157221915193391731ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) arr_14 [i_0 + 1] [i_0 - 1] [i_0 - 1] [22] [i_0 - 1])))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (int i_7 = 0; i_7 < 23; i_7 += 4) 
            {
                var_30 = ((/* implicit */int) ((((4059372327U) - (4294967277U))) * (((((/* implicit */_Bool) (unsigned char)191)) ? (4059372327U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_19 [5U])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (3358805826U)));
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 23; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 23; i_9 += 4) 
                    {
                        {
                            arr_26 [i_0 - 1] [i_0 + 1] [11U] [i_0 - 1] [i_0 + 1] = ((((/* implicit */_Bool) (+(3438784741U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)237)))) : (2404452488U));
                            arr_27 [i_9] [15] [i_7] [i_1] [(unsigned char)13] = ((/* implicit */unsigned char) (+(-2730552584981373605LL)));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 23; i_10 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_32 = ((/* implicit */_Bool) 573231023U);
                    arr_34 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (short)-9055)))))));
                    var_33 = ((/* implicit */unsigned int) var_12);
                }
                var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(-2730552584981373605LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) (unsigned short)19580))));
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 21; i_12 += 4) 
                {
                    for (unsigned int i_13 = 3; i_13 < 21; i_13 += 4) 
                    {
                        {
                            arr_39 [i_13] [i_12] [i_12] [i_10] [i_12] [i_1] [i_0 - 1] = ((/* implicit */unsigned long long int) var_11);
                            var_35 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)67))));
                            arr_40 [i_10] [i_10] [i_10] [i_10] [i_10] [i_12] [i_10] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_14))) <= (2943398158U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0 + 1] [i_0 + 1] [i_12 + 1]))) : (var_10)));
                            var_36 = ((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (111836313U));
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11629390280846884645ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (((unsigned int) -728272816445185637LL))));
                var_38 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) >= (1765513652260642294LL)))) / (((/* implicit */int) (unsigned short)24576))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_14 = 4; i_14 < 22; i_14 += 3) 
            {
                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7784093744420034855LL)) ? (-2721051342704533410LL) : (var_9)))) || (((arr_7 [i_0] [(unsigned char)2] [12LL]) != (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 1 */
                for (unsigned int i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    arr_45 [i_0] &= ((/* implicit */_Bool) (((+(arr_41 [i_0] [i_0] [i_0]))) - (0LL)));
                    var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)78))) : (var_6))))));
                }
                var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (unsigned char)2))));
            }
        }
        for (unsigned int i_16 = 2; i_16 < 20; i_16 += 3) 
        {
            var_42 = ((/* implicit */unsigned long long int) var_7);
            arr_48 [i_0 - 1] [(_Bool)1] [(unsigned char)0] = ((/* implicit */_Bool) (-(3358805826U)));
            var_43 &= ((/* implicit */signed char) 2994736143U);
        }
        /* LoopSeq 1 */
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            arr_53 [i_17] [i_0] [i_17] = var_11;
            var_44 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)44))) : (4166521006U))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_0] [(unsigned char)11] [16U] [i_0]))))) | (((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0]))) | (var_11))))));
            var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_17 - 1] [i_17] [i_17 - 1] [i_17 - 1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)110))) / (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0]))) : (((((/* implicit */_Bool) arr_7 [i_17 - 1] [i_0 + 1] [i_0 - 1])) ? (max((((/* implicit */unsigned long long int) 2147483647)), (arr_18 [i_0 + 1] [i_17] [i_17] [i_17]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)118)))))));
            var_46 = ((/* implicit */int) ((((unsigned int) var_11)) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((int) (short)17268)) == (((((/* implicit */_Bool) (signed char)-68)) ? (((/* implicit */int) (short)26982)) : (((/* implicit */int) var_14))))))))));
        }
    }
    var_47 = ((/* implicit */unsigned int) (!((((~(var_6))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1))))))))));
    var_48 = ((/* implicit */signed char) var_5);
}
