/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66398
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
    var_15 = ((/* implicit */signed char) -667032611);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                var_16 ^= ((/* implicit */int) max((((/* implicit */unsigned long long int) (+(var_8)))), (((((/* implicit */_Bool) min(((unsigned char)234), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)217))) : (((2147483647ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((var_7) && (((((/* implicit */_Bool) (unsigned char)46)) && (((/* implicit */_Bool) (unsigned char)233))))))), (17293822569102704640ULL)));
                arr_7 [12ULL] [i_1] |= ((/* implicit */signed char) min(((short)-27780), (((/* implicit */short) (unsigned char)154))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned int) 17224591999894034365ULL);
}
