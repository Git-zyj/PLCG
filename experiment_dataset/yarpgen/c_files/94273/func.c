/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94273
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
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        var_10 = ((/* implicit */int) var_7);
        var_11 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_0])) >= (((/* implicit */int) (short)30720))))));
        var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) var_3))));
        var_13 = ((/* implicit */signed char) (short)30720);
    }
    for (long long int i_1 = 4; i_1 < 21; i_1 += 1) 
    {
        var_14 = ((/* implicit */signed char) (unsigned char)4);
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(2885467576U))))));
            var_16 = ((/* implicit */signed char) (~(((unsigned long long int) ((((/* implicit */_Bool) arr_4 [(short)5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)118)))))));
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32686)) * ((+(((((/* implicit */int) arr_6 [i_1])) * (((/* implicit */int) (_Bool)0))))))));
            var_18 = ((/* implicit */short) ((((((/* implicit */_Bool) min((4398046511072LL), (var_6)))) ? (((/* implicit */int) arr_3 [i_1] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1]))))))) - (((/* implicit */int) (unsigned short)23182))));
        }
        var_19 = ((/* implicit */unsigned short) (+(((((/* implicit */int) arr_4 [i_1 + 1])) + (((/* implicit */int) ((((/* implicit */int) (short)-30720)) == (((/* implicit */int) (signed char)31)))))))));
        var_20 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) >= (2238280619484030235ULL)))) ^ (((/* implicit */int) (unsigned char)4))));
    }
    for (unsigned short i_3 = 2; i_3 < 16; i_3 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) 33554431LL);
        var_22 = ((/* implicit */_Bool) (signed char)(-127 - 1));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_4 = 3; i_4 < 14; i_4 += 1) 
        {
            var_23 = ((/* implicit */unsigned short) (_Bool)0);
            var_24 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)150))));
            arr_13 [i_3] [i_3 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_3 - 2])) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)60798))) - (4252006706340680409ULL)))));
        }
        /* vectorizable */
        for (short i_5 = 0; i_5 < 17; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                for (long long int i_7 = 2; i_7 < 13; i_7 += 1) 
                {
                    {
                        var_25 = arr_10 [i_7];
                        var_26 = ((/* implicit */_Bool) ((unsigned int) (_Bool)1));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)15276)) ? (var_1) : (arr_18 [i_3] [i_5] [i_5])));
        }
        for (unsigned int i_8 = 3; i_8 < 14; i_8 += 1) 
        {
            var_28 = ((/* implicit */unsigned short) arr_16 [i_3] [i_3] [i_8]);
            arr_23 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((long long int) arr_3 [i_8] [i_8 + 1]))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 3; i_9 < 15; i_9 += 1) 
            {
                var_29 &= ((/* implicit */signed char) (((+(((/* implicit */int) arr_3 [i_3 - 2] [i_8])))) | (((arr_1 [i_3 + 1] [i_8 - 3]) >> (((arr_1 [i_3 - 1] [i_8 - 3]) - (1791053755)))))));
                var_30 -= ((/* implicit */unsigned char) (-(((((/* implicit */int) ((((/* implicit */int) (unsigned char)139)) >= (((/* implicit */int) (signed char)-30))))) >> (((-4398046511072LL) + (4398046511076LL)))))));
            }
        }
        /* vectorizable */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            arr_29 [2U] [2U] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_3 - 2]);
            var_31 = ((/* implicit */long long int) (+((+(((/* implicit */int) (short)-15276))))));
        }
    }
    var_32 = ((/* implicit */long long int) 17722569521102000521ULL);
    var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) var_7))));
}
