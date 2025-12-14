/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88613
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) min((((/* implicit */unsigned long long int) (signed char)-56)), (var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 2 */
                            /* vectorizable */
                            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                            {
                                var_12 = ((unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_10 [i_0 + 1])) : (((/* implicit */int) var_6))));
                                var_13 = ((/* implicit */signed char) var_1);
                                var_14 = ((unsigned long long int) arr_10 [i_4]);
                            }
                            /* vectorizable */
                            for (unsigned char i_5 = 4; i_5 < 9; i_5 += 2) 
                            {
                                var_15 = (+(var_10));
                                var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0 + 3]))));
                                var_17 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_4))));
                                arr_16 [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_1] [4U])) ? (arr_13 [i_0] [i_2] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_5])))))) && (((/* implicit */_Bool) ((var_3) >> (((var_0) + (1081789073))))))));
                            }
                            var_18 += ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */short) arr_10 [i_0 + 1])), (var_8)))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_3] [i_2] [i_3])))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_6 = 3; i_6 < 10; i_6 += 2) 
                {
                    for (short i_7 = 0; i_7 < 11; i_7 += 3) 
                    {
                        {
                            /* LoopSeq 1 */
                            for (int i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                var_19 ^= ((/* implicit */unsigned int) ((int) (short)-32760));
                                var_20 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((short) arr_22 [i_0] [i_1] [i_1] [i_0] [i_8]))) || (((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))));
                                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_9))));
                            }
                            /* LoopSeq 1 */
                            for (int i_9 = 0; i_9 < 11; i_9 += 1) 
                            {
                                var_22 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_6 - 2] [i_0] [i_6 - 1] [i_6 - 1] [i_0 - 1])) : (((/* implicit */int) var_8))))));
                                arr_25 [(short)1] [i_7] [i_0] [(unsigned char)4] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((9ULL) / (12209232993511784763ULL))) % (8026979109710795934ULL)));
                                arr_26 [i_0] [i_1] [i_0] [i_7] [i_7] [0U] &= (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [2ULL] [i_0] [i_0 + 1] [i_0] [i_0 - 1] [(signed char)10]))) : (arr_11 [0ULL] [i_9] [i_7] [i_6] [i_6 + 1] [0ULL]))));
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) (short)-26296))) ? (arr_2 [i_0]) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
                            }
                            arr_27 [(signed char)1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_18 [i_0 + 1] [i_1] [i_6]) << ((((+(((/* implicit */int) var_9)))) - (43541)))));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned char) ((max((max((var_2), (var_2))), (((((/* implicit */_Bool) var_0)) ? (var_7) : (arr_6 [(signed char)9] [i_1] [i_0]))))) & (min((((/* implicit */unsigned int) var_0)), ((-(var_7)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((((((/* implicit */int) var_8)) + (2147483647))) >> (((var_10) - (1042981915U))))) & (((/* implicit */int) var_6))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_6)))))));
}
