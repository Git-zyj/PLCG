/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62851
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
    var_10 = var_0;
    /* LoopSeq 2 */
    for (short i_0 = 4; i_0 < 10; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */_Bool) (signed char)107);
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) -854722277)) : (4033638503684434596ULL))) >> (((1464294226U) - (1464294196U)))))) ? (((14ULL) << (((max((((/* implicit */int) var_1)), (-854722277))) + (12152))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) -261996726)) != (var_9)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-31172)) : (var_5))) + (31202))))))));
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (min((-1), (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (2830673070U)));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned long long int) max((6), (((/* implicit */int) (unsigned char)240))))), (((((/* implicit */unsigned long long int) var_6)) / (var_3))))) : (((/* implicit */unsigned long long int) min((var_6), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)247)) : (var_8)))))))));
    }
    for (short i_1 = 4; i_1 < 10; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                var_14 = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) ^ (18446744073709551615ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)63))) > (var_4)))))));
                arr_12 [i_1] [i_2] [i_1 + 1] [i_1 + 1] = ((/* implicit */short) ((((((/* implicit */_Bool) 1464294226U)) ? (var_8) : (((/* implicit */int) var_1)))) <= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (var_0)))));
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */int) (_Bool)1))))) ? (((4194303U) << (((var_0) + (1373531547))))) : (var_2)));
                        arr_19 [i_1] [i_2] [(signed char)0] [i_2] [i_5] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_2))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) > (var_9)))))));
                    }
                    for (short i_6 = 0; i_6 < 12; i_6 += 4) 
                    {
                        arr_24 [i_2] = var_2;
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_9)) : (var_3)))) || (((/* implicit */_Bool) 6ULL)));
                    }
                    var_17 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_4)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_6)))) <= (((/* implicit */long long int) ((((/* implicit */unsigned int) -2147483641)) | (2919203791U))))));
                    arr_25 [i_1] [i_2] [i_2] [i_4] = ((/* implicit */short) (signed char)-1);
                    var_18 = ((/* implicit */int) (signed char)114);
                }
            }
            var_19 = ((min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) var_5)) : (var_4))), (var_4))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((1) | (((/* implicit */int) (short)32767)))))))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 2; i_7 < 8; i_7 += 3) 
            {
                for (unsigned char i_8 = 3; i_8 < 10; i_8 += 4) 
                {
                    for (unsigned short i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)161)) - (((/* implicit */int) (_Bool)1))))) ? (2037410816U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -137066667)) ? (((/* implicit */int) (signed char)109)) : (((/* implicit */int) (_Bool)1)))))));
                            var_21 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_1))) * (((((/* implicit */_Bool) var_1)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))) | (min((((/* implicit */unsigned int) 811858825)), (var_6)))));
                            arr_32 [i_1] [i_2] [(short)1] [i_7 + 3] [i_2] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (min((var_4), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)8)), (var_6))))))));
                            var_22 = ((/* implicit */long long int) var_3);
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 4) /* same iter space */
        {
            arr_35 [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((((((_Bool)1) ? (var_5) : (((/* implicit */int) (signed char)-1)))) + (2147483647))) << (((264241152U) - (264241152U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (max((min((var_6), (((/* implicit */unsigned int) var_5)))), (var_9)))));
            /* LoopNest 3 */
            for (signed char i_11 = 4; i_11 < 8; i_11 += 3) 
            {
                for (short i_12 = 2; i_12 < 10; i_12 += 4) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        {
                            arr_45 [i_13] [i_1 + 2] [i_11] [i_10] [i_1 + 2] = ((/* implicit */short) var_9);
                            var_23 = ((((/* implicit */_Bool) 2830673090U)) ? (18446744073709551602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 12; i_15 += 4) 
            {
                for (signed char i_16 = 4; i_16 < 9; i_16 += 3) 
                {
                    {
                        arr_53 [i_15] [i_15] [i_16] [i_15] = ((/* implicit */unsigned short) min((((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_3))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((1464294223U) != (var_9)))))))), (max((((/* implicit */int) (signed char)-37)), (((((/* implicit */int) (unsigned char)244)) << (((var_2) - (154228685U)))))))));
                        arr_54 [i_16] = ((/* implicit */unsigned char) var_6);
                        /* LoopSeq 4 */
                        for (signed char i_17 = 0; i_17 < 12; i_17 += 4) 
                        {
                            arr_57 [i_16] [i_1 - 2] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-29)) ? (-6605240956634222729LL) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)135))) & (((-6605240956634222729LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) -6605240956634222729LL)) ? (min((((/* implicit */unsigned long long int) 1580457905)), (((((/* implicit */_Bool) 6605240956634222724LL)) ? (((/* implicit */unsigned long long int) var_6)) : (0ULL))))) : (((/* implicit */unsigned long long int) (-2147483647 - 1)))));
                        }
                        for (long long int i_18 = 0; i_18 < 12; i_18 += 1) 
                        {
                            arr_62 [i_18] [i_16] [(short)9] [(_Bool)1] [i_16] [i_16] [i_1] = ((/* implicit */unsigned char) var_4);
                            arr_63 [i_16] = ((/* implicit */_Bool) var_0);
                        }
                        for (unsigned long long int i_19 = 1; i_19 < 9; i_19 += 4) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)13588)) == (((/* implicit */int) (unsigned char)251))));
                            var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) 7545396701990347699LL)) ? (((((/* implicit */_Bool) (unsigned char)244)) ? (((/* implicit */long long int) var_0)) : (7545396701990347694LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)189))))) != ((((_Bool)1) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 2830673090U)) : (7545396701990347686LL))) : (((((/* implicit */_Bool) (short)32753)) ? (((/* implicit */long long int) -854722272)) : (-7545396701990347694LL)))))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */signed char) ((var_8) % (((/* implicit */int) ((((/* implicit */_Bool) 1125625028935680ULL)) || (((/* implicit */_Bool) 1)))))));
                            var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (short)4092))))) + (7545396701990347706LL)));
                        }
                    }
                } 
            } 
            arr_69 [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)112)) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (var_4))) : (((/* implicit */long long int) ((((/* implicit */int) var_7)) >> (((7545396701990347691LL) - (7545396701990347665LL))))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_5) > (((/* implicit */int) var_1)))))) > (((4294967293U) ^ (((/* implicit */unsigned int) 0)))))))) : (min((((5855602069672678574ULL) + (((/* implicit */unsigned long long int) -7545396701990347707LL)))), (((((/* implicit */_Bool) var_5)) ? (10456402036466178054ULL) : (12591142004036873034ULL))))));
        }
        var_29 = ((/* implicit */short) var_0);
    }
    /* LoopNest 2 */
    for (unsigned long long int i_21 = 0; i_21 < 25; i_21 += 1) 
    {
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            {
                var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (max((((((/* implicit */_Bool) (short)-745)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)44981))) : (var_2))), (((/* implicit */unsigned int) var_1))))));
                var_31 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)65520)) : (((/* implicit */int) (unsigned char)64))))) ? (min((((/* implicit */unsigned long long int) 854722300)), (7990342037243373572ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9944)))))) || (((/* implicit */_Bool) (short)22096)));
                arr_74 [i_22] [i_21] = ((/* implicit */unsigned char) 854722277);
            }
        } 
    } 
}
