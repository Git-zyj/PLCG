/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82807
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
    for (unsigned int i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                arr_16 [i_0 - 2] [i_1] [i_0 - 2] [i_3] [i_0] = ((short) ((short) (short)32767));
                                var_11 = ((/* implicit */unsigned int) max((var_11), (((unsigned int) arr_10 [i_3] [i_4 + 1] [i_4] [i_4 + 1]))));
                            }
                        } 
                    } 
                    var_12 -= ((/* implicit */short) max((((/* implicit */unsigned long long int) (short)-2)), (16ULL)));
                    arr_17 [i_0] = ((/* implicit */short) min((min((((/* implicit */unsigned long long int) arr_0 [i_0 + 2])), (min((((/* implicit */unsigned long long int) arr_9 [i_0] [(_Bool)1] [i_2] [8U])), (arr_12 [i_0] [i_1] [i_2] [i_1] [i_0 - 1]))))), (((/* implicit */unsigned long long int) arr_1 [i_0]))));
                    arr_18 [i_0] = ((/* implicit */short) (~(min((arr_13 [i_0 - 1]), (arr_13 [i_0 - 3])))));
                    var_13 = ((/* implicit */unsigned int) ((short) (short)32767));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (var_4)));
    var_15 -= ((/* implicit */short) var_6);
    var_16 = ((/* implicit */short) max((var_16), (var_10)));
    /* LoopNest 3 */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        for (unsigned int i_6 = 3; i_6 < 13; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 14; i_7 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_8 = 1; i_8 < 12; i_8 += 4) 
                    {
                        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1))))), (((int) ((short) arr_9 [i_5] [i_8 + 2] [i_8] [20])))));
                        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) max((((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) 0ULL)) ? (12152032920404837235ULL) : (arr_24 [(short)3] [i_6]))))), (arr_11 [19] [i_6 - 1] [i_5]))))));
                    }
                    var_19 = arr_9 [i_6 - 1] [i_6] [i_6] [18U];
                }
            } 
        } 
    } 
}
