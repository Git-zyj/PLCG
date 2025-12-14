/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71167
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
    var_12 = ((/* implicit */signed char) ((((/* implicit */int) max((var_3), (((/* implicit */signed char) ((-3351344636298537463LL) != (((/* implicit */long long int) var_11)))))))) / (((/* implicit */int) var_8))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 18; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_13 = ((/* implicit */long long int) ((((/* implicit */int) var_0)) >> (((((((/* implicit */_Bool) arr_3 [i_0] [i_1 + 2] [i_2])) ? (arr_3 [i_0] [i_1] [i_2]) : (arr_3 [i_2] [i_1 - 1] [i_0]))) - (7980500867772773080LL)))));
                    var_14 *= ((/* implicit */_Bool) max((arr_8 [i_2]), ((~(((3351344636298537434LL) ^ (arr_3 [i_0] [i_0] [i_1])))))));
                    var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) arr_0 [i_1])), (arr_2 [i_1 + 2])))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-524))) + (var_11)))) : (var_7)))) ? (3351344636298537462LL) : (((/* implicit */long long int) ((/* implicit */int) ((3351344636298537462LL) > (((long long int) var_4)))))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 1) /* same iter space */
                    {
                        var_16 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_5))) ^ (arr_3 [i_1] [i_1 - 3] [i_1 + 3])));
                        var_17 = ((/* implicit */long long int) arr_6 [i_0] [i_1 + 3] [i_1 - 1]);
                        arr_13 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) (~(16248169952914472888ULL)));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 1) /* same iter space */
                    {
                        var_18 = ((((/* implicit */_Bool) 1596167887)) ? (arr_14 [i_0] [i_1 + 3] [i_2] [i_0] [i_1] [i_2]) : (arr_14 [i_4] [i_1 - 3] [i_2] [i_4] [i_0] [i_0]));
                        var_19 = ((/* implicit */long long int) var_9);
                        var_20 = 3155198268U;
                    }
                    /* LoopSeq 2 */
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */_Bool) arr_8 [i_1]);
                        arr_19 [i_5] [i_0] [i_0] [i_0] &= ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) arr_16 [i_0] [i_1 + 3] [i_1 + 1] [i_5 + 2])) + (var_6))));
                        arr_20 [i_0] [i_1 + 2] [i_2] [i_5 - 1] = ((/* implicit */unsigned int) ((_Bool) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 16776192U)), (5412931028059985487LL)))))));
                        var_22 -= ((/* implicit */long long int) min((((((/* implicit */int) arr_5 [i_1 + 2])) << (((/* implicit */int) arr_5 [i_1 + 1])))), (((/* implicit */int) var_5))));
                    }
                    /* vectorizable */
                    for (long long int i_6 = 2; i_6 < 19; i_6 += 1) /* same iter space */
                    {
                        arr_24 [i_0] [i_1] [i_1 + 2] [i_6] = ((/* implicit */_Bool) 3473998470496901055LL);
                        arr_25 [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) (short)-926)) ? (-4550568497331086411LL) : (((/* implicit */long long int) ((/* implicit */int) (short)32606))))) >= (((/* implicit */long long int) 2883358462U))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((long long int) ((((/* implicit */long long int) 1118410790U)) / (arr_18 [i_0] [i_2] [i_2] [i_2] [i_6])))))));
                    }
                }
            } 
        } 
    } 
}
