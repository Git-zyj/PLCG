/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55565
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
    var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) ((_Bool) ((short) (unsigned short)65535))))));
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((unsigned char) ((long long int) (unsigned char)142)));
                    /* LoopSeq 3 */
                    for (short i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        arr_12 [i_3] [i_2] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((long long int) ((_Bool) ((unsigned char) var_9))));
                        var_14 = ((/* implicit */unsigned int) ((short) ((unsigned short) ((unsigned short) arr_10 [i_1] [i_2] [i_3]))));
                    }
                    /* vectorizable */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 2) 
                        {
                            arr_19 [i_0 - 1] [i_1] [i_2] [i_4] [i_5] = ((/* implicit */_Bool) ((int) ((unsigned short) 14862447053070911184ULL)));
                            var_15 = ((/* implicit */long long int) ((_Bool) ((int) -742212366)));
                            var_16 = ((/* implicit */unsigned long long int) ((_Bool) -742212350));
                        }
                        for (signed char i_6 = 1; i_6 < 15; i_6 += 3) 
                        {
                            var_17 *= ((/* implicit */unsigned int) ((signed char) ((unsigned char) -446312272)));
                            arr_24 [i_6 + 1] [15] [i_1] [i_4] [i_0 + 2] [i_1] [i_0 + 2] = ((/* implicit */unsigned int) ((long long int) -742212355));
                            var_18 = ((/* implicit */unsigned short) max((var_18), (((unsigned short) ((unsigned short) arr_17 [i_0 + 1] [i_0] [i_0] [i_0] [i_0])))));
                            arr_25 [i_1] [i_1 - 2] [i_1] [(short)9] [i_1] = ((/* implicit */_Bool) ((long long int) ((long long int) (_Bool)0)));
                        }
                        var_19 = ((/* implicit */int) ((long long int) ((unsigned short) arr_5 [i_0] [i_2] [i_0])));
                        arr_26 [i_0] [8] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */unsigned int) ((unsigned short) ((unsigned int) (unsigned char)255)));
                    }
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 1) 
                    {
                        arr_29 [i_0] [(unsigned char)5] [(short)0] [(short)13] = ((/* implicit */_Bool) ((short) ((unsigned short) ((unsigned char) (_Bool)1))));
                        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) ((signed char) arr_21 [i_2] [i_1])))))));
                    }
                    var_21 += ((/* implicit */signed char) ((_Bool) ((unsigned int) ((unsigned short) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
}
