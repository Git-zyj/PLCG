/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61809
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
    var_20 = ((/* implicit */int) (-(-3167857304096050003LL)));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_21 = (~((-(var_3))));
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) (+(((/* implicit */int) ((var_7) <= (((/* implicit */unsigned int) ((/* implicit */int) var_16)))))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        var_23 = ((/* implicit */unsigned long long int) var_9);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 24; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
            {
                {
                    var_24 += max(((+(var_5))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_12))))))));
                    arr_9 [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) arr_4 [i_1] [(unsigned char)2]);
                    arr_10 [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) ((_Bool) arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 3] [i_2 - 1])))));
                }
            } 
        } 
        var_25 = ((/* implicit */unsigned char) ((signed char) var_11));
    }
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        arr_13 [11] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_0)) % (max((15877861715803959178ULL), (((/* implicit */unsigned long long int) -3167857304096050010LL))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            arr_17 [i_4 - 1] [1] [i_5] = ((((/* implicit */_Bool) arr_6 [i_4 - 1] [i_4 - 1])) || (((/* implicit */_Bool) ((unsigned int) var_14))));
            var_26 = ((/* implicit */_Bool) ((var_4) / (var_0)));
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    {
                        arr_25 [i_7] [i_7] [5ULL] [10] [i_6] [i_7] = ((/* implicit */int) var_15);
                        var_27 = ((/* implicit */unsigned short) ((arr_2 [i_7]) - (arr_2 [i_7])));
                        var_28 = ((/* implicit */unsigned int) 15639091210183326109ULL);
                        arr_26 [i_7] [(signed char)6] [(signed char)6] [i_5] [i_7] = ((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) - (var_3)));
                        arr_27 [i_4] [i_5] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2074375308)) ? (523957955497483998ULL) : (2807652863526225515ULL)));
                    }
                } 
            } 
            var_29 *= ((/* implicit */signed char) (-(((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1]))));
        }
        for (short i_8 = 1; i_8 < 10; i_8 += 3) 
        {
            arr_30 [i_4 - 1] = ((/* implicit */unsigned char) (~(((max((var_13), (var_5))) + (((/* implicit */int) arr_8 [i_8 + 1] [i_8 + 1] [i_4 - 1] [20U]))))));
            var_30 = ((/* implicit */short) var_15);
            var_31 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned short) var_3)))));
        }
        arr_31 [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_4 - 1])) ? ((-(((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_4 - 1])))) : ((-(((/* implicit */int) arr_3 [i_4] [i_4 - 1]))))));
    }
    var_32 ^= ((/* implicit */int) (-(15877861715803959195ULL)));
    var_33 += ((((/* implicit */_Bool) ((var_17) / (((((/* implicit */_Bool) var_7)) ? (var_3) : (((/* implicit */long long int) var_10))))))) ? (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_19)))), (var_5))) : ((-(((var_19) ? (var_10) : (var_0))))));
}
