/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81143
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
    var_19 = ((/* implicit */long long int) var_8);
    var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_10)))) ? (((/* implicit */int) var_3)) : (((var_3) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)210))) : (var_12)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)111))) > ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)65))) : (-1963298073188553121LL)))));
        var_22 = ((/* implicit */short) ((arr_1 [i_0] [i_0]) <= (((long long int) arr_1 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((unsigned long long int) var_18)))));
                    var_24 = ((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-6656708011971871607LL)))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
                        {
                            {
                                var_25 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_10 [i_0] [i_0]))));
                                var_26 = ((/* implicit */short) var_5);
                                var_27 *= ((/* implicit */long long int) ((((/* implicit */int) var_11)) % (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 1; i_5 < 22; i_5 += 4) 
                    {
                        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_18 [i_0] [i_1] [i_0] [i_1] [i_6] [i_0] = ((/* implicit */unsigned long long int) arr_11 [i_1] [8LL] [i_2] [i_5] [i_5 - 1] [i_6]);
                                arr_19 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */int) var_2)) ^ (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 2) 
    {
        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((long long int) arr_5 [i_7] [(unsigned short)2] [i_7])) : (((/* implicit */long long int) ((unsigned int) var_2)))))) ? (1775182147U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1)))))))))));
        var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((2147483647) < (((/* implicit */int) arr_6 [i_7] [i_7]))))), (((min((((/* implicit */unsigned int) var_4)), (4160749568U))) >> (((6656708011971871595LL) - (6656708011971871582LL))))))))));
        var_30 = ((/* implicit */_Bool) min((var_30), (((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_14)))) > (((unsigned int) arr_1 [i_7] [i_7]))))) > (((/* implicit */int) arr_8 [i_7] [11U] [i_7] [i_7]))))));
    }
}
