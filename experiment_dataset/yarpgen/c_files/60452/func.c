/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60452
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
    var_14 = ((_Bool) (signed char)28);
    var_15 = ((/* implicit */short) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_8)), (((((/* implicit */_Bool) var_12)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))))), (-4563916586794511990LL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        arr_2 [i_0] [(signed char)12] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) (signed char)-6)) ? (arr_1 [i_0 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32759))))));
        var_16 = ((/* implicit */short) -4563916586794511988LL);
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_1 [i_0]))) && (((/* implicit */_Bool) ((long long int) -4563916586794511988LL)))));
        var_18 = ((/* implicit */short) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 13; i_2 += 2) 
            {
                {
                    arr_11 [i_1] [i_1] [10LL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_9 [(short)1] [(short)1] [i_0] [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_12)))) > (((/* implicit */int) arr_10 [i_0 - 1] [i_2 - 1] [i_2 - 1] [i_2 + 2]))));
                    arr_12 [i_0] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((int) arr_3 [i_1] [i_0 - 2]));
                    var_19 = ((/* implicit */_Bool) 1173889996);
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_20 = var_1;
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)35)) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (4563916586794511990LL)))) ? (((/* implicit */int) arr_10 [i_0] [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_10 [i_3] [i_2] [i_1] [i_0 + 1]))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 1) 
                        {
                            arr_17 [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (+(arr_5 [i_1])));
                            var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((long long int) (short)-1834)))));
                        }
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] = ((/* implicit */signed char) ((arr_4 [i_0] [i_0 + 2]) > (arr_4 [i_0] [i_0 + 1])));
                        var_23 = ((/* implicit */signed char) (short)-29344);
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
                        {
                            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) var_13))));
                            var_25 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) 3272635506U)) : (16231289925679781951ULL)))));
                            arr_25 [i_6] [i_5] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */short) arr_9 [i_6] [i_2] [(short)13] [(signed char)14]);
                        }
                    }
                }
            } 
        } 
    }
    var_26 = ((/* implicit */signed char) max((min((((((/* implicit */_Bool) var_2)) ? (4270050320216548216ULL) : (4270050320216548234ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) (short)-29344))))))), (((/* implicit */unsigned long long int) ((_Bool) ((int) 14176693753493003414ULL))))));
}
