/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72816
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
    var_16 = ((/* implicit */unsigned int) min((min((var_11), (((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_11)))))), (((/* implicit */int) var_12))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            var_17 = ((/* implicit */unsigned short) 17383520996502371545ULL);
            var_18 -= ((/* implicit */unsigned long long int) ((unsigned int) arr_3 [i_0 - 2]));
            /* LoopNest 2 */
            for (unsigned int i_2 = 4; i_2 < 11; i_2 += 2) 
            {
                for (unsigned int i_3 = 0; i_3 < 14; i_3 += 2) 
                {
                    {
                        arr_9 [i_0] = ((/* implicit */unsigned char) 17383520996502371545ULL);
                        arr_10 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_0] = ((/* implicit */unsigned long long int) 8749762277661327865LL);
                    }
                } 
            } 
            var_19 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -8749762277661327866LL)))))));
        }
        arr_11 [13] [13] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) arr_2 [i_0] [i_0 + 1]))))) < (min((max((-8749762277661327854LL), (((/* implicit */long long int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0 - 3] [i_0])))), (((/* implicit */long long int) (~(var_3))))))));
        arr_12 [i_0] = var_12;
    }
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_5 = 3; i_5 < 9; i_5 += 4) /* same iter space */
        {
            arr_19 [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_4] [i_5 + 2])) ? (((/* implicit */unsigned long long int) -8749762277661327866LL)) : (min((((/* implicit */unsigned long long int) -8749762277661327866LL)), (min((1634379993534488664ULL), (((/* implicit */unsigned long long int) var_13))))))));
            var_20 = ((/* implicit */long long int) max((var_20), (arr_0 [i_5])));
            arr_20 [10U] [10U] [10U] = arr_5 [(unsigned short)8] [i_4] [i_4];
        }
        for (unsigned int i_6 = 3; i_6 < 9; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (int i_7 = 0; i_7 < 11; i_7 += 1) 
            {
                arr_27 [i_6] [i_6] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_21 [i_6 + 1] [i_6 + 1] [i_6 - 2])), (8749762277661327865LL))))));
                arr_28 [i_6] = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) 17383520996502371545ULL)))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_4])))))))));
                arr_29 [i_6] [i_6 - 1] [i_6 - 1] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_6 + 1] [i_6 + 2])) ? (arr_7 [i_6 - 2] [i_6 - 2] [i_6 + 2] [i_6 + 2]) : (((/* implicit */unsigned int) 167022426)))))));
            }
            arr_30 [i_4] [i_4] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_13 [i_4])))) ? (((((/* implicit */_Bool) (~(11842565325991075318ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_26 [4U] [i_6 + 2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_4] [i_4] [i_6 - 1] [i_4] [i_6 - 2] [i_6 - 1]))) : (-8749762277661327870LL)))) : (((((/* implicit */_Bool) arr_14 [i_6 - 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_4] [i_6 - 3]))) : (arr_23 [i_4] [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
        }
        var_21 = ((/* implicit */int) ((((/* implicit */int) (unsigned short)36279)) != (((/* implicit */int) (!(((/* implicit */_Bool) -8749762277661327865LL)))))));
    }
    var_22 = ((/* implicit */unsigned int) (~(var_2)));
}
