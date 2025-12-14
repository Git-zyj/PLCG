/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 681
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=681 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/681
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
    var_13 = ((/* implicit */short) 13236029801436708173ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) (((!(((/* implicit */_Bool) 332260768)))) ? (((((/* implicit */_Bool) 1252319795U)) ? (((/* implicit */long long int) -332260769)) : (var_6))) : (((/* implicit */long long int) max((((/* implicit */int) (signed char)-6)), (-332260768)))))))));
                arr_5 [i_0] = max((((/* implicit */long long int) ((signed char) arr_0 [i_0]))), (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_7))));
                var_15 = ((/* implicit */_Bool) var_1);
                /* LoopNest 2 */
                for (unsigned short i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (-((~(((/* implicit */int) var_2))))));
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */int) max((arr_10 [i_0] [i_1] [i_2] [i_1] [i_2 + 1]), (arr_10 [i_0] [i_2] [i_2] [i_2] [i_2 - 1])))), (((((/* implicit */_Bool) 332260767)) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2] [i_2 + 1] [i_2])) : (var_10)))));
                            /* LoopSeq 1 */
                            for (long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                            {
                                arr_14 [i_0] [i_2] [i_2 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */long long int) arr_9 [i_0] [i_0] [i_2])), (-8401531255271193585LL))))));
                                var_18 = ((/* implicit */short) (-(((((/* implicit */_Bool) -332260768)) ? ((+(332260768))) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_3] [i_4]))))));
                                var_19 = ((/* implicit */_Bool) min((332260789), (((/* implicit */int) (unsigned short)47030))));
                                arr_15 [i_2] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) (-((-(((/* implicit */int) ((_Bool) (unsigned char)16)))))));
                            }
                            arr_16 [i_2] = arr_12 [i_1] [i_1] [i_2] [i_2] [i_3];
                        }
                    } 
                } 
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (-((+((-(((/* implicit */int) var_8))))))));
}
