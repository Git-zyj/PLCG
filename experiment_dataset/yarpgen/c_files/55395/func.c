/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55395
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [(short)16]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (int i_2 = 3; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(signed char)0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_3 [i_1]))))) && (((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1])) && (((/* implicit */_Bool) arr_3 [i_1]))))));
                                arr_14 [i_1] = ((/* implicit */unsigned int) (-(min((((/* implicit */unsigned long long int) (unsigned short)37441)), (14152224092055270316ULL)))));
                                var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_7 [16] [i_3 - 1] [i_1] [i_1])), (((arr_7 [i_3 + 1] [i_3 + 1] [i_3] [i_1]) ? (arr_9 [i_0] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3 - 1] [i_3] [i_3 - 1] [i_3 - 1] [i_2 + 1] [i_1 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    for (short i_5 = 0; i_5 < 24; i_5 += 1) 
                    {
                        arr_17 [i_0] [i_1 + 1] [i_1] [(signed char)16] = ((/* implicit */unsigned short) var_16);
                        arr_18 [(_Bool)1] [i_1] [i_1] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_5 [i_1] [i_5] [i_5]))));
                        var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2 - 2] [(unsigned char)12] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_1 + 1] [i_2 - 3] [(short)14] [i_0])))), (max((arr_0 [i_2 - 1]), (((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2 - 2] [i_5]))))));
                        var_22 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((14152224092055270297ULL), (min((4294519981654281288ULL), (((/* implicit */unsigned long long int) arr_3 [i_0]))))))) ? (min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-11519))) ^ (14152224092055270316ULL))), (4294519981654281328ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)9273)))));
                    }
                    for (int i_6 = 1; i_6 < 21; i_6 += 2) 
                    {
                        arr_21 [8LL] [8LL] [i_1] [i_6] = ((/* implicit */short) max((((/* implicit */unsigned int) min(((-(((/* implicit */int) arr_11 [i_0] [i_1] [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) (unsigned char)200)))))))), (min((161521826U), (((((/* implicit */_Bool) var_2)) ? (arr_9 [i_6] [i_1] [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))));
                        var_23 = min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 + 1])) ? (var_13) : (((/* implicit */int) arr_1 [i_1 + 1]))))), (arr_9 [i_0] [i_1 + 1] [i_1] [i_6]));
                    }
                }
            } 
        } 
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) min((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))), (min((((/* implicit */long long int) (signed char)-24)), (6762425153115599491LL))))))));
    }
    var_25 = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)17))) : (var_3)))), (((long long int) (unsigned char)109)))) >= (((/* implicit */long long int) (~((-(var_3))))))));
}
