/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78755
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) (short)32767)) ? (12526955552687305507ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)26858)))))));
                        arr_12 [i_2] [i_2] = ((signed char) (+(((/* implicit */int) arr_8 [i_3] [i_3 - 1] [i_3] [i_3 - 1]))));
                        arr_13 [i_0] [i_1] [i_2 - 1] [i_2] = ((/* implicit */short) arr_2 [i_0] [i_1]);
                    }
                    /* vectorizable */
                    for (unsigned short i_4 = 2; i_4 < 20; i_4 += 1) 
                    {
                        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [i_2 - 2])))))));
                        var_13 = ((/* implicit */short) arr_10 [i_2] [i_2] [i_2] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 2) 
                        {
                            arr_19 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_2] [i_2 + 1] [i_1])) - (((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1] [i_2 + 1] [i_5]))));
                            arr_20 [i_0] [i_2] [i_1] [i_2 + 2] [i_4] [i_4] [i_5] = ((/* implicit */signed char) (_Bool)1);
                            var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7967869627672163647ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)18107))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_2 - 3] [i_5] [i_5] [i_2 - 3]))) : (((((/* implicit */_Bool) 10478874446037387947ULL)) ? (arr_17 [i_0] [i_1] [i_2] [i_2] [i_2]) : (5875571198665059303ULL))))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                var_15 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_6] [i_2 - 3] [i_6] [i_7] [i_6] [i_1]))));
                                var_16 = ((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_7] [i_2] [i_1]);
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (((-(((/* implicit */int) arr_16 [i_6 - 1] [i_2] [i_2] [i_0] [i_2 - 1] [i_6])))) * (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [i_1] [i_2 - 1])), (var_6))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 ^= ((/* implicit */signed char) var_8);
}
