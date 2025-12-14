/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94697
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) (~(min(((((_Bool)1) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_5 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 += ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_3 [i_4]))))) / (arr_13 [i_0] [i_1] [i_2 + 2] [(_Bool)1] [i_4] [(_Bool)1] [i_4])));
                                var_22 *= ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                    {
                        var_23 = min((((/* implicit */int) max((arr_15 [i_0] [i_5 - 2] [i_1]), (arr_15 [i_0] [i_5 - 2] [i_1])))), ((~(((/* implicit */int) arr_1 [i_0] [i_0])))));
                        var_24 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 25; i_6 += 3) 
        {
            for (short i_7 = 0; i_7 < 25; i_7 += 1) 
            {
                {
                    arr_22 [i_0] [i_6] [i_6] [24ULL] = ((/* implicit */int) min((-9223372036854775795LL), (((/* implicit */long long int) (_Bool)0))));
                    var_25 *= ((/* implicit */unsigned short) max((((long long int) (unsigned char)0)), (((/* implicit */long long int) var_3))));
                    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : ((~(arr_2 [i_0] [i_6])))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (max((((/* implicit */unsigned short) var_18)), ((unsigned short)28266)))))) : ((-(((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))));
                }
            } 
        } 
    }
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        var_27 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) > (14816446368684529987ULL)))), (((((unsigned long long int) -6004087190224238008LL)) + (((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) & (var_17))))))));
        var_28 = arr_12 [i_8] [i_8] [i_8] [i_8] [i_8];
    }
    var_29 = ((/* implicit */_Bool) max((var_29), (((/* implicit */_Bool) -1))));
    var_30 -= ((/* implicit */long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((/* implicit */int) var_9)) - (1)))));
}
