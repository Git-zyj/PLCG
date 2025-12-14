/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62932
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
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 20; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? ((+(-732386416))) : (((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) & (var_8)))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    var_17 = ((/* implicit */unsigned char) ((137434759168LL) * (((/* implicit */long long int) ((var_7) * (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_12)))) ? ((-(732386400))) : (((/* implicit */int) arr_5 [i_0]))));
                    var_18 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) -732386422)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (-871270476))));
                    var_19 += ((/* implicit */unsigned short) (signed char)8);
                }
                var_20 = max((min((((/* implicit */long long int) (unsigned char)2)), (min((137434759168LL), (((/* implicit */long long int) var_14)))))), (max((((/* implicit */long long int) var_0)), (max((((/* implicit */long long int) arr_0 [i_0] [i_1])), (-137434759168LL))))));
                arr_9 [i_0] [i_0] = ((/* implicit */_Bool) max(((-(((/* implicit */int) (signed char)0)))), (((arr_2 [i_0] [i_0]) ? (((/* implicit */int) var_15)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (672390016)))))));
                var_21 = ((/* implicit */short) arr_3 [i_0] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) var_12);
    /* LoopSeq 1 */
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
    {
        var_23 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 732386416)) ? (var_9) : (arr_3 [i_3] [i_3])))));
        var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)0)), (-137434759168LL)))) ? (var_0) : (((/* implicit */unsigned int) var_9))))))))));
        var_25 = ((/* implicit */unsigned char) arr_0 [i_3] [i_3]);
    }
    var_26 = ((/* implicit */signed char) max((var_9), ((-(((/* implicit */int) var_2))))));
}
