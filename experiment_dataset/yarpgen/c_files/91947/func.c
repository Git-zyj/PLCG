/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91947
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 22; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) ((10ULL) >> (14)));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
                                var_21 = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) 195713613U))))))))) % (min((((/* implicit */long long int) (-(arr_8 [i_0] [i_0] [i_2])))), (min((-1148258040603655735LL), (((/* implicit */long long int) -3)))))));
                                arr_15 [i_0] [i_2] [i_2] [i_3] [18ULL] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((4584482986058940535ULL), (((/* implicit */unsigned long long int) (+(arr_6 [i_0] [i_0] [20ULL] [i_3]))))))) ? (((/* implicit */unsigned long long int) -1363465778)) : ((((~(var_2))) ^ (((((/* implicit */_Bool) 15794900712932772906ULL)) ? (9538304346142390525ULL) : (((/* implicit */unsigned long long int) 1148258040603655735LL))))))));
                                var_22 += ((/* implicit */unsigned int) ((unsigned long long int) max((min((14043965914497525648ULL), (((/* implicit */unsigned long long int) arr_5 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4216406132341880059LL)) && (((/* implicit */_Bool) 1792U))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */unsigned int) (~(7)));
}
