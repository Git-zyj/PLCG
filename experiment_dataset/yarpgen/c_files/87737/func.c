/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87737
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
    var_15 = var_4;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) 69831048869694551LL);
                var_17 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 + 1] [i_0])) ? (1653725863) : (arr_4 [i_0] [i_1 - 1] [i_0])))) < (var_6)));
                var_18 = ((/* implicit */signed char) ((unsigned long long int) ((497018165048257505ULL) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */_Bool) 3387428992U);
    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_7))));
    var_21 = (+(-3681463305768945825LL));
}
