/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91471
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) (~(617285710)))) ? (var_0) : (((var_1) >> (((((/* implicit */int) (short)-20728)) + (20738))))))) : (((((((/* implicit */long long int) -2093162830)) == (-8108942676414711161LL))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((unsigned char) var_7)))))));
    var_11 = ((/* implicit */short) min((((var_4) >> (((var_1) - (733904704))))), (((/* implicit */long long int) var_0))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_2 [i_0])) - (max((((/* implicit */int) var_3)), (var_0))))) + ((-(((/* implicit */int) arr_2 [i_0]))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_13 &= ((/* implicit */int) ((arr_4 [i_0] [i_0] [i_1]) < (((/* implicit */long long int) ((arr_2 [i_1]) ? (var_1) : (arr_3 [i_1]))))));
            var_14 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_1 + 1] [i_0 + 1]))));
            /* LoopNest 3 */
            for (int i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    for (int i_4 = 1; i_4 < 19; i_4 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) arr_5 [i_0]);
                            var_16 *= ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) var_0)))));
                            var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 + 1] [i_1] [i_1 + 2] [i_0 + 1])) || (((/* implicit */_Bool) arr_11 [4LL] [i_1 + 2] [i_1 + 1] [i_1]))));
                            var_18 = ((/* implicit */int) max((var_18), (((((/* implicit */_Bool) arr_13 [i_4 + 1] [i_1 - 1] [9LL])) ? (((/* implicit */int) arr_13 [i_4 - 1] [i_1 + 3] [i_2])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_1 + 3] [(_Bool)1]))))));
                            var_19 = ((/* implicit */unsigned long long int) ((arr_4 [3ULL] [3ULL] [i_4]) / (((/* implicit */long long int) var_2))));
                        }
                    } 
                } 
            } 
        }
        for (short i_5 = 2; i_5 < 17; i_5 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) (+(min((((/* implicit */long long int) ((var_9) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_16 [i_0] [i_0 + 1] [i_5]))))), (-5260308261838443510LL))))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_15 [i_0 + 1])))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_15 [i_0 + 1]))) : (max((arr_15 [i_0 + 1]), (arr_15 [i_0 + 1])))));
        }
        for (short i_6 = 2; i_6 < 17; i_6 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_7 = 0; i_7 < 20; i_7 += 3) 
            {
                var_22 = ((((/* implicit */_Bool) -9223372036854775801LL)) ? (var_2) : (-2093162830));
                var_23 = ((/* implicit */short) (!(var_3)));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_0] [i_7])) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) var_6))));
                var_25 = ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_0 [i_0])))) & (((/* implicit */int) var_3))));
            }
            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (_Bool)1)), (-1212690534898566606LL))))));
            /* LoopSeq 1 */
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_27 = ((/* implicit */short) ((unsigned char) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_0 + 1] [i_0] [i_0] [i_6 + 1] [i_6] [i_0]))))), (arr_13 [i_8 - 1] [i_8 - 1] [i_8 - 1]))));
                var_28 = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) ((min((arr_8 [i_0 + 1]), ((+(1212690534898566610LL))))) << (((((((((/* implicit */_Bool) -2093162831)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_3)))) << (((((arr_7 [i_0]) << (((arr_22 [18LL] [i_8] [i_8] [i_0]) - (5384044460655859453ULL))))) - (1294295503))))) - (5226495)))))) : (((/* implicit */unsigned long long int) ((min((arr_8 [i_0 + 1]), ((+(1212690534898566610LL))))) << (((((((((((((/* implicit */_Bool) -2093162831)) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) var_3)))) << (((((((arr_7 [i_0]) << (((arr_22 [18LL] [i_8] [i_8] [i_0]) - (5384044460655859453ULL))))) - (1294295503))) + (426249502))))) - (5226495))) + (5187928))) - (21))))));
            }
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) min((arr_19 [i_0] [17] [i_0]), (var_2)))) || (((/* implicit */_Bool) max((((/* implicit */int) ((short) arr_0 [i_0 + 1]))), (var_1))))));
        }
    }
    var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)21818)) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */long long int) ((/* implicit */int) (short)2660))) - (6612958134115240150LL)))))) ? (-873682315) : (max((((/* implicit */int) var_9)), (-2093162806)))));
}
