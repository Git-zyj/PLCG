/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69206
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((2549089231976836491LL), (((/* implicit */long long int) 3577355242U))))))) ? (((/* implicit */int) ((unsigned short) ((3577355242U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) : (((int) max((717612053U), (717612074U)))))))));
            var_12 |= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_1]))));
            arr_4 [i_0] = ((/* implicit */_Bool) ((unsigned char) (+(arr_2 [11U] [i_0]))));
            arr_5 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) max((var_4), (((/* implicit */unsigned char) (_Bool)0))))) | (((/* implicit */int) ((((/* implicit */_Bool) 2535089963U)) && ((_Bool)1)))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
        {
            /* LoopSeq 4 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                var_13 *= ((/* implicit */unsigned int) ((((/* implicit */long long int) 3577355243U)) / (((((/* implicit */long long int) 3577355234U)) % (arr_2 [i_2] [i_2])))));
                arr_10 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) ((int) 2279719882U)));
                var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) var_0))));
                var_15 = ((/* implicit */unsigned char) ((_Bool) var_10));
            }
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_13 [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned long long int) (~((((_Bool)0) ? (3577355244U) : (3597561646U)))));
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_4])) ? (((/* implicit */unsigned int) arr_3 [i_4])) : ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)30270))) : (var_6))))))));
                var_17 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_10)))));
            }
            for (signed char i_5 = 0; i_5 < 14; i_5 += 4) 
            {
                arr_18 [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)10054)) << (((((/* implicit */int) (unsigned char)162)) - (152)))));
                var_18 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
            }
            for (unsigned char i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                arr_21 [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -2110198323)) ? (arr_8 [i_0] [i_2] [i_6] [i_6]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2]))));
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                {
                    var_19 = ((/* implicit */long long int) (-(805505463570665460ULL)));
                    var_20 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) 717612069U)))) ? (((/* implicit */int) ((unsigned short) arr_22 [i_7] [i_6] [i_6] [i_2] [i_0]))) : ((+(arr_0 [i_0])))));
                    var_21 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (unsigned char)93)) ? (13198178116794303596ULL) : (((/* implicit */unsigned long long int) arr_9 [i_0] [i_2] [i_6] [i_7]))))));
                }
                for (short i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)157)) ? (var_6) : (arr_22 [i_0] [i_2] [i_6] [i_8] [i_8])));
                    arr_28 [i_0] [i_2] [i_6] [i_0] = ((/* implicit */signed char) arr_17 [i_0] [i_0]);
                }
                arr_29 [i_0] [i_0] [i_6] [i_6] = ((/* implicit */short) ((int) (+(((/* implicit */int) (unsigned char)70)))));
            }
            arr_30 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_9 [i_0] [i_2] [i_0] [i_0])));
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_2])) ? (arr_2 [(signed char)0] [(signed char)0]) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_0])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))))));
            var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */unsigned int) arr_0 [i_0])) : (2535089963U)));
        }
        for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
        {
            var_25 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)30287)) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_9])) : (((/* implicit */int) var_5))))) ? (717612069U) : (((((2535089971U) / (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) -465152932))))))));
            var_26 = ((/* implicit */signed char) var_10);
            arr_33 [i_0] [i_0] = ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]);
        }
        var_27 = ((/* implicit */int) ((((/* implicit */_Bool) 516694888U)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-9)))));
        var_28 = ((/* implicit */_Bool) -4808734300587018641LL);
        var_29 = ((/* implicit */short) ((int) (unsigned char)158));
    }
    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
    {
        arr_36 [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) arr_34 [i_10])) != (((/* implicit */int) arr_34 [i_10])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) : (((arr_34 [i_10]) ? (185280094U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-111)))))));
        var_30 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((arr_1 [i_10]) ? (((/* implicit */int) arr_1 [i_10])) : (((/* implicit */int) arr_1 [i_10]))))), ((-(3577355238U)))));
        /* LoopSeq 1 */
        for (signed char i_11 = 1; i_11 < 12; i_11 += 4) 
        {
            var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_3)))) ? (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (signed char)-9)) : (((/* implicit */int) (signed char)16)))) : (((((/* implicit */_Bool) arr_0 [(unsigned char)2])) ? (arr_0 [(unsigned char)0]) : (((/* implicit */int) (unsigned char)127))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_3), (((/* implicit */long long int) arr_22 [3] [i_11 + 1] [i_11 + 1] [i_11 + 2] [i_11 + 1]))))) ? (((var_10) ? (arr_8 [i_11 + 2] [i_11 + 1] [i_11 + 2] [i_11 + 2]) : (arr_8 [i_11 - 1] [i_11 + 1] [i_11 + 2] [i_11 - 1]))) : (((/* implicit */unsigned long long int) max((2535089952U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)20451)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (_Bool)1))))))))));
            var_33 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) 0U)))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
            {
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 14; i_13 += 4) 
                {
                    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_13])) ? (arr_9 [i_10] [i_10] [i_12] [i_11 + 1]) : (((((/* implicit */_Bool) arr_24 [i_10] [8] [8] [i_13])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-21))) : (var_3)))));
                    /* LoopSeq 3 */
                    for (unsigned short i_14 = 0; i_14 < 14; i_14 += 1) 
                    {
                        var_35 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) (signed char)-17)) : (((((/* implicit */_Bool) (signed char)-18)) ? (((/* implicit */int) (signed char)-103)) : (-602304405)))));
                        var_36 = ((/* implicit */_Bool) (signed char)1);
                        arr_47 [i_10] [i_12] [i_12] [i_12] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1082609086U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-16))));
                    }
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        var_37 = ((/* implicit */signed char) (+(8384512U)));
                        var_38 = ((/* implicit */int) ((((/* implicit */int) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) == (((/* implicit */int) var_10))));
                        var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_11 - 1] [i_11 - 1] [i_12])) ? (arr_8 [i_11 - 1] [i_11] [i_12] [(signed char)12]) : (var_0)));
                    }
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                    {
                        var_40 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) : ((+(3577355233U)))));
                        var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_48 [i_10] [i_11] [i_11 + 1] [i_13] [i_10] [i_12])) ? (arr_15 [i_11 + 1] [i_11 - 1] [i_11]) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_0))))));
                        arr_56 [i_16] [i_11 + 1] [i_12] [i_13] [i_12] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned int i_17 = 0; i_17 < 14; i_17 += 2) 
                    {
                        var_42 = ((((/* implicit */_Bool) (signed char)28)) ? (((/* implicit */int) ((short) arr_23 [i_13] [9] [i_12] [i_13]))) : (((int) var_5)));
                        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_11 + 2]))) : (arr_8 [i_11] [i_11 + 1] [(unsigned char)1] [i_10])));
                        var_44 = ((/* implicit */unsigned short) min((var_44), (((/* implicit */unsigned short) ((((/* implicit */int) arr_48 [i_11 - 1] [i_11 - 1] [i_11] [i_11 + 1] [i_11 + 1] [i_10])) == (((/* implicit */int) var_5)))))));
                    }
                }
                var_45 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-3))));
                arr_61 [i_10] [i_12] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 14342385582490899923ULL)) ? (((int) var_6)) : (((268435455) % (((/* implicit */int) (unsigned short)63099))))));
            }
        }
        arr_62 [i_10] = ((/* implicit */signed char) arr_43 [(signed char)0] [(signed char)0] [i_10] [i_10] [i_10] [i_10]);
    }
    for (short i_18 = 1; i_18 < 18; i_18 += 2) 
    {
        var_46 = ((/* implicit */int) min((((unsigned int) arr_64 [i_18 + 1])), (max((min((((/* implicit */unsigned int) (unsigned char)63)), (3761461140U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967280U)) && (((/* implicit */_Bool) 15)))))))));
        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_6)) ? (-5122003233156973831LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)202))))) : (((/* implicit */long long int) (-(var_6))))))) ? (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_64 [(unsigned char)10])) ? (arr_64 [i_18]) : (((/* implicit */long long int) var_1))))))) : (((unsigned long long int) 5122003233156973831LL))));
        var_48 = ((/* implicit */unsigned char) arr_63 [i_18] [i_18 - 1]);
        var_49 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (signed char)(-127 - 1)))) ? (min((var_3), (((/* implicit */long long int) (unsigned char)255)))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))))) ? (((((/* implicit */_Bool) arr_63 [i_18 + 1] [9U])) ? (var_3) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_63 [i_18 - 1] [i_18 - 1]))))));
    }
    var_50 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3337082545U)) ? (var_7) : (((/* implicit */unsigned long long int) 70754498))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)3584))))) : (((((/* implicit */_Bool) -569751390)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (98304ULL)))));
}
