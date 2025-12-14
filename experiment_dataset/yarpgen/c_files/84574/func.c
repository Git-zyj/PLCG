/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84574
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84574 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84574
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
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) max(((!(((/* implicit */_Bool) ((unsigned short) 12900284826096451107ULL))))), (((((/* implicit */int) arr_1 [i_0] [i_0])) < (((/* implicit */int) arr_1 [i_0] [i_0]))))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) max((min((((((/* implicit */_Bool) var_0)) ? (12900284826096451096ULL) : (((/* implicit */unsigned long long int) -1LL)))), (((/* implicit */unsigned long long int) min((arr_0 [i_0]), (((/* implicit */unsigned short) arr_2 [i_0] [i_0]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        var_13 = ((/* implicit */long long int) 12212373300855920489ULL);
        var_14 &= ((/* implicit */long long int) (((-(5546459247613100511ULL))) / (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 262143LL)) ? (var_6) : (12212373300855920498ULL)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) 6245575170270428042LL);
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
    {
        arr_6 [16ULL] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_10);
        /* LoopNest 3 */
        for (long long int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (signed char i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                for (unsigned int i_4 = 3; i_4 < 16; i_4 += 4) 
                {
                    {
                        var_15 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_12 [i_4 + 1] [i_4 - 2] [i_4 + 1] [i_4 - 1]))));
                        arr_15 [i_2] [i_3 + 2] [i_2 + 2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_3 + 1] [i_4])) ? (arr_14 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */int) arr_5 [i_3])))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
    {
        var_16 *= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned long long int) var_1)) : (12900284826096451107ULL))));
        arr_18 [i_5] [i_5 - 1] = ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))) & (arr_17 [22ULL] [i_5]))) != (arr_17 [i_5 - 1] [i_5 - 1]));
    }
    var_17 = ((/* implicit */unsigned short) (((-(max((-6891941476041901292LL), (-6245575170270428043LL))))) >= (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((unsigned int) (signed char)-81))) : (-1LL)))));
    var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((int) var_6))) ^ (var_4))))))));
}
