/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7947
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(short)16] [16U] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (2287681008U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0]))) : (0U)))));
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (signed char)126))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_2 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
    {
        var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) == (arr_1 [i_2])))) >> ((((-(((/* implicit */int) arr_8 [(short)8])))) + (18472))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_8 [8ULL])) : (((/* implicit */int) arr_10 [10U] [i_3] [i_3]))))) ? (arr_11 [i_2] [(_Bool)1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned char)112)))))))));
            arr_14 [i_2] [i_3] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_3]))));
        }
        arr_15 [i_2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) ((unsigned short) (short)0))) ? (min((8517605814715059470LL), (((/* implicit */long long int) (short)3350)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) >= (((/* implicit */int) (signed char)-127))))))))));
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((min((((((/* implicit */_Bool) arr_13 [10ULL])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (var_0))), (min((((/* implicit */long long int) 2287681008U)), (144115188075855871LL))))), (((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)145)) ? (3797420472U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
    }
    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
        {
            var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_4] [i_5] [8ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_16 [(unsigned short)9])), (arr_5 [i_4] [i_5]))))) : (max((3405103233U), (((/* implicit */unsigned int) arr_16 [i_4]))))));
            arr_21 [(signed char)6] [(short)10] = arr_11 [10ULL] [6] [i_5];
            arr_22 [i_5] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((((/* implicit */_Bool) arr_2 [4ULL] [(short)12] [(short)4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [10LL]))) : (arr_4 [i_5] [3LL] [i_4]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) arr_0 [i_5])) : (((/* implicit */int) arr_8 [(_Bool)1])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-74))) : (((((/* implicit */_Bool) min((3405103233U), (((/* implicit */unsigned int) arr_0 [i_4]))))) ? (((unsigned long long int) arr_16 [i_4])) : (((/* implicit */unsigned long long int) max((arr_9 [(short)2]), (((/* implicit */long long int) arr_18 [i_4])))))))));
            arr_23 [(signed char)3] [(_Bool)1] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5] [5])) ? (arr_9 [4U]) : (arr_13 [8U])))) ? (max((((/* implicit */long long int) arr_11 [4U] [10] [6U])), (-903449253396983619LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 903449253396983619LL)) ? (((/* implicit */int) arr_2 [i_4] [8U] [2ULL])) : (((/* implicit */int) arr_17 [i_4] [i_5]))))))) + (((((/* implicit */_Bool) ((((/* implicit */_Bool) 889864074U)) ? (((/* implicit */int) arr_17 [i_4] [i_4])) : (((/* implicit */int) arr_5 [i_5] [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))) : (arr_9 [2])))));
            /* LoopNest 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            arr_31 [i_4] [1U] [i_6] [i_7] [i_8] = ((0U) < (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */int) arr_16 [i_4]))))))))));
                            var_19 += ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45363))) : (10633411222986971444ULL)))) ? (arr_24 [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_4] [i_5])) << (((1179058256780002353LL) - (1179058256780002347LL))))))))) || (((/* implicit */_Bool) ((arr_29 [i_4] [i_4] [i_4] [i_4] [i_4]) ? (67106816U) : (((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (2007286287U))))))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
        {
            arr_35 [i_4] = ((/* implicit */signed char) (~((~(((/* implicit */int) arr_20 [i_4] [i_4] [i_4]))))));
            arr_36 [i_9] &= ((/* implicit */unsigned char) (+(((/* implicit */int) ((2621106220U) < (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_4] [i_9] [i_9]))))))));
        }
        for (long long int i_10 = 3; i_10 < 9; i_10 += 3) 
        {
            var_20 = ((/* implicit */unsigned short) ((-4958253935439967314LL) <= (((/* implicit */long long int) 1403944645U))));
            var_21 |= ((/* implicit */short) ((((/* implicit */_Bool) (+(max((arr_9 [(signed char)8]), (70368744177663LL)))))) ? (var_9) : (min((((((/* implicit */_Bool) var_4)) ? (2070259575967374843ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_4] [i_10 - 2]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (2663349035365036102LL))))))));
            /* LoopNest 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                for (short i_12 = 4; i_12 < 9; i_12 += 3) 
                {
                    {
                        var_22 ^= ((((/* implicit */_Bool) (~(3821048522U)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-30))))) : (min((((/* implicit */unsigned long long int) var_10)), (max((((/* implicit */unsigned long long int) (short)-2257)), (4397180290210170650ULL))))));
                        var_23 = min((((/* implicit */long long int) ((((/* implicit */_Bool) 4958253935439967314LL)) ? (190935933) : (((/* implicit */int) (unsigned short)6542))))), (min((70368744177663LL), (((/* implicit */long long int) (unsigned char)197)))));
                        arr_47 [i_12] [i_10] [i_10] [i_4] = ((/* implicit */unsigned long long int) min((((max((((/* implicit */long long int) var_8)), (arr_13 [i_10]))) * (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), (arr_30 [i_4] [i_10 - 2] [(signed char)9] [i_11]))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (2319256099U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)3)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) * (3979481635U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_16 [(_Bool)1]))))))))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) (((_Bool)0) ? (((/* implicit */int) arr_27 [i_4] [i_4] [i_10 - 1] [i_10] [(short)0] [i_12 - 4])) : (1879879989))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) -963661637)) ? (12876041449768751180ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))))));
                    }
                } 
            } 
        }
        arr_48 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(844783501484608426LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)44)))) || (((/* implicit */_Bool) (-(((/* implicit */int) arr_41 [6U]))))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-107)))))) ^ (((((/* implicit */_Bool) (signed char)126)) ? (2319256121U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [3] [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
        {
            for (unsigned char i_14 = 1; i_14 < 9; i_14 += 3) 
            {
                {
                    arr_55 [i_4] [i_14] [i_14] = ((/* implicit */int) (((+(arr_4 [i_4] [i_4] [i_4]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (signed char)126)), (arr_51 [i_4] [i_13] [i_14 + 2]))))))))));
                    arr_56 [i_14] [(unsigned short)6] [2U] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 2609637093536877681ULL)) ? (((/* implicit */int) (unsigned short)53387)) : (((/* implicit */int) max(((signed char)-7), ((signed char)0)))))) >> ((((-(((((/* implicit */unsigned long long int) -70368744177661LL)) % (17116556242921357934ULL))))) - (17116626611665535584ULL)))));
                }
            } 
        } 
    }
    for (int i_15 = 0; i_15 < 15; i_15 += 3) 
    {
        var_25 = ((/* implicit */signed char) max((var_25), (((signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_15] [(unsigned short)2] [i_15])) ? (((/* implicit */int) arr_2 [(signed char)2] [2U] [(unsigned short)16])) : (((/* implicit */int) (signed char)44))))), ((+(arr_4 [i_15] [i_15] [i_15]))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_16 = 2; i_16 < 14; i_16 += 1) 
        {
            for (short i_17 = 0; i_17 < 15; i_17 += 2) 
            {
                for (signed char i_18 = 0; i_18 < 15; i_18 += 4) 
                {
                    {
                        arr_67 [8U] [11U] [i_17] [i_15] [i_15] [(short)3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) < (((((/* implicit */int) arr_2 [i_15] [i_17] [i_17])) / (((/* implicit */int) arr_64 [14] [i_16 - 1] [9LL] [i_17] [(short)6])))))) ? (((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_17]))) ^ (arr_1 [(unsigned char)2]))) < (((arr_62 [i_15] [(signed char)11]) ? (var_9) : (arr_65 [i_18] [i_18] [i_18] [(short)0])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 7U)))))));
                        var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_61 [i_18]), ((signed char)126)))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_15] [i_18])))))) ? (((((((/* implicit */_Bool) (signed char)-111)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11355219247821686082ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 107261658U)) ? (((/* implicit */int) (unsigned short)3610)) : (((/* implicit */int) arr_3 [i_15] [i_16]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_16 - 2] [i_16 - 2])) ? (-70368744177664LL) : (((/* implicit */long long int) 2319256099U)))))));
                        arr_68 [0ULL] [i_16] [i_16] [i_16] [i_16 + 1] [i_16] |= ((/* implicit */_Bool) (+((-(((/* implicit */int) max(((short)14859), (arr_64 [8LL] [i_16] [i_16] [i_16 - 1] [i_16 - 1]))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 11; i_19 += 4) 
    {
        var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (signed char)53))));
        /* LoopNest 2 */
        for (int i_20 = 1; i_20 < 10; i_20 += 1) 
        {
            for (signed char i_21 = 0; i_21 < 11; i_21 += 4) 
            {
                {
                    arr_78 [i_19] [i_20] [4ULL] [i_21] = ((/* implicit */signed char) (-(((/* implicit */int) arr_62 [i_19] [i_20 + 1]))));
                    arr_79 [(short)1] [i_20] [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (-(3820480866U)))) ? (((((/* implicit */_Bool) 3893213755U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)24933)))) : (((var_10) ? (((/* implicit */int) (signed char)41)) : (((/* implicit */int) (_Bool)0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        for (long long int i_23 = 0; i_23 < 11; i_23 += 1) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) ((arr_49 [i_23]) == (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)0))))));
                                arr_87 [i_20 + 1] [i_20] [i_20] [(_Bool)1] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_72 [3ULL] [i_21]))))) ? ((+(((/* implicit */int) arr_61 [i_20 + 1])))) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-60))))));
                                arr_88 [i_19] [4LL] [i_22] [i_22] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) 219131092U)) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_29 = ((/* implicit */unsigned int) var_4);
}
