/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62657
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) min(((((((_Bool)1) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) (_Bool)1)))) - (min((((/* implicit */int) (unsigned char)139)), (-538016365))))), (((/* implicit */int) ((unsigned char) (short)-24246)))));
        var_10 = var_3;
    }
    /* LoopNest 2 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 3; i_4 < 19; i_4 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_5 = 3; i_5 < 18; i_5 += 3) 
                        {
                            var_11 ^= ((/* implicit */int) ((unsigned char) (unsigned short)64512));
                            var_12 = ((/* implicit */_Bool) var_8);
                            arr_17 [i_3] = ((/* implicit */signed char) var_0);
                        }
                        arr_18 [i_4] [(unsigned char)6] [i_4 - 3] [i_4] [i_4 - 3] &= ((/* implicit */_Bool) arr_16 [i_1] [i_1] [i_2] [i_1] [(_Bool)1] [(_Bool)1] [i_4]);
                        /* LoopSeq 4 */
                        for (unsigned short i_6 = 2; i_6 < 17; i_6 += 4) 
                        {
                            arr_22 [i_1] [i_3] [i_3] [i_3] [i_4 + 1] [i_3] [i_6 - 1] = ((/* implicit */unsigned short) ((arr_6 [i_6 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                            arr_23 [i_1] [i_2] [i_2] [i_3] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? ((+(((/* implicit */int) (signed char)0)))) : (((/* implicit */int) arr_7 [i_1] [i_2]))));
                            var_13 -= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)6))) != (14510810825427662160ULL)));
                        }
                        for (unsigned short i_7 = 3; i_7 < 18; i_7 += 4) 
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_1] [i_3] = ((((/* implicit */int) (unsigned short)39208)) | (((/* implicit */int) (unsigned char)76)));
                            arr_29 [i_1] [i_1] [i_3] [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                        }
                        for (unsigned int i_8 = 2; i_8 < 18; i_8 += 3) 
                        {
                            var_14 = ((((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) (unsigned char)227))))) - ((~(((/* implicit */int) arr_10 [i_4 - 2])))));
                            var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */int) arr_26 [(signed char)12] [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 + 1] [i_8 + 1] [i_8 - 1])) == (((/* implicit */int) var_6)))))));
                            var_16 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)88))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_37 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)62)) * (((/* implicit */int) (signed char)16))));
                            arr_38 [i_1] [i_1] [i_3] [i_1] = ((/* implicit */unsigned short) var_7);
                        }
                        arr_39 [i_1] [i_3] [i_1] [i_3] = ((/* implicit */short) (((((_Bool)1) ? (((/* implicit */int) (signed char)-101)) : (((/* implicit */int) (unsigned char)254)))) - (((((/* implicit */int) (unsigned short)26297)) + (((/* implicit */int) var_7))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_10 = 0; i_10 < 20; i_10 += 2) 
                        {
                            var_17 = (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)56)))));
                            var_18 ^= ((/* implicit */unsigned char) 940170819);
                            arr_44 [i_1] [i_2] [i_1] [i_3] [i_2] [i_2] = arr_11 [i_3];
                        }
                    }
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_32 [i_3] [i_2] [i_3]) ? (1083624639U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))));
                    /* LoopNest 2 */
                    for (unsigned char i_11 = 3; i_11 < 16; i_11 += 2) 
                    {
                        for (signed char i_12 = 0; i_12 < 20; i_12 += 3) 
                        {
                            {
                                var_20 = (((+(arr_21 [i_1] [i_1] [i_1] [i_11] [i_12] [i_1] [i_3]))) == (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5)))))));
                                arr_51 [i_1] [i_3] [i_2] [i_3] [i_1] [i_3] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)220)) | (((/* implicit */int) arr_27 [i_1] [i_2] [i_3] [i_11 + 4] [i_12]))));
                                var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) var_4)) < ((((_Bool)1) ? (((/* implicit */int) arr_12 [(signed char)10] [i_3] [(signed char)10] [i_12])) : (((/* implicit */int) var_1)))))))));
                            }
                        } 
                    } 
                }
                for (unsigned char i_13 = 0; i_13 < 20; i_13 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_14 = 0; i_14 < 20; i_14 += 4) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((((/* implicit */int) arr_9 [i_13])) >= (((/* implicit */int) var_8)))) ? (var_0) : (min((min((6732015841547685398ULL), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) min((((/* implicit */short) (unsigned char)255)), (var_5))))))));
                                var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((signed char) ((signed char) var_4))))));
                                arr_59 [i_13] [i_2] = ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) ((((/* implicit */int) (signed char)51)) != (((/* implicit */int) var_7))))) : (((-1489237538) ^ (524287)))))) ? (((/* implicit */int) ((signed char) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))))) : (max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned short)12390)) : (((/* implicit */int) var_9)))))));
                                var_25 = ((/* implicit */unsigned short) (unsigned char)37);
                            }
                        } 
                    } 
                    arr_60 [i_13] = ((/* implicit */signed char) ((unsigned char) ((((((/* implicit */_Bool) arr_53 [i_13] [i_2])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5)))) - (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_20 [i_1] [i_1] [i_13] [i_2] [i_1])))))));
                }
                var_26 = ((/* implicit */signed char) min((min((((var_0) % (var_0))), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((int) var_2)))));
                /* LoopNest 3 */
                for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
                {
                    for (signed char i_17 = 3; i_17 < 18; i_17 += 3) 
                    {
                        for (signed char i_18 = 4; i_18 < 18; i_18 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */signed char) ((11714728232161866213ULL) >> (((-524306) + (524361)))));
                                arr_71 [i_17] [i_17] [i_16] [i_17] [i_16] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_34 [i_18 - 4] [i_18 + 1] [i_18 + 2] [i_17 + 1] [i_17 + 1])) * (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) var_5)) + (24861)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (signed char)68)))) : (var_3)))));
                            }
                        } 
                    } 
                } 
                arr_72 [i_1] [i_1] [i_1] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(var_9)))), (arr_34 [i_1] [i_1] [i_2] [i_2] [i_2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2147483647) : (((/* implicit */int) var_1))))) && (((/* implicit */_Bool) min(((unsigned short)39233), (((/* implicit */unsigned short) (short)24276)))))))) : (((((/* implicit */_Bool) min((-1294310094), (((/* implicit */int) (short)-24224))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (max((-1319586775), (((/* implicit */int) (unsigned short)65523))))))));
                var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) (((+(arr_15 [i_1] [i_2] [i_2] [i_2]))) + (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-89)), (1294310110))))))) ? (((((/* implicit */int) (short)-24250)) / (((/* implicit */int) (short)24236)))) : (((/* implicit */int) var_1)))))));
            }
        } 
    } 
}
