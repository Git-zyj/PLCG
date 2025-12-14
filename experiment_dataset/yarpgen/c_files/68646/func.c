/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68646
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
    var_16 = ((/* implicit */short) ((((4660754063992570391LL) + (((/* implicit */long long int) ((/* implicit */int) ((short) var_13)))))) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (short)-13072))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0] [i_0])) > (((/* implicit */int) arr_2 [i_0] [i_0]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((long long int) (~(4660754063992570391LL))));
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */unsigned int) 0ULL);
        arr_6 [i_1] = ((/* implicit */unsigned char) (((((_Bool)1) && (((/* implicit */_Bool) 4660754063992570391LL)))) && ((!(((/* implicit */_Bool) arr_2 [i_1] [i_1]))))));
        arr_7 [3U] [6U] = ((/* implicit */unsigned char) -1869769418);
        arr_8 [i_1] = arr_2 [i_1] [i_1];
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) ((unsigned int) ((unsigned int) ((_Bool) var_12))));
        /* LoopNest 2 */
        for (long long int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            for (signed char i_4 = 0; i_4 < 17; i_4 += 4) 
            {
                {
                    var_20 = ((/* implicit */int) ((((-1632628890) >= (((/* implicit */int) (unsigned char)35)))) ? (((/* implicit */long long int) 2019672637U)) : (min((min((((/* implicit */long long int) (unsigned char)231)), (arr_15 [i_3] [(unsigned short)7]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_4])))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 1; i_5 < 15; i_5 += 3) /* same iter space */
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_12 [i_3] [i_4])))));
                        var_21 = ((/* implicit */short) arr_9 [i_2]);
                        /* LoopSeq 2 */
                        for (unsigned short i_6 = 0; i_6 < 17; i_6 += 1) 
                        {
                            arr_26 [i_2] [i_3] [i_4] [i_4] [i_6] [i_3] = ((/* implicit */unsigned char) (short)32767);
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)177)) : (((/* implicit */int) (_Bool)1))))) - (((long long int) arr_20 [i_6] [i_5 - 1]))));
                        }
                        /* vectorizable */
                        for (unsigned char i_7 = 0; i_7 < 17; i_7 += 1) 
                        {
                            arr_31 [i_2] [i_2] [i_2] [i_2] [(signed char)6] [i_2] [i_2] = ((/* implicit */int) arr_25 [i_7]);
                            var_23 = ((/* implicit */int) arr_16 [i_2] [i_7]);
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)224)) >> (((3005233602U) - (3005233577U)))));
                        }
                        var_25 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_21 [i_2] [i_2] [i_4] [i_5 + 1])))))), (max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)31806))))), (arr_16 [i_5 + 2] [i_5 - 1])))));
                    }
                    for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 3) /* same iter space */
                    {
                        var_26 = -1632628890;
                        /* LoopSeq 3 */
                        for (unsigned long long int i_9 = 0; i_9 < 17; i_9 += 4) /* same iter space */
                        {
                            arr_36 [i_9] [(unsigned char)0] [i_9] [i_8] [i_2] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_9 [i_8 + 1]), (arr_9 [i_8 + 1])))) ? ((+(((/* implicit */int) arr_9 [i_8 + 2])))) : (((((/* implicit */_Bool) arr_9 [i_8 - 1])) ? (((/* implicit */int) arr_9 [i_8 - 1])) : (((/* implicit */int) arr_9 [i_8 - 1]))))));
                            arr_37 [i_2] [i_2] [i_2] [(unsigned char)6] [i_9] = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) arr_25 [i_8 + 1])))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
                        {
                            arr_40 [i_2] [(unsigned short)15] [i_4] [i_2] [i_4] = ((/* implicit */unsigned short) ((arr_25 [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) 2019672627U))))));
                            var_27 = ((/* implicit */unsigned int) arr_34 [i_10] [i_3] [i_3] [i_3]);
                            var_28 = ((/* implicit */unsigned long long int) (-(arr_27 [i_2] [i_2] [i_3])));
                        }
                        for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                        {
                            arr_43 [i_2] [i_3] [i_3] [i_8] [i_11] [i_4] [i_8] = ((/* implicit */unsigned char) 1391851058502020965ULL);
                            var_29 = ((/* implicit */long long int) arr_9 [i_8 - 1]);
                            arr_44 [i_11] [i_8 + 2] [i_2] [i_3] [i_11] = ((/* implicit */unsigned char) ((unsigned long long int) (+(min((4687239898816181908LL), (((/* implicit */long long int) var_15)))))));
                            var_30 = ((/* implicit */unsigned int) ((unsigned long long int) 5956900916364741286LL));
                        }
                        var_31 = ((/* implicit */short) ((((/* implicit */int) max((arr_29 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8 + 2] [i_8 + 2]), (arr_29 [9LL] [i_8] [(short)4] [i_8 - 1] [i_8] [i_8 + 2] [i_8 - 1])))) <= (((/* implicit */int) ((((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_8 + 2] [11] [i_8 + 2] [(_Bool)1])) >= (((/* implicit */int) arr_29 [i_8] [i_8 + 2] [i_8 + 1] [(short)6] [i_8] [i_8 + 2] [i_8])))))));
                        var_32 = ((/* implicit */unsigned long long int) -17LL);
                    }
                    var_33 = ((unsigned int) max((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6863)))), (arr_16 [i_2] [i_2])));
                }
            } 
        } 
    }
    var_34 = var_8;
}
