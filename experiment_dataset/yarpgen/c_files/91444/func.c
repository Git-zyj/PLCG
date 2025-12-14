/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91444
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
    var_17 = var_13;
    var_18 = (-(var_16));
    var_19 = ((/* implicit */long long int) 2271214214498828090ULL);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_5 [i_0] [i_1] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((2ULL) == (((/* implicit */unsigned long long int) ((long long int) (-9223372036854775807LL - 1LL)))))))) + (arr_3 [i_0] [1LL] [i_1])));
            arr_6 [(_Bool)0] [(_Bool)0] = ((/* implicit */unsigned long long int) ((-6378626010876323283LL) & (7228938383568926607LL)));
        }
        /* vectorizable */
        for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            arr_10 [i_2] = ((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_2]));
            arr_11 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((-7228938383568926607LL) / (7228938383568926598LL))) : (((((/* implicit */_Bool) arr_4 [i_0] [1LL] [12LL])) ? (7228938383568926607LL) : (-2062255820760304770LL)))));
            arr_12 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) ((var_0) >> (((var_5) - (5271274352544432595ULL))))));
        }
        arr_13 [12LL] = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (max((arr_1 [i_0]), (arr_1 [i_0]))))) >> (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_9 [i_0])) ? (((/* implicit */unsigned long long int) 3669520974972111394LL)) : (1463635334709330590ULL)))))));
        arr_14 [i_0] = ((/* implicit */long long int) (_Bool)0);
        arr_15 [i_0] = ((/* implicit */long long int) 0ULL);
        arr_16 [i_0] = ((/* implicit */unsigned long long int) ((min((arr_3 [i_0] [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_0]))) > (((/* implicit */unsigned long long int) var_4))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 2) /* same iter space */
    {
        arr_21 [i_3] = ((/* implicit */_Bool) var_13);
        arr_22 [i_3] &= arr_9 [i_3];
        arr_23 [i_3] &= ((/* implicit */unsigned long long int) var_0);
        arr_24 [i_3] = -331637725479590930LL;
    }
}
