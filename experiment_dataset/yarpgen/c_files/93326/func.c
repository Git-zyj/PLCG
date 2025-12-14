/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93326
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93326 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93326
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1 - 1] [i_2]);
                            /* LoopSeq 4 */
                            for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                arr_11 [i_2] [i_1] [8] [13ULL] [i_3 - 1] [i_4] = ((/* implicit */long long int) arr_3 [i_2] [i_1] [i_0]);
                                arr_12 [i_2] [i_1] [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) var_5);
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 10; i_5 += 3) /* same iter space */
                            {
                                var_15 = ((/* implicit */signed char) var_0);
                                var_16 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(_Bool)1] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (((var_9) >> (((arr_14 [i_0] [i_1] [i_2] [i_3] [i_3]) - (2034813358)))))));
                                arr_16 [i_2] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)83)) ? (((/* implicit */int) (_Bool)1)) : (2147483647)));
                            }
                            for (int i_6 = 2; i_6 < 10; i_6 += 3) /* same iter space */
                            {
                                var_17 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) max((2094523155121705622ULL), (((/* implicit */unsigned long long int) 2094341259))))) ? (arr_4 [i_0] [i_0] [i_2] [i_2]) : (var_7))), (((/* implicit */int) ((_Bool) 1974207904)))));
                                arr_19 [i_0] [i_2] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) var_6);
                            }
                            /* vectorizable */
                            for (int i_7 = 2; i_7 < 10; i_7 += 3) /* same iter space */
                            {
                                var_18 = ((/* implicit */unsigned int) arr_7 [i_1] [i_3 + 1] [(short)2]);
                                arr_23 [i_1 - 2] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_3 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) -6268702415885469074LL)) : (11956276213972847795ULL)))));
                                arr_24 [i_2] [i_1] = ((/* implicit */_Bool) var_4);
                            }
                            arr_25 [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_21 [i_1] [i_2] [i_3 + 1])), (arr_7 [i_3] [i_2] [(short)5]))) : (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_0]))));
                            arr_26 [i_0] [i_2] [i_2] [11] = ((((_Bool) ((int) (short)32761))) ? (((/* implicit */unsigned long long int) var_4)) : (17645535218264825776ULL));
                            arr_27 [i_2] = ((/* implicit */int) 6268702415885469069LL);
                        }
                    } 
                } 
                arr_28 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) var_3);
                arr_29 [(unsigned char)10] [(_Bool)1] [i_1 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_4)) * (((((/* implicit */_Bool) 801208855444725842ULL)) ? (arr_6 [i_0] [i_1 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (+(17645535218264825764ULL)))))) : (((((/* implicit */_Bool) 15)) ? (var_9) : (801208855444725821ULL)))));
                /* LoopNest 2 */
                for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    for (int i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) ^ (arr_34 [i_9] [i_9] [i_8 + 1] [i_8 + 1] [5ULL] [5ULL]))))));
                            arr_35 [i_0] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) var_7)) : (((((/* implicit */_Bool) arr_21 [i_0] [(short)9] [i_0])) ? (5723101985597903075ULL) : (((/* implicit */unsigned long long int) 4101559911U))))));
                            arr_36 [i_0] [i_8] [i_8] = min((17645535218264825759ULL), (((/* implicit */unsigned long long int) max(((short)-21912), (((/* implicit */short) (_Bool)1))))));
                            arr_37 [i_1 - 1] [i_8] [i_1 - 2] [(unsigned char)13] = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_10 = 3; i_10 < 12; i_10 += 3) 
    {
        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            {
                arr_45 [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 17645535218264825762ULL)) ? (((/* implicit */int) arr_42 [11LL] [i_10] [i_10])) : (((/* implicit */int) var_6))));
                var_21 = ((/* implicit */unsigned short) var_11);
                arr_46 [i_10] [i_11] = var_9;
                /* LoopSeq 2 */
                for (long long int i_12 = 4; i_12 < 11; i_12 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((max(((_Bool)1), ((_Bool)1))) ? (((/* implicit */unsigned long long int) -3025367927797823477LL)) : (max((var_2), (((/* implicit */unsigned long long int) arr_40 [i_10]))))))) ? (((/* implicit */long long int) min((8U), (((/* implicit */unsigned int) (_Bool)1))))) : (((arr_41 [i_10] [i_10 - 1]) | (arr_41 [i_12 + 4] [i_12 - 4])))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 1; i_13 < 13; i_13 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) var_5);
                        var_24 = ((/* implicit */int) ((unsigned long long int) ((unsigned long long int) max((17645535218264825773ULL), (((/* implicit */unsigned long long int) arr_47 [i_10] [i_10] [i_10 + 3] [i_10 - 2]))))));
                        var_25 += min((max((((long long int) arr_39 [i_10] [i_11])), (arr_40 [i_10]))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_4)))) ? (((/* implicit */int) ((unsigned char) arr_44 [i_12] [i_12]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-12905)) : (((/* implicit */int) arr_52 [3]))))))));
                    }
                }
                for (int i_14 = 0; i_14 < 15; i_14 += 2) 
                {
                    arr_56 [i_10] [i_11] [i_14] = ((/* implicit */unsigned char) arr_42 [i_10 + 2] [i_11] [3LL]);
                    var_26 = ((/* implicit */int) ((min((((((/* implicit */_Bool) arr_50 [i_14] [i_11] [i_10 - 3])) ? (801208855444725858ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) ((7U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))) * (((/* implicit */unsigned long long int) ((int) var_13)))));
                    arr_57 [8LL] [i_14] [8LL] [i_14] = var_4;
                }
            }
        } 
    } 
}
