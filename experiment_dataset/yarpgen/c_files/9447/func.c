/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9447
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_2] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1])) == (((/* implicit */int) (unsigned char)43)))))));
                    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-44))) + (min((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) - (0U))), (((/* implicit */unsigned int) (_Bool)1)))))))));
                    var_15 -= ((/* implicit */unsigned short) var_13);
                }
            } 
        } 
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((+(var_10))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0] [(_Bool)1])) < (((/* implicit */int) (unsigned char)213)))))))) ? (min((((/* implicit */int) (signed char)-18)), ((~(((/* implicit */int) (unsigned short)17401)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)39015)))))));
        var_16 += ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    var_17 = ((/* implicit */unsigned char) (unsigned short)17401);
}
