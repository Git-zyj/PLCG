/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93809
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
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */long long int) arr_3 [i_1] [i_1]);
                /* LoopSeq 2 */
                for (signed char i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_14 [i_0] [i_4] [(signed char)13] [i_0] [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) arr_8 [i_4] [i_1])), (arr_10 [i_2 + 4] [i_2] [i_2] [i_2] [i_2 + 3]))), (max((min((arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))), (((/* implicit */unsigned int) min((arr_2 [i_3] [i_0]), (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_4])))))))));
                                arr_15 [i_3] [i_4] [i_4] [i_3] [i_3] [i_4] = (_Bool)1;
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_5 = 1; i_5 < 22; i_5 += 3) 
                    {
                        arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_1])) - (var_3)));
                        arr_19 [i_2] [i_2] [i_2] [i_5] = ((/* implicit */unsigned short) var_5);
                        var_17 = ((/* implicit */_Bool) var_10);
                        var_18 = ((/* implicit */unsigned char) arr_2 [i_5] [i_0]);
                    }
                    arr_20 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((max((((/* implicit */int) (signed char)101)), (-378948436))), (((/* implicit */int) var_8))));
                }
                for (signed char i_6 = 1; i_6 < 20; i_6 += 3) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (short i_7 = 1; i_7 < 21; i_7 += 3) 
                    {
                        for (long long int i_8 = 0; i_8 < 24; i_8 += 3) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] = var_14;
                                arr_29 [4LL] [4LL] [i_6 + 2] [i_8] = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)103))));
                                var_19 = ((/* implicit */long long int) arr_1 [i_6] [i_6]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        for (int i_10 = 4; i_10 < 22; i_10 += 3) 
                        {
                            {
                                arr_39 [i_0] [i_9] [i_0] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (max((((/* implicit */long long int) (unsigned short)3584)), (arr_26 [i_6] [i_6] [i_6] [i_6] [18ULL])))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_6] [i_9] [i_10 - 4])))));
                                arr_40 [i_0] [i_9] [i_9] [i_9] [(signed char)11] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned char) (signed char)75)), ((unsigned char)69)));
                                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)11514)) ? (((arr_0 [i_6 + 2] [i_6 + 3]) - (arr_0 [i_6 + 2] [i_6 + 3]))) : (min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)183)) : (((/* implicit */int) arr_33 [i_0] [i_1] [i_6 + 2] [i_9]))))))));
                                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */int) arr_1 [i_10 - 3] [i_1])) - (((/* implicit */int) arr_9 [i_6] [i_6 - 1] [i_6 + 2] [i_6 + 2] [i_10 - 3] [i_10])))) - (((arr_11 [i_10 + 2] [i_6] [i_6 + 4]) ? (((/* implicit */int) (unsigned short)3584)) : (((/* implicit */int) arr_11 [i_10 + 1] [i_10 - 2] [i_6 + 3])))))))));
                            }
                        } 
                    } 
                    arr_41 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) arr_7 [23ULL] [18] [i_6]);
                    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((min((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1] [i_1]))) == (var_10)))), (min((-1784764404), (((/* implicit */int) (unsigned short)61952)))))) - (((((/* implicit */_Bool) (unsigned short)61952)) ? (max(((-2147483647 - 1)), (-1821970107))) : (max((-809433044), (((/* implicit */int) (_Bool)1)))))))))));
                }
                arr_42 [i_0] = ((/* implicit */long long int) ((max((max((((/* implicit */long long int) var_5)), (arr_26 [i_0] [i_1] [i_1] [i_0] [i_0]))), (((/* implicit */long long int) var_12)))) > (((/* implicit */long long int) (+(-948948235))))));
            }
        } 
    } 
    var_23 = ((/* implicit */signed char) max((((((/* implicit */long long int) ((/* implicit */int) var_9))) & (var_0))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) == (max((((/* implicit */int) (signed char)-14)), (-1805799219))))))));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 4024426471U)), (var_13)))) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((max((var_4), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((-809433044), (((/* implicit */int) (unsigned short)44363)))))))));
    var_25 = ((/* implicit */long long int) var_8);
}
