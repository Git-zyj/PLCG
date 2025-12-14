/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93316
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((arr_2 [i_0] [i_0]) && (var_10))) ? (((/* implicit */int) (((!(arr_0 [i_0]))) || ((!(arr_2 [i_0] [i_0])))))) : (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */int) 773173370376634063ULL);
    }
    var_13 = ((/* implicit */short) 17673570703332917532ULL);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        for (short i_2 = 4; i_2 < 22; i_2 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned char) var_6);
                var_15 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)234))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_2 - 2]))) : (8069664771166752205ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_7 [i_1] [i_2]))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (short)22452))) ? (var_3) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))))))));
}
