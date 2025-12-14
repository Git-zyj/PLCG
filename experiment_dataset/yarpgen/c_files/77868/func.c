/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77868
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
    var_14 = ((/* implicit */_Bool) ((short) (((!(((/* implicit */_Bool) var_6)))) || (((/* implicit */_Bool) var_7)))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
                {
                    var_15 = ((/* implicit */_Bool) ((unsigned long long int) arr_7 [i_0] [(unsigned short)10] [i_0] [i_2]));
                    var_16 = ((/* implicit */unsigned long long int) ((unsigned short) arr_8 [6]));
                    arr_10 [i_0] [17] [i_2] = ((/* implicit */unsigned char) arr_5 [i_0]);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 1; i_4 < 20; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_4] [i_2] [i_3] [i_4] = max((arr_8 [i_2]), (((/* implicit */unsigned short) max(((signed char)-108), (((signed char) var_12))))));
                                var_17 = ((/* implicit */short) (~((~(min((var_9), (((/* implicit */unsigned long long int) var_8))))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) /* same iter space */
                {
                    var_18 = ((/* implicit */signed char) max((((/* implicit */short) ((_Bool) max((var_13), (var_11))))), (max((((/* implicit */short) arr_18 [i_0] [i_0])), (arr_15 [i_1] [i_1])))));
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        arr_21 [i_6] [i_5] [i_1] [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_14 [i_6] [i_6] [i_6 + 1] [i_6] [16ULL])))) >= (((3938680434U) ^ (3549155734U)))));
                        arr_22 [i_1] [i_1] [(signed char)20] [i_6] [0] = ((/* implicit */unsigned char) max((3071105744U), (296033870U)));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_0] [i_8] [i_5] [i_7 + 1] [1ULL] = var_1;
                            var_19 = ((/* implicit */unsigned int) max((((/* implicit */int) arr_9 [i_0] [i_5] [i_5])), (arr_3 [i_0] [i_0] [i_0])));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            arr_32 [i_0] [i_9] [i_5] [i_9] [i_9] = ((/* implicit */unsigned int) arr_5 [i_0]);
                            var_20 = ((/* implicit */signed char) (((+(13163308803809394344ULL))) + (max((arr_14 [i_0] [i_7 + 1] [i_5] [i_0] [i_0]), (arr_14 [i_0] [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_9])))));
                            arr_33 [i_9] [i_7 + 1] [8ULL] [i_7 + 1] [i_5] [i_7 + 1] = ((/* implicit */_Bool) var_6);
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [7LL] [i_0] [i_7] [i_10])) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [11ULL] [i_10 - 1])) : (((/* implicit */int) arr_13 [i_0] [(signed char)6] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_13 [i_5] [i_7 + 1] [i_5] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) arr_13 [i_0] [i_1] [i_5] [i_7] [i_10])))))));
                            arr_37 [i_0] [i_1] [i_0] [i_5] [i_7] [i_7] [i_10] = ((/* implicit */short) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 5283435269900157272ULL))))) >> (((arr_14 [i_0] [16] [i_5] [i_7 + 1] [i_10 - 1]) - (12340579879610175300ULL))))));
                            var_22 = ((/* implicit */short) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_18 [i_10 - 1] [i_7 + 1])), (arr_8 [i_7 + 1]))))));
                            arr_38 [i_10 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) (+((+(((((/* implicit */int) arr_15 [i_0] [i_10])) / (((/* implicit */int) arr_15 [i_1] [i_0]))))))));
                            arr_39 [i_0] [7U] [i_5] [i_5] [i_7] [i_10] [0LL] = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) (short)20567)), (1229432692224689913ULL)))))));
                        }
                        var_23 = ((/* implicit */short) ((unsigned char) 16257075565924947478ULL));
                        var_24 = ((/* implicit */int) arr_30 [i_0] [i_1] [i_5] [i_5] [i_5]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-104))) : (296033870U)));
                        var_26 = ((/* implicit */int) arr_0 [i_0]);
                    }
                    var_27 = ((/* implicit */int) (_Bool)1);
                }
                /* vectorizable */
                for (unsigned int i_12 = 0; i_12 < 23; i_12 += 2) /* same iter space */
                {
                    arr_45 [14ULL] [i_0] [(signed char)20] = arr_4 [i_0] [i_1] [i_12];
                    arr_46 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1229432692224689913ULL))));
                }
                arr_47 [i_0] [i_1] [i_1] = ((/* implicit */short) (+((-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)11]))) : (var_7)))))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) (unsigned short)54240);
}
