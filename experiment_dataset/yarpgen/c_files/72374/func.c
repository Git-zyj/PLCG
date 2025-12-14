/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72374
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
    for (short i_0 = 3; i_0 < 10; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_10 = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned char) 15759062870354611934ULL))));
            arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 2687681203354939682ULL);
            arr_5 [(unsigned short)3] [(unsigned char)9] [i_0] = ((/* implicit */int) var_6);
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            var_11 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */_Bool) 15759062870354611954ULL)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)58)))), (((/* implicit */int) arr_7 [i_0 - 1] [i_0 - 3])))) >= (((/* implicit */int) ((_Bool) (+(((/* implicit */int) arr_7 [i_0] [i_0]))))))));
            var_12 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967280U)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (_Bool)1))));
        }
        /* vectorizable */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
        {
            arr_11 [i_0] [i_0] [i_0] = ((/* implicit */int) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (2588523927024263957ULL)))));
            arr_12 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_9 [i_0]) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0 + 1]))));
            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(210867722U))))));
        }
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned char i_5 = 1; i_5 < 10; i_5 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_14 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) min((arr_10 [i_0 - 2] [i_0 - 3] [i_5 + 1]), (((/* implicit */int) arr_19 [3ULL] [i_0 - 3] [i_5 + 1] [i_0] [i_0] [i_5 - 1]))))), (((var_8) / (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                        arr_21 [i_4] [i_4] [i_4] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 1675854442265054016ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))));
                        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_14 [i_0 - 1] [i_4] [i_5]))))), (((unsigned int) (unsigned char)194))));
                        arr_22 [i_6] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2136674009U)) >= (((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_5 + 1] [i_6])) ? (((((/* implicit */unsigned long long int) 2840416933U)) * (var_2))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 3252672954U))))))));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 10; i_7 += 3) 
                    {
                        var_16 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 16770889631444497579ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32737))) : (1419652049U))), (((((/* implicit */unsigned int) -1)) * (arr_1 [i_0])))));
                        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_1 [4U])) != (max((((/* implicit */unsigned long long int) 616959080U)), (var_4))))))) == ((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned long long int) ((3678008215U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0 - 3] [i_4] [i_5])))))) : (min((13365182618581388313ULL), (((/* implicit */unsigned long long int) arr_20 [i_0] [i_4] [i_0] [i_7] [8LL]))))))));
                        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)103)) ? (((/* implicit */int) arr_13 [i_0 - 3])) : (((/* implicit */int) max((arr_13 [i_0 - 3]), (arr_13 [i_0 - 1]))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned char i_9 = 1; i_9 < 10; i_9 += 2) 
                        {
                            {
                                var_19 |= ((/* implicit */unsigned long long int) 1475909658U);
                                arr_30 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((signed char) ((unsigned char) (signed char)82))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned short) min(((-(2588523927024263957ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (2316318240U) : (616959071U))))));
                    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) (+(16770889631444497584ULL))))));
                }
            } 
        } 
    }
    for (short i_10 = 3; i_10 < 10; i_10 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_11 = 2; i_11 < 9; i_11 += 3) /* same iter space */
        {
            arr_35 [i_11] [i_11] [i_10 - 3] = ((/* implicit */unsigned char) ((unsigned int) 1840977626U));
            arr_36 [i_11] [i_10] [2U] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14))) : (4294967292U)));
            arr_37 [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_10] [i_10 + 1] [i_11])) ? (((/* implicit */int) arr_3 [9] [i_10 - 2] [i_11])) : (((/* implicit */int) arr_3 [i_11] [i_11 - 1] [i_11]))));
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1840977636U)) ? (1675854442265054031ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_10 - 2] [i_11 + 1] [i_11] [i_11 + 1] [i_11])))));
            /* LoopSeq 2 */
            for (unsigned int i_12 = 0; i_12 < 11; i_12 += 4) 
            {
                var_23 &= (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (15759062870354611934ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32751)))))));
                arr_41 [i_10] [i_11] [i_12] [i_10 - 3] = (((~(1330318600U))) * (((/* implicit */unsigned int) 0)));
                var_24 ^= ((/* implicit */unsigned short) arr_31 [i_11]);
            }
            for (int i_13 = 1; i_13 < 8; i_13 += 4) 
            {
                /* LoopNest 2 */
                for (signed char i_14 = 2; i_14 < 10; i_14 += 4) 
                {
                    for (unsigned int i_15 = 2; i_15 < 8; i_15 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)5)) ? (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */int) var_7)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) var_7))))));
                            var_26 = ((/* implicit */unsigned long long int) 1841341369U);
                            arr_50 [i_10 + 1] [i_10] [i_11] [i_10] [i_10] [i_10] = ((unsigned long long int) var_5);
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 16770889631444497571ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_32 [i_11 - 2]))));
                        }
                    } 
                } 
                arr_51 [i_11] [i_11 + 2] [i_11] [i_11 + 1] = ((((/* implicit */_Bool) arr_8 [i_11 + 1] [i_11] [i_11 + 2])) ? (((/* implicit */int) (signed char)-15)) : (((/* implicit */int) arr_8 [i_11 + 1] [i_11] [i_11 - 1])));
                arr_52 [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) arr_28 [i_10] [i_11] [i_13 + 2] [i_10] [9]);
            }
        }
        for (int i_16 = 2; i_16 < 9; i_16 += 3) /* same iter space */
        {
            var_28 -= ((/* implicit */short) (signed char)58);
            var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_16 - 2] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16479))) : (var_1)));
            var_30 = ((/* implicit */_Bool) (+(max((var_8), (((/* implicit */unsigned long long int) arr_48 [i_10 - 2] [i_10 - 2] [i_10] [i_10 - 2] [(signed char)2]))))));
            arr_56 [4] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) (unsigned char)7)) ^ (((/* implicit */int) arr_39 [(unsigned short)10] [(unsigned short)10])))));
        }
        var_31 ^= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))));
    }
    /* vectorizable */
    for (short i_17 = 3; i_17 < 10; i_17 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
        arr_61 [i_17] = ((/* implicit */unsigned char) ((arr_42 [i_17]) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_49 [(short)5] [2U] [i_17] [i_17] [i_17] [i_17 - 3] [i_17]))) ^ (arr_28 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1] [i_17 + 1])))));
        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3761142212632003067LL)) ? (((/* implicit */int) arr_33 [i_17 - 3] [i_17] [i_17 - 1])) : (502387323)));
    }
    for (int i_18 = 0; i_18 < 24; i_18 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_19 = 0; i_19 < 24; i_19 += 4) 
        {
            var_34 = ((/* implicit */_Bool) (~(12072515)));
            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_65 [i_18] [i_19] [i_18])) ? (arr_65 [i_18] [i_18] [i_18]) : (arr_65 [i_18] [i_18] [i_19])));
        }
        for (unsigned long long int i_20 = 2; i_20 < 20; i_20 += 1) 
        {
            arr_71 [i_18] [i_18] [i_20] = ((/* implicit */unsigned char) 2916386444912454729ULL);
            /* LoopNest 2 */
            for (unsigned int i_21 = 1; i_21 < 21; i_21 += 1) 
            {
                for (unsigned char i_22 = 0; i_22 < 24; i_22 += 1) 
                {
                    {
                        var_36 = ((/* implicit */signed char) max((1675854442265054069ULL), ((-(min((12851995993147736142ULL), (((/* implicit */unsigned long long int) (signed char)32))))))));
                        arr_77 [i_18] [i_20] [i_18] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_76 [i_18] [i_20 + 2] [i_20 + 2] [i_21 + 2])))) : (min((3931713620U), (((/* implicit */unsigned int) (unsigned char)38))))));
                        var_37 *= (_Bool)1;
                        var_38 *= ((/* implicit */short) ((unsigned int) ((max((var_8), (16770889631444497584ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
                        var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_66 [i_20 - 2] [i_20] [i_20])) % (((/* implicit */int) arr_70 [(unsigned char)14] [i_20 + 2] [i_20]))))) || (((/* implicit */_Bool) ((2477102940U) >> (((((/* implicit */int) (unsigned short)18637)) - (18620)))))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_23 = 3; i_23 < 23; i_23 += 1) 
            {
                for (short i_24 = 0; i_24 < 24; i_24 += 1) 
                {
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) 1290387222)) / (3098168620U)))) ? (((/* implicit */int) arr_76 [i_18] [i_20] [i_20] [i_23 - 3])) : (609205713)))) ? (min((((/* implicit */unsigned long long int) (unsigned char)0)), (16379264329577195135ULL))) : (min(((+(12277308622127778895ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3085617020U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_62 [i_18])))))))));
                        arr_83 [i_24] [i_18] [10U] [i_18] [i_18] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(var_3)))), ((~(var_1)))));
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_63 [i_20 + 2]))) / (((((/* implicit */_Bool) arr_68 [i_18] [i_20 - 1] [i_18])) ? (1565043607U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))))))) ? (((((/* implicit */_Bool) arr_62 [i_18])) ? (1209350264U) : (arr_73 [i_18] [i_18]))) : (min((1565043607U), (((/* implicit */unsigned int) (_Bool)1))))));
                        var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) (~((+(((/* implicit */int) arr_81 [21] [i_20 + 1] [i_23] [i_23 - 2])))))))));
                        var_43 = ((/* implicit */unsigned char) 17U);
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)34758)) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)0)))))))) : (((((((/* implicit */_Bool) (signed char)125)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [(unsigned char)16] [i_18] [i_18] [(unsigned char)16]))) : (arr_69 [i_18] [i_18]))) << (((/* implicit */int) arr_74 [i_18] [i_18] [i_18])))))))));
        var_45 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_18])) ? (((/* implicit */int) (signed char)-96)) : (((/* implicit */int) (_Bool)1))))) / (((((/* implicit */_Bool) 2496623292030141034ULL)) ? (-2362125131974464596LL) : (((/* implicit */long long int) 2586617644U))))));
        arr_84 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_62 [i_18]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_18] [(short)13] [i_18] [i_18])) ? (((/* implicit */int) arr_75 [i_18] [i_18] [i_18] [i_18])) : (((/* implicit */int) arr_75 [i_18] [i_18] [i_18] [i_18])))))));
        var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_18]))) * (0ULL)))) ? (((min((((/* implicit */unsigned int) (short)32420)), (arr_67 [i_18]))) / (2526382079U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned char)7))))));
    }
    var_47 = ((/* implicit */short) var_7);
    var_48 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13624661404859718663ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_1)))) ? (var_8) : (var_8))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 1613245708U)), (var_8))))))));
    var_49 = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (((min((var_2), (((/* implicit */unsigned long long int) (short)32763)))) * (var_2))));
}
