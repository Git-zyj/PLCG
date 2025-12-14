/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96688
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
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_11 ^= ((/* implicit */unsigned long long int) (-(7864079455636468431LL)));
        arr_3 [i_0] = ((((long long int) var_10)) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) < (((/* implicit */int) var_1)))))));
        var_12 *= ((/* implicit */signed char) arr_0 [(signed char)15]);
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned long long int) var_5);
        arr_6 [i_1] [i_1] |= ((/* implicit */int) arr_4 [(_Bool)1]);
        var_14 = (+(((/* implicit */int) ((unsigned short) (_Bool)1))));
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 20; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 20; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (unsigned char)240))));
                    arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3785275538109074036LL)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            {
                                var_16 -= ((/* implicit */long long int) ((short) (unsigned short)42705));
                                var_17 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_1] [14U] [i_3] [i_4] [i_4] [i_5])) | (((/* implicit */int) arr_13 [i_1] [15LL] [i_1] [i_1] [15LL] [i_1]))));
                                var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_1] [i_3] [i_4] [i_5]))) : (((unsigned int) arr_8 [i_1] [(_Bool)1])));
                                arr_17 [i_1] [i_2] [11ULL] [i_3] [11ULL] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_1] [(_Bool)1] [(_Bool)1] [i_1] [(_Bool)1] [i_2]))));
                                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((signed char) (signed char)-104)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_6 = 2; i_6 < 18; i_6 += 3) 
                    {
                        var_20 = ((/* implicit */unsigned short) ((signed char) (+(((/* implicit */int) var_5)))));
                        arr_21 [i_1] [(unsigned short)0] [i_3] [i_6] = ((((/* implicit */_Bool) ((short) var_2))) && (((/* implicit */_Bool) ((unsigned long long int) var_10))));
                        var_21 = ((long long int) (unsigned short)12208);
                        var_22 |= ((((/* implicit */_Bool) 3785275538109074014LL)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (signed char)-78)));
                    }
                    for (signed char i_7 = 0; i_7 < 20; i_7 += 3) 
                    {
                        var_23 = ((/* implicit */unsigned long long int) arr_23 [i_1] [(_Bool)1] [i_3]);
                        arr_24 [i_7] [i_3] [i_3] [0U] [i_3] [i_1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_1] [i_1] [i_1] [12ULL] [i_1]))) - (-4110754590801066676LL)));
                        /* LoopSeq 2 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_3] [(unsigned short)10] [i_3] = ((/* implicit */unsigned long long int) ((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) var_3)) - (26)))));
                            arr_30 [i_1] [i_2] [i_3] [i_3] [i_1] [i_3] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) arr_26 [i_1] [i_7] [i_1] [i_2] [i_1]))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_19 [i_1] [i_3] [i_3] [i_3])) + (((/* implicit */int) var_5))))) : (((unsigned int) 1LL))));
                            var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) ((_Bool) (unsigned short)23))) | (((/* implicit */int) (short)0))));
                            var_25 = arr_20 [i_1] [i_2] [i_1];
                        }
                        for (int i_9 = 0; i_9 < 20; i_9 += 2) 
                        {
                            arr_34 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_3] [i_9] [i_3] [i_3] [0LL] [i_3])) ? (((/* implicit */int) arr_16 [i_1] [i_3] [i_1] [i_7] [i_9] [i_9] [i_7])) : (((/* implicit */int) arr_31 [i_1] [i_7] [i_3] [i_7] [14LL] [i_3]))));
                            arr_35 [i_1] [17ULL] [15LL] [i_2] [i_9] [i_3] = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) 769233495)) * (2222912207U)))));
                            var_26 = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                            arr_36 [(_Bool)1] [i_9] [i_3] [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_6)) ? (var_8) : (((/* implicit */long long int) var_7)))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                        }
                        var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)78))));
                    }
                    for (short i_10 = 0; i_10 < 20; i_10 += 1) 
                    {
                        arr_40 [i_10] [i_10] [i_10] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) == (arr_25 [i_1] [(unsigned char)11] [14] [i_2] [i_3] [i_10] [i_10])));
                        var_28 ^= ((/* implicit */long long int) ((unsigned char) arr_8 [i_10] [i_1]));
                        var_29 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1373449338)))))));
                        arr_41 [i_3] [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (short)-30075))) ? (8329603110695502766LL) : (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                    }
                    for (signed char i_11 = 1; i_11 < 16; i_11 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_12 = 0; i_12 < 20; i_12 += 3) /* same iter space */
                        {
                            var_30 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_44 [i_2] [i_2] [i_2]))));
                            var_31 *= ((/* implicit */_Bool) (-(((/* implicit */int) arr_27 [i_1] [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_12]))));
                            arr_47 [i_2] [i_2] [i_3] [i_3] [i_12] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-2LL) / (var_8)))) ? ((~(9917328929388428106ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        }
                        for (long long int i_13 = 0; i_13 < 20; i_13 += 3) /* same iter space */
                        {
                            var_32 = (_Bool)0;
                            var_33 -= ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_2))));
                            var_34 ^= ((/* implicit */_Bool) ((arr_37 [i_1] [i_2] [i_2] [i_2]) >> (((arr_37 [i_11] [i_11] [i_2] [i_11 - 1]) - (629873506U)))));
                        }
                        var_35 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [0LL] [0LL] [i_3] [16U]))) : (arr_9 [17ULL] [i_1] [i_2] [i_1])))));
                        var_36 ^= ((((/* implicit */_Bool) ((short) (unsigned short)65491))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [(unsigned short)2] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (arr_20 [i_1] [i_2] [i_1]));
                    }
                }
            } 
        } 
    }
    var_37 = ((/* implicit */short) (_Bool)1);
}
