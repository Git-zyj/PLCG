/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65819
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65819 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65819
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
    var_13 |= ((/* implicit */unsigned char) var_8);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [i_1 - 1] = (-((-(((/* implicit */int) ((signed char) var_9))))));
                    var_14 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) arr_9 [i_1 + 1] [i_1 - 3] [i_1 + 1])))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 24; i_4 += 1) 
            {
                for (short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        arr_17 [19ULL] [i_0] [(_Bool)1] [i_5] [i_0] = ((/* implicit */signed char) (-(arr_1 [i_0])));
                        var_15 |= ((/* implicit */unsigned int) ((unsigned short) -2024362687));
                        arr_18 [i_0] [i_0] [(_Bool)1] [i_0] [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            arr_19 [(short)14] [i_0] [(short)23] = ((/* implicit */short) ((signed char) (~(((/* implicit */int) ((_Bool) arr_3 [i_0]))))));
            arr_20 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) ((unsigned long long int) arr_13 [i_0] [6] [i_3])));
            arr_21 [i_3] [(_Bool)1] [i_3] &= ((/* implicit */unsigned long long int) 3843325730064698706LL);
        }
        /* LoopSeq 1 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) ((short) ((unsigned long long int) var_3))))));
            var_17 = ((/* implicit */long long int) (unsigned char)11);
        }
    }
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */int) 3843325730064698706LL);
        /* LoopSeq 2 */
        for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
        {
            var_19 = ((/* implicit */_Bool) (-(((arr_22 [i_7] [i_8] [i_8]) ? ((~(var_10))) : (((/* implicit */int) (unsigned char)18))))));
            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) (unsigned char)20))));
        }
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
        {
            arr_32 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-3843325730064698713LL)))) ? ((+(((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_31 [i_7] [i_9])) : (((/* implicit */int) arr_16 [i_9] [i_9] [i_9] [i_9] [i_7] [i_7]))))));
            var_21 &= ((/* implicit */_Bool) var_10);
        }
    }
}
