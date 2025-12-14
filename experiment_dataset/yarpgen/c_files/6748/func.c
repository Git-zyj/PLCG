/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6748
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
    var_11 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)0))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)43252))));
        arr_2 [(unsigned char)9] = ((/* implicit */unsigned short) var_1);
    }
    for (unsigned char i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)0)), (arr_0 [i_1 - 1]))))));
        arr_5 [i_1 - 1] = ((/* implicit */int) arr_3 [i_1 + 1] [i_1 + 1]);
    }
    /* vectorizable */
    for (long long int i_2 = 4; i_2 < 15; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 2; i_3 < 15; i_3 += 4) 
        {
            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) (unsigned char)105))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_2 - 2] [i_3 + 1] [i_4 - 2]))) : (((unsigned long long int) var_8))));
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 2; i_5 < 16; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            {
                                var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)28068)) / (((/* implicit */int) var_1))))) / (((((/* implicit */_Bool) arr_7 [i_5])) ? (arr_14 [i_6] [i_3] [i_6] [13LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1536)))))));
                                var_16 |= (+(arr_10 [i_4 - 2] [i_4 + 1] [i_4 + 1]));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 2; i_7 < 16; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 1; i_8 < 15; i_8 += 4) 
            {
                for (unsigned char i_9 = 1; i_9 < 14; i_9 += 1) 
                {
                    {
                        var_17 = ((/* implicit */unsigned short) arr_22 [i_8 - 1] [i_8] [i_8] [i_8 - 1]);
                        var_18 = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)0))));
                        var_19 = ((/* implicit */unsigned short) arr_24 [(unsigned short)2] [i_8] [i_8] [(unsigned short)4] [3ULL] [11ULL]);
                        var_20 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_26 [i_2 - 4] [i_7 - 2] [i_8] [6])) > (arr_6 [(unsigned char)1]))))));
                    }
                } 
            } 
        } 
    }
}
