/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66756
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
                {
                    for (long long int i_3 = 3; i_3 < 21; i_3 += 4) 
                    {
                        {
                            arr_14 [i_0] [i_0] = min((((/* implicit */long long int) var_3)), (-2897433002738429019LL));
                            arr_15 [5LL] [i_3 - 3] [i_2] [i_3] [i_0] [i_1] = ((/* implicit */unsigned short) arr_11 [2U] [i_0] [i_2]);
                            var_13 = arr_2 [i_0];
                            arr_16 [i_0] [i_1] [i_2] [6LL] = arr_2 [i_0];
                        }
                    } 
                } 
                var_14 = ((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0]))))), (min((((/* implicit */long long int) arr_9 [i_0] [i_1] [i_1])), (arr_7 [i_0] [3U] [i_0] [2])))));
                var_15 -= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max((var_2), (((/* implicit */long long int) arr_2 [14LL]))))))) && (((/* implicit */_Bool) max((((/* implicit */int) ((unsigned short) (unsigned char)194))), ((-(((/* implicit */int) var_6)))))))));
                arr_17 [i_0] = ((/* implicit */short) max((((arr_2 [i_0]) ^ (var_7))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15075)))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) ((short) (!(((/* implicit */_Bool) var_5)))));
}
