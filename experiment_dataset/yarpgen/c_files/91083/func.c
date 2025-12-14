/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91083
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
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) 3727671274U)) || (((/* implicit */_Bool) -10)))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */int) var_9)) : (28)))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_0)))))) & (((567296024U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)12601)))))))));
    var_18 ^= ((/* implicit */signed char) max((((/* implicit */long long int) var_5)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) min((567296046U), (((/* implicit */unsigned int) 949141981))))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) -10918581)) : (var_2)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (unsigned int i_4 = 1; i_4 < 18; i_4 += 2) 
                            {
                                var_19 = ((/* implicit */signed char) ((int) ((unsigned int) (short)-12601)));
                                var_20 ^= ((/* implicit */unsigned short) (((+(((((/* implicit */int) var_8)) - (((/* implicit */int) (unsigned short)8)))))) * (((/* implicit */int) (unsigned short)28634))));
                                var_21 = ((/* implicit */int) max((var_21), (((((/* implicit */_Bool) (unsigned short)16176)) ? (((/* implicit */int) ((((/* implicit */int) min((var_16), (((/* implicit */unsigned short) (short)-12603))))) >= (((/* implicit */int) var_10))))) : (((/* implicit */int) var_0))))));
                            }
                            var_22 ^= ((/* implicit */long long int) var_8);
                            /* LoopSeq 2 */
                            for (short i_5 = 2; i_5 < 19; i_5 += 4) 
                            {
                                var_23 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)203)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_1)))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : ((+(((/* implicit */int) var_0)))));
                                var_24 ^= ((/* implicit */unsigned short) ((1579523245U) == (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-12601)))))));
                                arr_15 [i_2] [i_1] [i_0] [i_3] = var_1;
                            }
                            for (unsigned short i_6 = 0; i_6 < 20; i_6 += 2) 
                            {
                                var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) max((((((var_2) & (((/* implicit */long long int) ((/* implicit */int) var_0))))) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_4)))))), (((/* implicit */long long int) (~((+(1579523245U)))))))))));
                                arr_18 [i_6] [i_0] [(unsigned short)10] [i_0] [i_0] = min((((/* implicit */unsigned int) var_8)), (2958500988U));
                            }
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (long long int i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                            {
                                var_26 = ((/* implicit */signed char) var_16);
                                arr_23 [i_0] [i_1] [i_1] [i_3] [3LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-12599)) || (((/* implicit */_Bool) 0ULL))));
                                var_27 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))));
                                var_28 = ((/* implicit */short) (+(((((/* implicit */_Bool) var_16)) ? (var_15) : (var_15)))));
                            }
                            for (long long int i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                            {
                                arr_26 [i_0] [i_3] [(signed char)7] [i_1] [i_0] = ((((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_10)))) ? (((((/* implicit */_Bool) (unsigned char)241)) ? (2715444050U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)99))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)85)) <= (((/* implicit */int) var_7)))))));
                                arr_27 [i_0] [i_0] = ((/* implicit */int) (((-(min((var_4), (((/* implicit */long long int) var_15)))))) * (max((((/* implicit */long long int) (_Bool)1)), ((-9223372036854775807LL - 1LL))))));
                                arr_28 [i_0] [15U] = (-((+(max((((/* implicit */long long int) 1475475916U)), (var_4))))));
                                var_29 ^= ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))), ((~(14336))))), (-14337)));
                            }
                            /* LoopSeq 2 */
                            for (int i_9 = 0; i_9 < 20; i_9 += 1) 
                            {
                                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)26812)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0))))) || (((/* implicit */_Bool) (short)12588)))))) : (min((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))))), (min((var_2), (((/* implicit */long long int) var_0))))))));
                                var_31 = ((/* implicit */unsigned short) (_Bool)1);
                                arr_31 [(short)11] [i_0] [i_0] [(short)11] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)0)))))))));
                            }
                            for (unsigned int i_10 = 0; i_10 < 20; i_10 += 3) 
                            {
                                var_32 ^= ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) (unsigned short)24035))) * (-28)));
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (max((((/* implicit */unsigned int) 34)), (775922969U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967283U)) ? (((/* implicit */int) var_16)) : (-1237250094))))))) ? (((((((/* implicit */_Bool) 3727671294U)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-12935))))) ^ (((/* implicit */long long int) (~(var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))));
                                arr_36 [i_0] [(signed char)13] [(short)1] [i_0] [i_10] [i_1] [(signed char)13] = min((min((var_11), (var_16))), (((/* implicit */unsigned short) (short)9192)));
                                var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) var_12))) ? ((-(((((/* implicit */_Bool) 28)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) var_7))));
                                var_35 = ((/* implicit */int) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -10918581)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)9194))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((306666922U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))));
                            }
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_11 = 3; i_11 < 18; i_11 += 4) 
                {
                    for (unsigned long long int i_12 = 3; i_12 < 17; i_12 += 4) 
                    {
                        {
                            arr_43 [i_0] [i_11] [5U] [i_0] = ((/* implicit */int) (unsigned short)5226);
                            var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((545109045U) << (((((((/* implicit */_Bool) var_9)) ? (4009874900456812345LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)200))))) - (4009874900456812323LL))))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned short i_13 = 1; i_13 < 16; i_13 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_14 = 4; i_14 < 16; i_14 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_15 = 1; i_15 < 16; i_15 += 4) 
                        {
                            arr_51 [i_15 + 3] [i_0] [i_15] [i_15 + 4] [(unsigned char)19] [i_15 + 3] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) min((var_1), (((/* implicit */long long int) (short)-12602))))))), ((!(((((/* implicit */_Bool) (unsigned char)228)) || (((/* implicit */_Bool) var_16))))))));
                            arr_52 [i_0] [(short)5] [i_13] [6] [i_14] [i_0] [3ULL] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) ((_Bool) var_9))) : (((/* implicit */int) var_8))))) <= (min((((((/* implicit */_Bool) (short)-9193)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_7)))))))));
                            var_37 = ((/* implicit */short) (unsigned char)139);
                            var_38 ^= ((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_10)))))));
                            var_39 = ((/* implicit */unsigned short) min((var_39), (((unsigned short) (+(min((var_1), (var_4))))))));
                        }
                        /* vectorizable */
                        for (signed char i_16 = 2; i_16 < 19; i_16 += 4) 
                        {
                            arr_57 [i_0] = ((/* implicit */unsigned int) (unsigned short)21177);
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) (~(var_1))))));
                        }
                        for (unsigned char i_17 = 1; i_17 < 19; i_17 += 4) 
                        {
                            arr_60 [i_0] [i_0] [(short)9] [i_14 + 2] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21))) ^ (((((/* implicit */_Bool) (signed char)21)) ? (4294967285U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                            var_41 ^= ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_6)) : (2018941504))) + (((/* implicit */int) ((833717401) > (((/* implicit */int) (signed char)111)))))))), (((((/* implicit */_Bool) 1189338155)) ? (var_5) : (((/* implicit */unsigned int) -690488714))))));
                            var_42 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)28))));
                        }
                        arr_61 [i_0] = ((/* implicit */int) min((max((var_3), (((/* implicit */unsigned int) var_8)))), (((((/* implicit */_Bool) (signed char)92)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (3502963699U)))));
                        var_43 = ((/* implicit */int) var_9);
                        /* LoopSeq 1 */
                        for (unsigned short i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            var_44 = ((/* implicit */unsigned short) var_1);
                            var_45 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (unsigned short)50105))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)12462), ((unsigned short)65535))))) : (((((/* implicit */unsigned int) ((/* implicit */int) var_9))) | (var_3)))));
                            var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((+(((/* implicit */int) (unsigned char)174)))), (((/* implicit */int) ((short) var_13)))))) ? (min(((+(var_15))), (((/* implicit */int) (unsigned char)28)))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) (!(((/* implicit */_Bool) -8198023968905726846LL))))))))))));
                            arr_64 [i_0] = var_3;
                        }
                    }
                    for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 1) 
                    {
                        arr_68 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) 0);
                        var_47 = ((/* implicit */signed char) min((((/* implicit */long long int) (+(-13)))), ((~(var_4)))));
                    }
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) var_10)), (((((/* implicit */_Bool) 4010704061U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)108))))))))))));
                }
            }
        } 
    } 
    var_49 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)199)) ? (((/* implicit */int) (unsigned short)30930)) : (((/* implicit */int) (short)-9192))))) + ((+(max((((/* implicit */unsigned long long int) 8198023968905726829LL)), (15359427694468061290ULL)))))));
}
