/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96781
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
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 13; i_2 += 4) 
                {
                    for (int i_3 = 0; i_3 < 13; i_3 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                arr_11 [i_2] [i_1] [i_2] [i_3] [i_4] [i_0] = ((/* implicit */unsigned int) max(((+(((((/* implicit */_Bool) arr_4 [i_0] [i_0 + 2] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_2] [i_0])) : (((/* implicit */int) arr_4 [i_0] [i_1 + 1] [i_0])))))), (((/* implicit */int) (!(((/* implicit */_Bool) 8442965722769926144ULL)))))));
                                arr_12 [i_1 + 2] [i_0] [i_0] [i_1 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_3])) ? ((+(8442965722769926144ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 10003778350939625462ULL)) ? (-3546748360265012375LL) : (var_0))))))))));
                            }
                            var_13 = ((/* implicit */unsigned char) ((1929368121190608994ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1])))));
                            var_14 = ((((arr_10 [i_0 + 3] [i_0] [i_0 + 2] [i_0 - 2] [i_1 - 2]) == (arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1 + 3]))) ? (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0] [i_0] [i_0 - 3] [i_0])) ? (((/* implicit */long long int) (~(arr_1 [i_0])))) : (arr_9 [i_0 - 3] [i_0 + 3] [i_0 + 3]))) : (((/* implicit */long long int) (+(1871657420)))));
                            var_15 = ((/* implicit */unsigned int) arr_0 [i_1 - 2] [i_2]);
                            arr_13 [i_0] = ((((/* implicit */_Bool) ((((((/* implicit */int) arr_8 [i_0 + 3] [i_3] [i_3] [i_3] [i_1 - 1])) & (((/* implicit */int) (short)-12279)))) & (((/* implicit */int) max(((short)-18370), (((/* implicit */short) arr_8 [i_0] [i_1] [i_1] [i_1 - 2] [i_0])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_1 - 2] [i_0])) ^ (((/* implicit */int) arr_4 [i_0 + 3] [i_1] [i_0]))))) : (((((/* implicit */_Bool) ((int) arr_10 [i_0 + 3] [i_1] [i_2] [i_3] [i_2]))) ? (((((/* implicit */unsigned long long int) arr_6 [i_3] [i_3] [i_3] [i_2] [i_1 + 2] [i_0])) & (10003778350939625470ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_8 [i_3] [i_3] [i_0] [i_1 + 2] [i_0])))))));
                        }
                    } 
                } 
                var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (+((~(((((/* implicit */_Bool) (short)21392)) ? (-297870817) : (arr_3 [i_1] [i_1] [i_1]))))))))));
                var_17 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) < (((/* implicit */int) (unsigned char)209)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_5 = 0; i_5 < 13; i_5 += 1) 
    {
        var_18 = (+(((/* implicit */int) max((((/* implicit */short) (unsigned char)27)), (arr_7 [i_5] [i_5] [i_5] [i_5])))));
        /* LoopSeq 1 */
        for (short i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            arr_18 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((((_Bool) (_Bool)0)) ? (((/* implicit */int) arr_15 [i_5] [i_5])) : (((/* implicit */int) max((arr_0 [i_6] [i_5]), (((/* implicit */short) arr_17 [i_6] [i_6] [i_5]))))))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5]))) <= (((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (arr_9 [i_6] [i_6] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))))))))));
            var_19 *= ((/* implicit */unsigned long long int) (unsigned short)6765);
            arr_19 [i_5] = ((/* implicit */short) min((((/* implicit */int) arr_17 [i_5] [i_5] [i_6])), ((+(max((((/* implicit */int) (unsigned short)6756)), (arr_6 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6])))))));
            var_20 = ((/* implicit */long long int) (+(9574745205485939434ULL)));
            var_21 = ((/* implicit */_Bool) (+((~(arr_10 [i_6] [i_6] [i_6] [i_5] [i_5])))));
        }
        arr_20 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)220))))) ? (((/* implicit */int) arr_16 [i_5] [i_5])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [(signed char)0] [(signed char)0])) && (((/* implicit */_Bool) 6298344389994795707LL)))))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)202)))) ? (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5]) : (((/* implicit */int) arr_7 [i_5] [i_5] [i_5] [i_5])))) : (arr_10 [i_5] [i_5] [i_5] [i_5] [i_5])));
    }
    for (signed char i_7 = 0; i_7 < 10; i_7 += 2) 
    {
        var_22 = ((/* implicit */_Bool) (unsigned char)27);
        var_23 -= ((/* implicit */short) max((min((((/* implicit */int) (unsigned char)83)), ((-(((/* implicit */int) arr_17 [i_7] [i_7] [i_7])))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59892)) ? (((/* implicit */int) (short)10032)) : (-1120203881)))) ? ((~(0))) : (((/* implicit */int) ((unsigned char) arr_23 [i_7])))))));
    }
    for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
    {
        var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_25 [i_8]))) % (4160430405U)));
        arr_26 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 4294967288U)) ? (((/* implicit */int) max((arr_25 [i_8]), (var_9)))) : ((~(((/* implicit */int) var_6))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_24 [i_8])) && (((/* implicit */_Bool) arr_24 [i_8]))))) : (((/* implicit */int) ((arr_24 [i_8]) < (arr_24 [i_8]))))));
    }
    for (int i_9 = 2; i_9 < 8; i_9 += 4) 
    {
        var_25 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_16 [i_9 + 2] [i_9 - 2])) == (((/* implicit */int) arr_16 [i_9 + 3] [i_9 + 3])))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 6042012431722630465ULL)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) arr_0 [i_9] [i_9]))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9]))) : (11544814723914150203ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9] [i_9 - 2])))))));
        arr_30 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (0) : (((/* implicit */int) (unsigned char)9)))) * ((~(-1509546669)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)6)) == (((/* implicit */int) arr_27 [i_9 + 1] [i_9 - 2]))))) : (((/* implicit */int) (((+(((/* implicit */int) arr_2 [i_9] [i_9] [i_9 - 1])))) != (((/* implicit */int) ((short) 1212974491))))))));
    }
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 15; i_10 += 3) 
    {
        for (short i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (unsigned short i_12 = 2; i_12 < 12; i_12 += 1) 
            {
                {
                    arr_41 [i_12] [i_12] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_25 [i_10]))));
                    var_26 = ((/* implicit */signed char) arr_39 [i_10] [i_11]);
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)61648))));
    var_28 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_10), (((/* implicit */int) (unsigned short)61658))))) ? ((~(var_4))) : ((+(((/* implicit */int) var_6))))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-50))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)18))) : (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))));
}
