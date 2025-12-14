/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59362
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 11; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */_Bool) ((unsigned long long int) ((((long long int) arr_0 [i_0])) * (((/* implicit */long long int) ((int) var_10))))));
                var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (6543359744529807520ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) : (((((/* implicit */_Bool) (signed char)-103)) ? (6434873414138779201ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)41205))))))) & (((/* implicit */unsigned long long int) (-(((int) arr_0 [i_0])))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    var_15 |= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_1 - 2] [i_1 + 4])) ? (-3428364617370478878LL) : (((/* implicit */long long int) (-2147483647 - 1)))));
                                var_17 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)2)) ? (2305843009213693951ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_2])))) - (((/* implicit */unsigned long long int) (-(var_5))))));
                                var_18 |= ((/* implicit */unsigned short) (((!(arr_4 [i_1] [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)255))))) : (((/* implicit */int) arr_8 [i_0] [i_1 + 4] [i_1 + 3] [i_1 + 4] [i_1 + 2] [i_0]))));
                            }
                        } 
                    } 
                }
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (int i_6 = 0; i_6 < 15; i_6 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned short) arr_14 [i_6] [i_5] [(_Bool)0] [(_Bool)0]);
                            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (((~(-1LL))) & (((/* implicit */long long int) ((/* implicit */int) (short)-9052))))))));
                            var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0] [(unsigned char)4] [i_5] [i_0] [i_0])) || (((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((-3428364617370478879LL) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)46006)))))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) : (max((var_6), (arr_11 [i_0] [(_Bool)1] [(_Bool)1] [i_1] [i_0] [(_Bool)1] [i_6])))))));
                            /* LoopSeq 3 */
                            for (unsigned short i_7 = 0; i_7 < 15; i_7 += 1) 
                            {
                                arr_21 [i_5] [i_5] [(unsigned short)4] [i_7] [i_7] = ((/* implicit */unsigned int) arr_8 [(_Bool)1] [i_1] [(_Bool)1] [3LL] [i_1] [(_Bool)1]);
                                var_22 += ((/* implicit */signed char) (+(22ULL)));
                                var_23 = (~(max((-490487142), (((/* implicit */int) (unsigned char)138)))));
                            }
                            for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
                            {
                                var_24 = ((/* implicit */_Bool) (-(18446744073709551608ULL)));
                                arr_26 [i_0] [i_0] [i_8] [i_8] [i_0] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)10760)) ? (((/* implicit */int) (_Bool)0)) : (-1))), ((~(((/* implicit */int) arr_23 [i_1 - 3] [i_1 - 3]))))));
                                arr_27 [i_0] [i_0] [i_8] [(_Bool)1] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3428364617370478878LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)1))))))))) < (((long long int) var_0))));
                                var_25 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */int) (short)(-32767 - 1))) > (((/* implicit */int) (_Bool)0)))) || (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]))))) ^ (max((((/* implicit */int) ((unsigned short) (signed char)119))), (((((/* implicit */_Bool) -1574949078)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))))));
                            }
                            for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
                            {
                                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)39341)) ? (((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 3] [i_1 - 2] [i_1 + 3])) : (((/* implicit */int) arr_9 [i_1 + 2] [i_1 + 1] [i_1 + 4] [i_1 - 2]))))) ? (((/* implicit */int) arr_7 [i_1 - 3] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 - 1] [i_1 + 2])))))));
                                var_27 |= ((/* implicit */int) (+(max((((unsigned long long int) (unsigned short)171)), (((/* implicit */unsigned long long int) max((var_11), (var_11))))))));
                                var_28 *= ((/* implicit */unsigned short) max((((((/* implicit */int) var_9)) << ((((-(((/* implicit */int) (unsigned char)97)))) + (113))))), ((~((+(((/* implicit */int) (unsigned short)65535))))))));
                                var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)30753))))) : (min((((/* implicit */int) (unsigned short)65365)), (max((var_4), (((/* implicit */int) var_3))))))));
                                arr_30 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((-4585682015012085164LL), (arr_24 [i_1] [i_1 + 4] [i_1 + 4] [i_1] [i_1 + 4] [i_1 + 2])))) ? (((((((/* implicit */_Bool) 10571643625855560428ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)247)))) << (((((((/* implicit */_Bool) -617746738)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-27323)))) - (103))))) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_5] [i_6] [i_9]))));
                            }
                        }
                    } 
                } 
                var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0)))))));
            }
        } 
    } 
    var_31 ^= (~((+(((/* implicit */int) (unsigned short)6983)))));
    var_32 ^= ((((/* implicit */_Bool) 2021916441)) ? (((/* implicit */int) (short)31054)) : (-1693605101));
    /* LoopSeq 1 */
    for (unsigned int i_10 = 0; i_10 < 22; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 22; i_11 += 1) 
        {
            for (unsigned int i_12 = 1; i_12 < 20; i_12 += 1) 
            {
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) ((_Bool) arr_36 [i_10] [i_10] [8U] [8U])))) ^ (max((((((/* implicit */int) (unsigned char)0)) ^ (-1))), (((((/* implicit */_Bool) 1386746566)) ? (((/* implicit */int) (_Bool)1)) : (-16)))))));
                    var_34 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_10] [i_10] [i_10] [i_10]))) % (max((((/* implicit */unsigned int) (unsigned char)247)), (min((3252605750U), (((/* implicit */unsigned int) var_7))))))));
                    var_35 = ((/* implicit */unsigned char) var_2);
                }
            } 
        } 
        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((+(14389137423383119751ULL))) / (((/* implicit */unsigned long long int) arr_34 [(unsigned short)16])))))));
        var_37 = ((((/* implicit */_Bool) 261723900175566258LL)) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) (unsigned char)247)));
    }
    var_38 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_9) ? (((/* implicit */long long int) 1693605100)) : (-261723900175566258LL))), (((/* implicit */long long int) max((((/* implicit */unsigned char) (_Bool)1)), (var_1))))))) && (((/* implicit */_Bool) (unsigned char)104))));
}
