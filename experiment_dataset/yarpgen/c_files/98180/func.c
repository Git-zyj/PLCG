/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98180
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) (-(((166686934) << (((/* implicit */int) ((((/* implicit */_Bool) -1149220965)) && (((/* implicit */_Bool) -2952179731237400777LL)))))))));
        arr_3 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((4273332766U) & (((/* implicit */unsigned int) arr_0 [i_0 + 1] [i_0 - 1]))))), (986539732671639660ULL)));
        var_14 = ((/* implicit */int) (-(min(((~(var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)17649)) << (((arr_2 [15U]) - (8970489220188509059LL))))))))));
    }
    for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
    {
        var_15 = ((147460894) / (((/* implicit */int) (short)4032)));
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_16 = ((/* implicit */_Bool) var_8);
            arr_8 [(unsigned char)6] [i_1] [i_1] &= ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 545610655)) / (arr_4 [i_1])))) ? (((/* implicit */int) ((signed char) var_7))) : (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_4))))))));
        }
        arr_9 [i_1 - 1] = ((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) var_2)) <= (((((/* implicit */int) arr_5 [i_1])) / (((/* implicit */int) var_4))))))), (min((min((var_8), (((/* implicit */short) var_10)))), (((/* implicit */short) (signed char)40))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            arr_14 [i_3] &= ((/* implicit */short) arr_4 [i_1]);
            arr_15 [i_1] [i_1] [i_1] = (signed char)12;
            arr_16 [i_3] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) (signed char)-102)), (((((/* implicit */int) var_3)) / (((/* implicit */int) var_2))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 1) 
        {
            var_17 *= ((/* implicit */unsigned int) var_9);
            arr_19 [(_Bool)1] = ((/* implicit */int) (_Bool)1);
        }
        /* vectorizable */
        for (long long int i_5 = 2; i_5 < 11; i_5 += 4) 
        {
            arr_23 [i_1] [(short)0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) var_8))));
            arr_24 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)17)) + (((/* implicit */int) (unsigned char)8))));
        }
    }
    /* vectorizable */
    for (long long int i_6 = 1; i_6 < 23; i_6 += 4) 
    {
        arr_27 [i_6] = ((/* implicit */int) arr_25 [i_6]);
        var_18 = ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
    }
    var_19 = ((/* implicit */int) max((var_19), (var_1)));
}
