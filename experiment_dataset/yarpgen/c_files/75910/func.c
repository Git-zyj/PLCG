/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75910
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
    var_16 = ((/* implicit */unsigned long long int) var_4);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_17 = var_6;
                var_18 = ((/* implicit */unsigned long long int) (+(max((((/* implicit */unsigned int) (unsigned short)11)), (2962545840U)))));
                var_19 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1])), (var_2))), (max((1332421455U), (1332421456U)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (int i_2 = 0; i_2 < 23; i_2 += 3) 
    {
        var_20 -= ((/* implicit */long long int) ((((_Bool) (_Bool)0)) ? ((~(arr_6 [i_2]))) : (((unsigned int) var_11))));
        var_21 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned short)60683)) ? (arr_6 [i_2]) : (arr_6 [i_2])))));
    }
    for (unsigned char i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
    {
        var_22 = (((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)65525))))))) ? ((-(arr_6 [i_3]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_3]))));
        arr_9 [i_3] [i_3] = ((/* implicit */unsigned char) max((min((((/* implicit */unsigned long long int) min((arr_8 [i_3]), ((unsigned short)11)))), (max((((/* implicit */unsigned long long int) 1332421457U)), (1152920954851033088ULL))))), (((/* implicit */unsigned long long int) (~(var_2))))));
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 18; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                {
                    arr_16 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) (-(((/* implicit */int) max((max((var_1), ((signed char)12))), (((/* implicit */signed char) ((_Bool) var_3))))))));
                    /* LoopSeq 2 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned short)194)), (var_11)))) ? (max((2962545819U), (((/* implicit */unsigned int) (_Bool)0)))) : (((/* implicit */unsigned int) -1146804327)))))));
                        var_24 = ((/* implicit */signed char) max((max((var_2), (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)0)) - (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_7))));
                        var_25 = ((/* implicit */short) (+(min((max((1023LL), (((/* implicit */long long int) (unsigned short)65527)))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_3] [i_4]))) + (var_2))))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 2; i_7 < 15; i_7 += 4) 
                        {
                            var_26 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((signed char) arr_5 [i_3 + 2] [11LL])))));
                            arr_24 [i_3] [i_4] [i_5] [i_6] [12U] [i_4] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
                            var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) max(((-(((/* implicit */int) var_5)))), ((+(((/* implicit */int) arr_8 [i_6])))))))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 1; i_8 < 15; i_8 += 3) 
                    {
                        arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [11LL] = ((/* implicit */unsigned short) var_12);
                        var_28 += ((/* implicit */long long int) var_0);
                        arr_29 [i_3 + 2] [i_3] [i_5] [i_3] = 6535224974795190948LL;
                        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1694669454U)) ? (1588435554U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)16)))));
                    }
                    arr_30 [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) max((max((arr_23 [i_3]), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)99))))))), (((/* implicit */unsigned int) ((((/* implicit */int) max((var_0), (((/* implicit */unsigned short) (short)-8827))))) >> (((var_11) - (1748951436U))))))));
                }
            } 
        } 
    }
    for (unsigned char i_9 = 1; i_9 < 15; i_9 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */_Bool) (signed char)16);
        arr_35 [i_9] = ((/* implicit */signed char) min((1332421457U), (((/* implicit */unsigned int) (signed char)16))));
        arr_36 [i_9] = ((/* implicit */short) min((var_14), (min((((1649776391) ^ (((/* implicit */int) arr_11 [i_9])))), (((/* implicit */int) arr_31 [i_9 + 3] [i_9 + 3]))))));
        var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3011456676U)) || (((/* implicit */_Bool) -7487657878297072037LL))));
    }
    var_32 |= ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    for (signed char i_10 = 0; i_10 < 25; i_10 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned int i_11 = 1; i_11 < 22; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 3) 
            {
                {
                    var_33 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_38 [i_11 + 3])), (((unsigned int) max((2962545840U), (((/* implicit */unsigned int) var_7)))))));
                    arr_45 [i_10] [i_11] [4U] = ((/* implicit */unsigned long long int) 3011456676U);
                    var_34 = ((/* implicit */unsigned int) arr_39 [i_11]);
                    arr_46 [i_10] [i_11] [i_12] = ((/* implicit */unsigned short) (-(max((((/* implicit */unsigned int) arr_41 [i_10])), (min((arr_44 [i_10] [20LL] [20LL] [i_10]), (((/* implicit */unsigned int) var_12))))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 4) 
        {
            arr_51 [i_10] [i_13] = ((/* implicit */short) max(((+(((/* implicit */int) arr_38 [i_10])))), (((/* implicit */int) ((unsigned char) 2962545838U)))));
            var_35 = ((/* implicit */signed char) max(((unsigned short)55738), ((unsigned short)38416)));
        }
    }
}
