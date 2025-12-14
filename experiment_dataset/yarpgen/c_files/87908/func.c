/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87908
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 2; i_1 < 19; i_1 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                for (short i_3 = 1; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_8) : (((/* implicit */unsigned long long int) var_7))))) ? (((/* implicit */int) (!(var_5)))) : (((/* implicit */int) (signed char)31))))));
                        arr_10 [i_0] [19U] [i_0] [(unsigned char)1] [i_0] [i_0] = ((/* implicit */int) max((max((var_8), (((/* implicit */unsigned long long int) ((0U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_2] [i_1] [i_1] [i_0])))))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [(short)6] [3ULL]))))) - (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))))));
                        var_11 = ((/* implicit */_Bool) max((((signed char) var_2)), (((/* implicit */signed char) (!(((((/* implicit */int) (unsigned short)51933)) != (((/* implicit */int) (unsigned short)37765)))))))));
                        var_12 = ((/* implicit */unsigned short) (-(max((((((/* implicit */_Bool) var_4)) ? (2305760423031783764LL) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_1 - 2] [(short)12] [i_2] [i_2]))))), (var_4)))));
                    }
                } 
            } 
            var_13 += ((/* implicit */short) ((arr_4 [i_1 - 1] [i_1 + 1] [i_1 + 1]) > (((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_5)))))))));
            arr_11 [i_0] [i_0] [i_1 + 1] = ((/* implicit */unsigned long long int) ((unsigned char) arr_8 [i_0] [i_0] [(_Bool)1] [i_1 + 1] [i_1]));
        }
        for (signed char i_4 = 2; i_4 < 19; i_4 += 2) /* same iter space */
        {
            arr_15 [i_0] [i_4] = ((/* implicit */signed char) 12790743645132647536ULL);
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
                {
                    {
                        var_14 += ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) min((arr_0 [15LL] [15LL]), (arr_0 [i_0] [i_0])))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_9))));
                            var_16 = ((/* implicit */unsigned short) arr_3 [i_4] [i_4]);
                            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_6])) ? ((-(var_6))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                        }
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_21 [i_4]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4] [i_4] [i_4 + 1] [i_4] [i_4])) || (((/* implicit */_Bool) var_1))))) : (max((var_7), (((/* implicit */int) arr_21 [i_0])))))))));
                        arr_22 [i_5] [i_4] [i_5] = ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_4] [i_5] [i_6]);
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (unsigned long long int i_8 = 4; i_8 < 16; i_8 += 1) /* same iter space */
            {
                arr_26 [(_Bool)1] [i_4 - 1] [i_8] [i_4] = ((/* implicit */_Bool) arr_24 [i_8 + 1] [i_4 - 1]);
                arr_27 [i_0] [i_4] [i_8] = ((/* implicit */_Bool) 4294967295U);
                var_19 = ((/* implicit */unsigned char) max((19U), (4294967282U)));
                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) var_0))));
            }
            for (unsigned long long int i_9 = 4; i_9 < 16; i_9 += 1) /* same iter space */
            {
                var_21 = ((/* implicit */_Bool) min((((/* implicit */int) arr_19 [i_0] [(signed char)12] [i_4] [i_9] [(signed char)12] [(_Bool)1])), (var_7)));
                /* LoopSeq 2 */
                for (signed char i_10 = 1; i_10 < 18; i_10 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_28 [i_0] [5ULL] [i_9] [i_10]), (((/* implicit */unsigned long long int) max((4294967277U), (((/* implicit */unsigned int) (short)16303)))))))))))));
                    var_23 = ((/* implicit */unsigned int) max((var_4), (((/* implicit */long long int) arr_18 [(_Bool)1] [(unsigned char)12] [i_9] [i_4]))));
                }
                for (short i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0]);
                    arr_37 [i_0] [i_4 + 1] [i_4 + 1] = ((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_0])) ? (((((((/* implicit */_Bool) (unsigned short)14331)) ? (((/* implicit */unsigned long long int) 4294967280U)) : (var_8))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)14349))))) : (((/* implicit */unsigned long long int) max((((/* implicit */long long int) 2131309751U)), (43135263636467300LL)))));
                }
            }
            for (unsigned int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (short i_13 = 2; i_13 < 18; i_13 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) min(((~(arr_5 [i_4 - 1] [i_4 - 1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) var_8))))))));
                    var_26 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) 2147483647)) ? (max((2305760423031783764LL), (var_6))) : (((/* implicit */long long int) ((/* implicit */int) min((var_1), (((/* implicit */short) (unsigned char)250)))))))));
                    var_27 = ((/* implicit */short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_30 [i_0] [i_0] [(_Bool)1] [0U])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_23 [(signed char)1] [i_4 - 2] [i_4] [(unsigned short)3]))))) : (max((-714513519920372761LL), (4502500115742720LL)))))) ? ((-(arr_35 [i_13]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)29)))));
                    /* LoopSeq 2 */
                    for (long long int i_14 = 2; i_14 < 18; i_14 += 4) 
                    {
                        var_28 -= ((/* implicit */unsigned int) (-((-(max((var_4), (((/* implicit */long long int) var_3))))))));
                        arr_48 [i_12] [i_12] [i_12] [19LL] [i_12] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_3)), ((~(17580456945509039804ULL)))));
                        var_29 = ((/* implicit */unsigned char) arr_31 [i_0] [i_4 - 1] [i_12] [i_12] [i_4 - 1]);
                    }
                    for (short i_15 = 0; i_15 < 20; i_15 += 2) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_15] [i_13] [i_12] [i_0] [i_0])) ^ (((/* implicit */int) (((-(((/* implicit */int) var_1)))) < (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)107)), (var_3)))))))));
                        arr_51 [i_0] [i_0] [i_12] [i_13 - 1] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 97116959)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_30 [i_0] [i_13 - 2] [i_0] [i_4 - 1]))))));
                    }
                    var_31 = ((/* implicit */unsigned long long int) ((unsigned short) var_1));
                }
                for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                {
                    arr_55 [i_0] [i_0] [(_Bool)1] [i_12] [i_16] = ((/* implicit */_Bool) arr_36 [(signed char)9] [(signed char)9] [(signed char)9] [i_12] [i_12] [i_16]);
                    arr_56 [6U] [i_12] = ((/* implicit */unsigned long long int) var_0);
                    /* LoopSeq 2 */
                    for (unsigned char i_17 = 3; i_17 < 18; i_17 += 1) 
                    {
                        arr_60 [i_12] [i_4] [16ULL] [i_4] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((var_8) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)46773), (((/* implicit */unsigned short) var_9))))))))) ? (((4294967285U) & (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (+(((/* implicit */int) var_9)))))))));
                        var_32 = ((/* implicit */unsigned int) ((var_5) ? (max((((/* implicit */int) min(((unsigned short)50830), (((/* implicit */unsigned short) (short)9140))))), (((arr_20 [(unsigned char)19] [(signed char)14] [i_12] [0LL] [9]) ? (((/* implicit */int) arr_45 [i_16] [i_12] [i_0] [i_0])) : (((/* implicit */int) var_5)))))) : ((-(((/* implicit */int) var_3))))));
                        arr_61 [i_0] [i_12] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) ^ (((/* implicit */int) max(((unsigned short)26479), (((/* implicit */unsigned short) ((((/* implicit */int) var_3)) != (((/* implicit */int) var_0))))))))));
                        arr_62 [12] [i_16] [i_12] [i_4] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (~(((((/* implicit */_Bool) (signed char)112)) ? (((/* implicit */int) arr_23 [i_0] [i_4] [i_12] [i_16])) : (((/* implicit */int) (unsigned short)14699))))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) -1008711957)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))), (var_6)))));
                    }
                    for (int i_18 = 2; i_18 < 19; i_18 += 2) 
                    {
                        var_33 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) arr_29 [i_16] [i_18 + 1] [(unsigned short)5] [i_18])) ? (((/* implicit */unsigned long long int) 4699737162337910798LL)) : (14327243515191756722ULL)))));
                        arr_65 [i_0] [i_0] [i_12] = ((/* implicit */unsigned short) (-(var_7)));
                        var_34 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
                    }
                }
                var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((short)-10884), (((/* implicit */short) (signed char)102)))))));
            }
        }
        var_36 = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_0] [i_0])) >> (((max((((/* implicit */long long int) (short)12838)), (714513519920372767LL))) - (714513519920372749LL)))))), (max((min((((/* implicit */long long int) var_1)), (3623750310756642493LL))), (var_4)))));
    }
    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 1) 
    {
        var_37 += ((/* implicit */unsigned char) 1787962903);
        var_38 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_0) ? (11210561826044638099ULL) : (var_8)))) ? (min((((/* implicit */long long int) arr_0 [i_19] [i_19])), (var_4))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3))))));
        var_39 = ((/* implicit */unsigned char) min((var_39), (((/* implicit */unsigned char) max((max(((~(var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_5)), ((signed char)32)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50846)) ? (((var_9) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_9)))) : (((/* implicit */int) arr_0 [i_19] [i_19]))))))))));
    }
    var_40 = ((/* implicit */signed char) (~((+(8ULL)))));
    var_41 = ((/* implicit */unsigned long long int) (-(var_4)));
}
