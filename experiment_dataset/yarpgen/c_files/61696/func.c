/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61696
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
    var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) max((((/* implicit */unsigned short) var_4)), (var_10)))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 16; i_2 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)(-127 - 1))))))))))))));
                    var_13 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */short) (unsigned char)5)), (var_4)))) != ((-(((/* implicit */int) arr_2 [(short)16]))))))), (var_3)));
                    var_14 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_6 [i_0 + 2]))) || (((/* implicit */_Bool) min((((/* implicit */long long int) min((((/* implicit */int) var_8)), (-2147483641)))), (arr_3 [i_0 + 2] [14ULL]))))));
                    arr_8 [i_1] = ((/* implicit */int) min((((/* implicit */unsigned long long int) 2147483636)), ((-(max((((/* implicit */unsigned long long int) var_9)), (var_3)))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */_Bool) ((((/* implicit */int) min((((_Bool) var_4)), (((_Bool) var_9))))) & (var_5)));
}
