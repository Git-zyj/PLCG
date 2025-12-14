/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54991
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
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 22; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_19 -= ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) arr_7 [i_0] [6ULL] [6ULL] [i_3] [6ULL]))), ((-(((((/* implicit */int) var_3)) + (((/* implicit */int) arr_4 [(_Bool)1] [i_3]))))))));
                            var_20 -= ((/* implicit */_Bool) var_7);
                        }
                    } 
                } 
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (855760548U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3897836226U))))))));
                arr_11 [i_0] = ((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [(_Bool)1] [i_1] [i_1]);
                /* LoopSeq 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */unsigned long long int) ((min((((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_1] [i_4] [i_0] [i_4] [4ULL]))) / (var_14))), (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (min((max((((/* implicit */unsigned int) var_2)), (var_5))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_13 [i_0] [i_1] [(_Bool)1] [i_1])) : (((/* implicit */int) arr_5 [i_0]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (_Bool)1))))))));
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_18))))), (var_1))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_13))))))))));
                }
                for (unsigned int i_5 = 3; i_5 < 22; i_5 += 1) 
                {
                    var_25 -= ((/* implicit */_Bool) min(((-(((/* implicit */int) (!(var_18)))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((var_17) | (((/* implicit */unsigned long long int) var_5))))))))));
                    var_26 -= ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [i_5 - 3])))) ? (max((arr_12 [i_5 - 1] [i_5 + 1] [i_5]), (((/* implicit */unsigned long long int) (_Bool)1)))) : (min((max((((/* implicit */unsigned long long int) var_0)), (7957140234681796129ULL))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (10489603839027755486ULL)))))));
                    arr_18 [i_0] [i_0] = ((/* implicit */_Bool) 12208416956594551658ULL);
                    var_27 -= ((/* implicit */_Bool) max((1048574U), (((/* implicit */unsigned int) (_Bool)1))));
                }
            }
        } 
    } 
    var_28 -= (_Bool)1;
}
