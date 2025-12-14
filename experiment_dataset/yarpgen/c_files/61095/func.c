/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61095
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_11)) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)27425)) < (((/* implicit */int) (_Bool)1))))), (var_14))) : (((/* implicit */unsigned long long int) max((min((var_0), (((/* implicit */int) var_17)))), (max((((/* implicit */int) (_Bool)1)), (var_8))))))));
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) 975346507U)) ? (975346507U) : (3319620771U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_18)))))));
    var_21 += ((/* implicit */long long int) var_14);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_13 [3U] [(_Bool)1] [i_2] [i_2] [11] = ((/* implicit */unsigned char) (-(((((2147483647) == (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_5 [i_2] [i_2] [6]))))) : ((~(12474744095642175502ULL)))))));
                                var_22 = (+(max(((+(10143995080895015173ULL))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (var_10) : (((/* implicit */int) arr_3 [i_2]))))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_13)), ((+(min((((/* implicit */unsigned long long int) (_Bool)1)), (arr_10 [i_2] [i_1] [2LL])))))));
                }
            } 
        } 
    } 
}
