/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74411
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
    var_13 = ((unsigned short) var_3);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_14 |= ((/* implicit */unsigned int) ((((/* implicit */int) min((var_2), ((!(((/* implicit */_Bool) arr_0 [15U]))))))) - (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [(_Bool)1] [i_1]))) * (var_9)))))))));
            var_15 = var_0;
            arr_4 [i_1] = ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) -9223372036854775794LL)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) -2789573102902813353LL)) || (((/* implicit */_Bool) (unsigned short)54801))))))), (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)57280)) ? (5U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
        }
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            arr_8 [20U] [i_2] = ((/* implicit */unsigned int) ((-2938227423824119643LL) != (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            arr_9 [i_0] [i_0] [i_0] &= ((/* implicit */long long int) arr_6 [i_0] [i_0]);
        }
        for (long long int i_3 = 3; i_3 < 24; i_3 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) min((var_16), (4294967292U)));
            var_17 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) == (11198433063942215429ULL)));
            var_18 = ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))) == (((/* implicit */int) max((arr_10 [i_3 - 2] [i_3] [8U]), (((/* implicit */unsigned short) var_6))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((arr_11 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_11 [i_4]))))));
            arr_15 [24LL] [i_4] [i_0] = (!(((arr_3 [i_4] [i_0]) != (arr_1 [i_0] [i_4]))));
            var_20 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [22U] [i_0] [i_4])) == (((/* implicit */int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (_Bool)1)))))));
        }
        arr_16 [i_0] [i_0] = ((/* implicit */_Bool) ((long long int) 0LL));
    }
    /* vectorizable */
    for (long long int i_5 = 0; i_5 < 24; i_5 += 1) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)10733))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)));
        arr_20 [i_5] |= ((/* implicit */long long int) (!(arr_14 [i_5])));
        var_22 -= ((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_5)) & (arr_6 [i_5] [8ULL]))) <= (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4)))))));
        arr_21 [i_5] = ((/* implicit */unsigned long long int) var_6);
    }
    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) min((((unsigned short) var_12)), (((/* implicit */unsigned short) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_10))))))))) + (((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)54781)))) == (((/* implicit */int) var_4)))))));
}
