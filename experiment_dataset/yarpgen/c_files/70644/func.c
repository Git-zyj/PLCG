/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70644
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70644 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70644
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
    var_11 = ((/* implicit */long long int) var_8);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 21; i_2 += 1) 
                {
                    var_12 = ((/* implicit */_Bool) max((arr_4 [i_0] [i_0]), (((/* implicit */long long int) (((!(((/* implicit */_Bool) var_8)))) ? (var_4) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_10))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) (-((-(min((((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_2] [i_3])), (var_2)))))));
                                arr_12 [i_0] [i_1] [i_2] [i_4] [i_3] [i_4] = ((/* implicit */unsigned long long int) min(((((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) arr_1 [i_0])))) + ((-(var_2))))), (((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) 3793675577U)))), (((((/* implicit */_Bool) (short)9116)) && (((/* implicit */_Bool) var_4)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_6] [i_5] [i_6] = ((/* implicit */short) ((unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_6])))));
                                var_14 = ((/* implicit */int) ((3793675577U) >> (((((/* implicit */int) (unsigned char)127)) - (101)))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) (unsigned char)248);
                }
                for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    var_16 += ((/* implicit */unsigned int) ((unsigned char) arr_10 [i_0] [i_7] [i_1] [i_0] [i_0]));
                    var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (unsigned char)248)), (max((12411106105684787695ULL), (((/* implicit */unsigned long long int) var_3))))));
                }
                for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                {
                    var_18 = ((/* implicit */_Bool) arr_13 [i_8] [i_1] [i_0] [i_0]);
                    arr_24 [i_0] [i_8] [i_8] = var_4;
                    arr_25 [i_0] [i_1] [i_8] = ((/* implicit */short) (~((+(((/* implicit */int) (unsigned char)117))))));
                    var_19 = ((/* implicit */short) min(((~(((((/* implicit */_Bool) 3849084658U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_1))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_5) ? (var_7) : (((/* implicit */long long int) -292831356))))) ? (((/* implicit */int) ((4898128519306400219LL) == (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_1] [i_1] [i_8] [i_8])))))) : (((/* implicit */int) arr_22 [i_0])))))));
                }
                arr_26 [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((3543220240U), (((/* implicit */unsigned int) (unsigned char)2))))) ? ((-(3164691052517660136LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))))) ? (((long long int) max((((/* implicit */short) var_10)), (var_9)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1])))))));
                var_20 &= ((/* implicit */_Bool) ((((/* implicit */int) ((short) 501291712U))) % ((-(((int) -3164691052517660143LL))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 3; i_10 < 20; i_10 += 2) 
                    {
                        var_21 += ((/* implicit */_Bool) ((short) arr_5 [i_1] [i_9]));
                        var_22 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_27 [i_0] [i_9] [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) && (((/* implicit */_Bool) (unsigned short)0))));
                        var_23 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (short)-32760))))) | (((((/* implicit */_Bool) (unsigned char)111)) ? (699296329U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    }
                    var_24 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)123))));
                }
                /* LoopNest 3 */
                for (short i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 1) 
                    {
                        for (unsigned short i_13 = 1; i_13 < 18; i_13 += 1) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) 3793675559U);
                                var_26 = ((/* implicit */unsigned int) (unsigned char)56);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_14 = 0; i_14 < 21; i_14 += 3) 
    {
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            {
                var_27 = ((/* implicit */unsigned int) ((min((arr_41 [i_14]), (arr_41 [i_14]))) | (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                arr_45 [i_14] [i_14] = ((/* implicit */unsigned char) ((var_2) < (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) ((var_1) == (((/* implicit */long long int) (-2147483647 - 1)))))) : (((((/* implicit */_Bool) 3164691052517660136LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_5)))))))));
                arr_46 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) var_7);
                var_28 += ((/* implicit */unsigned short) arr_29 [i_14] [i_14] [i_15] [i_15]);
            }
        } 
    } 
}
