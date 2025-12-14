/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58328
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
    var_12 |= ((/* implicit */unsigned short) (_Bool)1);
    var_13 = ((/* implicit */unsigned short) (signed char)-117);
    var_14 &= ((/* implicit */signed char) ((4294967295U) != (var_2)));
    var_15 = ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            {
                var_16 &= ((/* implicit */unsigned long long int) arr_4 [i_0] [(signed char)6] [i_0]);
                var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) 1551950714072826333LL)) / (10ULL)));
                var_18 &= -7915993814731070033LL;
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 22; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 = ((((/* implicit */_Bool) -1LL)) ? (((unsigned int) ((((/* implicit */long long int) 3976174711U)) / (arr_3 [i_1 - 2])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) ((arr_6 [i_0] [i_1] [i_0] [i_3]) ^ (var_10)))))));
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (((var_6) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1 - 1] [i_2] [i_3]))) & (arr_7 [i_1 + 1] [i_1] [i_2 - 1] [i_0] [i_0]))))))));
                            arr_10 [i_3] = ((/* implicit */short) arr_7 [i_3] [i_3] [i_1] [i_1] [i_0]);
                            var_21 *= ((/* implicit */long long int) ((_Bool) max((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_2] [i_1 - 1] [i_2])) && (((/* implicit */_Bool) (short)-8821))))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_2 [i_0] [i_0])) : (((/* implicit */int) var_11)))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
