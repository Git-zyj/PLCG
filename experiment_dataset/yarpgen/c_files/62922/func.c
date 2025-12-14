/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62922
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (signed char)-6);
        arr_3 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) % (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (arr_0 [i_0]))));
    }
    /* LoopSeq 4 */
    for (unsigned char i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((-6426781681811578452LL) + (arr_0 [(unsigned char)20]))) : (((((/* implicit */long long int) arr_6 [7LL])) / (-1701423309137589878LL)))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 6426781681811578458LL)) ? (((/* implicit */int) (signed char)-37)) : (((/* implicit */int) arr_1 [i_1]))))), (min((46097831U), (((/* implicit */unsigned int) arr_1 [i_1]))))))) : (((((((/* implicit */_Bool) (signed char)37)) && ((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [(unsigned char)6]) == (arr_4 [i_1] [i_1]))))) : ((((_Bool)1) ? (-9017076222678086396LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-125)))))))));
        arr_8 [i_1] = ((/* implicit */long long int) (+(46097828U)));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) /* same iter space */
    {
        arr_11 [10ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_10 [i_2] [i_2]))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 46097848U)) ? (15873242635462656801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40605)))))) ? (((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) arr_0 [i_2])) : (arr_10 [i_2] [14LL]))) : (((/* implicit */unsigned long long int) 4294967295LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2])))));
        arr_12 [4U] = ((/* implicit */long long int) 1264051408U);
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)80)) ? (((/* implicit */int) arr_15 [i_3])) : (((/* implicit */int) (unsigned short)61069))));
        arr_17 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 46097841U)) ? (4248869458U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4467)))));
        arr_18 [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_3] [i_3])) % (((/* implicit */int) arr_9 [i_3] [i_3]))));
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_25 [i_4] = max((8061507618306301850LL), (-1LL));
            arr_26 [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_13 [i_4]), (arr_13 [i_4])))) && (((/* implicit */_Bool) arr_13 [i_4]))));
        }
        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 2) 
            {
                arr_31 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_14 [i_7])), (arr_23 [(signed char)4])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4]))) : (((((/* implicit */_Bool) 12341532926317664260ULL)) ? (10449375803609490801ULL) : (arr_19 [i_4] [i_6])))))) ? (min((arr_21 [i_4]), (((/* implicit */long long int) (signed char)35)))) : (max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) 2147483647)) != (72057594004373504ULL)))), (max((((/* implicit */long long int) (signed char)-51)), (6426781681811578435LL)))))));
                arr_32 [i_4] [i_4] [i_6] [i_4] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (short)-27897)) / (((/* implicit */int) arr_28 [i_4])))));
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_39 [i_8] [i_6] [i_6] = 4043765518241728814LL;
                            arr_40 [i_4] [i_6] [i_4] [i_6] [i_9] = ((/* implicit */unsigned char) (short)-596);
                            arr_41 [i_6] [i_6] [i_6] [i_4] [5LL] = ((/* implicit */short) ((long long int) arr_36 [i_4] [i_6] [i_7] [14LL] [i_9]));
                            arr_42 [i_4] [i_6] [i_7] [i_8] [i_7] = ((/* implicit */unsigned char) ((10957002891730221748ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86)))));
                            arr_43 [i_4] [(_Bool)1] [i_4] [i_4] [(_Bool)1] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(6426781681811578446LL)))) ? (arr_21 [i_8]) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */int) (unsigned char)158)) : (((/* implicit */int) arr_9 [i_6] [i_8])))))))), (arr_19 [i_4] [i_4])));
                        }
                    } 
                } 
                arr_44 [i_4] [i_4] [i_4] [(unsigned char)15] = (i_4 % 2 == zero) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (arr_27 [i_7] [i_4]) : (arr_27 [i_4] [i_4]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)35)) >> (((arr_27 [(unsigned short)17] [i_4]) - (6364353548911252611ULL))))))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) arr_27 [i_4] [i_4])) ? (arr_27 [i_7] [i_4]) : (arr_27 [i_4] [i_4]))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)35)) >> (((((arr_27 [(unsigned short)17] [i_4]) - (6364353548911252611ULL))) - (3520989842468532695ULL)))))))));
            }
            for (long long int i_10 = 0; i_10 < 21; i_10 += 2) 
            {
                arr_47 [i_10] [i_10] [i_10] = ((long long int) (~(-6426781681811578452LL)));
                arr_48 [i_4] [i_6] [17LL] [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((min((-4043765518241728804LL), (((/* implicit */long long int) (signed char)-26)))) + (9223372036854775807LL))) << (((min((((/* implicit */unsigned int) arr_35 [i_4] [i_4] [i_10] [i_10])), (2013265920U))) - (2013265920U)))))) < (((((arr_29 [i_4]) + (72057594004373504ULL))) - (min((((/* implicit */unsigned long long int) 1067685710727142117LL)), (15616195351039688856ULL)))))));
            }
            arr_49 [i_4] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) min((10449375803609490806ULL), (((/* implicit */unsigned long long int) 2600718060U))))) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_4]))) < (4043765518241728838LL)))))), (min((((((/* implicit */int) arr_9 [i_4] [i_6])) >> (((arr_29 [i_4]) - (13228995796619232810ULL))))), ((~(((/* implicit */int) arr_24 [i_4]))))))));
            arr_50 [i_4] = ((/* implicit */short) (+(((/* implicit */int) arr_36 [i_4] [i_6] [i_4] [7U] [4LL]))));
        }
        arr_51 [i_4] [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_4] [i_4])) ? (((/* implicit */int) arr_9 [i_4] [i_4])) : (((/* implicit */int) (short)32767)))) >> (((((/* implicit */int) arr_1 [i_4])) + (11533)))));
    }
}
