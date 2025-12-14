/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63506
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
    var_10 = var_7;
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) % (min((((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0)))), (min((((/* implicit */int) (unsigned short)17728)), (2147483647)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) >> (((arr_4 [i_0] [i_0]) - (2369277039U))))))))), ((-(arr_0 [i_1])))));
                arr_6 [i_0] = ((/* implicit */short) (((-(arr_4 [i_0] [i_1]))) % (((/* implicit */unsigned int) ((/* implicit */int) var_4)))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 3; i_2 < 12; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 13; i_4 += 2) 
                        {
                            {
                                var_12 = ((((/* implicit */int) ((unsigned char) arr_12 [i_2 - 2] [i_2 - 3] [i_2 - 1]))) | ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [(short)12]))))))));
                                arr_13 [i_0] [(short)4] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (+(((unsigned long long int) (unsigned short)47784))));
                                var_13 = ((/* implicit */short) ((((/* implicit */int) (unsigned short)17)) <= (((/* implicit */int) (unsigned char)124))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */unsigned short) (short)29566);
                var_14 = ((/* implicit */short) (+(((/* implicit */int) ((arr_12 [(short)9] [i_1] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> ((((-(((/* implicit */int) var_1)))) - (9774)))))) ? (((/* implicit */int) (unsigned char)205)) : (min((((((/* implicit */int) var_4)) & (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_0)))))));
}
