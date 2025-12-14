/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95720
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) min((((/* implicit */short) arr_6 [i_0] [i_0] [(unsigned char)15])), (((short) arr_6 [i_0] [i_0] [i_0]))));
                    arr_9 [i_1] = arr_6 [i_0] [i_1] [i_0];
                    /* LoopSeq 4 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_0] [i_3] [i_0] [i_3] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (-(((long long int) var_12))))) % (max((((/* implicit */unsigned long long int) arr_1 [i_1])), (((((/* implicit */_Bool) arr_10 [i_3] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (12261520135529181667ULL)))))));
                        var_20 = ((/* implicit */unsigned int) min((((((/* implicit */int) (short)11666)) + (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) max(((short)-11670), ((short)-30122))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 24; i_4 += 4) 
                    {
                        var_21 = ((/* implicit */long long int) ((short) ((_Bool) -1073447245919808836LL)));
                        arr_15 [i_0] [(unsigned char)9] [i_4] = ((/* implicit */unsigned char) var_17);
                        var_22 = ((/* implicit */_Bool) var_17);
                    }
                    for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_20 [i_5] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 795039988U)), (3512120656888600347ULL)))) ? (((((/* implicit */_Bool) var_15)) ? (arr_16 [i_0] [i_1] [i_0] [i_5] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned long long int) arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0])))), ((((~(var_17))) >> (((((arr_1 [i_0]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) - (1545801537U)))))));
                        arr_21 [i_0] = ((/* implicit */signed char) (~(((arr_4 [i_0] [i_0] [i_0] [i_0]) << (((((/* implicit */int) (short)19831)) - (19782)))))));
                        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */int) var_7)) << (((1210851254U) - (1210851238U))))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(18446744073709551615ULL)))) ? (((/* implicit */int) ((short) var_13))) : (((/* implicit */int) ((short) 140737488355327LL)))));
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
                    {
                        arr_26 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_0] [i_2] [i_2])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (var_17))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_6 [(short)0] [(unsigned char)19] [i_6]), (((/* implicit */signed char) var_10))))))))) ? (var_15) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [9LL] [7LL] [i_0])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-79)), ((unsigned char)236))))) : (arr_25 [i_0] [i_1]))))));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 0; i_7 < 24; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((arr_16 [i_1] [i_1] [i_2] [i_1] [i_1]) - (988392358417797099ULL)))))) - (max((((/* implicit */long long int) arr_13 [i_0] [i_1] [i_0] [i_1])), (1152921504606846976LL))))))));
                            var_26 += ((/* implicit */long long int) min((((/* implicit */unsigned int) var_7)), (min((min((var_14), (((/* implicit */unsigned int) (short)30121)))), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)3)), ((short)19831))))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((_Bool) var_11))));
                        }
                        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (~(max((((/* implicit */unsigned long long int) ((arr_19 [i_6] [i_1] [(_Bool)1] [i_6] [i_0] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11))))), (max((arr_4 [i_0] [i_1] [i_2] [i_6]), (((/* implicit */unsigned long long int) var_11)))))))))));
                        var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) min((min((((/* implicit */unsigned int) ((((/* implicit */int) (short)31152)) & (((/* implicit */int) (_Bool)1))))), (((4294967279U) << (((/* implicit */int) var_10)))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_13)), (arr_17 [i_0] [i_1] [i_2] [i_6] [17LL])))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_13), (var_2))))) : (arr_7 [i_1] [i_2] [i_1]))))))));
                        var_30 = ((/* implicit */unsigned char) var_8);
                    }
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            {
                                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_3)) + (2147483647))) << (((((((/* implicit */int) var_9)) + (1915))) - (28)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_9] [(short)5] [i_9])))))) : (arr_7 [i_1] [i_2] [i_1])));
                                var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967279U)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) ((short) arr_33 [i_2] [i_1])))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) var_11)), (2410247119U)))), (((long long int) -7932660811679288227LL))))) : (((unsigned long long int) min((var_19), (((/* implicit */short) var_0))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_33 = var_7;
    var_34 = ((/* implicit */short) max((var_34), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)23825))))) ? (((unsigned int) (unsigned char)13)) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
    var_35 &= ((/* implicit */short) ((long long int) var_18));
}
