/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6072
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6072 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6072
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_19 *= ((/* implicit */_Bool) max((((/* implicit */int) max(((short)-13283), (((/* implicit */short) (_Bool)0))))), ((+(((/* implicit */int) arr_0 [i_0]))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) arr_0 [i_0]))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((((((/* implicit */_Bool) ((short) arr_1 [i_0] [i_0]))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (_Bool)1)))))));
        arr_2 [(unsigned short)10] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (unsigned short)511))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_22 = ((/* implicit */short) (unsigned short)60335);
                    arr_12 [i_1] [i_1] [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_3) : (arr_4 [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                    {
                        for (short i_5 = 1; i_5 < 10; i_5 += 1) 
                        {
                            {
                                var_23 *= ((/* implicit */unsigned short) ((short) arr_0 [i_1]));
                                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)32)) : (((/* implicit */int) (unsigned short)60235))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) (_Bool)1)))));
                                var_25 = ((/* implicit */short) (_Bool)1);
                                var_26 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_13 [i_1] [i_1])) : (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (short i_7 = 3; i_7 < 10; i_7 += 4) 
                        {
                            {
                                var_27 *= ((/* implicit */_Bool) (unsigned short)61364);
                                var_28 ^= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)48968)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-63))));
                                arr_23 [i_3] [i_2] [i_7] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((arr_5 [i_3] [i_7]) * (((/* implicit */int) var_13)))) : ((+(((/* implicit */int) var_15))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_24 [(unsigned char)10] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (-5424783975401121832LL)))));
        var_29 = (signed char)47;
    }
    for (unsigned short i_8 = 2; i_8 < 14; i_8 += 3) 
    {
        arr_28 [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)48956))));
        var_30 = ((/* implicit */unsigned char) min(((signed char)61), (((/* implicit */signed char) ((_Bool) arr_27 [i_8])))));
        var_31 *= (_Bool)1;
        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) max((((/* implicit */int) (short)-23914)), (((((/* implicit */_Bool) 5341815126351089506LL)) ? (((/* implicit */int) (_Bool)1)) : (2147483647))))))));
    }
    var_33 = ((/* implicit */_Bool) var_2);
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
    {
        for (short i_10 = 1; i_10 < 11; i_10 += 3) 
        {
            {
                arr_35 [i_10 - 1] [(short)11] [i_9] = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */int) ((_Bool) (unsigned short)0))) > (((arr_27 [i_10 - 1]) ? (((/* implicit */int) (short)-1)) : (653994997)))))), (max((max((arr_29 [i_9] [i_9]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_26 [i_9] [i_9])), ((unsigned short)65532))))))));
                var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (unsigned short)2793))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) var_13)))))));
                arr_36 [i_9] [i_10 - 1] = ((/* implicit */signed char) ((arr_33 [i_9] [i_9]) / (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_9] [i_9]))))) ? (((/* implicit */int) min((var_1), ((signed char)-14)))) : (((var_10) / (((/* implicit */int) arr_1 [i_9] [i_10 + 1])))))))));
                var_35 = ((/* implicit */long long int) ((_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)109))) : (-5424783975401121832LL))));
            }
        } 
    } 
}
