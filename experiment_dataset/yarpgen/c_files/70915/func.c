/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70915
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned int) var_4);
                        arr_11 [i_2] [i_3] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) ((-3618881307913964101LL) != (((/* implicit */long long int) arr_10 [i_0])))))))));
                        arr_12 [i_0] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1011938122307216074ULL))))), (0U)))) && (((/* implicit */_Bool) min((17434805951402335542ULL), (((/* implicit */unsigned long long int) 3334413259U)))))));
                        var_21 = ((/* implicit */long long int) arr_2 [i_3] [7U] [i_1]);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_15 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (~(14680064U)))), (1011938122307216070ULL)));
                        var_22 = ((/* implicit */long long int) 1011938122307216040ULL);
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        var_23 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_9 [i_5] [i_1] [i_1] [i_1] [i_0 + 1])) ? (arr_9 [i_5] [3LL] [i_5] [i_0 + 1] [i_0 + 1]) : (arr_9 [5LL] [i_0] [i_0 + 1] [i_0] [i_0 + 1])))));
                        arr_20 [13U] [(signed char)23] [i_2] [i_5] = ((/* implicit */unsigned int) ((arr_2 [i_2] [(_Bool)0] [i_0]) == (arr_2 [i_5] [i_1] [i_0 - 1])));
                    }
                }
            } 
        } 
    } 
    var_24 |= ((/* implicit */short) (((~(var_9))) << (((max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) var_16)) : (var_2))), ((+(var_2))))) - (2895595890LL)))));
    /* LoopSeq 1 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    {
                        arr_33 [i_6] [i_7] [(_Bool)0] [i_7] [i_6] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((2989238500U) - (((/* implicit */unsigned int) arr_2 [i_6] [i_7] [i_8]))))))) || (((/* implicit */_Bool) (~((~(((/* implicit */int) var_0)))))))));
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) arr_16 [i_6] [i_7] [i_8] [i_8] [i_9] [i_6]))));
                    }
                } 
            } 
            arr_34 [i_6] [i_6] = ((/* implicit */unsigned short) ((min((((/* implicit */long long int) arr_24 [(unsigned char)9] [i_7])), (((((/* implicit */_Bool) -9118747182895902184LL)) ? (arr_29 [i_6] [i_7] [i_6] [i_7]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-4))))))) <= (((arr_26 [i_7] [i_7] [1U]) + (var_2)))));
            arr_35 [8LL] [(unsigned short)2] |= ((/* implicit */long long int) 1011938122307216040ULL);
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 1; i_11 < 21; i_11 += 1) 
                {
                    {
                        arr_43 [i_11 + 1] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (arr_38 [i_11] [i_7])))) ? (((17434805951402335546ULL) + (((/* implicit */unsigned long long int) arr_8 [i_11] [2U] [i_10] [i_10] [i_6])))) : (((/* implicit */unsigned long long int) arr_40 [i_11 + 1] [i_6] [13ULL] [i_11 + 1])))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1011938122307216024ULL)) ? (((/* implicit */long long int) 21U)) : (var_14)))) && (((/* implicit */_Bool) arr_28 [i_10] [i_6]))))))));
                        var_26 = ((/* implicit */unsigned short) max((max((((/* implicit */unsigned long long int) (unsigned char)24)), (min((1011938122307216040ULL), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((unsigned char) arr_22 [i_6] [i_6]))), (max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535))))))));
                        var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) -5555346096529903242LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)49268))))) - (((arr_25 [(unsigned short)9] [i_7] [i_10]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)56506))) : (4294967295U)))))), (max(((~(var_10))), (((/* implicit */long long int) var_19)))))))));
                    }
                } 
            } 
        }
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 3) /* same iter space */
        {
            arr_47 [i_6] [i_6] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_29 [i_6] [i_6] [i_6] [i_12])) <= (70368744177408ULL))))));
            var_28 |= ((/* implicit */unsigned char) (((!(((4088U) == (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))) ? (((/* implicit */unsigned long long int) 4294967295U)) : (min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_6] [i_6] [i_12] [i_6])), (arr_13 [1U] [1U] [i_6] [i_12] [22U])))), (min((((/* implicit */unsigned long long int) arr_30 [i_6] [(short)10] [i_6] [i_12] [(short)10] [i_12])), (16269293051102189645ULL)))))));
        }
        var_29 = ((/* implicit */unsigned long long int) (((~(arr_22 [i_6] [i_6]))) != (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [i_6] [i_6] [i_6] [i_6] [8U] [8U])))))));
    }
    /* LoopSeq 2 */
    for (long long int i_13 = 2; i_13 < 11; i_13 += 1) 
    {
        arr_50 [i_13] [i_13] = ((/* implicit */unsigned short) (+((~(max((var_2), (((/* implicit */long long int) 2889916671U))))))));
        arr_51 [(unsigned char)2] [i_13] = ((/* implicit */short) arr_6 [i_13] [i_13 - 2] [i_13 + 1] [i_13]);
    }
    for (unsigned short i_14 = 0; i_14 < 16; i_14 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (((!((_Bool)0))) && (((/* implicit */_Bool) 18446744073709551606ULL))))), (-5555346096529903266LL)));
        var_31 ^= ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (short)10220))) ^ (((((/* implicit */unsigned int) var_3)) ^ (597773126U)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 3; i_15 < 15; i_15 += 3) 
        {
            for (unsigned int i_16 = 0; i_16 < 16; i_16 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) min((var_32), ((-(arr_0 [i_15 - 3] [i_15 - 2])))));
                    /* LoopSeq 3 */
                    for (unsigned int i_17 = 0; i_17 < 16; i_17 += 3) /* same iter space */
                    {
                        var_33 = 5555346096529903242LL;
                        /* LoopSeq 3 */
                        for (long long int i_18 = 0; i_18 < 16; i_18 += 4) 
                        {
                            var_34 = ((/* implicit */signed char) arr_21 [i_15 - 1]);
                            arr_65 [i_18] [i_16] [i_16] [i_16] [(unsigned short)10] = min((((/* implicit */long long int) ((unsigned char) max((2519659528U), (((/* implicit */unsigned int) (short)32754)))))), (((((-5555346096529903258LL) + (9223372036854775807LL))) >> (((/* implicit */int) var_8)))));
                            var_35 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((var_19) ? (((/* implicit */int) (short)10220)) : (var_3)))))))));
                        }
                        for (unsigned short i_19 = 4; i_19 < 15; i_19 += 2) 
                        {
                            var_36 += ((/* implicit */unsigned short) ((min((((/* implicit */unsigned long long int) 3334413250U)), (arr_67 [i_15 + 1] [15LL] [i_16] [i_17] [i_19 + 1] [i_17] [i_19 + 1]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_15 + 1] [i_19]))))))));
                            arr_68 [i_16] [i_17] [(unsigned short)12] [i_15] [i_16] = ((/* implicit */short) (+(-5555346096529903283LL)));
                            arr_69 [(short)8] [i_15] [i_15 + 1] [i_17] [i_16] [i_14] [(short)8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_55 [i_19 - 1] [i_19]))))) ? ((+(((/* implicit */int) arr_14 [i_15 + 1] [i_15 - 2])))) : ((+(((/* implicit */int) arr_55 [i_19 - 4] [i_19 - 3]))))));
                            var_37 = ((/* implicit */unsigned short) max((var_37), (((/* implicit */unsigned short) arr_38 [i_15] [i_19 - 3]))));
                        }
                        for (short i_20 = 0; i_20 < 16; i_20 += 1) 
                        {
                            arr_74 [i_16] [i_15] [i_16] [i_14] [i_14] [i_15] [i_16] = ((/* implicit */int) (-(1695468385552880477LL)));
                            var_38 |= ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned short) (_Bool)1)))));
                            var_39 = ((/* implicit */long long int) (+(((int) (!(((/* implicit */_Bool) var_3)))))));
                            var_40 = ((/* implicit */unsigned short) 2165488618522457532LL);
                            var_41 = ((/* implicit */unsigned char) -6676534751785189783LL);
                        }
                    }
                    for (unsigned int i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned short) min((((((/* implicit */long long int) 3047201449U)) | (-2165488618522457546LL))), (((/* implicit */long long int) ((unsigned short) arr_10 [i_14])))));
                        arr_77 [i_14] [(unsigned short)2] [10ULL] [i_16] [10ULL] [0LL] |= ((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned short) 2165488618522457546LL))), (var_2)));
                    }
                    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 3) 
                    {
                        arr_82 [i_16] [i_15] [i_16] [i_16] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_15 - 3] [15LL] [i_15]))))) ? ((+(max((((/* implicit */long long int) 1247765872U)), (-6676534751785189783LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_25 [i_16] [i_16] [i_14])))))));
                        var_43 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16383LL))));
                    }
                }
            } 
        } 
    }
}
