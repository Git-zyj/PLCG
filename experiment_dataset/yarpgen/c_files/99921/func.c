/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99921
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
    for (short i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_12 = min((((/* implicit */unsigned long long int) var_5)), (14880592332605507380ULL));
        arr_4 [i_0] = ((/* implicit */_Bool) ((short) min((((/* implicit */unsigned long long int) ((arr_0 [i_0 + 1] [i_0 + 1]) ? (((/* implicit */unsigned int) 1079979642)) : (2611001931U)))), (((unsigned long long int) 3566151741104044236ULL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_8 [i_1] [(_Bool)1] [i_1] = ((/* implicit */short) 3566151741104044259ULL);
            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1]))) ? (((unsigned long long int) arr_7 [i_1 - 1] [i_1 - 1] [i_1 - 1])) : (((var_9) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0)))))));
            arr_9 [i_1] = ((/* implicit */unsigned char) min((min((4233667443328890879LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) 1044728102481013167LL))))))), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_9)) ? (435919222U) : (((/* implicit */unsigned int) -1032436644)))))))));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned int) 14880592332605507380ULL);
    }
    var_14 = ((/* implicit */_Bool) var_5);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16; i_2 += 1) 
    {
        for (long long int i_3 = 0; i_3 < 16; i_3 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_4 = 4; i_4 < 13; i_4 += 3) 
                {
                    for (short i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) && ((!(((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) : (8637101665610225927ULL))))))));
                            var_16 = ((/* implicit */signed char) min((var_5), (((/* implicit */short) (unsigned char)223))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_6 = 1; i_6 < 15; i_6 += 3) 
                {
                    arr_23 [i_2] [i_3] [1ULL] [i_6] = ((/* implicit */_Bool) -1328683362);
                    arr_24 [(short)8] [i_3] [i_6] [i_3] = ((/* implicit */unsigned short) arr_14 [i_2] [(unsigned char)9]);
                }
                for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 16; i_9 += 1) 
                        {
                            {
                                arr_33 [i_7] [i_7] = ((/* implicit */signed char) ((short) var_2));
                                var_17 = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) ((unsigned int) (unsigned short)63230)))))));
                                arr_34 [i_2] [i_3] [i_7] [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_0 [i_7] [i_3])))) : ((-(8637101665610225950ULL)))));
                                var_18 = (((-(14880592332605507377ULL))) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    arr_35 [i_7] = ((/* implicit */unsigned short) min(((-((+(5499679875503989740ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (+(((/* implicit */int) var_8))))), (((((/* implicit */_Bool) 2381946002U)) ? (1044728102481013163LL) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_7]))))))))));
                    arr_36 [i_7] = ((/* implicit */int) min((((/* implicit */long long int) (~(arr_29 [(_Bool)1] [i_3] [i_2])))), (min((((/* implicit */long long int) 1732344915)), (((long long int) 1033683031U))))));
                }
                arr_37 [i_3] = (!(((/* implicit */_Bool) (+(((((-1044728102481013135LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)4095)) - (4033)))))))));
                arr_38 [i_3] [i_2] = (unsigned short)59487;
            }
        } 
    } 
    var_19 = ((/* implicit */signed char) (unsigned char)16);
}
