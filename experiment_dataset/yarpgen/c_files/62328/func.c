/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62328
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
    var_10 -= ((/* implicit */short) min((((/* implicit */unsigned long long int) var_5)), (min((14472361289069642842ULL), (((/* implicit */unsigned long long int) -1961686021))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 19; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */int) var_1);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_2))));
                        arr_10 [i_2] [i_2] [i_1] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((arr_0 [i_3] [i_0]), (arr_0 [i_3] [i_1]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_4 = 0; i_4 < 19; i_4 += 4) 
        {
            for (signed char i_5 = 2; i_5 < 18; i_5 += 1) 
            {
                {
                    arr_15 [i_0] [i_4] [(short)11] = ((/* implicit */short) arr_7 [0U] [i_4] [i_5] [i_5]);
                    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(11131526830232552519ULL)))) ? (((/* implicit */unsigned long long int) (+(0U)))) : (max((3974382784639908773ULL), (((/* implicit */unsigned long long int) var_4))))))) ? (max((arr_6 [i_4] [i_4]), (((/* implicit */unsigned int) (unsigned char)188)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))))))));
                    var_14 = ((/* implicit */unsigned short) (signed char)-82);
                    arr_16 [i_4] = ((/* implicit */unsigned short) arr_7 [i_5 + 1] [i_5 - 1] [i_5 + 1] [(signed char)3]);
                }
            } 
        } 
    }
    for (short i_6 = 0; i_6 < 19; i_6 += 4) /* same iter space */
    {
        arr_19 [i_6] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)-27163)) : (((/* implicit */int) arr_11 [i_6]))))))) ? (((/* implicit */unsigned long long int) 3609156197U)) : ((~(min((((/* implicit */unsigned long long int) var_7)), (16874212208226866071ULL)))))));
        var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((var_7) <= (var_7)))), (((((/* implicit */_Bool) (unsigned short)32736)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6] [i_6])))))));
        arr_20 [i_6] [i_6] = ((/* implicit */int) var_9);
    }
    for (short i_7 = 0; i_7 < 19; i_7 += 4) /* same iter space */
    {
        arr_24 [i_7] = max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7])) ? (arr_7 [i_7] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))), (3312491866717130643ULL));
        var_16 = var_1;
    }
    for (short i_8 = 0; i_8 < 19; i_8 += 4) /* same iter space */
    {
        arr_27 [i_8] = ((/* implicit */signed char) var_7);
        var_17 *= ((/* implicit */unsigned int) var_1);
        arr_28 [(unsigned char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_8]) >> (((var_8) - (1044748262U)))))) ? ((-(max((((/* implicit */int) var_1)), (1961686020))))) : (((/* implicit */int) ((_Bool) arr_2 [i_8] [14U])))));
    }
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)62886)) ? (1961686020) : (((/* implicit */int) (short)-18322))));
    var_19 = ((/* implicit */int) ((unsigned int) (~(var_0))));
    var_20 = ((/* implicit */short) ((unsigned char) (((~(1961686008))) | (var_7))));
}
