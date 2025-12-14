/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86294
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
    var_11 &= ((/* implicit */unsigned short) max((max((((/* implicit */long long int) (-(((/* implicit */int) var_0))))), ((+(var_9))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_7))))), (var_0))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) arr_1 [i_0])))), (max((arr_3 [i_0] [i_0]), (((/* implicit */int) arr_0 [i_1]))))))))))));
                var_13 = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
                var_14 = ((/* implicit */unsigned int) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_1]))))))), ((+((+(((/* implicit */int) arr_1 [i_0]))))))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((max((((/* implicit */unsigned short) var_10)), (var_1))), (var_0))))));
    var_16 = max(((~(max((((/* implicit */long long int) var_4)), (var_9))))), (((/* implicit */long long int) var_2)));
    /* LoopSeq 4 */
    for (long long int i_2 = 0; i_2 < 20; i_2 += 1) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((arr_4 [i_2] [i_2]), (max((arr_4 [i_2] [i_2]), (arr_4 [i_2] [i_2])))));
        var_18 = ((/* implicit */int) max((max((((/* implicit */unsigned long long int) arr_3 [i_2] [i_2])), (max((((/* implicit */unsigned long long int) arr_1 [i_2])), (arr_4 [i_2] [i_2]))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_2 [14ULL]), (arr_4 [i_2] [i_2])))))))));
        var_19 = ((/* implicit */long long int) arr_0 [i_2]);
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 20; i_4 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (+(arr_3 [i_3] [i_3]))))));
            var_21 *= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_7 [14LL]))));
        }
        var_22 = max((max((((/* implicit */unsigned long long int) arr_5 [i_3] [i_3])), (max((((/* implicit */unsigned long long int) arr_9 [i_3] [i_3] [i_3])), (arr_4 [i_3] [i_3]))))), (((/* implicit */unsigned long long int) max((((((((/* implicit */int) arr_0 [i_3])) + (2147483647))) << (((((/* implicit */int) arr_8 [i_3])) - (27))))), ((-(((/* implicit */int) arr_8 [i_3]))))))));
    }
    for (long long int i_5 = 0; i_5 < 20; i_5 += 1) /* same iter space */
    {
        var_23 |= ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */_Bool) max((arr_11 [i_5]), (arr_11 [i_5])))) || (((/* implicit */_Bool) arr_12 [i_5] [i_5]))))), ((-((-(((/* implicit */int) arr_0 [(unsigned short)20]))))))));
        var_24 = ((/* implicit */_Bool) ((max(((-(arr_4 [i_5] [i_5]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_5])) >= (((/* implicit */int) arr_1 [i_5]))))))) ^ (max((((/* implicit */unsigned long long int) arr_11 [i_5])), (arr_4 [i_5] [i_5])))));
    }
    for (long long int i_6 = 0; i_6 < 20; i_6 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */_Bool) max(((~(max((((/* implicit */unsigned int) arr_5 [i_6] [i_6])), (arr_12 [i_6] [i_6]))))), (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_6] [i_6]))))), ((+(((/* implicit */int) arr_0 [22LL])))))))));
        var_26 |= arr_2 [i_6];
        var_27 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((arr_6 [19ULL]) != (arr_6 [i_6]))))))) - (max((arr_4 [i_6] [i_6]), (arr_4 [i_6] [i_6]))));
    }
}
