/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81757
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    arr_8 [i_0] [i_0] [i_2] = min((min((928687366321717658ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_7 [i_2] [i_2] [i_2]))))))), (((17518056707387833937ULL) << (((2243270292594984829ULL) - (2243270292594984811ULL))))));
                    var_18 = 7ULL;
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) min((var_19), (1493058126412310974ULL)));
                        var_20 = ((unsigned long long int) min((142590269323964603ULL), (((unsigned long long int) arr_2 [i_0]))));
                        var_21 = ((unsigned long long int) max((((((/* implicit */_Bool) var_12)) ? (var_5) : (var_1))), (((unsigned long long int) 16297856696201652697ULL))));
                    }
                }
                for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 3) 
                {
                    var_22 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) 65535ULL))))))));
                    var_23 = 13240521964019275429ULL;
                    arr_14 [i_0] [i_0] = (-(((((/* implicit */_Bool) ((unsigned long long int) var_1))) ? (var_9) : (var_1))));
                    arr_15 [i_0] [i_0] [i_0] [i_4] = min((((((/* implicit */_Bool) ((var_7) * (var_17)))) ? ((-(var_3))) : (13186958012755080034ULL))), (15351971278071239363ULL));
                }
                for (unsigned long long int i_5 = 0; i_5 < 13; i_5 += 1) 
                {
                    var_24 -= arr_5 [i_0];
                    var_25 = (-(((((((/* implicit */_Bool) var_9)) ? (arr_16 [i_0] [i_0] [i_0]) : (6755399441055744ULL))) * (928687366321717658ULL))));
                }
                for (unsigned long long int i_6 = 1; i_6 < 9; i_6 += 3) 
                {
                    arr_23 [i_0] [8ULL] [i_0] [10ULL] &= (-(((((/* implicit */_Bool) 10849119125107449014ULL)) ? (var_15) : (17518056707387833954ULL))));
                    var_26 = ((/* implicit */unsigned long long int) min((var_26), (((unsigned long long int) var_14))));
                }
                arr_24 [i_0] = ((((var_15) == (137438953471ULL))) ? (((arr_5 [i_0]) * (var_5))) : (((unsigned long long int) ((arr_19 [i_0] [i_0] [i_0]) < (var_6)))));
            }
        } 
    } 
    var_27 = var_13;
    var_28 = var_3;
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 12214417878391468337ULL)) && (((/* implicit */_Bool) 17518056707387833943ULL))));
}
