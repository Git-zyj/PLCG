/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65247
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
    for (int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */long long int) (((-(((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))) - (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned char)252)) ? (var_7) : (((/* implicit */int) (unsigned char)3)))), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_4)))))))));
                arr_8 [i_1] [9] = ((/* implicit */unsigned long long int) max((var_8), (var_8)));
                var_14 = ((/* implicit */unsigned char) ((unsigned int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_13)))) > (min((((/* implicit */int) var_0)), (-118161674))))));
                var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) var_8))) ? ((+(((/* implicit */int) (unsigned char)4)))) : (((((/* implicit */_Bool) (unsigned char)229)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_6 [i_1] [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_5 = 2; i_5 < 17; i_5 += 1) 
                    {
                        arr_19 [i_2] [i_3] [i_2] = ((/* implicit */int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */long long int) arr_10 [i_2])) : (var_6)));
                        var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)8)))))));
                        arr_20 [i_5] [i_2] [i_4] [(unsigned char)9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)251))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 2) 
                    {
                        var_17 = ((/* implicit */short) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (arr_17 [i_2] [i_2] [i_3] [i_4] [i_6])));
                        var_18 = ((/* implicit */unsigned int) var_11);
                    }
                    for (int i_7 = 0; i_7 < 19; i_7 += 2) 
                    {
                        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_8))));
                        var_20 *= ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_2), (var_5))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (885278779174433661ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_11)) : (((int) (_Bool)1))))) / (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (var_10))) | (((((/* implicit */_Bool) (unsigned short)6358)) ? (-2712209513192679716LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))))))));
                                arr_35 [i_2] [i_2] [i_3] [i_4] [i_8] [(_Bool)1] = ((/* implicit */signed char) ((unsigned long long int) var_12));
                                var_22 = ((/* implicit */int) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (short i_10 = 1; i_10 < 18; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 1; i_13 < 1; i_13 += 1) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) min((var_10), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */unsigned int) (~(max((((/* implicit */int) (_Bool)0)), (-2121762440)))))) : (max((arr_43 [i_13 - 1] [i_10 + 1] [i_10 + 2]), (((/* implicit */unsigned int) arr_42 [i_13 - 1] [i_13 - 1] [i_10 + 1] [i_10]))))));
                                arr_50 [(signed char)2] [1] [i_13] [11ULL] = min((((/* implicit */long long int) ((((/* implicit */int) (signed char)66)) - (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)224)) ? (131071) : (((/* implicit */int) var_1))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_10) > (((/* implicit */long long int) ((/* implicit */int) var_8))))))) : (var_6))));
                            }
                        } 
                    } 
                    arr_51 [(unsigned char)5] = ((/* implicit */int) var_12);
                    var_24 = min((0ULL), (((/* implicit */unsigned long long int) (unsigned short)65535)));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_15 = 3; i_15 < 12; i_15 += 4) 
    {
        for (int i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28))))) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) (_Bool)1))))))))));
                var_26 += ((/* implicit */short) arr_54 [i_15]);
                var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_11)))) ? ((~(3239258511U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_7))))))) ? ((+(((/* implicit */int) ((((/* implicit */int) var_13)) < (((/* implicit */int) var_12))))))) : (((/* implicit */int) var_12))));
            }
        } 
    } 
}
