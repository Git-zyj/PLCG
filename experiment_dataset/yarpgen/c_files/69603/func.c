/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69603
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
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_10 = ((/* implicit */unsigned long long int) var_5);
                var_11 += ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)255))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_4 = 0; i_4 < 15; i_4 += 2) 
            {
                var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-125)) + (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2 - 4]))) : (var_1)));
                var_13 = ((/* implicit */_Bool) (signed char)(-127 - 1));
                /* LoopNest 2 */
                for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_18 [i_6] [i_6] [i_5] [i_3] [i_2] [i_3] [i_2] &= ((/* implicit */long long int) (_Bool)1);
                            arr_19 [i_5] [i_5] [i_3] [i_5] [i_3] |= ((/* implicit */unsigned int) -9223372036854775804LL);
                        }
                    } 
                } 
            }
            var_14 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) arr_15 [i_2] [(signed char)10]))) ? (((/* implicit */int) (signed char)-119)) : ((-(((/* implicit */int) (signed char)(-127 - 1)))))));
            var_15 = ((/* implicit */_Bool) (unsigned char)255);
        }
        var_16 ^= ((/* implicit */unsigned char) ((signed char) ((((/* implicit */_Bool) (unsigned char)1)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (signed char)-5)))));
        var_17 = ((/* implicit */unsigned char) var_0);
    }
}
