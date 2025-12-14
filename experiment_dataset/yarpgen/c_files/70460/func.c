/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70460
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
    var_11 = ((/* implicit */long long int) ((unsigned short) min((((long long int) var_8)), (((/* implicit */long long int) (unsigned short)0)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */int) (signed char)22)) > (((/* implicit */int) (unsigned char)1))))), (479650305)))), (((min((10640820282517921343ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 + 1])))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)240)))))))));
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_2))))))))));
                arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) != (arr_3 [i_0]))) ? (((((/* implicit */int) (short)-9305)) & (((/* implicit */int) (unsigned char)255)))) : (((/* implicit */int) (signed char)-5))))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((max((-273243238), (((/* implicit */int) (unsigned char)25)))) >= ((~(((/* implicit */int) ((unsigned char) var_5))))))))));
}
