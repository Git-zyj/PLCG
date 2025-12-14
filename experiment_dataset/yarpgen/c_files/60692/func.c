/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60692
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
    for (int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((short)29276), (((/* implicit */short) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0]))) : (min((var_3), (((/* implicit */unsigned long long int) (short)-29277))))));
        var_18 = ((/* implicit */int) ((max((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_3))), (((/* implicit */unsigned long long int) min(((short)-29276), (((/* implicit */short) arr_1 [i_0]))))))) - (((/* implicit */unsigned long long int) min((-2602321185841952720LL), (((/* implicit */long long int) var_1)))))));
        /* LoopSeq 2 */
        for (int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0] [i_1]))))), (((var_4) + (max((var_16), (((/* implicit */unsigned int) (signed char)-101)))))));
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_2 [i_0]))))) / (((/* implicit */int) max((((/* implicit */unsigned short) (short)29276)), ((unsigned short)39122))))));
            var_20 ^= ((/* implicit */long long int) ((((/* implicit */int) ((var_6) > (((/* implicit */long long int) ((/* implicit */int) (short)29276)))))) - ((+(-744713417)))));
            /* LoopSeq 1 */
            for (long long int i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                arr_10 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)54097)) - (54076)))));
                var_21 |= ((/* implicit */signed char) (!(((((/* implicit */int) ((-1393735908) <= (((/* implicit */int) (short)-29275))))) > (631952689)))));
            }
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                for (unsigned char i_4 = 0; i_4 < 22; i_4 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
                        {
                            var_22 = (~(2308138135984477097ULL));
                            arr_21 [i_0] [i_0] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (short)-3010);
                        }
                        var_23 = ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))) : (var_6)))) && (((/* implicit */_Bool) 16368ULL))));
                        var_24 |= ((/* implicit */unsigned char) ((short) (+(((/* implicit */int) arr_9 [i_1] [i_1])))));
                    }
                } 
            } 
        }
        for (unsigned long long int i_6 = 3; i_6 < 19; i_6 += 1) 
        {
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) min((min((((((/* implicit */int) var_8)) ^ (((/* implicit */int) (short)-29257)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), ((+(((/* implicit */int) var_1)))))))));
            var_26 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */short) var_13)), (((short) (short)-29277))))) == (((/* implicit */int) max(((short)-29277), (((/* implicit */short) var_13)))))));
            var_27 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((arr_19 [i_6] [i_6 - 3] [i_6 - 1] [i_6 + 2] [12ULL] [i_6 - 2] [i_6 - 3]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_19 [i_6] [i_6 + 2] [i_6 + 1] [i_6 + 2] [i_6 - 3] [i_6 + 2] [i_6]))))), (min((var_7), (var_4)))));
            /* LoopNest 2 */
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                for (unsigned int i_8 = 3; i_8 < 19; i_8 += 4) 
                {
                    {
                        arr_30 [i_0] [i_0] [i_6] [i_6] [i_7] [i_8 + 2] = ((/* implicit */short) arr_7 [i_0] [i_6] [i_8]);
                        var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (short)16380)))) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) (unsigned short)25269)))) : (((/* implicit */int) max((((/* implicit */unsigned short) (short)-17949)), ((unsigned short)40267))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-29280), (((/* implicit */short) var_13)))))) : (2249134253U))))));
                        var_29 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) var_11)), (arr_3 [i_8] [i_8] [i_8 + 3]))), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_0]))));
                    }
                } 
            } 
            arr_31 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (short)16380)) & (((/* implicit */int) var_0))));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            for (unsigned short i_10 = 1; i_10 < 18; i_10 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_11 = 0; i_11 < 22; i_11 += 3) 
                    {
                        for (unsigned char i_12 = 3; i_12 < 20; i_12 += 4) 
                        {
                            {
                                arr_45 [i_0] [i_9] [i_10] [i_12] [i_0] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)29260))) : (min((((/* implicit */unsigned long long int) (short)-29286)), (18446744073709551615ULL)))))));
                                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) arr_24 [i_0] [i_0] [i_0]))));
                                var_31 = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */signed char) arr_15 [i_0] [i_9] [i_11] [i_9])), ((signed char)-38)))) << (((((((/* implicit */_Bool) ((unsigned long long int) var_13))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (((((/* implicit */_Bool) 17377865820936417924ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_6))))) + (32778LL)))));
                                arr_46 [i_0] [i_0] [i_0] [i_0] [i_12] [i_0] = var_4;
                            }
                        } 
                    } 
                    arr_47 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((min((((/* implicit */unsigned int) var_10)), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (var_4)))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_13 = 2; i_13 < 21; i_13 += 3) 
        {
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                {
                    arr_53 [i_0] [i_0] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) max((((/* implicit */int) (short)-29280)), (317769967)))) + (var_4)));
                    arr_54 [i_14] [i_0] [i_0] [i_14] = min((((/* implicit */unsigned int) min(((short)-29257), ((short)16380)))), (min((var_16), (((/* implicit */unsigned int) min((((/* implicit */short) arr_14 [i_0] [i_0] [i_13] [10ULL] [i_14])), ((short)16380)))))));
                    var_32 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned int) -1393735907))))), ((+(841249648010356168ULL))))), (((/* implicit */unsigned long long int) (signed char)-45))));
                }
            } 
        } 
    }
    var_33 = ((/* implicit */unsigned int) ((((/* implicit */int) min((var_10), (min((var_10), (var_10)))))) / ((~(var_5)))));
    var_34 = ((/* implicit */short) (((((-(((1393735908) | (((/* implicit */int) (unsigned short)43334)))))) + (2147483647))) >> (((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))));
}
