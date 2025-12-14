/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78321
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
    for (int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 1194252913)), (8286622448920231724ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 1]))))) : (((((/* implicit */_Bool) (short)-13432)) ? (((/* implicit */unsigned long long int) -255246056)) : (18446744073709551600ULL)))));
                    arr_8 [i_0] [i_0] [i_0] [i_0 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551611ULL)) ? ((+((+(18446744073709551613ULL))))) : (((/* implicit */unsigned long long int) (~(arr_1 [i_0] [i_1]))))));
                    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) -112877382))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_3 = 2; i_3 < 23; i_3 += 3) 
                {
                    for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        {
                            var_13 = ((/* implicit */int) min((var_13), (((/* implicit */int) (((!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_7 [i_0 + 1] [i_1] [i_3 + 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 18446744073709551613ULL)) ? (((/* implicit */int) max((((/* implicit */short) (signed char)14)), (arr_10 [i_0 - 1] [i_1] [i_3 - 2])))) : (((/* implicit */int) ((((/* implicit */_Bool) -670130686)) && (((/* implicit */_Bool) var_7)))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1] [i_4]))))) ? ((-(20U))) : (((/* implicit */unsigned int) (((_Bool)1) ? (arr_1 [i_0] [i_0]) : (-670130686)))))))))));
                            var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_7 [i_0 - 1] [i_3 - 2] [i_4]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 + 1])) : (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -1)))))))));
                            arr_13 [i_0 + 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0 - 1] [i_0] [i_1 + 1])))), (((((/* implicit */_Bool) arr_10 [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */int) arr_10 [i_0] [i_1 + 1] [i_1 + 1])) : (((/* implicit */int) arr_10 [i_0 + 1] [i_0 - 1] [i_0 - 1]))))));
            }
        } 
    } 
    var_15 &= ((/* implicit */int) ((unsigned short) -2090046924));
}
