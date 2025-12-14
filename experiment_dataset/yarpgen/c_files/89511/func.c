/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89511
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
    var_11 = ((/* implicit */_Bool) (~(3062007716611397960ULL)));
    var_12 = ((/* implicit */int) (((-((~(var_9))))) != (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) min((6901778998647815851LL), (((/* implicit */long long int) (unsigned char)251)))))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    for (int i_3 = 1; i_3 < 8; i_3 += 3) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_10) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))))))));
                                var_14 = ((/* implicit */int) var_1);
                                var_15 = ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)23688))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */int) (unsigned char)2)) / (var_4))));
                                var_16 = ((/* implicit */int) max((var_16), ((((!(((/* implicit */_Bool) (-(((/* implicit */int) var_7))))))) ? ((-(((/* implicit */int) (signed char)124)))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (var_0)))) || (((/* implicit */_Bool) ((var_10) | (var_1)))))))))));
                            }
                        } 
                    } 
                } 
                var_17 ^= ((/* implicit */unsigned int) (~((~((-(((/* implicit */int) var_2))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 3; i_5 < 21; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
        {
            {
                /* LoopNest 2 */
                for (long long int i_7 = 2; i_7 < 23; i_7 += 1) 
                {
                    for (signed char i_8 = 0; i_8 < 24; i_8 += 4) 
                    {
                        {
                            arr_24 [i_7] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) min(((unsigned short)56524), (((/* implicit */unsigned short) arr_22 [20LL] [i_6] [(unsigned char)9] [i_8]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) var_6))) ? ((-(var_1))) : (((/* implicit */long long int) var_4))))) : (((unsigned long long int) arr_21 [i_5] [i_6]))));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_1))));
                            var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_9 = 3; i_9 < 20; i_9 += 3) /* same iter space */
                {
                    arr_28 [i_5 + 1] [i_9] = ((/* implicit */int) var_8);
                    arr_29 [i_9] [i_6] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (+(arr_25 [i_5])))) ? (var_10) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_5 + 3] [(signed char)0] [(signed char)19])) ? (((/* implicit */int) (signed char)124)) : (var_4)))))) : (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_8))) < (arr_12 [i_6])))))))));
                    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) (~(var_4)))))));
                    var_21 ^= ((/* implicit */unsigned int) 2042451995050909482LL);
                }
                for (unsigned short i_10 = 3; i_10 < 20; i_10 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_11 = 1; i_11 < 22; i_11 += 2) 
                    {
                        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) var_9))));
                        arr_34 [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) var_10)))));
                        var_23 ^= ((/* implicit */signed char) ((short) ((unsigned short) arr_21 [i_5 + 2] [i_10 + 1])));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 24; i_12 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((unsigned short) var_5));
                        arr_37 [i_10] [i_10] [i_6] [i_10] = ((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) (-(-1308036104277887053LL)))))));
                        var_25 = ((/* implicit */long long int) var_9);
                    }
                    arr_38 [i_10] = ((/* implicit */unsigned short) ((unsigned long long int) ((long long int) (-(arr_25 [i_10])))));
                }
                var_26 = (+(((((/* implicit */long long int) ((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) var_2)))))) % (var_10))));
                var_27 = ((/* implicit */int) ((((/* implicit */_Bool) min((max((var_10), (((/* implicit */long long int) 127U)))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) arr_26 [i_5] [i_5] [i_6])) : (var_1)))))) ? (((/* implicit */unsigned long long int) var_1)) : (4379489733029919443ULL)));
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
    {
        for (int i_14 = 0; i_14 < 23; i_14 += 2) 
        {
            for (unsigned char i_15 = 4; i_15 < 21; i_15 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_16 = 2; i_16 < 21; i_16 += 3) 
                    {
                        for (short i_17 = 2; i_17 < 20; i_17 += 4) 
                        {
                            {
                                var_28 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                                arr_54 [i_13] [i_14] [i_15] [i_14] [i_14] [i_13] = ((/* implicit */unsigned long long int) ((int) var_3));
                                var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_15 + 1])) ? (arr_12 [i_17 - 1]) : (((/* implicit */long long int) var_4))));
                                var_30 = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) var_6)) ? (arr_44 [i_16 + 1] [i_16 + 1] [i_15 - 3]) : (((/* implicit */long long int) ((/* implicit */int) var_5))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        var_31 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_4) & (arr_26 [(short)0] [(unsigned short)7] [i_15 - 3])))) ? ((~((+(((/* implicit */int) (unsigned char)146)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) arr_31 [i_13] [i_13])) ? (arr_48 [i_13] [i_14] [i_14] [i_18]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) >= (((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_0))))))));
                        var_32 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-124))))) ? (((/* implicit */int) (unsigned char)226)) : ((-(((/* implicit */int) (signed char)124))))))));
                        var_33 ^= ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_6)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_7))))) : (((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))))) * (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)64))))));
                        var_34 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)54061))))));
                        var_35 = ((/* implicit */unsigned int) ((((_Bool) (~(var_1)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */int) var_3))))) ? (((/* implicit */unsigned long long int) (+(arr_20 [0ULL] [i_14] [i_14])))) : (var_0))) : (((/* implicit */unsigned long long int) ((int) ((var_4) / (((/* implicit */int) arr_47 [i_13] [i_13] [i_13]))))))));
                    }
                    var_36 = ((/* implicit */_Bool) ((int) var_10));
                }
            } 
        } 
    } 
}
