/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70451
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
    var_18 = var_14;
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_19 = ((/* implicit */unsigned long long int) min((var_19), (arr_0 [i_0])));
        var_20 = ((/* implicit */long long int) arr_0 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_21 = ((/* implicit */long long int) ((((unsigned long long int) 4403196242846466672ULL)) / (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) min((arr_4 [i_1]), (arr_1 [i_1]))))))))));
        arr_5 [12ULL] = ((/* implicit */unsigned long long int) arr_3 [i_1]);
        var_23 = ((/* implicit */unsigned long long int) max((var_23), (max((min((((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]))), (0ULL))), (max((arr_1 [i_1]), (max((((/* implicit */unsigned long long int) -8347707864251183336LL)), (var_0)))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        arr_8 [i_2] = ((/* implicit */long long int) (~(((unsigned long long int) 14043547830863084943ULL))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), ((((!(((/* implicit */_Bool) max((var_11), (var_14)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_2])) & (arr_4 [i_2])))) ? (((/* implicit */unsigned long long int) arr_7 [i_2])) : (max((4403196242846466672ULL), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) max((((unsigned int) var_0)), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [i_2])) || (((/* implicit */_Bool) arr_0 [9U]))))))))))));
    }
    var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((var_3) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) == (((/* implicit */long long int) 511U)))))))))));
}
