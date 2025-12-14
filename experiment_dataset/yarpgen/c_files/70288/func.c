/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70288
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    var_12 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_0] [i_1] &= ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_1])) + (2147483647))) >> (((((/* implicit */int) var_8)) + (17073)))))), (max((arr_1 [i_1]), (((/* implicit */unsigned int) var_6)))))) - (((/* implicit */unsigned int) (-(max((var_1), (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
                arr_7 [i_0] [i_1 + 1] [i_1] = ((/* implicit */long long int) arr_5 [i_1 - 1] [i_1 - 2] [i_1 - 1]);
                arr_8 [i_0] [8] [i_0] &= ((/* implicit */unsigned char) (-(max(((((_Bool)1) ? (((/* implicit */unsigned long long int) 1915348416)) : (4398046511104ULL))), (((/* implicit */unsigned long long int) var_4))))));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) ((short) max((arr_12 [i_2] [i_2] [11ULL] [i_3]), (arr_12 [i_0] [i_1] [i_0] [i_3]))))), ((-(((/* implicit */int) arr_2 [i_1 - 2]))))));
                            arr_15 [i_1] [i_3] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_13 [i_1 + 1] [i_1 - 2] [i_1 - 2] [20])), (((long long int) var_3)))), (((/* implicit */long long int) max((((/* implicit */unsigned int) max((var_9), (((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)45))) : (arr_4 [i_0]))))))));
                            /* LoopSeq 1 */
                            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 4) 
                            {
                                arr_18 [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */unsigned int) (signed char)-3)))))))), (((((/* implicit */int) ((((/* implicit */int) arr_5 [i_2] [i_1 - 2] [i_0])) >= (((/* implicit */int) arr_5 [i_0] [i_2] [i_2]))))) % (((/* implicit */int) (signed char)1))))));
                                var_13 = ((/* implicit */int) var_2);
                                arr_19 [i_0] [i_1 - 2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((_Bool) arr_5 [i_4] [i_3] [i_0]));
                            }
                            arr_20 [i_3] [i_2] [5LL] [i_0] = ((/* implicit */short) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
                            var_14 = ((/* implicit */signed char) ((((((/* implicit */int) max((var_7), (var_7)))) == (((/* implicit */int) ((_Bool) var_9))))) && (((/* implicit */_Bool) (-(511U))))));
                        }
                    } 
                } 
                var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) <= (max((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) | (((/* implicit */int) (signed char)-1))))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */int) min((((/* implicit */short) var_5)), (var_8)))), (((((/* implicit */int) var_4)) + (var_1)))))) ? (((/* implicit */int) min((var_5), (((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (var_3))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((var_3), (((/* implicit */unsigned long long int) var_8))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_4)) / (((/* implicit */int) var_8))))))))));
    var_17 = ((/* implicit */_Bool) ((unsigned char) 348739747));
}
