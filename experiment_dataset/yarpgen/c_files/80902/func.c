/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80902
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_5 [i_0] [i_0])), (arr_3 [i_0] [i_0])))), (((((/* implicit */_Bool) 11ULL)) ? (var_10) : (((/* implicit */unsigned long long int) var_12)))))), (((/* implicit */unsigned long long int) var_14))));
                    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
                    var_17 = ((/* implicit */_Bool) max((min((((arr_2 [i_1] [i_2]) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) arr_0 [i_1])))), (max((((((/* implicit */_Bool) arr_4 [i_2] [i_1] [i_0])) ? (var_3) : (var_12))), (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        var_18 = ((/* implicit */int) min((((((/* implicit */_Bool) max((arr_10 [i_0] [i_0] [i_2] [i_3]), (arr_10 [i_1] [i_2] [i_1] [i_0])))) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) arr_6 [i_0])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_4 [i_1] [i_2] [i_2]))))))), ((+(((long long int) arr_10 [i_0] [i_0] [i_2] [i_3]))))));
                        arr_12 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)19215)) ? (((/* implicit */long long int) ((/* implicit */int) (short)7121))) : (var_6)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_2] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_1] [i_0] [i_0] [i_3]))))) ? (max((arr_3 [i_0] [i_0]), (((/* implicit */long long int) var_8)))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_5 [i_0] [i_0]), (arr_9 [i_0] [i_2] [i_0] [i_0]))))))) : (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_3] [i_2] [i_0] [i_0] [i_0]))))) % (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)508)) : (((/* implicit */int) arr_0 [i_1])))))))));
                        arr_13 [i_3] [i_0] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */long long int) (-((-(((/* implicit */int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                    }
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) var_14);
}
