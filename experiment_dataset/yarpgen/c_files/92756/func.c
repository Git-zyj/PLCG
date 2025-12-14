/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92756
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 20; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) ((int) ((3277887234427295563LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)114)))))))));
                    var_11 = ((/* implicit */unsigned short) ((unsigned long long int) (+(var_8))));
                }
            } 
        } 
    } 
    var_12 *= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) (((_Bool)1) ? (939524096) : (-1311120686))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (signed char)127)))) % ((~(var_4)))))));
    /* LoopSeq 2 */
    for (unsigned char i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        var_13 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)-30875), (var_9)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) var_5)), (var_8))))));
        /* LoopNest 2 */
        for (unsigned char i_4 = 3; i_4 < 19; i_4 += 4) 
        {
            for (long long int i_5 = 1; i_5 < 19; i_5 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 20; i_7 += 4) 
                        {
                            {
                                var_14 = ((/* implicit */unsigned short) min((((int) (unsigned char)97)), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)25195)) ? (((/* implicit */int) (short)127)) : (((/* implicit */int) var_6)))) != (((/* implicit */int) (unsigned short)40340)))))));
                                var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 4151850002U))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40341))) : (781512153U)))));
                                var_16 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 5803794205137300826LL))))), (min((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (var_3)))), (((5076411541595990886LL) - (((/* implicit */long long int) var_3))))))));
                                arr_22 [i_3] [i_4] [i_3] [19U] [i_7] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (1419087073U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-30875)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (3730878041U) : (3513455142U))))))))));
                                arr_23 [i_5 + 2] [i_7] [i_6] [i_6] [i_5 + 2] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((1242906795U), (((/* implicit */unsigned int) (short)32767)))))));
                            }
                        } 
                    } 
                    var_17 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_5) : (4294967295U)))) && (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)0))));
                    var_18 = ((/* implicit */_Bool) (+(min((((var_5) << (((((/* implicit */int) (unsigned char)255)) - (236))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7186)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) var_9)))))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (signed char i_8 = 0; i_8 < 22; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 3; i_9 < 20; i_9 += 4) 
                        {
                            var_19 = (~(4294967295U));
                            var_20 ^= ((/* implicit */short) 1048320);
                        }
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((int) 8899762997494901487LL)))));
                            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -939524096)) ? (((/* implicit */unsigned long long int) -1)) : (((((/* implicit */_Bool) (short)-1531)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17499))) : (4090326572460435804ULL))))))));
                            arr_33 [i_3] [(short)21] [(short)21] [(short)21] [i_4 - 2] [i_4] = ((/* implicit */unsigned int) (unsigned char)255);
                        }
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            arr_37 [0U] [i_3] [i_3] [i_4 + 2] [i_3] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17499))) | (4090326572460435804ULL)));
                            arr_38 [i_3] [i_8] [(unsigned short)12] [i_5 + 3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) 0U)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 4) 
                        {
                            var_23 &= ((/* implicit */long long int) ((unsigned short) (signed char)-100));
                            var_24 = ((/* implicit */unsigned short) 10138932584142600290ULL);
                            arr_43 [(unsigned char)13] [i_4] [i_3] [i_8] [i_4] [i_5] = ((/* implicit */unsigned short) (-(-6803795347458993238LL)));
                        }
                    }
                    for (unsigned short i_13 = 1; i_13 < 21; i_13 += 4) /* same iter space */
                    {
                        var_25 ^= ((/* implicit */long long int) (signed char)(-127 - 1));
                        var_26 = ((/* implicit */int) (((-(((((/* implicit */_Bool) (short)30875)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) : (18446744073709551615ULL))))) % (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) ^ (var_4))))));
                        var_27 &= ((/* implicit */unsigned short) (+(1669590344)));
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) (signed char)31)))));
                    }
                    /* vectorizable */
                    for (unsigned short i_14 = 1; i_14 < 21; i_14 += 4) /* same iter space */
                    {
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((unsigned int) (_Bool)0)))));
                        arr_48 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)61)) << (((((/* implicit */int) (signed char)(-127 - 1))) + (133)))));
                        var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) 3720318704113184614LL)))) ? (((/* implicit */int) ((unsigned char) 1))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8872160643391163590LL))))))))));
                        var_31 = ((/* implicit */unsigned long long int) (+(-475201555)));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        var_32 *= ((/* implicit */short) (((!(((/* implicit */_Bool) -1714806228)))) && ((_Bool)0)));
                        var_33 = ((/* implicit */unsigned long long int) ((short) var_3));
                    }
                }
            } 
        } 
        arr_53 [i_3] [i_3] = ((/* implicit */short) var_0);
    }
    for (short i_16 = 2; i_16 < 20; i_16 += 4) 
    {
        var_34 ^= ((/* implicit */unsigned short) (+(7620781103197424458ULL)));
        var_35 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((int) 15754655915787035076ULL))) * (16671798270429103750ULL)))) ? (((0U) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) 13217618348237727712ULL)) ? (31) : (((/* implicit */int) (signed char)77))))))) : (((/* implicit */unsigned int) (+((-(((/* implicit */int) (unsigned short)65535))))))));
    }
    var_36 += ((/* implicit */unsigned long long int) 9223372036854775807LL);
}
