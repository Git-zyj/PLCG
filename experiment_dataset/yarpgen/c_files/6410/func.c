/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6410
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
    var_12 = max((max((((/* implicit */int) var_5)), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_0)))))), (((/* implicit */int) var_10)));
    var_13 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_0 [i_0]) / (arr_0 [i_0])))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))))) - (min((5210858793939739929ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            for (unsigned short i_2 = 2; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned short)45760)) / (((/* implicit */int) (unsigned short)45786)))) - (max((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_0))))), ((~(((/* implicit */int) (unsigned short)19776))))))));
                    var_16 = ((((/* implicit */_Bool) ((arr_0 [i_2 + 1]) << (((var_8) - (1773306930U)))))) ? (var_9) : ((((-(var_8))) - (((((/* implicit */_Bool) 4089360318U)) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_2] [i_2]))))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */unsigned short) min((max((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_0] [i_0])))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */_Bool) var_6);
        var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)-4))));
        /* LoopSeq 2 */
        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) arr_13 [i_3] [i_4]);
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 15; i_5 += 2) 
            {
                for (unsigned int i_6 = 2; i_6 < 13; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)19792)) ? (max((((((/* implicit */_Bool) var_10)) ? (var_9) : (arr_2 [i_6] [i_5] [i_3]))), (((/* implicit */unsigned int) var_0)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19770)))));
                        var_21 += ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_19 [i_3] [i_4] [i_5] [i_6]))))));
                    }
                } 
            } 
            arr_21 [i_3] = ((/* implicit */unsigned short) arr_12 [i_3] [i_3] [i_4]);
            arr_22 [i_3] = arr_14 [i_3] [i_4] [i_4] [i_4];
        }
        for (unsigned short i_7 = 1; i_7 < 14; i_7 += 2) 
        {
            var_22 = ((/* implicit */unsigned short) arr_2 [i_3] [i_7] [i_7]);
            var_23 = ((/* implicit */unsigned int) min((var_23), ((-(arr_9 [i_3])))));
            var_24 = ((/* implicit */unsigned long long int) (unsigned short)65535);
        }
        arr_25 [i_3] = ((/* implicit */short) 524288);
    }
    var_25 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_8)) ? ((-(((/* implicit */int) (unsigned short)1612)))) : (((/* implicit */int) var_7))))));
    var_26 = (~(min((((/* implicit */int) (short)-12603)), (-1466569226))));
}
