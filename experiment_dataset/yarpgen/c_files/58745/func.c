/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58745
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
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) arr_3 [i_0]))));
        var_15 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (unsigned char)153)), (5957874107838659312ULL)));
        arr_4 [i_0] = ((/* implicit */short) (~(12488869965870892290ULL)));
    }
    var_16 = ((/* implicit */signed char) var_9);
    var_17 = ((/* implicit */long long int) (((_Bool)1) ? (12488869965870892304ULL) : (12488869965870892274ULL)));
    /* LoopNest 2 */
    for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) max((((short) ((((/* implicit */int) arr_8 [i_1] [i_1] [i_2])) + (((/* implicit */int) arr_5 [i_1] [i_2]))))), (((/* implicit */short) var_1))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 2) 
                {
                    var_19 &= ((/* implicit */long long int) (((_Bool)0) ? ((+(2801831534U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_2])))));
                    arr_12 [i_1] [i_2] [i_2] [i_1] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
                }
                for (unsigned long long int i_4 = 2; i_4 < 23; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) 12488869965870892304ULL);
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 23; i_5 += 3) 
                    {
                        for (signed char i_6 = 1; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_19 [i_1] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */long long int) ((short) 5957874107838659321ULL));
                                arr_20 [i_1] [i_2] [i_6 + 3] [i_2] [i_6] [i_4] = ((unsigned long long int) arr_13 [i_1] [i_2] [i_2]);
                            }
                        } 
                    } 
                }
                for (unsigned char i_7 = 1; i_7 < 21; i_7 += 1) 
                {
                    arr_25 [i_2] = ((/* implicit */unsigned char) ((max((1308561217U), (((/* implicit */unsigned int) (signed char)108)))) << (((((((/* implicit */_Bool) arr_8 [7ULL] [i_1] [i_7 + 2])) ? (((/* implicit */int) arr_8 [i_2] [(signed char)12] [i_7 + 3])) : (((/* implicit */int) arr_8 [i_1] [i_2] [i_7 + 1])))) - (55)))));
                    arr_26 [i_2] = ((/* implicit */short) arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 2]);
                }
                arr_27 [i_2] [i_2] = ((/* implicit */short) (-(((/* implicit */int) ((min((((/* implicit */long long int) (unsigned short)225)), (arr_24 [i_1] [i_2] [i_2]))) > (((/* implicit */long long int) var_3)))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (unsigned long long int i_9 = 0; i_9 < 24; i_9 += 4) 
                    {
                        {
                            arr_32 [i_2] [i_2] [19LL] [i_2] = ((((/* implicit */_Bool) -269538560633480494LL)) && ((_Bool)1));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_9]))) < (2725578542050820482LL))))));
                            arr_33 [i_1] [i_2] = ((/* implicit */signed char) var_10);
                        }
                    } 
                } 
            }
        } 
    } 
}
