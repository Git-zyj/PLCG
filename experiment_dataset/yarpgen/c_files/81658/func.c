/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81658
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81658 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81658
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
    for (short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        arr_2 [20] [20] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((+(var_7)))))) ? (((((/* implicit */int) ((_Bool) arr_0 [i_0 + 1]))) / (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0 - 1]))))));
        var_11 = ((/* implicit */unsigned char) min((((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (arr_1 [i_0 - 1] [i_0 - 1])))), (((int) var_4))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_7);
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 2; i_1 < 23; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_12 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
                    var_13 ^= ((/* implicit */unsigned int) ((_Bool) ((unsigned int) (!(((/* implicit */_Bool) var_0))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 1; i_4 < 21; i_4 += 2) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            {
                                arr_16 [i_1] [i_2] [i_3] [i_2] [i_5 - 2] = ((/* implicit */_Bool) (+(max(((-(arr_12 [i_1 - 2] [i_5] [(signed char)23]))), (((/* implicit */unsigned long long int) var_5))))));
                                var_14 = ((/* implicit */unsigned short) 11U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 21; i_6 += 4) 
                    {
                        for (int i_7 = 0; i_7 < 24; i_7 += 2) 
                        {
                            {
                                var_15 ^= ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((26U), (((/* implicit */unsigned int) var_6)))) <= (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)23139))))))))) ^ (max((17732178089717129318ULL), (((/* implicit */unsigned long long int) (unsigned short)65045)))));
                                var_16 = min((((unsigned short) arr_11 [i_2] [i_3])), (((/* implicit */unsigned short) min((arr_11 [i_2] [i_6 + 2]), (arr_11 [i_1 - 1] [i_3])))));
                                arr_22 [i_1 - 2] [i_3] [i_2] [(_Bool)1] [i_1 - 2] = ((/* implicit */unsigned short) max(((~(((/* implicit */int) arr_6 [i_2] [(unsigned short)13] [i_2])))), (((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */int) ((((unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)175))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_20 [i_1 - 2] [(signed char)11] [i_1] [(unsigned char)22] [(unsigned char)22])) & (((/* implicit */int) arr_20 [i_1 - 2] [i_1] [i_1] [18] [18])))))));
                }
            } 
        } 
        arr_23 [(unsigned short)13] = ((/* implicit */unsigned short) 5846386080909088692ULL);
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 24; i_8 += 3) 
    {
        arr_28 [(signed char)7] = ((/* implicit */unsigned char) arr_18 [i_8]);
        var_18 &= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_15 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))));
    }
    var_19 = ((/* implicit */_Bool) min((((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))))), (min((7282474019748810698LL), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)108)))))))));
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) - (7282474019748810698LL))))));
}
