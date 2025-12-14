/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98734
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
    for (long long int i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_12 &= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) == (2605517238U)))), (((arr_0 [i_0 + 1]) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0]))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 22; i_2 += 4) /* same iter space */
            {
                arr_7 [i_1] [i_1] [i_2 + 1] |= ((((((var_1) + (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) + (2605517263U))) != (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 1689450048U)))));
                var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) (~(((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) < (var_11))) ? (((/* implicit */int) ((((/* implicit */int) var_0)) > (((/* implicit */int) var_0))))) : ((~(((/* implicit */int) (_Bool)1)))))))))));
                arr_8 [i_2] [i_2 - 1] [i_1] [i_2] = (((-(((((/* implicit */_Bool) var_5)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) var_9))))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 22; i_3 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 23; i_4 += 3) 
                {
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) var_4);
                            var_15 = ((/* implicit */long long int) var_9);
                        }
                    } 
                } 
                var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1689450026U)) ? (((/* implicit */int) ((var_11) != (((/* implicit */long long int) var_4))))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */int) var_9))))));
                var_17 += ((/* implicit */unsigned char) (~(var_4)));
                /* LoopNest 2 */
                for (unsigned int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    for (short i_7 = 2; i_7 < 21; i_7 += 1) 
                    {
                        {
                            var_18 *= ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)82))));
                            var_19 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (3858915913U) : (1689450004U));
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (~(((/* implicit */int) arr_9 [(unsigned char)19] [(unsigned char)19])))))));
                            var_21 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_0))));
                        }
                    } 
                } 
                arr_27 [i_0 - 1] [i_0] [i_3] [i_3 - 1] = ((/* implicit */signed char) (~(2147483647U)));
            }
            /* vectorizable */
            for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
            {
                arr_30 [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_2))));
                arr_31 [i_1] = var_10;
            }
            var_22 ^= ((/* implicit */unsigned int) (unsigned char)80);
        }
    }
    var_23 -= ((/* implicit */signed char) var_8);
    /* LoopSeq 3 */
    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
    {
        arr_34 [i_9] = ((/* implicit */_Bool) ((unsigned short) 1689450034U));
        var_24 = (unsigned char)173;
    }
    /* vectorizable */
    for (signed char i_10 = 3; i_10 < 19; i_10 += 3) 
    {
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned char) (short)-31520)))));
        var_26 = ((/* implicit */short) (-(((/* implicit */int) var_9))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 1) 
    {
        arr_41 [i_11] [14LL] |= ((/* implicit */unsigned long long int) ((1689450020U) != (1689450001U)));
        /* LoopSeq 1 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned char i_13 = 3; i_13 < 20; i_13 += 4) 
            {
                arr_48 [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1715422015U)) ? (((/* implicit */int) arr_28 [i_13] [i_13 - 1])) : (((/* implicit */int) var_5))));
                var_27 += ((/* implicit */unsigned char) ((1689450075U) != (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) var_2)))))));
                var_28 = ((/* implicit */unsigned char) (((~(((/* implicit */int) (_Bool)1)))) < ((~(((/* implicit */int) (unsigned char)183))))));
            }
            for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
            {
                arr_52 [i_14 + 1] [i_11] [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_11])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (arr_10 [i_11])));
                arr_53 [i_11] = ((/* implicit */signed char) arr_4 [i_12] [i_14 + 1]);
                arr_54 [7LL] [i_11] [i_14] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_14 + 1]))));
                /* LoopSeq 1 */
                for (long long int i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    var_29 = ((/* implicit */unsigned short) ((unsigned char) 2147483639U));
                    /* LoopSeq 1 */
                    for (long long int i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_16] [i_11] [i_11] [(_Bool)0])) ? (((2147483657U) | (((/* implicit */unsigned int) -2083240226)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                        var_31 = ((/* implicit */_Bool) 557110503U);
                        var_32 += ((/* implicit */unsigned int) var_3);
                    }
                }
            }
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) /* same iter space */
            {
                arr_64 [i_11] [i_12] [i_11] = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                arr_65 [i_11] [i_11] [i_11] [0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3679392019U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_32 [i_12]))) : (9LL))) == (((/* implicit */long long int) ((/* implicit */int) arr_57 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_11] [i_17])))));
                arr_66 [i_11] [i_11] [i_11] = ((/* implicit */int) (!(((/* implicit */_Bool) (short)1024))));
            }
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
            {
                arr_69 [i_11] = ((/* implicit */int) 1689450035U);
                arr_70 [i_11] [i_12] [i_11] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) - (arr_3 [i_11] [i_11] [i_18 + 1])));
            }
            var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_5 [(unsigned char)8] [i_11] [i_12])) : (2147483641)));
            arr_71 [i_11] [i_11] [i_12] = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
        }
        var_34 = ((/* implicit */unsigned int) (-(((var_11) << (((/* implicit */int) var_5))))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_19 = 1; i_19 < 9; i_19 += 4) 
    {
        arr_75 [i_19] [i_19] = ((/* implicit */long long int) (~(((unsigned long long int) var_3))));
        arr_76 [i_19] [i_19 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_72 [i_19 + 2])) && (((/* implicit */_Bool) arr_72 [i_19 + 2]))));
        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_19] [i_19 + 2] [i_19])))));
        var_36 = ((/* implicit */unsigned char) ((var_1) != (((/* implicit */unsigned int) -346008806))));
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)57883)) ? (7074820769849409128LL) : (-19LL)));
    }
}
