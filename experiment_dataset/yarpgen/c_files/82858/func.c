/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82858
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) var_2)), (var_7))))) ^ (var_3))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) (-(((/* implicit */int) ((6197239215854747611ULL) != (6197239215854747611ULL))))));
                arr_6 [6ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 12249504857854804004ULL))) ? ((-(((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((((((/* implicit */int) arr_3 [i_0])) != (((/* implicit */int) (short)17215)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (arr_0 [i_0]) : (arr_0 [6ULL])))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_5 [i_0] [i_1]) : (((/* implicit */unsigned int) arr_0 [i_0])))))))));
                arr_7 [i_0] [6] [i_1] = ((/* implicit */unsigned char) arr_0 [3ULL]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        for (short i_3 = 1; i_3 < 11; i_3 += 2) 
        {
            {
                arr_15 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (-(12249504857854803996ULL)))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) min((((12249504857854804004ULL) != (10044210248015462086ULL))), (((arr_10 [(unsigned char)11] [(short)10]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))));
                var_16 = ((/* implicit */unsigned char) 6197239215854747611ULL);
                arr_16 [i_2 - 1] [i_2] [i_2] &= ((max((((((/* implicit */_Bool) 3727616623U)) ? (6197239215854747611ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) (~(-21LL)))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) 3101694589U)) ? (21LL) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_10 [i_3] [i_3]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-11))))))) : (max((((/* implicit */unsigned long long int) arr_9 [i_2] [2LL])), (arr_10 [i_2] [i_3]))))));
            }
        } 
    } 
}
