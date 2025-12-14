/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84373
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))));
        var_11 = ((/* implicit */_Bool) var_2);
    }
    for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) 
    {
        var_12 ^= ((/* implicit */signed char) max((var_8), (((/* implicit */long long int) ((signed char) (~(((/* implicit */int) var_9))))))));
        var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_6)))))))) > (min((((long long int) (_Bool)1)), (((/* implicit */long long int) (signed char)96))))));
    }
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 2) 
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 16; i_3 += 1) 
        {
            for (unsigned long long int i_4 = 3; i_4 < 15; i_4 += 4) 
            {
                {
                    var_14 *= ((/* implicit */short) (~((-(arr_7 [i_4 - 1] [i_4 - 2] [i_4 - 1])))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 16; i_5 += 3) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 18; i_6 += 1) 
                        {
                            {
                                var_15 -= ((/* implicit */signed char) (short)-1);
                                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_6))));
                                arr_15 [(short)15] [i_3] [i_4] [i_5] [i_4] [i_3] [i_3] = ((/* implicit */short) arr_7 [i_2] [i_2] [i_2]);
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((180277983) & (((/* implicit */int) arr_10 [i_2 + 2] [i_3 + 1]))))) ? (((/* implicit */int) arr_10 [i_2 - 1] [i_3 - 1])) : ((~(((/* implicit */int) arr_10 [i_2 + 1] [i_3 - 2]))))));
                }
            } 
        } 
        var_18 = ((/* implicit */signed char) min((((/* implicit */int) (!(arr_4 [i_2 - 1])))), ((~(((/* implicit */int) ((signed char) 597906447U)))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-30829)) ? (((/* implicit */int) (signed char)96)) : (-1994088654)))), (var_2))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 2) 
                    {
                        {
                            var_20 = (unsigned short)41980;
                            arr_27 [i_2] [i_9] [i_7] [i_7] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max(((unsigned short)31340), (((/* implicit */unsigned short) arr_6 [i_7]))))), (var_2)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_2] [(signed char)6] [i_8] [i_9] [(unsigned short)3])) - (((/* implicit */int) ((short) arr_22 [i_9] [i_8])))))) : (min((((/* implicit */unsigned long long int) ((int) var_9))), ((-(var_2)))))));
                            var_21 = ((/* implicit */_Bool) 4174793418U);
                        }
                    } 
                } 
            } 
            var_22 += ((/* implicit */signed char) arr_21 [i_2] [i_2] [i_7] [(unsigned char)7]);
            arr_28 [i_2] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)1)) >= (((/* implicit */int) arr_13 [i_2 + 2] [i_2 + 2]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [(unsigned short)11] [i_2] [(unsigned short)11])) ? (((/* implicit */int) (signed char)118)) : (39992157)))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (((/* implicit */short) (unsigned char)255))))))))));
            var_23 = ((/* implicit */unsigned short) var_1);
        }
        arr_29 [4U] [12U] = ((/* implicit */unsigned int) ((((/* implicit */int) var_3)) >= (((/* implicit */int) var_0))));
    }
    for (unsigned int i_11 = 0; i_11 < 23; i_11 += 3) 
    {
        /* LoopSeq 4 */
        for (signed char i_12 = 2; i_12 < 21; i_12 += 1) 
        {
            var_24 ^= ((/* implicit */signed char) arr_31 [16]);
            var_25 = ((/* implicit */signed char) (unsigned short)4490);
            /* LoopSeq 1 */
            for (signed char i_13 = 4; i_13 < 22; i_13 += 1) 
            {
                var_26 = ((/* implicit */short) (+(((/* implicit */int) max((arr_33 [i_11]), (((/* implicit */unsigned short) max((arr_32 [i_13] [i_12] [i_11]), (arr_32 [(signed char)22] [i_12] [i_13])))))))));
                arr_36 [i_11] [(short)16] [i_11] [(short)16] |= ((/* implicit */unsigned short) (~((~(((/* implicit */int) ((((/* implicit */_Bool) (signed char)-118)) || (((/* implicit */_Bool) (unsigned short)34213)))))))));
                var_27 = ((signed char) ((unsigned long long int) (!((_Bool)1))));
            }
        }
        /* vectorizable */
        for (short i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            arr_39 [i_11] [i_11] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-124))));
            var_28 = ((/* implicit */signed char) (~(((/* implicit */int) arr_31 [i_11]))));
            var_29 = ((/* implicit */unsigned long long int) ((long long int) (+(((/* implicit */int) (signed char)82)))));
            var_30 = ((/* implicit */unsigned short) min((var_30), (arr_30 [i_11])));
        }
        /* vectorizable */
        for (unsigned char i_15 = 1; i_15 < 19; i_15 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_16 = 0; i_16 < 23; i_16 += 3) 
            {
                for (unsigned long long int i_17 = 1; i_17 < 21; i_17 += 1) 
                {
                    for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
                    {
                        {
                            arr_50 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_49 [i_11] [(signed char)8] [i_17 + 1] [i_17]))));
                            var_31 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)122))));
                            arr_51 [i_11] [(signed char)0] [(signed char)0] [i_11] [(unsigned short)16] [(signed char)0] [i_18] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_34 [i_11] [(short)7]))));
                        }
                    } 
                } 
            } 
            var_32 = ((/* implicit */unsigned long long int) ((((2129644112) | (((/* implicit */int) (unsigned short)61045)))) == ((((_Bool)1) ? (((/* implicit */int) arr_34 [i_11] [i_11])) : (((/* implicit */int) arr_41 [i_11] [i_15]))))));
        }
        for (signed char i_19 = 1; i_19 < 20; i_19 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (signed char i_20 = 1; i_20 < 22; i_20 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned short i_21 = 1; i_21 < 21; i_21 += 3) 
                {
                    var_33 &= ((/* implicit */signed char) var_5);
                    var_34 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) > (4294967293U)));
                }
                for (unsigned long long int i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    var_35 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)123)) + (((/* implicit */int) ((_Bool) arr_32 [i_22] [i_20] [i_19])))));
                    var_36 = ((/* implicit */short) ((((/* implicit */int) (signed char)64)) - (((/* implicit */int) (signed char)-119))));
                    var_37 ^= ((/* implicit */unsigned char) ((short) arr_37 [(signed char)6] [(short)12]));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_64 [(signed char)22] [i_20 + 1] [i_20 - 1])))))));
                }
                arr_65 [i_11] [i_19] [i_11] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)34196)) || (((/* implicit */_Bool) (unsigned short)45611))));
                var_39 = ((/* implicit */signed char) min((var_39), ((signed char)-123)));
                var_40 = ((/* implicit */unsigned short) ((arr_37 [i_11] [i_11]) >> (((((/* implicit */int) var_9)) + (11326)))));
            }
            for (signed char i_23 = 1; i_23 < 22; i_23 += 2) /* same iter space */
            {
                var_41 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_60 [i_19 - 1])) ? (((/* implicit */int) arr_60 [i_19 + 3])) : (((/* implicit */int) (signed char)117))))));
                var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) max((((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_46 [i_11])) / (((/* implicit */int) arr_63 [i_11] [(unsigned short)3] [i_19] [i_23]))))))), (((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) -3071828816567941682LL)))) : (((((/* implicit */_Bool) 4294967293U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2))) : (10286061521788999582ULL))))))))));
            }
            /* LoopNest 2 */
            for (signed char i_24 = 0; i_24 < 23; i_24 += 4) 
            {
                for (unsigned int i_25 = 0; i_25 < 23; i_25 += 1) 
                {
                    {
                        var_43 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_35 [i_24] [i_19] [i_19 + 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_71 [i_25] [i_24] [i_19] [i_11])) && (((/* implicit */_Bool) (signed char)63))))) : ((~(((/* implicit */int) (unsigned short)20328))))))));
                        arr_74 [i_11] [i_11] [(signed char)10] [i_11] [i_11] = ((unsigned short) (~(((/* implicit */int) var_3))));
                    }
                } 
            } 
        }
        var_44 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)1)), (((unsigned short) var_2)))))));
        var_45 = ((/* implicit */unsigned long long int) max(((+(((/* implicit */int) arr_53 [i_11])))), ((-(((/* implicit */int) arr_53 [i_11]))))));
    }
    var_46 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) max((var_8), (((/* implicit */long long int) var_3))))) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_6))))))));
    var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) (+((~(var_5))))))));
    var_48 = ((/* implicit */signed char) (short)6545);
    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((-(var_1)))))) ? (((/* implicit */int) ((var_5) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-41))) & (var_2)))))) : (((/* implicit */int) ((signed char) var_3))))))));
}
