/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8850
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))), ((+(arr_0 [(unsigned short)2] [i_0]))))), ((+(arr_0 [i_0] [i_0 + 1])))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 4; i_3 < 16; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 19; i_4 += 1) 
                        {
                            {
                                var_12 = (+(max((-2919338095347140510LL), (5232565903920961497LL))));
                                var_13 = ((/* implicit */short) ((unsigned short) arr_0 [(short)14] [i_4]));
                                var_14 = ((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) max((arr_11 [i_0] [i_0] [i_0 + 3] [i_0] [i_0]), (arr_11 [i_0] [i_0] [i_0 + 2] [i_0] [i_0])))))));
                                var_15 -= ((/* implicit */long long int) arr_9 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] [i_2 - 1]);
                                var_16 = ((/* implicit */_Bool) arr_3 [i_0]);
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_7 [i_0]);
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 4; i_5 < 15; i_5 += 1) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((((unsigned long long int) ((unsigned int) arr_5 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_8 [i_1])) >> (((/* implicit */int) arr_8 [i_1]))))))))));
                                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) (~(7511611725859864641ULL))))));
                                var_19 = ((/* implicit */long long int) max((var_19), (arr_6 [i_2] [i_1])));
                            }
                        } 
                    } 
                    var_20 = max((arr_11 [i_1 + 1] [i_0] [i_1] [i_0] [i_0 + 3]), (max((arr_11 [i_1 + 1] [i_0] [i_0] [i_0] [i_0 + 3]), (arr_11 [i_1 - 2] [i_0] [i_1] [i_0] [i_0 + 2]))));
                }
            } 
        } 
    }
    for (unsigned short i_7 = 3; i_7 < 10; i_7 += 4) 
    {
        var_21 -= ((/* implicit */unsigned short) (-((((+(((/* implicit */int) arr_2 [i_7] [i_7])))) & (((/* implicit */int) arr_20 [6U]))))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (int i_9 = 1; i_9 < 9; i_9 += 2) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)23252)), (-3193618104578962098LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((!(((/* implicit */_Bool) 2143815871U)))), (((8) <= (((/* implicit */int) (unsigned short)31583)))))))) : ((+(((((/* implicit */_Bool) arr_25 [i_7] [i_8])) ? (arr_19 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_8] [11] [i_7 + 1] [i_7] [i_7])))))))));
                    var_23 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_9 [i_7 + 2] [i_7 + 2] [i_8] [i_8] [i_8] [i_9])) - (((/* implicit */int) arr_16 [i_7 + 1] [i_8]))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_7] [i_7]))) : (((/* implicit */int) arr_13 [i_7] [i_9 + 1] [i_9] [i_7 + 1])))));
                }
            } 
        } 
    }
    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 4) 
    {
        arr_29 [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_28 [i_10])), (arr_27 [i_10] [i_10]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_10])))))))) ? (((((/* implicit */int) (short)32758)) ^ (-5))) : ((+(((/* implicit */int) arr_28 [i_10]))))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) ((((/* implicit */_Bool) 70351564308480LL)) ? (8388607LL) : (((/* implicit */long long int) -23)))))));
        var_25 -= ((/* implicit */_Bool) ((((/* implicit */int) max((arr_28 [i_10]), (arr_28 [i_10])))) / (((/* implicit */int) arr_28 [i_10]))));
    }
    var_26 = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((_Bool) var_5))) : (((((/* implicit */int) var_0)) * (((/* implicit */int) var_8)))))));
    var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_10))));
}
