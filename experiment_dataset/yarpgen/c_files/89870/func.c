/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89870
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
    var_12 = ((/* implicit */unsigned int) (-((((!(((/* implicit */_Bool) (unsigned char)16)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)249)))))) : (var_6)))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 1; i_2 < 7; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */int) 11524811218621013782ULL);
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 10; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_14 -= ((/* implicit */unsigned long long int) min(((+(((/* implicit */int) min(((short)-8731), (((/* implicit */short) (unsigned char)234))))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-8731)) ? (412943629942821888ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8748)))))))))));
                                var_15 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (max((3051458747149794891ULL), (arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] [i_3]))) : ((-(arr_8 [i_0] [i_0] [i_1] [i_3] [(short)4] [i_0]))))))));
                                var_16 = ((/* implicit */_Bool) min((var_16), (arr_7 [i_2] [i_1] [i_3] [i_2 - 1] [i_4] [i_4])));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */long long int) ((unsigned char) ((_Bool) arr_12 [6] [i_2] [5ULL] [5ULL] [i_0])))), (((((/* implicit */long long int) ((int) 2147483647))) / (-2933359953844147054LL)))));
                    var_17 = ((/* implicit */_Bool) arr_2 [i_0]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */int) var_1)), (max(((~(((/* implicit */int) (short)8732)))), (((/* implicit */int) var_9)))))))));
    var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)3)) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) -1069356303)), (-1981175880748605280LL)))), (max((15617693725662231066ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) 819045580U))));
    var_20 = ((/* implicit */short) var_7);
}
