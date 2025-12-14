/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61982
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
    var_17 = (-(((4194303) / (-4194301))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) < (((/* implicit */int) ((short) max((-4194304), (((/* implicit */int) arr_5 [(unsigned char)3]))))))));
                var_19 = ((/* implicit */short) max((max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_1]))), (((unsigned char) max((arr_2 [i_0]), (((/* implicit */int) var_14)))))));
                var_20 = ((/* implicit */short) ((int) ((arr_3 [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [4LL])) && (((/* implicit */_Bool) arr_0 [i_0])))))))));
                var_21 = ((/* implicit */unsigned int) ((short) ((4194303) / (((/* implicit */int) (short)-3419)))));
                var_22 = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_2 [i_0])) | (199371284U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) < (((/* implicit */int) arr_5 [i_1]))))) : ((-(4194318)))))));
            }
        } 
    } 
}
