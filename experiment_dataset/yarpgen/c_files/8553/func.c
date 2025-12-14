/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8553
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
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_8))));
    var_18 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)31731)))))));
                var_20 = (signed char)46;
                /* LoopSeq 1 */
                for (short i_2 = 0; i_2 < 22; i_2 += 1) 
                {
                    arr_8 [i_2] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((int) ((short) var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1])) || (((/* implicit */_Bool) arr_1 [i_2])))))) : (min((arr_0 [i_0 - 1] [i_0 - 1]), (arr_0 [i_0 - 1] [i_0 - 1])))));
                    arr_9 [i_0] [21] [i_2] [15] = ((/* implicit */signed char) arr_1 [i_1]);
                    /* LoopSeq 4 */
                    for (int i_3 = 2; i_3 < 21; i_3 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            var_21 -= ((/* implicit */short) min((min(((~(arr_10 [i_4] [i_1] [i_2] [i_2] [i_4]))), (((/* implicit */long long int) (~(arr_4 [i_0])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_3 + 1])) ? (((/* implicit */int) (signed char)-46)) : (arr_4 [i_3 + 1]))))));
                            var_22 = ((/* implicit */long long int) ((unsigned long long int) 5606374289460540787LL));
                        }
                        var_23 += ((/* implicit */signed char) ((((/* implicit */long long int) arr_1 [i_0 - 1])) != (((((/* implicit */_Bool) ((arr_13 [6LL] [i_3] [i_3 + 1] [i_3 + 1]) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-47)))))) ? (((/* implicit */long long int) 3268164291U)) : (min((arr_0 [i_3] [18U]), (((/* implicit */long long int) arr_13 [i_3] [i_3] [i_3] [i_3]))))))));
                    }
                    /* vectorizable */
                    for (short i_5 = 0; i_5 < 22; i_5 += 1) /* same iter space */
                    {
                        arr_16 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_2])) ? (arr_7 [i_0 + 1]) : (((/* implicit */unsigned int) arr_4 [i_1]))));
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (arr_7 [i_0 - 1]))))));
                    }
                    for (short i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) min((((/* implicit */int) (((~(var_4))) != (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1)))))))), (((((/* implicit */_Bool) (+(arr_5 [i_6])))) ? (((/* implicit */int) ((short) arr_14 [16LL]))) : ((~(((/* implicit */int) (signed char)110)))))))))));
                        var_26 -= ((/* implicit */signed char) var_7);
                        var_27 = ((/* implicit */_Bool) (short)4892);
                        var_28 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) arr_3 [14LL])) ? (arr_18 [i_2] [i_1] [i_2]) : (((/* implicit */long long int) 1281776980U)))))), (((long long int) arr_4 [i_0 + 1]))));
                    }
                    for (short i_7 = 0; i_7 < 22; i_7 += 1) /* same iter space */
                    {
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) arr_3 [i_0 - 1])) : (arr_20 [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [i_7]))))) : ((+(((/* implicit */int) ((short) (signed char)-110)))))));
                        var_30 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_2])) >= (((/* implicit */int) arr_14 [i_2]))));
                        var_31 = (!(((/* implicit */_Bool) 11683681326914006335ULL)));
                    }
                }
            }
        } 
    } 
    var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (short)(-32767 - 1)))));
}
