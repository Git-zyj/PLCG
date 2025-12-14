/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70246
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_10 = ((/* implicit */short) var_5);
            var_11 = ((/* implicit */unsigned int) min((var_11), (((unsigned int) ((unsigned long long int) var_8)))));
        }
        for (long long int i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            var_12 &= ((/* implicit */int) ((short) var_7));
            var_13 = ((/* implicit */long long int) min((var_13), (((/* implicit */long long int) ((_Bool) ((short) var_5))))));
            var_14 = ((/* implicit */unsigned char) ((short) ((int) ((unsigned int) 1244298215))));
            var_15 = ((short) var_3);
        }
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 23; i_3 += 2) /* same iter space */
        {
            var_16 -= ((/* implicit */short) var_6);
            arr_10 [i_0] [i_3] [(short)17] = ((/* implicit */int) var_6);
        }
        /* LoopSeq 1 */
        for (unsigned char i_4 = 1; i_4 < 20; i_4 += 3) 
        {
            var_17 ^= ((/* implicit */short) var_3);
            var_18 = ((/* implicit */_Bool) ((short) ((unsigned int) var_3)));
        }
        var_19 = ((/* implicit */unsigned int) var_6);
    }
    for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 2) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) var_4)))))))))));
        arr_17 [i_5] = ((/* implicit */long long int) ((unsigned long long int) var_6));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((unsigned char) (~(var_6)))))));
    }
    var_22 |= ((/* implicit */long long int) var_4);
    var_23 &= ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-22638))));
}
