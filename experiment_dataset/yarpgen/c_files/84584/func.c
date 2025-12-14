/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84584
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84584 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84584
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
    var_16 = ((/* implicit */_Bool) var_3);
    var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32754)) * (((/* implicit */int) (short)32754)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            var_18 = ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_0 [i_0] [i_1]))));
            var_19 |= arr_3 [i_0] [i_0] [i_1];
            arr_6 [i_0] = ((/* implicit */long long int) ((int) var_13));
            arr_7 [i_0] [i_0] = ((/* implicit */int) (~((-9223372036854775807LL - 1LL))));
        }
        for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
        {
            var_20 = ((/* implicit */_Bool) var_0);
            /* LoopSeq 1 */
            for (unsigned char i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_12 [i_2]))));
                            var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [3U] [i_2]))));
                            var_23 = ((((/* implicit */_Bool) ((var_2) % (3270356470U)))) ? (((/* implicit */unsigned int) 106460355)) : (((unsigned int) -106460378)));
                        }
                    } 
                } 
                var_24 = ((/* implicit */short) (!((_Bool)1)));
            }
        }
        var_25 *= ((/* implicit */_Bool) (~(var_8)));
        var_26 &= ((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_12 [i_0])))) ? (((/* implicit */int) ((var_15) <= (168219936U)))) : (arr_12 [i_0]));
        var_27 = ((/* implicit */unsigned int) ((_Bool) (unsigned char)255));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_6 = 0; i_6 < 21; i_6 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_7 = 3; i_7 < 20; i_7 += 2) 
        {
            arr_26 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7])) ? (((/* implicit */int) (unsigned char)81)) : (-106460358)))) ? (arr_25 [i_7] [i_7 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7])))));
            /* LoopNest 3 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                {
                    for (unsigned short i_10 = 0; i_10 < 21; i_10 += 3) 
                    {
                        {
                            arr_35 [i_7] [i_7] [i_7] [i_9] [i_10] = ((/* implicit */_Bool) arr_21 [i_7 - 1]);
                            var_28 |= ((/* implicit */unsigned char) var_11);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 18; i_11 += 2) 
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_31 [i_11 + 1] [i_11 - 2] [7U] [7U] [i_7] [i_11 + 2])) >= (129174684)));
                var_30 -= ((/* implicit */int) (unsigned char)101);
            }
            arr_39 [i_6] [i_7] = ((/* implicit */long long int) (-((~(((/* implicit */int) var_5))))));
            arr_40 [i_7] [i_7 - 1] [i_7 - 1] = ((/* implicit */unsigned int) (unsigned char)8);
        }
        for (unsigned char i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                arr_46 [i_6] [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) var_1);
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_13] [i_12] [i_12] [i_6])) ? (((/* implicit */int) arr_30 [12U] [i_12] [i_6] [13] [i_6] [i_6])) : (-685939853)));
            }
            arr_47 [i_6] [i_12] [i_12] = ((/* implicit */long long int) (+(((/* implicit */int) ((arr_25 [i_12] [0]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_6] [i_12]))))))));
        }
        for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            /* LoopSeq 3 */
            for (long long int i_15 = 0; i_15 < 21; i_15 += 2) 
            {
                var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(((/* implicit */int) ((signed char) arr_48 [i_6] [i_6] [i_15]))))))));
                /* LoopNest 2 */
                for (unsigned int i_16 = 0; i_16 < 21; i_16 += 4) 
                {
                    for (long long int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        {
                            arr_59 [i_6] [i_14] [16LL] [i_16] [i_17] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_6] [i_14]))));
                            arr_60 [i_6] [i_6] [15ULL] [4LL] [i_6] [i_6] = ((/* implicit */_Bool) arr_55 [i_6] [i_14] [i_15] [4LL] [i_17] [i_17]);
                            arr_61 [i_14] [i_16] [i_17] = ((/* implicit */short) arr_22 [i_17] [3U] [i_14]);
                            var_33 = ((/* implicit */unsigned char) (((_Bool)1) ? (-106460378) : (((/* implicit */int) (unsigned char)155))));
                        }
                    } 
                } 
                var_34 += ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_15]))) * (((unsigned int) (_Bool)0))));
                var_35 = ((/* implicit */unsigned short) var_5);
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                arr_65 [i_6] [(unsigned char)12] [i_18] [i_18] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                var_36 &= (+(arr_33 [12LL]));
            }
            for (int i_19 = 0; i_19 < 21; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                {
                    for (unsigned short i_21 = 0; i_21 < 21; i_21 += 1) 
                    {
                        {
                            var_37 = ((/* implicit */int) ((unsigned int) arr_28 [i_6] [i_14] [i_20] [i_19]));
                            var_38 += ((/* implicit */unsigned char) var_15);
                            arr_76 [i_6] [i_14] [i_19] [i_19] [i_20] [i_19] = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */int) (short)-32746)) / (-1225450576))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32754))) < (1803466747559300734LL)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 3) 
                {
                    for (short i_23 = 0; i_23 < 21; i_23 += 3) 
                    {
                        {
                            var_40 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_6] [i_14])))))) == (((1618867938U) << (((((/* implicit */int) (short)-22109)) + (22133)))))));
                            var_41 = ((/* implicit */unsigned int) max((var_41), (((/* implicit */unsigned int) (~(((unsigned long long int) var_11)))))));
                            var_42 = ((((/* implicit */_Bool) 85900399U)) ? (-1137519693) : (-249160778));
                            arr_81 [i_19] [i_19] [i_19] [4LL] [i_23] = ((/* implicit */int) ((unsigned int) var_0));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_24 = 0; i_24 < 21; i_24 += 4) 
                {
                    arr_86 [i_19] [i_14] [3ULL] [i_24] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_42 [i_14] [i_6]))));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_42 [i_24] [i_19])) | (((/* implicit */int) arr_23 [i_6] [(unsigned char)2]))));
                }
                for (unsigned char i_25 = 1; i_25 < 19; i_25 += 4) 
                {
                    var_44 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) > (var_6)));
                    var_45 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_19] [i_19] [i_25 + 2] [i_14] [i_14] [i_19]))) : (((((/* implicit */_Bool) (signed char)83)) ? (arr_58 [i_14] [i_19] [i_25]) : (((/* implicit */unsigned long long int) var_15))))));
                    var_46 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) && ((!(((/* implicit */_Bool) arr_49 [i_6] [i_14]))))));
                    arr_90 [i_25] [i_19] [i_19] [8] [i_19] [8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_71 [i_25 + 1] [i_25 + 1] [i_25] [i_25 - 1] [i_25] [i_25])) && (((/* implicit */_Bool) var_13))));
                }
                arr_91 [i_6] [i_14] [i_19] = ((/* implicit */long long int) ((arr_80 [i_19] [i_19]) ^ (arr_80 [i_19] [i_19])));
            }
            arr_92 [i_6] = ((/* implicit */long long int) (_Bool)0);
        }
        for (int i_26 = 0; i_26 < 21; i_26 += 4) 
        {
            /* LoopSeq 1 */
            for (int i_27 = 0; i_27 < 21; i_27 += 1) 
            {
                var_47 = (_Bool)1;
                arr_97 [i_6] [i_6] [i_6] = ((/* implicit */signed char) (short)-32765);
            }
            var_48 += ((/* implicit */unsigned long long int) (!((_Bool)1)));
            var_49 ^= 1647728047;
            /* LoopSeq 1 */
            for (long long int i_28 = 1; i_28 < 18; i_28 += 1) 
            {
                arr_101 [i_26] [i_26] [i_28] |= ((/* implicit */long long int) ((signed char) (!(((/* implicit */_Bool) (unsigned char)153)))));
                arr_102 [i_28] [i_28] [i_28] [i_6] = ((/* implicit */long long int) ((16142200530582810276ULL) >> (((((/* implicit */int) arr_37 [i_28 - 1] [i_28 + 2] [i_28 + 1])) - (25968)))));
            }
        }
        var_50 = ((/* implicit */unsigned short) (~(var_0)));
        arr_103 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) % (arr_84 [14LL] [14U])));
    }
}
