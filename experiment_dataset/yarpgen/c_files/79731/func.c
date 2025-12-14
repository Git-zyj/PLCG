/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79731
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79731 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79731
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
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (5376488110371392949ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (unsigned short)20177)) ? (((/* implicit */int) (unsigned short)45358)) : (-680325097))) : (((/* implicit */int) (unsigned short)45360))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
            {
                {
                    arr_13 [i_1] [i_1] [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)20178)))))) | (((((/* implicit */_Bool) (+(((/* implicit */int) (short)25119))))) ? (((((/* implicit */_Bool) 8351806954843760259ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20188))) : (10094937118865791343ULL))) : (10094937118865791332ULL)))));
                    arr_14 [i_1] [i_1] [i_3] = ((/* implicit */long long int) (short)17432);
                }
            } 
        } 
    } 
}
