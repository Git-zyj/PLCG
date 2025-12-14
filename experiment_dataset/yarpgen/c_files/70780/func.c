/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70780
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
    var_10 = ((/* implicit */unsigned short) min(((unsigned char)142), (((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-1))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_11 ^= ((/* implicit */unsigned int) ((signed char) 6ULL));
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 12; i_2 += 3) 
            {
                {
                    arr_6 [i_1] [(unsigned char)10] = ((/* implicit */short) ((long long int) ((((/* implicit */int) var_7)) <= (var_8))));
                    var_12 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) >= (((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (var_3)))));
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((unsigned short) (signed char)-26)))));
                    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) >= (((/* implicit */int) var_0))));
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) 5549744990493226973ULL);
    }
}
