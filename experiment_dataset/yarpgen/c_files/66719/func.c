/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66719
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
    var_11 += 536739840;
    var_12 = ((/* implicit */int) min((((/* implicit */long long int) ((var_6) % (((/* implicit */int) ((var_7) >= (var_0))))))), (var_4)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [i_0] = 4917732743282888728LL;
        arr_3 [11] = 3238013142658936852LL;
        var_13 = ((/* implicit */long long int) 25002682);
        var_14 = min((((/* implicit */long long int) arr_1 [i_0])), (min((((/* implicit */long long int) arr_1 [6])), (arr_0 [i_0] [i_0]))));
        var_15 = max((((/* implicit */long long int) (-(min((536739840), (1804472852)))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((int) 1536916203))) : (arr_0 [i_0 - 2] [i_0]))));
    }
    var_16 = ((((/* implicit */_Bool) -6775126980839709853LL)) ? (-3516591372443381118LL) : (-3238013142658936853LL));
}
