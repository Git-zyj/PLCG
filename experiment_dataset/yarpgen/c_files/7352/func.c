/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7352
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_3 = 2; i_3 < 15; i_3 += 2) 
                    {
                        var_12 *= ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) min((((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_8 [i_0])))), (((((/* implicit */int) var_7)) <= (((/* implicit */int) (_Bool)0))))))) : ((~((-(((/* implicit */int) var_3))))))));
                        arr_9 [14ULL] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+((-(((/* implicit */int) (unsigned char)221))))))) * (min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) << (((((/* implicit */int) (short)-6748)) + (6748)))))), (var_8)))));
                        arr_10 [i_0] [i_0] [i_2] [i_3 + 2] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_11)) ^ (((/* implicit */int) (short)-30096))))));
                    }
                    var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) (((!(((((/* implicit */int) var_0)) > (((/* implicit */int) var_0)))))) && ((_Bool)1))))));
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            {
                                var_14 *= ((/* implicit */_Bool) var_0);
                                var_15 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-2507)) ? (((/* implicit */int) arr_8 [i_1 - 3])) : ((+(((/* implicit */int) (unsigned char)95))))))), (((((/* implicit */_Bool) arr_6 [i_0] [10ULL] [i_1 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_1 - 1] [(unsigned char)0] [i_1 + 1] [i_1 + 2] [i_1]))) : (min((((/* implicit */unsigned long long int) arr_8 [i_2])), (5660844370839385219ULL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned char)44)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11))));
}
