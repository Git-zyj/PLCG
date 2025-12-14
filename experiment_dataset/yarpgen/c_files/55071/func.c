/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55071
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
    var_14 = ((/* implicit */short) min((min((((/* implicit */int) (signed char)117)), (max((((/* implicit */int) (_Bool)1)), (var_7))))), (((/* implicit */int) max((((/* implicit */short) var_3)), ((short)-25404))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) min((((/* implicit */long long int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_1 [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [i_0] [i_0])), (arr_3 [i_0] [i_0 - 2])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 3; i_1 < 18; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (signed char i_4 = 4; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [i_0] [i_1] = ((/* implicit */int) arr_3 [3LL] [i_1 + 1]);
                                arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_1] = ((/* implicit */signed char) arr_5 [i_2 + 1] [i_1]);
                                var_16 = ((/* implicit */short) arr_8 [i_1]);
                            }
                        } 
                    } 
                    arr_15 [i_1] [i_1 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_8 [i_1]))))), (((((/* implicit */_Bool) arr_8 [i_1])) ? (arr_4 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_1] [i_0 - 1])))))))) ? (((/* implicit */int) arr_8 [i_1])) : (arr_5 [i_0] [i_1])));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((arr_20 [i_6] [(_Bool)1] [(signed char)17] [i_2] [i_2] [6LL] [(signed char)17]), (arr_20 [i_1] [i_1] [i_1 - 1] [i_1] [i_1] [i_1 - 2] [i_1 + 1])));
                                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) max((max((((/* implicit */long long int) arr_21 [(short)9] [(short)19] [i_2 + 1] [i_5] [i_2 + 1])), (arr_4 [0ULL] [0ULL]))), (((/* implicit */long long int) max((((/* implicit */int) min((arr_3 [(unsigned char)6] [i_1]), (((/* implicit */unsigned short) arr_8 [6LL]))))), (arr_5 [i_5] [(unsigned char)8])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
