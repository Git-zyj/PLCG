/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59966
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
    for (int i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                arr_4 [0U] = ((/* implicit */short) 71776119061217280LL);
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    for (int i_3 = 1; i_3 < 21; i_3 += 1) 
                    {
                        {
                            var_17 = min((((((/* implicit */int) arr_6 [(short)9] [i_0] [(short)8] [i_3 - 1])) | (1663074409))), (((/* implicit */int) ((short) (unsigned char)172))));
                            var_18 = ((/* implicit */int) ((short) (unsigned char)160));
                        }
                    } 
                } 
                var_19 = min((((((/* implicit */_Bool) arr_0 [i_1 + 3])) ? (((/* implicit */int) arr_3 [i_0 + 1] [i_1 + 2])) : (arr_0 [i_0 + 2]))), (((/* implicit */int) ((-1) > (arr_0 [i_0 + 1])))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) (+(((/* implicit */int) max((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) -1590403073238426600LL)) && (((/* implicit */_Bool) var_0))))))))));
}
