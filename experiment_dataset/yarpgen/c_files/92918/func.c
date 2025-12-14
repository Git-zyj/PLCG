/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92918
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
    var_17 = ((/* implicit */unsigned char) (~(22ULL)));
    /* LoopNest 3 */
    for (unsigned short i_0 = 3; i_0 < 18; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 2) 
        {
            for (short i_2 = 4; i_2 < 19; i_2 += 1) 
            {
                {
                    var_18 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_1] [i_0 - 2])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_5)) ? ((-2147483647 - 1)) : (((/* implicit */int) (_Bool)0))))))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) min((((max((arr_1 [i_1]), (arr_1 [i_1]))) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 2147483638)) ? (((((/* implicit */int) (unsigned short)32767)) | (((/* implicit */int) arr_5 [i_0] [(short)5] [4U])))) : ((~(((/* implicit */int) (short)4096)))))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(min((((/* implicit */unsigned int) (short)-4074)), (4294967269U)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_13)), (var_2)))) ? (((/* implicit */int) (short)4101)) : (((/* implicit */int) ((_Bool) (-2147483647 - 1)))))) : (((/* implicit */int) var_4))));
}
