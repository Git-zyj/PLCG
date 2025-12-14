/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86577
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
    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) 688803501U))));
    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((int) 3606163794U)))));
    var_21 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (unsigned short)28490)), (536862720ULL)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 22; i_2 += 3) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_22 ^= ((/* implicit */long long int) ((_Bool) arr_5 [i_2 - 1] [i_2 + 1] [i_3]));
                        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) (short)32767));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_4 = 3; i_4 < 21; i_4 += 1) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-32744))))) == (((unsigned long long int) (unsigned char)32))));
            arr_14 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)16)) ? (((((/* implicit */_Bool) (short)32724)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-6847))) : (971108398U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19579)))));
        }
        var_25 = ((/* implicit */long long int) min((var_25), ((~(5879507440423964090LL)))));
        var_26 = ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0]));
    }
}
