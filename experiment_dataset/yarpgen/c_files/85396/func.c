/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85396
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
    var_15 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((var_10) <= (((unsigned long long int) 9570577322857635426ULL)))))));
    var_16 = var_11;
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) (-(13430251396307544687ULL)))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 3) 
                {
                    arr_10 [i_0] [i_0] [i_0] = arr_9 [i_1] [i_1];
                    arr_11 [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */_Bool) (+(17815569097296842231ULL)))) ? (max((arr_9 [i_1 + 3] [i_1 - 2]), (arr_9 [i_1 + 1] [i_1 + 4]))) : (min(((~(631174976412709384ULL))), ((-(0ULL))))));
                    var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 5681191299122969706ULL))))), (((arr_3 [i_2] [i_2 + 2]) & (15616181051355033765ULL))))) > (10852428228392373048ULL)));
                }
                for (unsigned long long int i_3 = 2; i_3 < 11; i_3 += 3) /* same iter space */
                {
                    arr_16 [i_3] [i_3] [i_3 + 1] [i_3] = (-(max((17815569097296842231ULL), (max((631174976412709393ULL), (arr_14 [i_3] [i_3] [i_1 + 2]))))));
                    var_18 = 11ULL;
                }
                for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 3) 
                    {
                        arr_21 [i_0] [i_0] [i_4] [i_0] [i_4 + 1] [i_5] = ((unsigned long long int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_1 - 2] [i_1 + 3]))))), ((+(arr_14 [i_4] [i_1 + 4] [i_4])))));
                        arr_22 [i_0] [i_4 - 2] [i_4] = min(((~(10751438662332679594ULL))), (22ULL));
                        var_19 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((16ULL), (10852428228392373048ULL)))))))) | ((+((+(arr_14 [i_4] [i_1 + 4] [i_4]))))));
                    }
                    var_20 = ((/* implicit */unsigned long long int) min((var_20), ((~((-(arr_15 [i_1 - 2] [i_1 - 2])))))));
                    var_21 += (-(arr_1 [i_0]));
                }
                var_22 = ((unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 2ULL)))))));
            }
        } 
    } 
}
