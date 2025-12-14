/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91094
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
    var_10 -= ((/* implicit */short) min((((/* implicit */unsigned short) (signed char)-96)), ((unsigned short)60271)));
    /* LoopSeq 2 */
    for (short i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (unsigned short)4)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) : (var_2)))))) > (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))), (max((274877906880ULL), (((/* implicit */unsigned long long int) arr_0 [i_0 - 1]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) min((max((min((arr_1 [(short)9]), (((/* implicit */short) (signed char)-34)))), (((/* implicit */short) arr_0 [i_0 + 2])))), (((short) arr_0 [i_0 + 2]))));
        var_12 = ((/* implicit */short) max((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_0 [i_0 + 1])))), (((/* implicit */int) (unsigned short)65531))));
        var_13 = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        arr_5 [11ULL] = ((/* implicit */short) (+(((((/* implicit */int) arr_3 [i_1])) / (((/* implicit */int) arr_3 [i_1]))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (unsigned char)108);
        arr_7 [i_1] = ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_3 [8LL])) : (((/* implicit */int) min((arr_3 [i_1]), (var_9))))));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (unsigned short)4))));
        /* LoopSeq 2 */
        for (short i_2 = 4; i_2 < 22; i_2 += 1) 
        {
            arr_10 [i_2 - 2] [i_1] = ((/* implicit */signed char) arr_9 [i_1] [i_1] [i_1]);
            var_15 = ((/* implicit */short) (((+(((/* implicit */int) ((short) arr_8 [i_2] [i_1]))))) / ((~(((/* implicit */int) arr_3 [i_2]))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            var_16 -= ((/* implicit */unsigned char) (short)-28282);
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    {
                        var_17 -= ((/* implicit */short) (-(((((((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (unsigned short)65532)) : (((/* implicit */int) (short)-28278)))) + (2147483647))) << (((4763336981925515705ULL) - (4763336981925515705ULL)))))));
                        var_18 *= var_6;
                        var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(9ULL)))) ? (((/* implicit */int) max((arr_13 [i_5] [i_4] [i_3]), (arr_13 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_16 [i_4] [i_4]))));
                        var_20 += ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_8 [i_1] [8ULL])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_4])) ? (((/* implicit */int) arr_16 [i_5] [i_4])) : (((/* implicit */int) (_Bool)1)))))));
                    }
                } 
            } 
        }
    }
}
