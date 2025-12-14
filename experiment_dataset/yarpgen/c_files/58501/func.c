/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58501
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
    var_14 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) | (((/* implicit */int) (!(((/* implicit */_Bool) -5814663611911151035LL)))))));
    var_15 = ((/* implicit */unsigned int) var_9);
    var_16 ^= ((/* implicit */unsigned long long int) max((-8840863261824406411LL), (((/* implicit */long long int) var_10))));
    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (+(var_8))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) << (((arr_1 [i_0]) - (1774566857U)))))) || (((/* implicit */_Bool) arr_0 [i_0])))))) < (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))))) : (((5814663611911151034LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        var_18 = ((/* implicit */signed char) ((max((((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0]))))))) ^ (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)4)) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) < (5814663611911151026LL)))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            /* LoopSeq 3 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 9; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] [i_3] [i_1] [i_5] [i_1] = ((/* implicit */unsigned long long int) arr_11 [i_1] [i_2] [i_3] [i_4]);
                        var_19 *= ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_4 [i_4])) * (((/* implicit */int) arr_12 [i_3] [i_4] [i_5]))))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_4 + 1])))))));
                    }
                    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) (_Bool)1)))))));
                }
                for (signed char i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    var_22 = ((signed char) ((_Bool) arr_8 [i_1] [i_1]));
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) arr_20 [i_6] [i_3] [i_2] [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 2; i_7 < 7; i_7 += 2) 
                    {
                        arr_25 [i_7] [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)13552);
                        var_24 = ((((/* implicit */long long int) ((/* implicit */int) (signed char)-126))) ^ (8805638629371234724LL));
                    }
                }
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 8752952292484815468ULL)) && (((/* implicit */_Bool) arr_1 [i_1])))))) == (arr_13 [i_1] [i_1] [i_2] [i_1])));
                    arr_28 [i_1] [i_2] [i_1] = arr_20 [i_1] [i_1] [i_3] [i_3];
                }
                for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 2) 
                {
                    var_26 = ((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_9] [i_9] [i_3] [i_3] [i_1] [i_2] [i_1])) ^ (((/* implicit */int) ((signed char) arr_21 [i_1] [i_1] [i_1] [i_1] [i_1])))));
                    /* LoopSeq 4 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_27 ^= ((/* implicit */unsigned int) ((unsigned long long int) ((17197431225515473112ULL) != (((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [i_2] [i_2] [i_3])))));
                        arr_36 [i_1] [i_1] [i_9] [i_1] [i_1] [i_1] &= ((/* implicit */unsigned int) ((signed char) 8805638629371234729LL));
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_37 [i_1] [i_2] [i_3] [i_3] [i_11] [i_1] [i_2])))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned short)25941)) != (((/* implicit */int) (signed char)-36))))))))));
                        var_29 = ((/* implicit */unsigned int) min((var_29), (((/* implicit */unsigned int) (signed char)24))));
                        arr_39 [i_1] [i_1] [i_2] [i_9] [i_11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_37 [i_1] [i_2] [i_2] [i_3] [i_9] [i_11] [i_11]))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_30 = ((/* implicit */signed char) max((var_30), (arr_6 [i_9])));
                        var_31 = ((/* implicit */_Bool) arr_11 [i_1] [i_12] [i_9] [i_9]);
                        arr_44 [i_2] [i_1] [i_3] [i_9] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_9] [i_12]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_32 *= ((/* implicit */long long int) ((_Bool) arr_22 [i_1] [i_2]));
                        var_33 = ((/* implicit */unsigned short) 2842009299912972529ULL);
                        arr_47 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((_Bool) ((_Bool) 8981500192693798860ULL)));
                        arr_48 [i_1] [i_1] [i_3] [i_1] [i_9] = ((/* implicit */unsigned long long int) (_Bool)1);
                    }
                    var_34 ^= ((/* implicit */signed char) (((~(((/* implicit */int) (signed char)124)))) | (((/* implicit */int) ((unsigned short) 9798178689176496592ULL)))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_35 ^= ((/* implicit */_Bool) 3565112500U);
                    arr_51 [i_2] [i_2] [i_3] [i_14] |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                    arr_52 [i_1] = ((/* implicit */_Bool) arr_6 [i_1]);
                    var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((arr_16 [i_14 - 1] [i_2] [i_2] [i_2] [i_14]) <= (arr_16 [i_14 - 1] [i_2] [i_2] [i_2] [i_3]))))));
                }
                for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_37 ^= ((/* implicit */signed char) arr_32 [i_2] [i_3] [i_2] [i_2] [i_2] [i_2]);
                    arr_55 [i_2] |= ((/* implicit */unsigned int) arr_43 [i_2] [i_2] [i_3] [i_2] [i_2]);
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        arr_58 [i_1] [i_1] [i_3] [i_1] [i_16] = ((/* implicit */_Bool) ((237094630103973790ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_3] [i_16] [i_15 - 1] [i_15] [i_16]))));
                    }
                    var_39 |= ((/* implicit */signed char) ((arr_8 [i_15 - 1] [i_15 - 1]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_15 - 1])))));
                    var_40 |= ((/* implicit */_Bool) 729854797U);
                }
                arr_59 [i_3] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_2] [i_2])) ? (((long long int) arr_37 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65123)))));
                arr_60 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) ((4667037365809693178LL) <= (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)19414))) ^ (-5814663611911151027LL)))));
                var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((12140020060426103357ULL) != (((/* implicit */unsigned long long int) -3094220575591742991LL))))) <= (((/* implicit */int) ((1955368189234459469LL) < (-9136811433750569255LL))))));
            }
            for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
            {
                arr_63 [i_1] [i_2] = ((/* implicit */unsigned int) 2624675534430046644ULL);
                var_42 = ((/* implicit */unsigned short) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_1] [i_1]))) | (arr_13 [i_1] [i_1] [i_1] [i_1])))));
                var_43 ^= ((/* implicit */signed char) (_Bool)1);
                arr_64 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned int) ((arr_16 [i_17] [i_1] [i_2] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58444))))));
            }
            for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 1) 
            {
                arr_68 [i_1] [i_2] [i_18] = ((/* implicit */signed char) arr_33 [i_18] [i_2] [i_2] [i_1] [i_1]);
                arr_69 [i_1] [i_2] [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_62 [i_1] [i_1])) || (((/* implicit */_Bool) arr_1 [i_1]))));
            }
            var_44 = ((/* implicit */_Bool) max((var_44), (((((/* implicit */_Bool) 15791058352210127909ULL)) || (((/* implicit */_Bool) arr_31 [i_2] [i_1] [i_1]))))));
            arr_70 [i_1] = ((/* implicit */signed char) (~(((unsigned long long int) arr_30 [i_1] [i_1] [i_2] [i_1] [i_1]))));
            arr_71 [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_31 [i_2] [i_1] [i_1]))))) && (((/* implicit */_Bool) 2624675534430046632ULL))));
        }
        var_45 += ((/* implicit */signed char) (unsigned short)16229);
        arr_72 [i_1] = ((/* implicit */_Bool) ((long long int) (signed char)26));
        /* LoopNest 2 */
        for (unsigned long long int i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            for (long long int i_20 = 0; i_20 < 10; i_20 += 2) 
            {
                {
                    var_46 = ((/* implicit */unsigned short) (~(2832622751834079750LL)));
                    var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))))));
                    var_48 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [i_1] [i_19] [i_20] [i_1] [i_20] [i_1] [i_19])) <= (((/* implicit */int) arr_20 [i_1] [i_19] [i_20] [i_1]))));
                }
            } 
        } 
    }
    for (long long int i_21 = 3; i_21 < 10; i_21 += 3) 
    {
        arr_79 [i_21 - 2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((arr_1 [i_21]), (((/* implicit */unsigned int) arr_77 [i_21 + 1])))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_21]))))))) ^ (arr_78 [i_21 - 1])));
        var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) (signed char)-22)), ((-(arr_1 [i_21 - 2]))))))));
    }
}
