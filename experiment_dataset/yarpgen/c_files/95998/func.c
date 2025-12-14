/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95998
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
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */short) ((_Bool) ((unsigned char) var_3)))), (((short) ((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_13 &= ((/* implicit */long long int) min((2147483647), (((/* implicit */int) (signed char)-38))));
        var_14 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (short)32767)) ? (-8867208600637069985LL) : (((/* implicit */long long int) ((int) 2234253518635318148ULL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (unsigned short)19196)))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (long long int i_2 = 3; i_2 < 15; i_2 += 1) 
        {
            arr_9 [(unsigned char)6] [i_2 - 2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_1] [i_2]))) ? ((~(arr_7 [i_1] [i_2 - 3]))) : (((/* implicit */unsigned long long int) arr_6 [i_2]))));
            arr_10 [i_1] [i_2 + 2] [i_2] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (_Bool)1))))));
            arr_11 [i_1] = ((var_6) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-123))) : (9895052394429669539ULL));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 18; i_3 += 3) 
        {
            var_15 = ((/* implicit */unsigned long long int) var_9);
            /* LoopSeq 3 */
            for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) arr_5 [i_1]))) ? (((var_4) ? (((/* implicit */unsigned long long int) var_9)) : (arr_15 [9ULL] [i_3] [i_4]))) : ((~(var_7)))));
                var_17 = (!(((/* implicit */_Bool) 18446744073709551615ULL)));
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
                {
                    var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_3 [i_1] [i_1])))) : ((-(arr_4 [i_4])))));
                    var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_4] [(short)0])) ? (((/* implicit */int) arr_8 [i_4] [i_4])) : (((/* implicit */int) arr_8 [i_4] [16ULL])))))));
                }
                /* LoopSeq 1 */
                for (int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    arr_21 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10))))) ? (((unsigned int) (signed char)-40)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
                    var_20 = ((/* implicit */signed char) (-((-(((/* implicit */int) var_8))))));
                }
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_3] [i_1])) ? (arr_23 [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (unsigned short i_9 = 0; i_9 < 18; i_9 += 1) 
                    {
                        {
                            var_22 += (-(var_0));
                            var_23 = ((/* implicit */unsigned int) (-(var_3)));
                            arr_31 [i_7] [i_1] = ((/* implicit */long long int) var_5);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (long long int i_10 = 0; i_10 < 18; i_10 += 4) 
                {
                    arr_35 [i_1] [i_7] [(signed char)8] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_0 [i_7]))));
                    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_3))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) : ((-(arr_13 [i_1] [(_Bool)1])))));
                    var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_1] [i_7]))))) : (var_7)));
                }
                var_26 = ((/* implicit */_Bool) (~((~(((/* implicit */int) var_8))))));
                var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (signed char)36))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : (arr_33 [14LL] [i_1] [14LL] [i_1])));
            }
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                arr_38 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) var_2);
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 2; i_12 < 16; i_12 += 1) /* same iter space */
                {
                    var_28 = ((/* implicit */signed char) var_1);
                    /* LoopSeq 3 */
                    for (long long int i_13 = 2; i_13 < 16; i_13 += 3) 
                    {
                        var_29 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_1] [0ULL] [15ULL])) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) var_10)))))));
                        var_30 = ((/* implicit */unsigned char) arr_0 [i_1]);
                    }
                    for (signed char i_14 = 0; i_14 < 18; i_14 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned int) ((unsigned short) (~(arr_33 [i_14] [i_1] [i_1] [(unsigned short)16]))));
                        var_32 = ((/* implicit */short) (!(var_6)));
                    }
                    for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) var_1);
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_11] [i_12] [i_11] [i_15])) ? (arr_7 [i_1] [i_12]) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_1]))))))));
                        var_35 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_1] [i_3])))) ? (((arr_41 [i_3] [i_12] [i_11] [i_3] [4] [i_1]) ? (((/* implicit */unsigned long long int) var_9)) : (var_7))) : (((/* implicit */unsigned long long int) arr_33 [i_1] [i_1] [(_Bool)1] [i_15]))));
                        var_36 = ((/* implicit */long long int) min((var_36), (arr_44 [i_3])));
                    }
                    var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)12] [(short)12])))))))))));
                }
                for (unsigned long long int i_16 = 2; i_16 < 16; i_16 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) 562991446893003323LL)) ? (((/* implicit */int) (unsigned char)185)) : (((/* implicit */int) (unsigned short)65528)))) : ((+(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (int i_17 = 1; i_17 < 17; i_17 += 3) /* same iter space */
                    {
                        var_39 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned char)97)) ? (((/* implicit */int) arr_50 [i_1] [(unsigned short)0] [i_11] [i_3] [i_1] [i_1])) : (((/* implicit */int) (signed char)14)))));
                        var_40 -= ((/* implicit */unsigned short) (+(((unsigned long long int) var_11))));
                        arr_54 [i_1] = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)121))));
                        var_41 = ((/* implicit */int) (~((+(var_9)))));
                    }
                    for (int i_18 = 1; i_18 < 17; i_18 += 3) /* same iter space */
                    {
                        arr_58 [i_1] [i_1] [(short)11] [i_16 - 1] [i_1] = ((/* implicit */long long int) ((unsigned char) var_3));
                        var_42 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 15658447791266328451ULL)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) (_Bool)1))))));
                        arr_59 [i_1] [i_1] [i_1] [(unsigned short)0] [i_18] [i_1] [i_16 + 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) var_2)))))));
                    }
                    var_43 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_18 [12U]) ? (((/* implicit */long long int) var_1)) : (var_3)))) ? (((((/* implicit */_Bool) arr_46 [i_1] [i_1] [i_3] [i_11] [12ULL] [12U])) ? (((/* implicit */long long int) arr_56 [i_16] [i_16 - 1] [i_16 + 1] [(unsigned char)16] [i_11] [i_1] [i_1])) : (arr_1 [i_16]))) : (((/* implicit */long long int) ((int) var_2)))));
                }
                for (long long int i_19 = 2; i_19 < 16; i_19 += 2) 
                {
                    arr_63 [i_1] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))));
                    var_44 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [8ULL])) ? (((/* implicit */unsigned long long int) var_3)) : (arr_7 [i_19] [i_19])))) ? (((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27125))) : (7898420175967893500ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))));
                }
                var_45 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1])) ? (arr_44 [(unsigned char)3]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_1] [i_3] [i_3] [i_1] [i_11]))) : (((((/* implicit */_Bool) arr_49 [i_1] [10U])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
            }
        }
        var_46 += min((10548323897741658115ULL), (((/* implicit */unsigned long long int) 3026605976U)));
    }
    var_47 = ((int) min((((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_8))))), (min((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)38412))))));
}
