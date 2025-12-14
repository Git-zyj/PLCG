/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6124
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
    var_15 = ((unsigned long long int) 880080738876823069ULL);
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                arr_14 [9ULL] [i_3] [i_4] [0ULL] [i_4] [0ULL] [i_0] = 7702205852876844805ULL;
                                var_16 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 3846378452723547700ULL))));
                            }
                        } 
                    } 
                    var_17 = 4398046510848ULL;
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 2; i_5 < 8; i_5 += 4) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] = (-(max((10744538220832706814ULL), (5656890464496795743ULL))));
                                var_18 = (((+((-(var_9))))) + (((((/* implicit */_Bool) min((6272863712560138132ULL), (3846378452723547716ULL)))) ? (var_11) : (min((arr_15 [i_0] [i_0] [i_0]), (var_4))))));
                                arr_20 [6ULL] [i_1] [i_1] [i_1] = min((min(((-(8294229553614157413ULL))), ((+(arr_12 [i_0] [i_1] [i_1] [i_5 - 2] [i_6]))))), (var_1));
                            }
                        } 
                    } 
                    var_19 = min((((((/* implicit */_Bool) min((16715568210638784922ULL), (var_2)))) ? (((((/* implicit */_Bool) var_2)) ? (12552833409251986081ULL) : (8958910665394281657ULL))) : (arr_5 [i_0] [i_1] [4ULL]))), (max((((((/* implicit */_Bool) 14371249668243932551ULL)) ? (var_5) : (var_8))), (min((arr_6 [i_1] [i_0]), (1487805820454048911ULL))))));
                }
            } 
        } 
    } 
    var_20 = (-(12688233476261591360ULL));
}
