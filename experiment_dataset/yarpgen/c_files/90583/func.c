/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90583
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) arr_3 [i_0]);
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */short) (((+((~(4103147918U))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_5 [i_0])))) ? (((/* implicit */int) ((unsigned char) 18411086484094521094ULL))) : (((/* implicit */int) (signed char)-1)))))));
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) (+((((-(1909593060))) / (((/* implicit */int) ((_Bool) 296974906U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((unsigned char) (((~(var_13))) > (((/* implicit */unsigned int) (+(((/* implicit */int) var_11)))))))))));
    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((max((((/* implicit */int) var_14)), ((-(((/* implicit */int) (short)-30168)))))) - ((((+(((/* implicit */int) var_8)))) / (((/* implicit */int) ((unsigned char) var_9))))))))));
    /* LoopNest 3 */
    for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned char i_4 = 2; i_4 < 21; i_4 += 2) 
            {
                {
                    arr_16 [i_2] = ((signed char) ((signed char) arr_9 [i_4 + 3] [i_4 - 2]));
                    var_20 = ((/* implicit */long long int) max((var_20), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) 11118417178075497654ULL))))), ((~(((long long int) (_Bool)1))))))));
                    arr_17 [i_4] [i_3] [i_2] = ((/* implicit */int) arr_13 [i_4 + 2] [i_3] [i_4]);
                    var_21 ^= (+(((((/* implicit */_Bool) arr_14 [i_4 - 1] [i_3] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 + 3] [i_3] [7]))) : (64512U))));
                    var_22 = ((/* implicit */long long int) ((((/* implicit */unsigned int) (+(((((/* implicit */int) var_12)) / (((/* implicit */int) arr_15 [i_2] [i_3] [i_4]))))))) / ((-((((_Bool)1) ? (4294902784U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_4] [i_3] [i_2])))))))));
                }
            } 
        } 
    } 
}
