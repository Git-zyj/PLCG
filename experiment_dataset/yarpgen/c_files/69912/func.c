/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69912
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
    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) var_16))));
    var_19 = ((/* implicit */int) var_5);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        var_20 -= ((/* implicit */unsigned long long int) (signed char)45);
        /* LoopNest 2 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    var_21 |= (signed char)-27;
                    var_22 -= ((/* implicit */signed char) var_4);
                    var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((8129697752545448991LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)61)))))) >= (var_14))))));
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) 2075385373905606504ULL))));
                }
            } 
        } 
        var_25 = (signed char)-45;
        var_26 = ((/* implicit */short) var_10);
    }
}
