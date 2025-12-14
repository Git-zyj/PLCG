/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62491
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62491 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62491
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
    var_14 = ((/* implicit */unsigned short) var_12);
    var_15 = ((/* implicit */unsigned long long int) ((min((-865014919), (((((-865014930) + (2147483647))) << (((((-865014906) + (865014911))) - (5))))))) ^ (((/* implicit */int) (unsigned short)44030))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 3; i_0 < 9; i_0 += 1) 
    {
        var_16 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_13))))) + (((((/* implicit */_Bool) (unsigned short)6555)) ? (((/* implicit */int) (signed char)-87)) : (865014905)))))) ? (((((/* implicit */_Bool) var_12)) ? (865014914) : (((/* implicit */int) (signed char)-89)))) : (((/* implicit */int) arr_2 [i_0]))));
        var_17 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) & (((/* implicit */int) (signed char)-73))));
        var_18 &= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) -865014926))))));
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0]) >> (((var_2) - (1498898064404053857ULL)))))) ? (min((((unsigned long long int) arr_0 [i_0])), (((((/* implicit */_Bool) -865014919)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_0]))))) : (((/* implicit */unsigned long long int) min((arr_1 [i_0 - 2] [i_0]), (((/* implicit */unsigned int) arr_2 [i_0 + 2])))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 1; i_2 < 20; i_2 += 1) 
        {
            var_20 = (-(865014930));
            arr_10 [i_2] [i_2 - 1] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2]))));
            var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) arr_3 [i_1] [i_1])))));
            var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_8 [i_2] [i_1] [i_2]))))) ? (((/* implicit */int) arr_8 [i_2] [i_2] [i_2])) : (((/* implicit */int) ((signed char) var_1)))));
        }
        arr_11 [i_1] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (var_1)))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_23 &= ((/* implicit */unsigned short) arr_15 [i_3]);
        var_24 = ((/* implicit */unsigned short) min((((unsigned long long int) arr_12 [i_3] [i_3])), (((/* implicit */unsigned long long int) min((arr_15 [i_3]), (((int) (unsigned short)39474)))))));
    }
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (865014919)))) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))))));
}
