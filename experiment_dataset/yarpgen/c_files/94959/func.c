/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94959
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
    var_10 = ((/* implicit */unsigned long long int) min((var_10), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) ? (((unsigned int) var_4)) : (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) var_9)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) arr_1 [i_0] [i_0]))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) 4209803159U)))));
            var_13 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) 85164136U)) || (arr_1 [i_0] [i_1]))))));
        }
        for (unsigned short i_2 = 3; i_2 < 22; i_2 += 1) 
        {
            arr_8 [i_0] [(unsigned char)22] &= ((/* implicit */_Bool) (~(arr_0 [i_2 - 2])));
            /* LoopSeq 1 */
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) ((unsigned long long int) 8715199889698975624ULL)))));
                var_15 = ((/* implicit */unsigned char) (((-(((/* implicit */int) arr_1 [i_0] [i_3])))) == (((/* implicit */int) ((arr_10 [i_3]) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))));
            }
            var_16 = ((/* implicit */long long int) ((int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) (unsigned char)224)))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 11; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned char) min((var_17), (((unsigned char) arr_12 [i_4 + 1] [i_4 - 2] [22ULL]))));
        arr_15 [i_4 - 1] [i_4 + 1] = ((/* implicit */unsigned short) arr_1 [i_4 + 1] [i_4 - 1]);
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_6 [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)19392))))) && (((_Bool) arr_6 [i_5] [i_5])))))) : (min((arr_0 [i_5]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3702244361U)) ? (arr_11 [(short)23] [(short)23] [i_5] [i_5]) : (1820084995))))))));
        var_19 = ((/* implicit */long long int) var_1);
    }
    var_20 = (((((-(4209803164U))) == (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)42))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)32))))), (max((var_6), (var_2)))))) : ((-(max((3689919566087975393ULL), (((/* implicit */unsigned long long int) var_1)))))));
    var_21 -= ((/* implicit */unsigned long long int) var_9);
}
